// Copyright 2011 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// Escape analysis.

#include <u.h>
#include <libc.h>
#include "go.h"

// Run analysis on minimal sets of mutually recursive functions
// or single non-recursive functions, bottom up.
//
// Finding these sets is finding strongly connected components
// in the static call graph.  The algorithm for doing that is taken
// from Sedgewick, Algorithms, Second Edition, p. 482, with two
// adaptations.
//
// First, a hidden closure function (n->curfn != N) cannot be the
// root of a connected component. Refusing to use it as a root
// forces it into the component of the function in which it appears.
// The analysis assumes that closures and the functions in which they
// appear are analyzed together, so that the aliasing between their
// variables can be modeled more precisely.
//
// Second, each function becomes two virtual nodes in the graph,
// with numbers n and n+1. We record the function's node number as n
// but search from node n+1. If the search tells us that the component
// number (min) is n+1, we know that this is a trivial component: one function
// plus its closures. If the search tells us that the component number is
// n, then there was a path from node n+1 back to node n, meaning that
// the function set is mutually recursive. The escape analysis can be
// more precise when analyzing a single non-recursive function than
// when analyzing a set of mutually recursive functions.

static NodeList *stack;
static uint32 visitgen;
static uint32 visit(Node*);
static uint32 visitcode(Node*, uint32);
static uint32 visitcodelist(NodeList*, uint32);

static void analyze(NodeList*, int);

enum
{
	EscFuncUnknown = 0,
	EscFuncPlanned,
	EscFuncStarted,
	EscFuncTagged,
};

void
escapes(NodeList *all)
{
	NodeList *l;

	for(l=all; l; l=l->next)
		l->n->walkgen = 0;

	visitgen = 0;
	for(l=all; l; l=l->next)
		if(l->n->op == ODCLFUNC && l->n->curfn == N)
			visit(l->n);

	for(l=all; l; l=l->next)
		l->n->walkgen = 0;
}

static uint32
visit(Node *n)
{
	uint32 min, recursive;
	NodeList *l, *block;

	if(n->walkgen > 0) {
		// already visited
		return n->walkgen;
	}
	
	visitgen++;
	n->walkgen = visitgen;
	visitgen++;
	min = visitgen;

	l = mal(sizeof *l);
	l->next = stack;
	l->n = n;
	stack = l;
	min = visitcodelist(n->nbody, min);
	if((min == n->walkgen || min == n->walkgen+1) && n->curfn == N) {
		// This node is the root of a strongly connected component.

		// The original min passed to visitcodelist was n->walkgen+1.
		// If visitcodelist found its way back to n->walkgen, then this
		// block is a set of mutually recursive functions.
		// Otherwise it's just a lone function that does not recurse.
		recursive = min == n->walkgen;

		// Remove connected component from stack.
		// Mark walkgen so that future visits return a large number
		// so as not to affect the caller's min.
		block = stack;
		for(l=stack; l->n != n; l=l->next)
			l->n->walkgen = (uint32)~0U;
		n->walkgen = (uint32)~0U;
		stack = l->next;
		l->next = nil;

		// Run escape analysis on this set of functions.
		analyze(block, recursive);
	}

	return min;
}

static uint32
visitcodelist(NodeList *l, uint32 min)
{
	for(; l; l=l->next)
		min = visitcode(l->n, min);
	return min;
}

static uint32
visitcode(Node *n, uint32 min)
{
	Node *fn;
	uint32 m;

	if(n == N)
		return min;

	min = visitcodelist(n->ninit, min);
	min = visitcode(n->left, min);
	min = visitcode(n->right, min);
	min = visitcodelist(n->list, min);
	min = visitcode(n->ntest, min);
	min = visitcode(n->nincr, min);
	min = visitcodelist(n->nbody, min);
	min = visitcodelist(n->nelse, min);
	min = visitcodelist(n->rlist, min);
	
	if(n->op == OCALLFUNC || n->op == OCALLMETH) {
		fn = n->left;
		if(n->op == OCALLMETH)
			fn = n->left->right->sym->def;
		if(fn && fn->op == ONAME && fn->class == PFUNC && fn->defn)
			if((m = visit(fn->defn)) < min)
				min = m;
	}
	
	if(n->op == OCLOSURE)
		if((m = visit(n->closure)) < min)
			min = m;

	return min;
}

// An escape analysis pass for a set of functions.
//
// First escfunc, esc and escassign recurse over the ast of each
// function to dig out flow(dst,src) edges between any
// pointer-containing nodes and store them in dst->escflowsrc.  For
// variables assigned to a variable in an outer scope or used as a
// return value, they store a flow(theSink, src) edge to a fake node
// 'the Sink'.  For variables referenced in closures, an edge
// flow(closure, &var) is recorded and the flow of a closure itself to
// an outer scope is tracked the same way as other variables.
//
// Then escflood walks the graph starting at theSink and tags all
// variables of it can reach an & node as escaping and all function
// parameters it can reach as leaking.
//
// If a value's address is taken but the address does not escape,
// then the value can stay on the stack.  If the value new(T) does
// not escape, then new(T) can be rewritten into a stack allocation.
// The same is true of slice literals.
//
// If optimizations are disabled (-N), this code is not used.
// Instead, the compiler assumes that any value whose address
// is taken without being immediately dereferenced
// needs to be moved to the heap, and new(T) and slice
// literals are always real allocations.

typedef struct EscState EscState;

static void escfunc(EscState*, Node *func);
static void esclist(EscState*, NodeList *l, Node *up);
static void esc(EscState*, Node *n, Node *up);
static void escloopdepthlist(EscState*, NodeList *l);
static void escloopdepth(EscState*, Node *n);
static void escassign(EscState*, Node *dst, Node *src);
static void esccall(EscState*, Node*, Node *up);
static void escflows(EscState*, Node *dst, Node *src);
static void escflood(EscState*, Node *dst);
static void escwalk(EscState*, int level, Node *dst, Node *src);
static void esctag(EscState*, Node *func);

struct EscState {
	// Fake node that all
	//   - return values and output variables
	//   - parameters on imported functions not marked 'safe'
	//   - assignments to global variables
	// flow to.
	Node	theSink;
	
	// If an analyzed function is recorded to return
	// pieces obtained via indirection from a parameter,
	// and later there is a call f(x) to that function,
	// we create a link funcParam <- x to record that fact.
	// The funcParam node is handled specially in escflood.
	Node	funcParam;	
	
	NodeList*	dsts;		// all dst nodes
	int	loopdepth;	// for detecting nested loop scopes
	int	pdepth;		// for debug printing in recursions.
	int	dstcount, edgecount;	// diagnostic
	NodeList*	noesc;	// list of possible non-escaping nodes, for printing
	int	recursive;	// recursive function or group of mutually recursive functions.
};

static Strlit *tags[16];

static Strlit*
mktag(int mask)
{
	Strlit *s;
	char buf[40];

	switch(mask&EscMask) {
	case EscNone:
	case EscReturn:
		break;
	default:
		fatal("escape mktag");
	}

	mask >>= EscBits;

	if(mask < nelem(tags) && tags[mask] != nil)
		return tags[mask];

	snprint(buf, sizeof buf, "esc:0x%x", mask);
	s = strlit(buf);
	if(mask < nelem(tags))
		tags[mask] = s;
	return s;
}

static int
parsetag(Strlit *note)
{
	int em;

	if(note == nil)
		return EscUnknown;
	if(strncmp(note->s, "esc:", 4) != 0)
		return EscUnknown;
	em = atoi(note->s + 4);
	if (em == 0)
		return EscNone;
	return EscReturn | (em << EscBits);
}

static void
analyze(NodeList *all, int recursive)
{
	NodeList *l;
	EscState es, *e;
	
	memset(&es, 0, sizeof es);
	e = &es;
	e->theSink.op = ONAME;
	e->theSink.orig = &e->theSink;
	e->theSink.class = PEXTERN;
	e->theSink.sym = lookup(".sink");
	e->theSink.escloopdepth = -1;
	e->recursive = recursive;
	
	e->funcParam.op = ONAME;
	e->funcParam.orig = &e->funcParam;
	e->funcParam.class = PAUTO;
	e->funcParam.sym = lookup(".param");
	e->funcParam.escloopdepth = 10000000;
	
	for(l=all; l; l=l->next)
		if(l->n->op == ODCLFUNC)
			l->n->esc = EscFuncPlanned;

	// flow-analyze functions
	for(l=all; l; l=l->next)
		if(l->n->op == ODCLFUNC)
			escfunc(e, l->n);

	// print("escapes: %d e->dsts, %d edges\n", e->dstcount, e->edgecount);

	// visit the upstream of each dst, mark address nodes with
	// addrescapes, mark parameters unsafe
	for(l = e->dsts; l; l=l->next)
		escflood(e, l->n);

	// for all top level functions, tag the typenodes corresponding to the param nodes
	for(l=all; l; l=l->next)
		if(l->n->op == ODCLFUNC)
			esctag(e, l->n);

	if(debug['m']) {
		for(l=e->noesc; l; l=l->next)
			if(l->n->esc == EscNone)
				warnl(l->n->lineno, "%S %hN does not escape",
					(l->n->curfn && l->n->curfn->nname) ? l->n->curfn->nname->sym : S,
					l->n);
	}
}


static void
escfunc(EscState *e, Node *func)
{
	Node *savefn;
	NodeList *ll;
	int saveld;

//	print("escfunc %N %s\n", func->nname, e->recursive?"(recursive)":"");

	if(func->esc != 1)
		fatal("repeat escfunc %N", func->nname);
	func->esc = EscFuncStarted;

	saveld = e->loopdepth;
	e->loopdepth = 1;
	savefn = curfn;
	curfn = func;

	for(ll=curfn->dcl; ll; ll=ll->next) {
		if(ll->n->op != ONAME)
			continue;
		switch (ll->n->class) {
		case PPARAMOUT:
			// out params are in a loopdepth between the sink and all local variables
			ll->n->escloopdepth = 0;
			break;
		case PPARAM:
			ll->n->escloopdepth = 1; 
			if(ll->n->type && !haspointers(ll->n->type))
				break;
			if(curfn->nbody == nil && !curfn->noescape)
				ll->n->esc = EscHeap;
			else
				ll->n->esc = EscNone;	// prime for escflood later
			e->noesc = list(e->noesc, ll->n);
			break;
		}
	}

	// in a mutually recursive group we lose track of the return values
	if(e->recursive)
		for(ll=curfn->dcl; ll; ll=ll->next)
			if(ll->n->op == ONAME && ll->n->class == PPARAMOUT)
				escflows(e, &e->theSink, ll->n);

	escloopdepthlist(e, curfn->nbody);
	esclist(e, curfn->nbody, curfn);
	curfn = savefn;
	e->loopdepth = saveld;
}

// Mark labels that have no backjumps to them as not increasing e->loopdepth.
// Walk hasn't generated (goto|label)->left->sym->label yet, so we'll cheat
// and set it to one of the following two.  Then in esc we'll clear it again.
static Label looping;
static Label nonlooping;

static void
escloopdepthlist(EscState *e, NodeList *l)
{
	for(; l; l=l->next)
		escloopdepth(e, l->n);
}

static void
escloopdepth(EscState *e, Node *n)
{
	if(n == N)
		return;

	escloopdepthlist(e, n->ninit);

	switch(n->op) {
	case OLABEL:
		if(!n->left || !n->left->sym)
			fatal("esc:label without label: %+N", n);
		// Walk will complain about this label being already defined, but that's not until
		// after escape analysis. in the future, maybe pull label & goto analysis out of walk and put before esc
		// if(n->left->sym->label != nil)
		//	fatal("escape analysis messed up analyzing label: %+N", n);
		n->left->sym->label = &nonlooping;
		break;
	case OGOTO:
		if(!n->left || !n->left->sym)
			fatal("esc:goto without label: %+N", n);
		// If we come past one that's uninitialized, this must be a (harmless) forward jump
		// but if it's set to nonlooping the label must have preceded this goto.
		if(n->left->sym->label == &nonlooping)
			n->left->sym->label = &looping;
		break;
	}

	escloopdepth(e, n->left);
	escloopdepth(e, n->right);
	escloopdepthlist(e, n->list);
	escloopdepth(e, n->ntest);
	escloopdepth(e, n->nincr);
	escloopdepthlist(e, n->nbody);
	escloopdepthlist(e, n->nelse);
	escloopdepthlist(e, n->rlist);

}

static void
esclist(EscState *e, NodeList *l, Node *up)
{
	for(; l; l=l->next)
		esc(e, l->n, up);
}

static void
esc(EscState *e, Node *n, Node *up)
{
	int lno;
	NodeList *ll, *lr;
	Node *a;

	if(n == N)
		return;

	lno = setlineno(n);

	// ninit logically runs at a different loopdepth than the rest of the for loop.
	esclist(e, n->ninit, n);

	if(n->op == OFOR || n->op == ORANGE)
		e->loopdepth++;

	// type switch variables have no ODCL.
	// process type switch as declaration.
	// must happen before processing of switch body,
	// so before recursion.
	if(n->op == OSWITCH && n->ntest && n->ntest->op == OTYPESW) {
		for(ll=n->list; ll; ll=ll->next) {  // cases
			// ll->n->nname is the variable per case
			if(ll->n->nname)
				ll->n->nname->escloopdepth = e->loopdepth;
		}
	}

	esc(e, n->left, n);
	esc(e, n->right, n);
	esc(e, n->ntest, n);
	esc(e, n->nincr, n);
	esclist(e, n->nbody, n);
	esclist(e, n->nelse, n);
	esclist(e, n->list, n);
	esclist(e, n->rlist, n);

	if(n->op == OFOR || n->op == ORANGE)
		e->loopdepth--;

	if(debug['m'] > 1)
		print("%L:[%d] %S esc: %N\n", lineno, e->loopdepth,
		      (curfn && curfn->nname) ? curfn->nname->sym : S, n);

	switch(n->op) {
	case ODCL:
		// Record loop depth at declaration.
		if(n->left)
			n->left->escloopdepth = e->loopdepth;
		break;

	case OLABEL:
		if(n->left->sym->label == &nonlooping) {
			if(debug['m'] > 1)
				print("%L:%N non-looping label\n", lineno, n);
		} else if(n->left->sym->label == &looping) {
			if(debug['m'] > 1)
				print("%L: %N looping label\n", lineno, n);
			e->loopdepth++;
		}
		// See case OLABEL in escloopdepth above
		// else if(n->left->sym->label == nil)
		//	fatal("escape analysis missed or messed up a label: %+N", n);

		n->left->sym->label = nil;
		break;

	case ORANGE:
		// Everything but fixed array is a dereference.
		if(isfixedarray(n->type) && n->list && n->list->next)
			escassign(e, n->list->next->n, n->right);
		break;

	case OSWITCH:
		if(n->ntest && n->ntest->op == OTYPESW) {
			for(ll=n->list; ll; ll=ll->next) {  // cases
				// ntest->right is the argument of the .(type),
				// ll->n->nname is the variable per case
				escassign(e, ll->n->nname, n->ntest->right);
			}
		}
		break;

	case OAS:
	case OASOP:
		escassign(e, n->left, n->right);
		break;

	case OAS2:	// x,y = a,b
		if(count(n->list) == count(n->rlist))
			for(ll=n->list, lr=n->rlist; ll; ll=ll->next, lr=lr->next)
				escassign(e, ll->n, lr->n);
		break;

	case OAS2RECV:		// v, ok = <-ch
	case OAS2MAPR:		// v, ok = m[k]
	case OAS2DOTTYPE:	// v, ok = x.(type)
		escassign(e, n->list->n, n->rlist->n);
		break;

	case OSEND:		// ch <- x
		escassign(e, &e->theSink, n->right);
		break;

	case ODEFER:
		if(e->loopdepth == 1)  // top level
			break;
		// arguments leak out of scope
		// TODO: leak to a dummy node instead
		// fallthrough
	case OPROC:
		// go f(x) - f and x escape
		escassign(e, &e->theSink, n->left->left);
		escassign(e, &e->theSink, n->left->right);  // ODDDARG for call
		for(ll=n->left->list; ll; ll=ll->next)
			escassign(e, &e->theSink, ll->n);
		break;

	case OCALLMETH:
	case OCALLFUNC:
	case OCALLINTER:
		esccall(e, n, up);
		break;

	case OAS2FUNC:	// x,y = f()
		// esccall already done on n->rlist->n. tie it's escretval to n->list
		lr=n->rlist->n->escretval;
		for(ll=n->list; lr && ll; lr=lr->next, ll=ll->next)
			escassign(e, ll->n, lr->n);
		if(lr || ll)
			fatal("esc oas2func");
		break;

	case ORETURN:
		ll=n->list;
		if(count(n->list) == 1 && curfn->type->outtuple > 1) {
			// OAS2FUNC in disguise
			// esccall already done on n->list->n
			// tie n->list->n->escretval to curfn->dcl PPARAMOUT's
			ll = n->list->n->escretval;
		}

		for(lr = curfn->dcl; lr && ll; lr=lr->next) {
			if (lr->n->op != ONAME || lr->n->class != PPARAMOUT)
				continue;
			escassign(e, lr->n, ll->n);
			ll = ll->next;
		}
		if (ll != nil)
			fatal("esc return list");
		break;

	case OPANIC:
		// Argument could leak through recover.
		escassign(e, &e->theSink, n->left);
		break;

	case OAPPEND:
		if(!n->isddd)
			for(ll=n->list->next; ll; ll=ll->next)