/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 20 "go.y" /* yacc.c:339  */

#include <u.h>
#include <stdio.h>	/* if we don't, bison will, and go.h re-#defines getc */
#include <libc.h>
#include "go.h"

static void fixlbrace(int);

#line 75 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LLITERAL = 258,
    LASOP = 259,
    LCOLAS = 260,
    LBREAK = 261,
    LCASE = 262,
    LCHAN = 263,
    LCONST = 264,
    LCONTINUE = 265,
    LDDD = 266,
    LDEFAULT = 267,
    LDEFER = 268,
    LELSE = 269,
    LFALL = 270,
    LFOR = 271,
    LFUNC = 272,
    LGO = 273,
    LGOTO = 274,
    LIF = 275,
    LIMPORT = 276,
    LINTERFACE = 277,
    LMAP = 278,
    LNAME = 279,
    LPACKAGE = 280,
    LRANGE = 281,
    LRETURN = 282,
    LSELECT = 283,
    LSTRUCT = 284,
    LSWITCH = 285,
    LTYPE = 286,
    LVAR = 287,
    LANDAND = 288,
    LANDNOT = 289,
    LBODY = 290,
    LCOMM = 291,
    LDEC = 292,
    LEQ = 293,
    LGE = 294,
    LGT = 295,
    LIGNORE = 296,
    LINC = 297,
    LLE = 298,
    LLSH = 299,
    LLT = 300,
    LNE = 301,
    LOROR = 302,
    LRSH = 303,
    NotPackage = 304,
    NotParen = 305,
    PreferToRightParen = 306
  };
#endif
/* Tokens.  */
#define LLITERAL 258
#define LASOP 259
#define LCOLAS 260
#define LBREAK 261
#define LCASE 262
#define LCHAN 263
#define LCONST 264
#define LCONTINUE 265
#define LDDD 266
#define LDEFAULT 267
#define LDEFER 268
#define LELSE 269
#define LFALL 270
#define LFOR 271
#define LFUNC 272
#define LGO 273
#define LGOTO 274
#define LIF 275
#define LIMPORT 276
#define LINTERFACE 277
#define LMAP 278
#define LNAME 279
#define LPACKAGE 280
#define LRANGE 281
#define LRETURN 282
#define LSELECT 283
#define LSTRUCT 284
#define LSWITCH 285
#define LTYPE 286
#define LVAR 287
#define LANDAND 288
#define LANDNOT 289
#define LBODY 290
#define LCOMM 291
#define LDEC 292
#define LEQ 293
#define LGE 294
#define LGT 295
#define LIGNORE 296
#define LINC 297
#define LLE 298
#define LLSH 299
#define LLT 300
#define LNE 301
#define LOROR 302
#define LRSH 303
#define NotPackage 304
#define NotParen 305
#define PreferToRightParen 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "go.y" /* yacc.c:355  */

	Node*		node;
	NodeList*		list;
	Type*		type;
	Sym*		sym;
	struct	Val	val;
	int		i;

#line 226 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 243 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  352
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  669

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,    64,    55,    56,     2,
      59,    60,    53,    49,    75,    50,    63,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    62,
       2,    65,     2,    73,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    51,    68,    70,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    57,    58,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   133,   139,   151,   151,   166,   167,   172,
     173,   174,   177,   224,   236,   237,   240,   248,   255,   264,
     279,   280,   287,   287,   300,   304,   305,   309,   314,   320,
     324,   328,   332,   338,   344,   350,   355,   359,   363,   369,
     375,   379,   383,   389,   393,   399,   400,   404,   410,   419,
     425,   443,   448,   460,   476,   482,   490,   510,   528,   537,
     556,   555,   570,   569,   601,   604,   611,   610,   621,   627,
     634,   641,   652,   658,   661,   669,   668,   679,   685,   697,
     701,   706,   696,   727,   726,   739,   742,   748,   751,   763,
     767,   762,   785,   784,   800,   801,   805,   809,   813,   817,
     821,   825,   829,   833,   837,   841,   845,   849,   853,   857,
     861,   865,   869,   873,   878,   884,   885,   889,   900,   904,
     908,   912,   917,   921,   931,   935,   940,   948,   952,   953,
     964,   968,   972,   976,   980,   988,   989,   995,  1002,  1008,
    1015,  1018,  1025,  1031,  1048,  1055,  1056,  1063,  1064,  1083,
    1084,  1087,  1090,  1094,  1105,  1114,  1120,  1123,  1126,  1136,
    1137,  1143,  1156,  1171,  1179,  1191,  1196,  1202,  1203,  1204,
    1205,  1206,  1207,  1213,  1214,  1215,  1216,  1222,  1223,  1224,
    1225,  1226,  1232,  1233,  1236,  1239,  1240,  1241,  1242,  1243,
    1246,  1247,  1260,  1264,  1269,  1274,  1279,  1283,  1284,  1287,
    1293,  1300,  1306,  1313,  1319,  1330,  1345,  1374,  1412,  1437,
    1455,  1464,  1467,  1475,  1479,  1483,  1490,  1496,  1501,  1513,
    1516,  1527,  1528,  1534,  1535,  1541,  1545,  1551,  1552,  1558,
    1562,  1568,  1591,  1596,  1602,  1608,  1615,  1624,  1633,  1648,
    1654,  1659,  1663,  1670,  1683,  1684,  1690,  1696,  1699,  1703,
    1709,  1712,  1721,  1724,  1725,  1729,  1730,  1736,  1737,  1738,
    1739,  1740,  1742,  1741,  1756,  1762,  1766,  1770,  1774,  1778,
    1783,  1802,  1808,  1816,  1820,  1826,  1830,  1836,  1840,  1846,
    1850,  1859,  1863,  1867,  1871,  1877,  1880,  1888,  1889,  1891,
    1892,  1895,  1898,  1901,  1904,  1907,  1910,  1913,  1916,  1919,
    1922,  1925,  1928,  1931,  1934,  1940,  1944,  1948,  1952,  1956,
    1960,  1980,  1987,  1998,  1999,  2000,  2003,  2004,  2007,  2011,
    2021,  2025,  2029,  2033,  2037,  2041,  2045,  2051,  2057,  2065,
    2073,  2079,  2086,  2102,  2124,  2128,  2134,  2137,  2140,  2144,
    2154,  2158,  2177,  2185,  2186,  2198,  2199,  2202,  2206,  2212,
    2216,  2222,  2226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
const char *yytname[] =
{
  "$end", "error", "$undefined", "LLITERAL", "LASOP", "LCOLAS", "LBREAK",
  "LCASE", "LCHAN", "LCONST", "LCONTINUE", "LDDD", "LDEFAULT", "LDEFER",
  "LELSE", "LFALL", "LFOR", "LFUNC", "LGO", "LGOTO", "LIF", "LIMPORT",
  "LINTERFACE", "LMAP", "LNAME", "LPACKAGE", "LRANGE", "LRETURN",
  "LSELECT", "LSTRUCT", "LSWITCH", "LTYPE", "LVAR", "LANDAND", "LANDNOT",
  "LBODY", "LCOMM", "LDEC", "LEQ", "LGE", "LGT", "LIGNORE", "LINC", "LLE",
  "LLSH", "LLT", "LNE", "LOROR", "LRSH", "'+'", "'-'", "'|'", "'^'", "'*'",
  "'/'", "'%'", "'&'", "NotPackage", "NotParen", "'('", "')'",
  "PreferToRightParen", "';'", "'.'", "'$'", "'='", "':'", "'{'", "'}'",
  "'!'", "'~'", "'['", "']'", "'?'", "'@'", "','", "$accept", "file",
  "package", "loadsys", "$@1", "imports", "import", "import_stmt",
  "import_stmt_list", "import_here", "import_package", "import_safety",
  "import_there", "$@2", "xdcl", "common_dcl", "lconst", "vardcl",
  "constdcl", "constdcl1", "typedclname", "typedcl", "simple_stmt", "case",
  "compound_stmt", "$@3", "caseblock", "$@4", "caseblock_list",
  "loop_body", "$@5", "range_stmt", "for_header", "for_body", "for_stmt",
  "$@6", "if_header", "if_stmt", "$@7", "$@8", "$@9", "elseif", "$@10",
  "elseif_list", "else", "switch_stmt", "$@11", "$@12", "select_stmt",
  "$@13", "expr", "uexpr", "pseudocall", "pexpr_no_paren", "start_complit",
  "keyval", "bare_complitexpr", "complitexpr", "pexpr", "expr_or_type",
  "name_or_type", "lbrace", "new_name", "dcl_name", "onew_name", "sym",
  "hidden_importsym", "name", "labelname", "dotdotdot", "ntype",
  "non_expr_type", "non_recvchantype", "convtype", "comptype",
  "fnret_type", "dotname", "othertype", "ptrtype", "recvchantype",
  "structtype", "interfacetype", "xfndcl", "fndcl", "hidden_fndcl",
  "fntype", "fnbody", "fnres", "fnlitdcl", "fnliteral", "xdcl_list",
  "vardcl_list", "constdcl_list", "typedcl_list", "structdcl_list",
  "interfacedcl_list", "structdcl", "packname", "embed", "interfacedcl",
  "indcl", "arg_type", "arg_type_list", "oarg_type_list_ocomma", "stmt",
  "non_dcl_stmt", "$@14", "stmt_list", "new_name_list", "dcl_name_list",
  "expr_list", "expr_or_type_list", "keyval_list", "braced_keyval_list",
  "osemi", "ocomma", "oexpr", "oexpr_list", "osimple_stmt",
  "ohidden_funarg_list", "ohidden_structdcl_list",
  "ohidden_interfacedcl_list", "oliteral", "hidden_import",
  "hidden_pkg_importsym", "hidden_pkgtype", "hidden_type",
  "hidden_type_non_recv_chan", "hidden_type_misc", "hidden_type_recv_chan",
  "hidden_type_func", "hidden_funarg", "hidden_structdcl",
  "hidden_interfacedcl", "ohidden_funres", "hidden_funres",
  "hidden_literal", "hidden_constant", "hidden_import_list",
  "hidden_funarg_list", "hidden_structdcl_list",
  "hidden_interfacedcl_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    43,
      45,   124,    94,    42,    47,    37,    38,   304,   305,    40,
      41,   306,    59,    46,    36,    61,    58,   123,   125,    33,
     126,    91,    93,    63,    64,    44
};
# endif

#define YYPACT_NINF -473

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-473)))

#define YYTABLE_NINF -278

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -473,    65,    22,    49,  -473,   261,  -473,    64,  -473,  -473,
    -473,    95,    52,  -473,   143,   145,  -473,  -473,   104,  -473,
      68,   128,  1049,  -473,   142,   305,    16,  -473,    56,   204,
    -473,    49,   220,  -473,  -473,  -473,   261,   974,  -473,   261,
     562,  -473,  -473,   288,   562,   261,  -473,    14,   147,  1615,
    -473,    14,  -473,   395,   401,  1615,  1615,  1615,  1615,  1615,
    1615,  1658,  1615,  1615,   737,   168,  -473,   414,  -473,  -473,
    -473,  -473,  -473,   649,  -473,  -473,   165,   122,  -473,   169,
    -473,   177,   218,    14,   219,  -473,  -473,  -473,   235,    89,
    -473,  -473,    34,  -473,   206,   124,   286,   206,   206,   260,
    -473,  -473,  -473,  -473,  -473,   265,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,   270,  1803,  1803,  1803,  -473,   269,  -473,
    -473,  -473,  -473,  -473,  -473,    39,   122,   882,  1777,   283,
     277,   230,  -473,  1615,  -473,  -473,   292,  1803,  2097,   280,
    -473,   332,   315,  1615,   215,  1803,  -473,  -473,   244,  -473,
    -473,  -473,   949,  -473,  -473,  -473,  -473,  -473,  -473,  1701,
    1658,  2097,   298,  -473,     9,  -473,    59,  -473,  -473,   303,
    2097,   319,  -473,   330,  -473,  1744,  1615,  1615,  1615,  1615,
    -473,  1615,  1615,  1615,  -473,  1615,  1615,  1615,  1615,  1615,
    1615,  1615,  1615,  1615,  1615,  1615,  1615,  1615,  1615,  -473,
    1297,   455,  1615,  -473,  1615,  -473,  -473,  1225,  1615,  1615,
    1615,  -473,   594,   261,   277,   328,   403,  -473,  1308,  1308,
    -473,   152,   352,  -473,  1777,   405,  1803,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,   354,   261,  1615,  -473,  -473,   382,
    -473,    47,   360,  1803,  -473,  1777,  -473,  -473,  -473,   351,
     367,  1777,  1225,  -473,  -473,   366,    84,   407,  -473,   374,
     373,  -473,  -473,   372,  -473,   138,    42,  -473,  -473,   377,
    -473,  -473,   442,  1769,  -473,  -473,  -473,   384,  -473,  -473,
    -473,   389,  1615,   261,   391,  1830,  -473,   394,  1803,  1803,
    -473,   409,  1615,   411,  2097,  1935,  -473,  2121,  1080,  1080,
    1080,  1080,  -473,  1080,  1080,  2145,  -473,   503,   503,   503,
     503,  -473,  -473,  -473,  -473,  1352,  -473,  -473,    27,  1407,
    -473,  1995,   412,  1147,  1962,  1352,  -473,  -473,  -473,  -473,
    -473,  -473,     7,   280,   280,  2097,   698,   418,   415,   413,
    -473,   416,   477,  1308,   188,    31,  -473,   425,  -473,  -473,
    -473,  1897,  -473,   221,   433,   261,   434,   436,   439,  -473,
    -473,   432,  1803,   452,  -473,  -473,  2097,  -473,  -473,  1462,
    1517,  1615,  -473,  -473,  -473,  1777,  -473,  1856,   453,    91,
     382,  1615,   261,   454,   456,  1777,  -473,   475,   451,  1803,
     133,   407,   442,   407,   460,   326,   462,  -473,  -473,   261,
     442,   467,   261,   478,   261,   486,   280,  -473,  1615,  1864,
    1803,  -473,    26,   248,   264,   430,  -473,  -473,  -473,   261,
     492,   280,  1615,  -473,  2025,  -473,  -473,   485,   493,   487,
    1658,   504,   506,   508,  -473,  1615,  -473,  -473,   512,   505,
    1225,  1147,  -473,  1308,   517,  -473,  -473,  -473,   261,  1889,
    1308,   261,  1308,  -473,  -473,   571,   155,  -473,  -473,   514,
     509,  1308,   188,  1308,   442,   261,   261,  -473,   518,   507,
    -473,  -473,  -473,  1856,  -473,  1225,  1615,  1615,   521,  -473,
    1777,   528,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  1856,
    -473,  -473,  -473,  -473,  -473,   520,  -473,  -473,  -473,  1658,
     522,  -473,  -473,  -473,   530,  -473,   532,   442,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,   280,   535,  1352,
    -473,  -473,   536,  1744,  -473,   280,  1352,  1560,  1352,  -473,
    -473,   539,  -473,  -473,  -473,  -473,   247,  -473,  -473,   308,
    -473,  -473,   541,   543,   545,   546,   547,   544,  -473,  -473,
     551,   548,  1308,   554,  -473,   557,  -473,  -473,   576,  -473,
    1308,  -473,   564,   442,  -473,   568,  -473,  1923,   318,  2097,
    2097,  1615,   569,  1777,  -473,  -473,  1856,   156,  -473,  1147,
     442,   442,  -473,   243,   483,   563,   261,   577,   411,   570,
    -473,  2097,  -473,  -473,  -473,  -473,  1615,  -473,  -473,  -473,
    1923,   261,  -473,  1889,  1308,   442,  -473,   261,   155,  -473,
    -473,  -473,   261,   261,  -473,  -473,  -473,  -473,  -473,  -473,
     579,   627,  -473,  1615,  1615,  -473,  1658,   580,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  1352,   572,  -473,   583,  -473,
    -473,  -473,  -473,   585,   586,   590,  1856,    77,  -473,  -473,
    2049,  2073,   584,  -473,  1923,  -473,  1923,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  1615,   382,  -473
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     0,     1,     0,     7,     0,    22,   158,
     160,     0,     0,   159,   219,    20,     6,   345,     0,     4,
       0,     0,     0,    21,     0,     0,     0,    16,     0,     0,
       9,    22,     0,     8,    28,   127,   156,     0,    39,   156,
       0,   264,    75,     0,     0,     0,    79,     0,     0,   293,
      92,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   291,     0,    25,     0,   257,   258,
     261,   259,   260,    50,    94,   135,   147,   115,   164,   163,
     128,     0,     0,     0,   184,   197,   198,    26,   216,     0,
     140,    27,     0,    19,     0,     0,     0,     0,     0,     0,
     346,   161,   162,    11,    14,   287,    18,    22,    13,    17,
     157,   265,   154,     0,     0,     0,     0,   163,   190,   194,
     180,   178,   179,   177,   266,   135,     0,   295,   250,     0,
     211,   135,   269,   295,   152,   153,     0,     0,   277,   294,
     270,     0,     0,   295,     0,     0,    36,    48,     0,    29,
     275,   155,     0,   123,   118,   119,   122,   116,   117,     0,
       0,   149,     0,   150,   175,   173,   174,   120,   121,     0,
     292,     0,   220,     0,    32,     0,     0,     0,     0,     0,
      55,     0,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,   291,   262,     0,   141,   218,     0,     0,     0,
       0,   311,     0,     0,   211,     0,     0,   312,     0,     0,
      23,   288,     0,    12,   250,     0,     0,   195,   171,   169,
     170,   167,   168,   199,     0,     0,     0,   296,    73,     0,
      76,     0,    72,   165,   244,   163,   247,   151,   248,   289,
       0,   250,     0,   205,    80,    77,   158,     0,   204,     0,
     287,   241,   229,     0,    64,     0,     0,   202,   273,   287,
     227,   239,   303,     0,    90,    38,   225,   287,    49,    31,
     221,   287,     0,     0,    40,     0,   176,   148,     0,     0,
      35,   287,     0,     0,    51,    96,   111,   114,    97,   101,
     102,   100,   112,    99,    98,    95,   113,   103,   104,   105,
     106,   107,   108,   109,   110,   285,   124,   279,   289,     0,
     129,   292,     0,     0,   289,   285,   256,    60,   254,   253,
     271,   255,     0,    53,    52,   278,     0,     0,     0,     0,
     319,     0,     0,     0,     0,     0,   318,     0,   313,   314,
     315,     0,   347,     0,     0,   297,     0,     0,     0,    15,
      10,     0,     0,     0,   181,   191,    70,    66,    74,     0,
       0,   295,   166,   245,   246,   290,   251,   213,     0,     0,
       0,   295,     0,   237,     0,   250,   240,   288,     0,     0,
       0,     0,   303,     0,     0,   288,     0,   304,   232,     0,
     303,     0,   288,     0,   288,     0,    42,   276,     0,     0,
       0,   200,   171,   169,   170,   168,   141,   193,   192,   288,
       0,    44,     0,   141,   143,   281,   282,   289,     0,   289,
     290,     0,     0,     0,   132,   291,   263,   290,     0,     0,
       0,     0,   217,     0,     0,   326,   316,   317,   297,   301,
       0,   299,     0,   325,   340,     0,     0,   342,   343,     0,
       0,     0,     0,     0,   303,     0,     0,   310,     0,   298,
     305,   309,   306,   213,   172,     0,     0,     0,     0,   249,
     250,   163,   214,   189,   187,   188,   185,   186,   210,   213,
     212,    81,    78,   238,   242,     0,   230,   203,   196,     0,
       0,    93,    62,    65,     0,   234,     0,   303,   228,   201,
     274,   231,    64,   226,    37,   222,    30,    41,     0,   285,
      45,   223,   287,    47,    33,    43,   285,     0,   290,   286,
     138,     0,   280,   125,   131,   130,     0,   136,   137,     0,
     272,   328,     0,     0,   319,     0,   318,     0,   335,   351,
     302,     0,     0,     0,   349,   300,   329,   341,     0,   307,
       0,   320,     0,   303,   331,     0,   348,   336,     0,    69,
      68,   295,     0,   250,   206,    85,   213,     0,    59,     0,
     303,   303,   233,     0,   172,     0,   288,     0,    46,     0,
     141,   145,   142,   283,   284,   126,   291,   133,    61,   327,
     336,   297,   324,     0,     0,   303,   323,     0,     0,   321,
     308,   332,   297,   297,   339,   208,   337,    67,    71,   215,
       0,    87,   243,     0,     0,    56,     0,    63,   236,   235,
      91,   139,   224,    34,   144,   285,     0,   330,     0,   352,
     322,   333,   350,     0,     0,     0,   213,     0,    86,    82,
       0,     0,     0,   134,   336,   344,   336,   338,   207,    83,
      88,    58,    57,   146,   334,   209,   295,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -473,  -473,  -473,  -473,  -473,  -473,  -473,   -12,  -473,  -473,
     624,  -473,    -1,  -473,  -473,   635,  -473,  -137,   -48,    74,
    -473,  -130,  -112,  -473,    11,  -473,  -473,  -473,   149,  -372,
    -473,  -473,  -473,  -473,  -473,  -473,  -140,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
     662,   448,   257,  -473,  -196,   135,   139,  -473,   262,   -59,
     424,   -16,    -3,   387,   632,   427,   313,    20,  -473,   428,
     -89,   524,  -473,  -473,  -473,  -473,   -36,   -37,   -31,   -49,
    -473,  -473,  -473,  -473,  -473,   -32,   458,  -472,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,   279,  -108,  -211,   290,
    -473,   306,  -473,  -214,  -291,   658,  -473,  -230,  -473,   -63,
      -6,   191,  -473,  -302,  -219,  -254,  -195,  -473,  -107,  -435,
    -473,  -473,  -347,  -473,   323,  -473,    72,  -473,   371,   268,
     380,   242,   102,   110,  -468,  -473,  -438,   255,  -473,   515,
    -473,  -473
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,     2,     3,    14,    21,    30,   105,    31,
       8,    24,    16,    17,    65,   328,    67,   149,   520,   521,
     145,   146,    68,   502,   329,   440,   503,   579,   390,   368,
     475,   238,   239,   240,    69,   127,   254,    70,   133,   380,
     575,   648,   666,   621,   649,    71,   143,   401,    72,   141,
      73,    74,    75,    76,   315,   425,   426,   592,    77,   317,
     244,   136,    78,   150,   111,   117,    13,    80,    81,   246,
     247,   163,   119,    82,    83,   482,   228,    84,   230,   231,
      85,    86,    87,   130,   214,    88,   253,   488,    89,    90,
      22,   281,   522,   277,   269,   260,   270,   271,   272,   262,
     386,   248,   249,   250,   330,   331,   323,   332,   273,   152,
      92,   318,   427,   428,   222,   376,   171,   140,   255,   468,
     553,   547,   398,   100,   212,   218,   614,   445,   348,   349,
     350,   352,   554,   549,   615,   616,   458,   459,    25,   469,
     555,   550
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     121,   120,   162,   274,   175,   123,   122,   322,   491,   325,
     361,   280,   165,   543,   276,   237,   104,   574,   558,   174,
     242,   237,   379,   439,   164,   227,   233,   234,   261,   166,
     108,   237,   436,   110,   460,   142,   110,   378,   429,   208,
     101,   388,   132,   139,  -184,   505,  -268,     5,   263,   134,
     396,  -268,   369,   511,   392,   394,   278,   118,   403,    27,
    -216,  -180,   405,   284,   431,     4,   383,   205,  -183,   441,
     438,    27,   420,   207,     7,   442,  -184,   229,   229,   229,
       9,   135,   232,   232,   232,  -180,   293,  -237,    15,   102,
     206,   229,     9,  -180,  -216,   393,   232,   659,    18,   209,
     229,  -268,   430,   461,   622,   232,   223,  -268,   229,   210,
     175,   165,   370,   232,    19,   229,   103,   564,  -182,    29,
     232,   241,   210,   164,   134,   291,  -216,    28,   166,    10,
      11,    29,   637,   259,   118,   118,   118,   363,   229,   268,
     499,    10,    11,   232,   327,   500,  -237,   382,   118,   384,
     540,   165,  -237,   441,   372,    27,   135,   118,   454,   490,
     582,   623,   383,   164,    20,   118,   638,    26,   166,    23,
     643,   495,   118,   529,   658,   531,     9,   644,   645,     9,
     504,   200,   506,   213,   400,   201,   664,   229,   665,   229,
      33,   454,   232,   202,   232,   118,   411,   391,    11,   417,
     418,   501,   333,   334,    93,   455,   229,   106,   229,   359,
     539,   232,     9,   232,   229,    29,   611,   585,   137,   232,
     519,   624,   625,   109,   589,    10,    11,   526,    10,    11,
     172,   626,   199,   628,   629,  -154,   229,  -267,   455,     9,
     536,   232,  -267,   203,   118,   568,   118,   456,   413,   412,
     499,   229,   229,   415,   414,   500,   232,   232,   641,   237,
     433,    10,    11,   118,   478,   118,   572,   515,     9,   237,
     165,   118,   513,   411,   492,   275,   406,   204,  -183,   261,
      11,   465,   164,  -178,   347,     9,   421,   166,    10,    11,
     357,   358,  -267,   118,  -182,   668,   466,   125,  -267,  -179,
     498,   131,   126,   587,   279,   118,   126,  -178,   118,   118,
     216,   630,     9,   596,    94,  -178,   256,    10,    11,   597,
     227,   518,    95,  -179,   220,   229,    96,   221,   486,   224,
     232,  -179,   235,   652,    10,    11,    97,    98,   229,   256,
     484,   483,   251,   232,   252,   487,   485,   128,   229,   627,
     256,   257,   229,   232,     9,   210,   523,   232,   287,   620,
     258,    10,    11,   333,   334,    10,    11,   264,   265,    99,
     441,   532,   229,   229,   266,   288,   598,   232,   232,   265,
     441,   165,   118,   267,   259,   266,   617,   355,    10,    11,
     290,   289,   268,   164,   635,   118,   510,   118,   166,    10,
      11,   636,   517,    10,    11,   118,   356,   211,   211,   118,
     211,   211,   360,   362,   364,   453,   525,   367,   215,     9,
     217,   219,   371,   464,   486,     9,   375,   377,   381,   118,
     118,   383,    12,   385,   588,   387,   484,   483,     9,   395,
     486,   487,   485,   229,   389,   397,   402,    32,   232,    79,
     165,   404,   484,   483,   144,    32,   408,   487,   485,   237,
     148,   416,   164,   112,   618,  -177,   112,   166,    10,    11,
     129,   419,   112,   173,    10,    11,   422,   448,   435,     9,
     147,   151,   449,   451,   450,   452,   229,    10,    11,  -177,
     462,   232,   473,   118,   151,   467,   470,  -177,   471,   256,
     118,   472,   512,   153,   154,   155,   156,   157,   158,   118,
     167,   168,   474,   489,   319,   541,   494,   382,  -181,   497,
     507,   548,   551,   523,   556,   346,   667,   486,    10,    11,
     509,   346,   346,   561,   257,   563,   229,   178,   514,   484,
     483,   232,  -181,   118,   487,   485,   516,   186,    10,    11,
    -181,   190,   524,   342,   237,   245,   195,   196,   197,   198,
     528,   530,   437,   112,   533,    35,   534,   532,   535,   112,
      37,   147,   537,   538,   557,   151,   559,   165,   567,   113,
     576,   560,   466,   571,    47,    48,     9,   573,   578,   164,
     580,    51,   581,   118,   166,   584,   118,   486,   586,   595,
     151,   599,   336,   600,  -158,   601,  -159,   153,   157,   484,
     483,   337,   602,   603,   487,   485,   338,   339,   340,   607,
     604,    61,   606,   341,   605,   608,   610,   612,   320,   619,
     342,   631,   609,    64,    79,    10,    11,   633,   634,   646,
     351,   647,   441,   654,   653,   655,   656,   343,    32,   346,
     657,   245,   663,   176,  -277,   107,   346,    66,   660,   344,
     632,   583,   365,   593,   346,   345,   118,   594,    11,   373,
     407,   124,   354,   374,   508,   548,   640,   496,   245,    79,
      91,   479,   177,   178,   286,   179,   180,   181,   182,   183,
     577,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   336,   446,   566,   642,
     151,   138,   542,   639,  -277,   337,   447,   562,     0,     0,
     338,   339,   340,   161,  -277,     0,   170,   341,   353,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,    37,     0,     0,   169,     0,
      79,   343,     0,     0,   113,     0,   346,   444,     0,    47,
      48,     9,   546,   346,     0,   346,    51,     0,     0,   345,
       0,   457,    11,    55,   346,     0,   346,     0,     0,     0,
       0,     0,   351,     0,     0,     0,    56,    57,     0,    58,
      59,     0,     0,    60,     0,     0,    61,     0,     0,     0,
       0,     0,   245,     0,   481,     0,    62,    63,    64,   493,
      10,    11,   245,     0,   112,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   112,     0,     0,   147,
       0,   151,     0,     0,     0,     0,     0,     0,   294,   295,
     296,   297,     0,   298,   299,   300,   151,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,     0,   161,     0,   321,   346,   324,    79,    79,     0,
     138,   138,   335,   346,     0,   351,   545,     0,   552,     0,
     346,     0,     0,   457,     0,    35,     0,     0,     0,   457,
      37,     0,   565,   351,     0,     0,     0,     0,   366,   113,
       0,     0,    79,     0,    47,    48,     9,   245,   236,     0,
       0,    51,     0,   346,     0,     0,   546,   346,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,     0,    58,    59,     0,     0,    60,     0,
       0,    61,     0,     0,   138,     0,     0,     0,     0,     0,
       0,    62,    63,    64,   138,    10,    11,    37,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   346,     0,   346,
       0,    47,    48,     9,     0,     0,     0,   424,    51,     0,
       0,   161,    37,     0,     0,   225,     0,   424,     0,     0,
       0,   113,     0,     0,     0,     0,    47,    48,     9,     0,
     245,     0,   115,    51,     0,     0,    79,     0,   226,     0,
     114,     0,     0,   151,   282,     0,     0,     0,     0,     0,
      64,     0,    10,    11,   283,     0,     0,   115,   351,     0,
     545,   138,   138,   116,   552,   457,     0,     0,     0,   351,
     351,     0,     0,     0,     0,    64,     0,    10,    11,    -2,
      34,     0,    35,     0,     0,    36,     0,    37,    38,    39,
       0,     0,    40,     0,    41,    42,    43,    44,    45,    46,
     138,    47,    48,     9,     0,     0,    49,    50,    51,    52,
      53,    54,     0,     0,   138,    55,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,   170,    56,    57,
       0,    58,    59,     0,     0,    60,     0,     0,    61,     0,
       0,   -24,     0,     0,   178,     0,     0,     0,    62,    63,
      64,     0,    10,    11,   186,     0,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,     0,   569,   570,
       0,     0,     0,     0,     0,     0,     0,     0,   326,     0,
      35,     0,     0,    36,  -252,    37,    38,    39,     0,  -252,
      40,   161,    41,    42,   113,    44,    45,    46,     0,    47,
      48,     9,     0,     0,    49,    50,    51,    52,    53,    54,
       0,   424,     0,    55,     0,     0,     0,     0,   424,   591,
     424,     0,     0,     0,     0,     0,    56,    57,     0,    58,
      59,     0,     0,    60,     0,     0,    61,     0,     0,  -252,
       0,     0,     0,     0,   327,  -252,    62,    63,    64,     0,
      10,    11,     0,     0,     0,     0,   326,     0,    35,     0,
       0,    36,     0,    37,    38,    39,     0,     0,    40,     0,
      41,    42,   113,    44,    45,    46,     0,    47,    48,     9,
       0,     0,    49,    50,    51,    52,    53,    54,   170,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,     0,    58,    59,     0,
       0,    60,     0,     0,    61,   650,   651,  -252,   161,     0,
       0,     0,   327,  -252,    62,    63,    64,   424,    10,    11,
      35,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,   336,     0,     0,    47,
      48,     9,     0,     0,     0,   337,    51,     0,     0,     0,
     338,   339,   340,   159,     0,     0,     0,   341,     0,     0,
       0,     0,     0,     0,   342,     0,    56,    57,     0,    58,
     160,     0,     0,    60,     0,    35,    61,   316,     0,     0,
      37,   343,     0,     0,     0,     0,    62,    63,    64,   113,
      10,    11,     0,     0,    47,    48,     9,     0,     0,   345,
       0,    51,    11,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,     0,    58,    59,     0,     0,    60,     0,
      35,    61,     0,     0,     0,    37,     0,     0,     0,   423,
       0,    62,    63,    64,   113,    10,    11,     0,     0,    47,
      48,     9,     0,     0,     0,     0,    51,     0,   432,     0,
       0,     0,     0,   159,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,     0,    58,
     160,     0,     0,    60,     0,    35,    61,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    62,    63,    64,   113,
      10,    11,     0,     0,    47,    48,     9,     0,   476,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,     0,    58,    59,     0,     0,    60,     0,
      35,    61,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    62,    63,    64,   113,    10,    11,     0,     0,    47,
      48,     9,     0,   477,     0,     0,    51,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,    56,    57,    37,    58,
      59,     0,     0,    60,     0,     0,    61,   113,     0,     0,
       0,     0,    47,    48,     9,     0,    62,    63,    64,    51,
      10,    11,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,     0,    58,    59,     0,     0,    60,     0,    35,    61,
       0,     0,     0,    37,     0,     0,     0,   590,     0,    62,
      63,    64,   113,    10,    11,     0,     0,    47,    48,     9,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,    56,    57,    37,    58,    59,     0,
       0,    60,     0,     0,    61,   113,     0,     0,     0,     0,
      47,    48,     9,     0,    62,    63,    64,    51,    10,    11,
       0,     0,     0,     0,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,    56,    57,   285,
      58,   160,     0,     0,    60,     0,     0,    61,   113,     0,
       0,     0,     0,    47,    48,     9,     0,    62,    63,    64,
      51,    10,    11,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,    37,    58,    59,     0,     0,    60,     0,     0,
      61,   113,     0,     0,     0,     0,    47,    48,     9,     0,
      62,    63,    64,    51,    10,    11,     0,    37,     0,     0,
     225,     0,     0,     0,     0,    37,   113,     0,   243,     0,
       0,    47,    48,     9,   113,     0,     0,   115,    51,    47,
      48,     9,     0,   226,     0,   225,    51,     0,     0,   292,
       0,    37,     0,   225,     0,    64,     0,    10,    11,   283,
     113,     0,   115,     0,     0,    47,    48,     9,   226,     0,
     115,     0,    51,     0,     0,     0,   226,     0,    37,   225,
      64,     0,    10,    11,   399,     0,     0,   113,    64,     0,
      10,    11,    47,    48,     9,     0,   115,     0,     0,    51,
       0,     0,   226,     0,    37,     0,   409,     0,     0,     0,
       0,     0,   285,   113,    64,     0,    10,    11,    47,    48,
       9,   113,     0,   115,     0,    51,    47,    48,     9,   410,
       0,     0,   225,    51,     0,     0,     0,   336,     0,     0,
     225,    64,     0,    10,    11,   336,   337,     0,   463,   115,
       0,   338,   339,   544,   337,   480,     0,   115,   341,   338,
     339,   340,     0,   226,     0,   342,   341,    64,     0,    10,
      11,   336,     0,   342,     0,    64,     0,    10,    11,     0,
     337,     0,   343,     0,     0,   338,   339,   340,     0,     0,
     343,     0,   341,     0,     0,     0,     0,     0,     0,   342,
     345,     0,    10,    11,     0,     0,     0,     0,   345,   178,
       0,    11,     0,   181,   182,   183,   343,     0,   185,   186,
     187,   188,   613,   190,   191,   192,   193,   194,   195,   196,
     197,   198,     0,     0,   345,   177,   178,    11,   179,     0,
     181,   182,   183,     0,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,   178,
       0,   179,     0,   181,   182,   183,     0,   437,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,     0,     0,     0,     0,     0,     0,   177,   178,
       0,   179,     0,   181,   182,   183,     0,   434,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   177,   178,     0,   179,     0,   181,   182,   183,
       0,   527,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   177,   178,     0,   179,
       0,   181,   182,   183,     0,   661,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     177,   178,     0,   179,     0,   181,   182,   183,     0,   662,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   177,   178,     0,     0,     0,   181,
     182,   183,     0,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   177,   178,
       0,     0,     0,   181,   182,   183,     0,     0,   185,   186,
     187,   188,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198
};

static const yytype_int16 yycheck[] =
{
      37,    37,    61,   143,    67,    37,    37,   202,   380,   205,
     224,   148,    61,   448,   144,   127,    28,   489,   456,    67,
     127,   133,   252,   325,    61,   114,   115,   116,   136,    61,
      31,   143,   323,    36,     3,    51,    39,   251,    11,     5,
      24,   260,    45,    49,    35,   392,     7,    25,   137,    35,
     269,    12,     5,   400,   265,   266,   145,    37,   277,     3,
       1,    35,   281,   152,   318,     0,    24,    83,    59,    62,
     324,     3,   291,    89,    25,    68,    67,   114,   115,   116,
      24,    67,   114,   115,   116,    59,   175,     3,    24,    73,
       1,   128,    24,    67,    35,    53,   128,    20,     3,    65,
     137,    62,    75,    72,   576,   137,   107,    68,   145,    75,
     173,   160,    65,   145,    62,   152,    60,   464,    59,    63,
     152,   127,    75,   160,    35,   173,    67,    59,   160,    73,
      74,    63,   600,   136,   114,   115,   116,   226,   175,   142,
       7,    73,    74,   175,    67,    12,    62,    63,   128,   257,
     441,   200,    68,    62,   243,     3,    67,   137,     3,    68,
     507,     5,    24,   200,    21,   145,   601,    63,   200,    24,
     608,   385,   152,   427,   646,   429,    24,   612,   613,    24,
     391,    59,   393,    59,   273,    63,   654,   224,   656,   226,
      62,     3,   224,    71,   226,   175,   285,    59,    74,   288,
     289,    68,   208,   209,    62,    50,   243,     3,   245,   221,
     440,   243,    24,   245,   251,    63,   563,   519,    71,   251,
     416,    65,    66,     3,   526,    73,    74,   423,    73,    74,
      62,    75,    67,   580,   581,    66,   273,     7,    50,    24,
     435,   273,    12,    66,   224,   475,   226,    59,   285,   285,
       7,   288,   289,   285,   285,    12,   288,   289,   605,   371,
     319,    73,    74,   243,   371,   245,   480,   404,    24,   381,
     319,   251,   402,   362,   381,    60,   282,    59,    59,   387,
      74,    60,   319,    35,   212,    24,   292,   319,    73,    74,
     218,   219,    62,   273,    59,   667,    75,    40,    68,    35,
     389,    44,    40,   522,    60,   285,    44,    59,   288,   289,
      24,    68,    24,    66,     9,    67,    24,    73,    74,    72,
     409,   410,    17,    59,    64,   362,    21,    62,   377,    59,
     362,    67,    63,   635,    73,    74,    31,    32,   375,    24,
     377,   377,    59,   375,    67,   377,   377,    59,   385,   579,
      24,    59,   389,   385,    24,    75,   419,   389,    60,   573,
      68,    73,    74,   369,   370,    73,    74,    35,    53,    64,
      62,   430,   409,   410,    59,    72,    68,   409,   410,    53,
      62,   430,   362,    68,   387,    59,    68,    59,    73,    74,
      60,    72,   395,   430,   590,   375,   399,   377,   430,    73,
      74,   596,   408,    73,    74,   385,     3,    94,    95,   389,
      97,    98,    60,     8,    60,   343,   422,    35,    95,    24,
      97,    98,    62,   351,   473,    24,    75,    60,    62,   409,
     410,    24,     5,    59,   523,    62,   473,   473,    24,    62,
     489,   473,   473,   480,    72,     3,    62,    20,   480,    22,
     499,    62,   489,   489,    59,    28,    65,   489,   489,   571,
      59,    67,   499,    36,   571,    35,    39,   499,    73,    74,
      43,    62,    45,    59,    73,    74,    65,    59,    66,    24,
      53,    54,    67,    67,    71,     8,   523,    73,    74,    59,
      65,   523,    60,   473,    67,    62,    62,    67,    62,    24,
     480,    62,    35,    55,    56,    57,    58,    59,    60,   489,
      62,    63,    60,    60,    59,   443,    60,    63,    35,    68,
      60,   449,   450,   586,   452,   212,   666,   576,    73,    74,
      68,   218,   219,   461,    59,   463,   573,    34,    60,   576,
     576,   573,    59,   523,   576,   576,    60,    44,    73,    74,
      67,    48,    60,    36,   666,   128,    53,    54,    55,    56,
      75,    68,    75,   136,    60,     3,    60,   626,    60,   142,
       8,   144,    60,    68,     3,   148,    62,   626,    60,    17,
      60,    72,    75,    62,    22,    23,    24,    59,    66,   626,
      60,    29,    60,   573,   626,    60,   576,   646,    62,    60,
     173,    60,     8,    60,    59,    59,    59,   159,   160,   646,
     646,    17,    68,    62,   646,   646,    22,    23,    24,    62,
      72,    59,    68,    29,   552,    49,    62,    59,   201,    60,
      36,    68,   560,    71,   207,    73,    74,    60,    68,    60,
     213,    14,    62,    60,    72,    60,    60,    53,   221,   336,
      60,   224,    68,     4,     5,    31,   343,    22,   647,    65,
     586,   512,   235,   528,   351,    71,   646,   528,    74,   245,
     283,    39,   214,   245,   395,   603,   604,   387,   251,   252,
      22,   375,    33,    34,   160,    36,    37,    38,    39,    40,
     499,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     8,   336,   466,   607,
     283,    49,   444,   603,    65,    17,   336,   462,    -1,    -1,
      22,    23,    24,    61,    75,    -1,    64,    29,   213,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    11,    -1,
     323,    53,    -1,    -1,    17,    -1,   443,    59,    -1,    22,
      23,    24,   449,   450,    -1,   452,    29,    -1,    -1,    71,
      -1,   344,    74,    36,   461,    -1,   463,    -1,    -1,    -1,
      -1,    -1,   355,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,   375,    -1,   377,    -1,    69,    70,    71,   382,
      73,    74,   385,    -1,   387,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   395,    -1,    -1,    -1,   399,    -1,    -1,   402,
      -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
     178,   179,    -1,   181,   182,   183,   419,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,   200,    -1,   202,   552,   204,   440,   441,    -1,
     208,   209,   210,   560,    -1,   448,   449,    -1,   451,    -1,
     567,    -1,    -1,   456,    -1,     3,    -1,    -1,    -1,   462,
       8,    -1,   465,   466,    -1,    -1,    -1,    -1,   236,    17,
      -1,    -1,   475,    -1,    22,    23,    24,   480,    26,    -1,
      -1,    29,    -1,   600,    -1,    -1,   603,   604,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,
      -1,    59,    -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,   292,    73,    74,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,   654,    -1,   656,
      -1,    22,    23,    24,    -1,    -1,    -1,   315,    29,    -1,
      -1,   319,     8,    -1,    -1,    36,    -1,   325,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
     573,    -1,    53,    29,    -1,    -1,   579,    -1,    59,    -1,
      36,    -1,    -1,   586,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    53,   601,    -1,
     603,   369,   370,    59,   607,   608,    -1,    -1,    -1,   612,
     613,    -1,    -1,    -1,    -1,    71,    -1,    73,    74,     0,
       1,    -1,     3,    -1,    -1,     6,    -1,     8,     9,    10,
      -1,    -1,    13,    -1,    15,    16,    17,    18,    19,    20,
     408,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,   422,    36,    -1,    -1,    -1,    -1,
      -1,    -1,   430,    -1,    -1,    -1,    -1,   435,    49,    50,
      -1,    52,    53,    -1,    -1,    56,    -1,    -1,    59,    -1,
      -1,    62,    -1,    -1,    34,    -1,    -1,    -1,    69,    70,
      71,    -1,    73,    74,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,   476,   477,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,   499,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,   519,    -1,    36,    -1,    -1,    -1,    -1,   526,   527,
     528,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    -1,
      73,    74,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
      -1,     6,    -1,     8,     9,    10,    -1,    -1,    13,    -1,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,    32,   596,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,
      -1,    56,    -1,    -1,    59,   623,   624,    62,   626,    -1,
      -1,    -1,    67,    68,    69,    70,    71,   635,    73,    74,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,     8,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    17,    29,    -1,    -1,    -1,
      22,    23,    24,    36,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    -1,     3,    59,    60,    -1,    -1,
       8,    53,    -1,    -1,    -1,    -1,    69,    70,    71,    17,
      73,    74,    -1,    -1,    22,    23,    24,    -1,    -1,    71,
      -1,    29,    74,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,
       3,    59,    -1,    -1,    -1,     8,    -1,    -1,    -1,    67,
      -1,    69,    70,    71,    17,    73,    74,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    -1,     3,    59,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    17,
      73,    74,    -1,    -1,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,
       3,    59,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    17,    73,    74,    -1,    -1,    22,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    49,    50,     8,    52,
      53,    -1,    -1,    56,    -1,    -1,    59,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    69,    70,    71,    29,
      73,    74,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    52,    53,    -1,    -1,    56,    -1,     3,    59,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    67,    -1,    69,
      70,    71,    17,    73,    74,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    49,    50,     8,    52,    53,    -1,
      -1,    56,    -1,    -1,    59,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    -1,    69,    70,    71,    29,    73,    74,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    49,    50,     8,
      52,    53,    -1,    -1,    56,    -1,    -1,    59,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    69,    70,    71,
      29,    73,    74,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,     8,    52,    53,    -1,    -1,    56,    -1,    -1,
      59,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      69,    70,    71,    29,    73,    74,    -1,     8,    -1,    -1,
      36,    -1,    -1,    -1,    -1,     8,    17,    -1,    11,    -1,
      -1,    22,    23,    24,    17,    -1,    -1,    53,    29,    22,
      23,    24,    -1,    59,    -1,    36,    29,    -1,    -1,    65,
      -1,     8,    -1,    36,    -1,    71,    -1,    73,    74,    75,
      17,    -1,    53,    -1,    -1,    22,    23,    24,    59,    -1,
      53,    -1,    29,    -1,    -1,    -1,    59,    -1,     8,    36,
      71,    -1,    73,    74,    75,    -1,    -1,    17,    71,    -1,
      73,    74,    22,    23,    24,    -1,    53,    -1,    -1,    29,
      -1,    -1,    59,    -1,     8,    -1,    36,    -1,    -1,    -1,
      -1,    -1,     8,    17,    71,    -1,    73,    74,    22,    23,
      24,    17,    -1,    53,    -1,    29,    22,    23,    24,    59,
      -1,    -1,    36,    29,    -1,    -1,    -1,     8,    -1,    -1,
      36,    71,    -1,    73,    74,     8,    17,    -1,    11,    53,
      -1,    22,    23,    24,    17,    59,    -1,    53,    29,    22,
      23,    24,    -1,    59,    -1,    36,    29,    71,    -1,    73,
      74,     8,    -1,    36,    -1,    71,    -1,    73,    74,    -1,
      17,    -1,    53,    -1,    -1,    22,    23,    24,    -1,    -1,
      53,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      71,    -1,    73,    74,    -1,    -1,    -1,    -1,    71,    34,
      -1,    74,    -1,    38,    39,    40,    53,    -1,    43,    44,
      45,    46,    59,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    71,    33,    34,    74,    36,    -1,
      38,    39,    40,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    36,    -1,    38,    39,    40,    -1,    75,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    36,    -1,    38,    39,    40,    -1,    72,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    33,    34,    -1,    36,    -1,    38,    39,    40,
      -1,    66,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    33,    34,    -1,    36,
      -1,    38,    39,    40,    -1,    66,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      33,    34,    -1,    36,    -1,    38,    39,    40,    -1,    66,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    33,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    33,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    79,    80,     0,    25,    78,    25,    86,    24,
      73,    74,   141,   142,    81,    24,    88,    89,     3,    62,
      21,    82,   166,    24,    87,   214,    63,     3,    59,    63,
      83,    85,   141,    62,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    36,    49,    50,    52,    53,
      56,    59,    69,    70,    71,    90,    91,    92,    98,   110,
     113,   121,   124,   126,   127,   128,   129,   134,   138,   141,
     143,   144,   149,   150,   153,   156,   157,   158,   161,   164,
     165,   181,   186,    62,     9,    17,    21,    31,    32,    64,
     199,    24,    73,    60,    83,    84,     3,    86,    88,     3,
     138,   140,   141,    17,    36,    53,    59,   141,   143,   148,
     152,   153,   154,   161,   140,   128,   134,   111,    59,   141,
     159,   128,   138,   114,    35,    67,   137,    71,   126,   186,
     193,   125,   137,   122,    59,    96,    97,   141,    59,    93,
     139,   141,   185,   127,   127,   127,   127,   127,   127,    36,
      53,   126,   135,   147,   153,   155,   161,   127,   127,    11,
     126,   192,    62,    59,    94,   185,     4,    33,    34,    36,
      37,    38,    39,    40,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    67,
      59,    63,    71,    66,    59,   137,     1,   137,     5,    65,
      75,   142,   200,    59,   160,   200,    24,   200,   201,   200,
      64,    62,   190,    88,    59,    36,    59,   146,   152,   153,
     154,   155,   161,   146,   146,    63,    26,    98,   107,   108,
     109,   186,   194,    11,   136,   141,   145,   146,   177,   178,
     179,    59,    67,   162,   112,   194,    24,    59,    68,   138,
     171,   173,   175,   146,    35,    53,    59,    68,   138,   170,
     172,   173,   174,   184,   112,    60,    97,   169,   146,    60,
      93,   167,    65,    75,   146,     8,   147,    60,    72,    72,
      60,    94,    65,   146,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   130,    60,   135,   187,    59,
     141,   126,   192,   182,   126,   130,     1,    67,    91,   100,
     180,   181,   183,   186,   186,   126,     8,    17,    22,    23,
      24,    29,    36,    53,    65,    71,   142,   202,   204,   205,
     206,   141,   207,   215,   162,    59,     3,   202,   202,    83,
      60,   179,     8,   146,    60,   141,   126,    35,   105,     5,
      65,    62,   146,   136,   145,    75,   191,    60,   179,   183,
     115,    62,    63,    24,   173,    59,   176,    62,   190,    72,
     104,    59,   174,    53,   174,    62,   190,     3,   198,    75,
     146,   123,    62,   190,    62,   190,   186,   139,    65,    36,
      59,   146,   152,   153,   154,   161,    67,   146,   146,    62,
     190,   186,    65,    67,   126,   131,   132,   188,   189,    11,
      75,   191,    31,   135,    72,    66,   180,    75,   191,   189,
     101,    62,    68,    36,    59,   203,   204,   206,    59,    67,
      71,    67,     8,   202,     3,    50,    59,   141,   212,   213,
       3,    72,    65,    11,   202,    60,    75,    62,   195,   215,
      62,    62,    62,    60,    60,   106,    26,    26,   194,   177,
      59,   141,   151,   152,   153,   154,   155,   161,   163,    60,
      68,   105,   194,   141,    60,   179,   175,    68,   146,     7,
      12,    68,    99,   102,   174,   198,   174,    60,   172,    68,
     138,   198,    35,    97,    60,    93,    60,   186,   146,   130,
      94,    95,   168,   185,    60,   186,   130,    66,    75,   191,
      68,   191,   135,    60,    60,    60,   192,    60,    68,   183,
     180,   202,   205,   195,    24,   141,   142,   197,   202,   209,
     217,   202,   141,   196,   208,   216,   202,     3,   212,    62,
      72,   202,   213,   202,   198,   141,   207,    60,   183,   126,
     126,    62,   179,    59,   163,   116,    60,   187,    66,   103,
      60,    60,   198,   104,    60,   189,    62,   190,   146,   189,
      67,   126,   133,   131,   132,    60,    66,    72,    68,    60,
      60,    59,    68,    62,    72,   202,    68,    62,    49,   202,
      62,   198,    59,    59,   202,   210,   211,    68,   194,    60,
     179,   119,   163,     5,    65,    66,    75,   183,   198,   198,
      68,    68,    95,    60,    68,   130,   192,   210,   195,   209,
     202,   198,   208,   212,   195,   195,    60,    14,   117,   120,
     126,   126,   189,    72,    60,    60,    60,    60,   163,    20,
     100,    66,    66,    68,   210,   210,   118,   112,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    80,    79,    81,    81,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    85,    86,
      87,    87,    89,    88,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      93,    93,    93,    94,    94,    95,    95,    95,    96,    97,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
     101,   100,   103,   102,   104,   104,   106,   105,   107,   107,
     107,   108,   108,   108,   109,   111,   110,   112,   112,   114,
     115,   116,   113,   118,   117,   119,   119,   120,   120,   122,
     123,   121,   125,   124,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   128,   128,   128,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   137,   137,   138,   139,   140,   140,   141,   141,
     141,   142,   142,   143,   144,   145,   145,   146,   146,   146,
     146,   146,   146,   147,   147,   147,   147,   148,   148,   148,
     148,   148,   149,   149,   150,   151,   151,   151,   151,   151,
     152,   152,   153,   153,   153,   153,   153,   153,   153,   154,
     155,   156,   156,   157,   157,   158,   159,   159,   160,   160,
     161,   162,   162,   163,   163,   163,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   172,   172,   172,   172,   173,   173,   174,
     175,   175,   175,   176,   177,   177,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   180,   180,   181,   181,   181,
     181,   181,   182,   181,   181,   181,   181,   181,   181,   181,
     181,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   198,   198,   199,   199,   199,   199,   199,
     199,   200,   201,   202,   202,   202,   203,   203,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   205,
     206,   207,   207,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     0,     3,     0,     3,     2,
       5,     3,     3,     2,     1,     3,     1,     2,     2,     4,
       0,     1,     0,     4,     0,     1,     1,     1,     1,     2,
       5,     3,     2,     5,     7,     3,     2,     5,     3,     1,
       2,     4,     3,     4,     3,     1,     2,     1,     1,     2,
       1,     3,     3,     3,     2,     2,     3,     5,     5,     2,
       0,     4,     0,     3,     0,     2,     0,     4,     4,     4,
       2,     5,     1,     1,     2,     0,     3,     1,     3,     0,
       0,     0,     8,     0,     5,     0,     2,     0,     2,     0,
       0,     7,     0,     5,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     5,     6,     1,     1,     3,
       5,     5,     4,     6,     8,     1,     5,     5,     5,     7,
       1,     0,     3,     1,     4,     1,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     4,     4,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     2,     3,     5,     1,     1,     2,
       3,     5,     3,     5,     3,     3,     5,     8,     5,     8,
       5,     0,     3,     0,     1,     3,     1,     4,     2,     0,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     2,     4,     3,     5,     5,     1,     3,     1,
       2,     1,     3,     4,     1,     2,     2,     1,     1,     3,
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     1,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     3,     3,     0,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     4,     4,     5,     6,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     5,     4,     4,     2,     2,     4,     3,     3,
       5,     3,     4,     3,     5,     1,     0,     1,     3,     1,
       1,     2,     1,     1,     5,     0,     2,     1,     3,     1,
       3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar, yystate;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 128 "go.y" /* yacc.c:1646  */
    {
		xtop = concat(xtop, (yyvsp[0].list));
	}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 134 "go.y" /* yacc.c:1646  */
    {
		prevlineno = lineno;
		yyerror("package statement must be first");
		errorexit();
	}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 140 "go.y" /* yacc.c:1646  */
    {
        print("package sym\n");
		mkpackage((yyvsp[-1].sym)->name);
	}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 151 "go.y" /* yacc.c:1646  */
    {
		importpkg = runtimepkg;

		if(debug['A'])
			cannedimports("runtime.builtin", "package runtime\n\n$$\n\n");
		else
			cannedimports("runtime.builtin", runtimeimport);
		curio.importsafe = 1;
	}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 162 "go.y" /* yacc.c:1646  */
    {
		importpkg = nil;
	}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 178 "go.y" /* yacc.c:1646  */
    {
        print("import1 !!!\n");
		Pkg *ipkg;
		Sym *my;
		Node *pack;
        /**
         * 总的来说这段代码就是生成一个sym，生成一个node，并关联起来
         */
        /**
         * importmyname 是import时要改名的符号
         * importpkg 是要import的包
         */
		ipkg = importpkg;
		my = importmyname;
		importpkg = nil;
		importmyname = S;

        // 如果当前没有要改名的符号的话，直接使用import的包名
		if(my == nil)
			my = lookup(ipkg->name);

		pack = nod(OPACK, N, N);
		pack->sym = my;
		pack->pkg = ipkg;
		pack->lineno = (yyvsp[-2].i);

		if(my->name[0] == '.') {
			importdot(ipkg, pack);
			break;
		}
		if(strcmp(my->name, "init") == 0) {
			yyerror("cannot import package as init - init must be a func");
			break;
		}
		if(my->name[0] == '_' && my->name[1] == '\0')
			break;

        // import的符号重定义了
		if(my->def) {
			lineno = (yyvsp[-2].i);
			redeclare(my, "as imported package name");
		}
		my->def = pack;
		my->lastlineno = (yyvsp[-2].i);
		my->block = 1;	// at top level
	}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 225 "go.y" /* yacc.c:1646  */
    {
        print("import2!!!\n");
		// When an invalid import path is passed to importfile,
		// it calls yyerror and then sets up a fake import with
		// no package statement. This allows us to test more
		// than one invalid import statement in a single file.
		if(nerrors == 0)
			fatal("phase error in import");
	}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 241 "go.y" /* yacc.c:1646  */
    {
		// import with original name
		(yyval.i) = parserline();
		importmyname = S;
        print("import_here \"%s\"\n", (yyvsp[0].val).u.sval->s);
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 249 "go.y" /* yacc.c:1646  */
    {
		// import with given name
		(yyval.i) = parserline();
		importmyname = (yyvsp[-1].sym);
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 256 "go.y" /* yacc.c:1646  */
    {
		// import into my name space
		(yyval.i) = parserline();
		importmyname = lookup(".");
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 265 "go.y" /* yacc.c:1646  */
    {
        print("package '%s' safe\n", (yyvsp[-2].sym)->name);
		if(importpkg->name == nil) {
			importpkg->name = (yyvsp[-2].sym)->name;
			pkglookup((yyvsp[-2].sym)->name, nil)->npkg++;
		} else if(strcmp(importpkg->name, (yyvsp[-2].sym)->name) != 0)
			yyerror("conflicting names %s and %s for package \"%Z\"", importpkg->name, (yyvsp[-2].sym)->name, importpkg->path);
		importpkg->direct = 1;
		importpkg->safe = curio.importsafe;

		if(safemode && !curio.importsafe)
			yyerror("cannot import unsafe package \"%Z\"", importpkg->path);
	}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 281 "go.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[0].sym)->name, "safe") == 0)
			curio.importsafe = 1;
	}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 287 "go.y" /* yacc.c:1646  */
    {
		defercheckwidth();
	}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 291 "go.y" /* yacc.c:1646  */
    {
		resumecheckwidth();
		unimportfile();
	}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 300 "go.y" /* yacc.c:1646  */
    {
		yyerror("empty top-level declaration");
		(yyval.list) = nil;
	}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 306 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 310 "go.y" /* yacc.c:1646  */
    {
		yyerror("non-declaration statement outside function body");
		(yyval.list) = nil;
	}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 315 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 321 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
	}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 325 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 329 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 333 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 339 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 345 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-4].list), (yyvsp[-2].list));
		iota = -100000;
		lastconst = nil;
	}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 351 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		iota = -100000;
	}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 356 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 360 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 364 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 370 "go.y" /* yacc.c:1646  */
    {
		iota = 0;
	}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 376 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 380 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 384 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-2].list), nil, (yyvsp[0].list));
	}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 390 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 394 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-2].list), N, (yyvsp[0].list));
	}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 401 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 405 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[0].list), N, nil);
	}
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 411 "go.y" /* yacc.c:1646  */
    {
		// different from dclname because the name
		// becomes visible right here, not at the end
		// of the declaration.
		(yyval.node) = typedcl0((yyvsp[0].sym));
	}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 420 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = typedcl1((yyvsp[-1].node), (yyvsp[0].node), 1);
	}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 426 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);

		// These nodes do not carry line numbers.
		// Since a bare name used as an expression is an error,
		// introduce a wrapper node to give the correct line.
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OTYPE:
		case OPACK:
		case OLITERAL:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
			(yyval.node)->implicit = 1;
			break;
		}
	}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 444 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-2].node), (yyvsp[0].node));
		(yyval.node)->etype = (yyvsp[-1].i);			// rathole to pass opcode
	}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 449 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].list)->next == nil && (yyvsp[0].list)->next == nil) {
			// simple
			(yyval.node) = nod(OAS, (yyvsp[-2].list)->n, (yyvsp[0].list)->n);
			break;
		}
		// multiple
		(yyval.node) = nod(OAS2, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 461 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].list)->n->op == OTYPESW) {
			(yyval.node) = nod(OTYPESW, N, (yyvsp[0].list)->n->right);
			if((yyvsp[0].list)->next != nil)
				yyerror("expr.(type) must be alone in list");
			if((yyvsp[-2].list)->next != nil)
				yyerror("argument count mismatch: %d = %d", count((yyvsp[-2].list)), 1);
			else if(((yyvsp[-2].list)->n->op != ONAME && (yyvsp[-2].list)->n->op != OTYPE && (yyvsp[-2].list)->n->op != ONONAME) || isblank((yyvsp[-2].list)->n))
				yyerror("invalid variable name %N in type switch", (yyvsp[-2].list)->n);
			else
				(yyval.node)->left = dclname((yyvsp[-2].list)->n->sym);  // it's a colas, so must not re-use an oldname.
			break;
		}
		(yyval.node) = colas((yyvsp[-2].list), (yyvsp[0].list), (yyvsp[-1].i));
	}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 477 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OADD;
	}
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 483 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OSUB;
	}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 491 "go.y" /* yacc.c:1646  */
    {
		Node *n, *nn;

		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = (yyvsp[-1].list);
		if(typesw != N && typesw->right != N && (n=typesw->right->left) != N) {
			// type switch - declare variable
			nn = newname(n->sym);
			declare(nn, dclcontext);
			(yyval.node)->nname = nn;

			// keep track of the instances for reporting unused
			nn->defn = typesw->right;
		}
	}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 511 "go.y" /* yacc.c:1646  */
    {
		Node *n;

		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		if((yyvsp[-3].list)->next == nil)
			n = nod(OAS, (yyvsp[-3].list)->n, (yyvsp[-1].node));
		else {
			n = nod(OAS2, N, N);
			n->list = (yyvsp[-3].list);
			n->rlist = list1((yyvsp[-1].node));
		}
		(yyval.node)->list = list1(n);
	}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 529 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = list1(colas((yyvsp[-3].list), list1((yyvsp[-1].node)), (yyvsp[-2].i)));
	}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 538 "go.y" /* yacc.c:1646  */
    {
		Node *n, *nn;

		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		if(typesw != N && typesw->right != N && (n=typesw->right->left) != N) {
			// type switch - declare variable
			nn = newname(n->sym);
			declare(nn, dclcontext);
			(yyval.node)->nname = nn;

			// keep track of the instances for reporting unused
			nn->defn = typesw->right;
		}
	}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 556 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 560 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].list) == nil)
			(yyval.node) = nod(OEMPTY, N, N);
		else
			(yyval.node) = liststmt((yyvsp[-1].list));
		popdcl();
	}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 570 "go.y" /* yacc.c:1646  */
    {
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		yylast = yychar;
		(yyvsp[0].node)->xoffset = block;
	}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 581 "go.y" /* yacc.c:1646  */
    {
		int last;

		// This is the only place in the language where a statement
		// list is not allowed to drop the final semicolon, because
		// it's the only place where a statement list is not followed 
		// by a closing brace.  Handle the error for pedantry.

		// Find the final token of the statement list.
		// yylast is lookahead; yyprev is last of stmt_list
		last = yyprev;

		if(last > 0 && last != ';' && yychar != '}')
			yyerror("missing statement after label");
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->nbody = (yyvsp[0].list);
		popdcl();
	}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 601 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 605 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-1].list), (yyvsp[0].node));
	}
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 611 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 615 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		popdcl();
	}
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 622 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->etype = 0;	// := flag
	}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 628 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->colas = 1;
		colasdefn((yyvsp[-3].list), (yyval.node));
	}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 635 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->etype = 0; // := flag
	}
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 642 "go.y" /* yacc.c:1646  */
    {
		// init ; test ; incr
		if((yyvsp[0].node) != N && (yyvsp[0].node)->colas != 0)
			yyerror("cannot declare in the for-increment");
		(yyval.node) = nod(OFOR, N, N);
		if((yyvsp[-4].node) != N)
			(yyval.node)->ninit = list1((yyvsp[-4].node));
		(yyval.node)->ntest = (yyvsp[-2].node);
		(yyval.node)->nincr = (yyvsp[0].node);
	}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 653 "go.y" /* yacc.c:1646  */
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 662 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->nbody = concat((yyval.node)->nbody, (yyvsp[0].list));
	}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 669 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 673 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		popdcl();
	}
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 680 "go.y" /* yacc.c:1646  */
    {
		// test
		(yyval.node) = nod(OIF, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 686 "go.y" /* yacc.c:1646  */
    {
		// init ; test
		(yyval.node) = nod(OIF, N, N);
		if((yyvsp[-2].node) != N)
			(yyval.node)->ninit = list1((yyvsp[-2].node));
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 697 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 701 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].node)->ntest == N)
			yyerror("missing condition in if statement");
	}
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 706 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->nbody = (yyvsp[0].list);
	}
#line 2905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 710 "go.y" /* yacc.c:1646  */
    {
		Node *n;
		NodeList *nn;

		(yyval.node) = (yyvsp[-5].node);
		n = (yyvsp[-5].node);
		popdcl();
		for(nn = concat((yyvsp[-1].list), (yyvsp[0].list)); nn; nn = nn->next) {
			if(nn->n->op == OIF)
				popdcl();
			n->nelse = list1(nn->n);
			n = nn->n;
		}
	}
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 727 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 731 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].node)->ntest == N)
			yyerror("missing condition in if statement");
		(yyvsp[-1].node)->nbody = (yyvsp[0].list);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 739 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 743 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-1].list), (yyvsp[0].list));
	}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 748 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 752 "go.y" /* yacc.c:1646  */
    {
		NodeList *node;
		
		node = mal(sizeof *node);
		node->n = (yyvsp[0].node);
		node->end = node;
		(yyval.list) = node;
	}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 763 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 767 "go.y" /* yacc.c:1646  */
    {
		Node *n;
		n = (yyvsp[0].node)->ntest;
		if(n != N && n->op != OTYPESW)
			n = N;
		typesw = nod(OXXX, typesw, n);
	}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 775 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-4].node);
		(yyval.node)->op = OSWITCH;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
		popdcl();
	}
#line 3012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 785 "go.y" /* yacc.c:1646  */
    {
		typesw = nod(OXXX, typesw, N);
	}
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 789 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSELECT, N, N);
		(yyval.node)->lineno = typesw->lineno;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
	}
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 802 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOROR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 806 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 810 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OEQ, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 814 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 818 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 822 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 826 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 830 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 834 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OADD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 838 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSUB, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 842 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 846 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OXOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 850 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMUL, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 854 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODIV, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 858 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMOD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 862 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 866 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDNOT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 870 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 874 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 879 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSEND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 886 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 890 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].node)->op == OCOMPLIT) {
			// Special case for &T{...}: turn into (*T){...}.
			(yyval.node) = (yyvsp[0].node);
			(yyval.node)->right = nod(OIND, (yyval.node)->right, N);
			(yyval.node)->right->implicit = 1;
		} else {
			(yyval.node) = nod(OADDR, (yyvsp[0].node), N);
		}
	}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 901 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPLUS, (yyvsp[0].node), N);
	}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 905 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMINUS, (yyvsp[0].node), N);
	}
#line 3230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 909 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONOT, (yyvsp[0].node), N);
	}
#line 3238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 913 "go.y" /* yacc.c:1646  */
    {
		yyerror("the bitwise complement operator is ^");
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 918 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 922 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORECV, (yyvsp[0].node), N);
	}
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 932 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-2].node), N);
	}
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 936 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = (yyvsp[-2].list);
	}
#line 3280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 941 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-5].node), N);
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->isddd = 1;
	}
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 949 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 954 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->op == OPACK) {
			Sym *s;
			s = restrictlookup((yyvsp[0].sym)->name, (yyvsp[-2].node)->pkg);
			(yyvsp[-2].node)->used = 1;
			(yyval.node) = oldname(s);
			break;
		}
		(yyval.node) = nod(OXDOT, (yyvsp[-2].node), newname((yyvsp[0].sym)));
	}
#line 3313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 965 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODOTTYPE, (yyvsp[-4].node), (yyvsp[-1].node));
	}
#line 3321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 969 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTYPESW, N, (yyvsp[-4].node));
	}
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 973 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OINDEX, (yyvsp[-3].node), (yyvsp[-1].node));
	}
#line 3337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 977 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSLICE, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node)));
	}
#line 3345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 981 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].node) == N)
			yyerror("middle index required in 3-index slice");
		if((yyvsp[-1].node) == N)
			yyerror("final index required in 3-index slice");
		(yyval.node) = nod(OSLICE3, (yyvsp[-7].node), nod(OKEY, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node))));
	}
#line 3357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 990 "go.y" /* yacc.c:1646  */
    {
		// conversion
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = list1((yyvsp[-2].node));
	}
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 996 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1003 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1009 "go.y" /* yacc.c:1646  */
    {
		yyerror("cannot parenthesize type in composite literal");
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-5].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1018 "go.y" /* yacc.c:1646  */
    {
		// composite expression.
		// make node early so we get the right line number.
		(yyval.node) = nod(OCOMPLIT, N, N);
	}
#line 3409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1026 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OKEY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1032 "go.y" /* yacc.c:1646  */
    {
		// These nodes do not carry line numbers.
		// Since a composite literal commonly spans several lines,
		// the line number on errors may be misleading.
		// Introduce a wrapper node to give the correct line.
		(yyval.node) = (yyvsp[0].node);
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OTYPE:
		case OPACK:
		case OLITERAL:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
			(yyval.node)->implicit = 1;
		}
	}
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1049 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1057 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1065 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		
		// Need to know on lhs of := whether there are ( ).
		// Don't bother with the OPAREN in other cases:
		// it's just a waste of memory and time.
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OPACK:
		case OTYPE:
		case OLITERAL:
		case OTYPESW:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
		}
	}
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1091 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = LBODY;
	}
#line 3485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1095 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = '{';
	}
#line 3493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1106 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].sym) == S)
			(yyval.node) = N;
		else
			(yyval.node) = newname((yyvsp[0].sym));
	}
#line 3504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1115 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = dclname((yyvsp[0].sym));
	}
#line 3512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1120 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 3520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1127 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		// during imports, unqualified non-exported identifiers are from builtinpkg
        /**
         * 如果不是要对外输出的名称，重新生成符号(符号所属的包是builtinpkg)
         */
		if(importpkg != nil && !exportname((yyvsp[0].sym)->name))
			(yyval.sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
	}
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1138 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = S;
	}
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1144 "go.y" /* yacc.c:1646  */
    {
		Pkg *p;

		if((yyvsp[-2].val).u.sval->len == 0)
			p = importpkg;
		else {
			if(isbadimport((yyvsp[-2].val).u.sval))
				errorexit();
			p = mkpkg((yyvsp[-2].val).u.sval);
		}
		(yyval.sym) = pkglookup((yyvsp[0].sym)->name, p);
	}
#line 3559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1157 "go.y" /* yacc.c:1646  */
    {
		Pkg *p;

		if((yyvsp[-2].val).u.sval->len == 0)
			p = importpkg;
		else {
			if(isbadimport((yyvsp[-2].val).u.sval))
				errorexit();
			p = mkpkg((yyvsp[-2].val).u.sval);
		}
		(yyval.sym) = pkglookup("?", p);
	}
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1172 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname((yyvsp[0].sym));
		if((yyval.node)->pack != N)
			(yyval.node)->pack->used = 1;
	}
#line 3586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1192 "go.y" /* yacc.c:1646  */
    {
		yyerror("final argument in variadic function missing type");
		(yyval.node) = nod(ODDD, typenod(typ(TINTER)), N);
	}
#line 3595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1197 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODDD, (yyvsp[0].node), N);
	}
#line 3603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1208 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1217 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1227 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1248 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->op == OPACK) {
			Sym *s;
			s = restrictlookup((yyvsp[0].sym)->name, (yyvsp[-2].node)->pkg);
			(yyvsp[-2].node)->used = 1;
			(yyval.node) = oldname(s);
			break;
		}
		(yyval.node) = nod(OXDOT, (yyvsp[-2].node), newname((yyvsp[0].sym)));
	}
#line 3642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1261 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTARRAY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1265 "go.y" /* yacc.c:1646  */
    {
		// array literal of nelem
		(yyval.node) = nod(OTARRAY, nod(ODDD, N, N), (yyvsp[0].node));
	}
#line 3659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1270 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Cboth;
	}
#line 3668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1275 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Csend;
	}
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1280 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTMAP, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1288 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1294 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Crecv;
	}
#line 3702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1301 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1307 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1314 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1320 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1331 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		if((yyval.node) == N)
			break;
		if(noescape && (yyvsp[0].list) != nil)
			yyerror("can only use //go:noescape with external func implementations");
		(yyval.node)->nbody = (yyvsp[0].list);
		(yyval.node)->endlineno = lineno;
		(yyval.node)->noescape = noescape;
		(yyval.node)->nosplit = nosplit;
		funcbody((yyval.node));
	}
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1346 "go.y" /* yacc.c:1646  */
    {
		Node *t;

		(yyval.node) = N;
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);

		if(strcmp((yyvsp[-4].sym)->name, "init") == 0) {
			(yyvsp[-4].sym) = renameinit();
			if((yyvsp[-2].list) != nil || (yyvsp[0].list) != nil)
				yyerror("func init must have no arguments and no return values");
		}
		if(strcmp(localpkg->name, "main") == 0 && strcmp((yyvsp[-4].sym)->name, "main") == 0) {
			if((yyvsp[-2].list) != nil || (yyvsp[0].list) != nil)
				yyerror("func main must have no arguments and no return values");
		}

		t = nod(OTFUNC, N, N);
		t->list = (yyvsp[-2].list);
		t->rlist = (yyvsp[0].list);

		(yyval.node) = nod(ODCLFUNC, N, N);
		(yyval.node)->nname = newname((yyvsp[-4].sym));
		(yyval.node)->nname->defn = (yyval.node);
		(yyval.node)->nname->ntype = t;		// TODO: check if nname already has an ntype
		declare((yyval.node)->nname, PFUNC);

		funchdr((yyval.node));
	}
#line 3790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1375 "go.y" /* yacc.c:1646  */
    {
		Node *rcvr, *t;

		(yyval.node) = N;
		(yyvsp[-6].list) = checkarglist((yyvsp[-6].list), 0);
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);

		if((yyvsp[-6].list) == nil) {
			yyerror("method has no receiver");
			break;
		}
		if((yyvsp[-6].list)->next != nil) {
			yyerror("method has multiple receivers");
			break;
		}
		rcvr = (yyvsp[-6].list)->n;
		if(rcvr->op != ODCLFIELD) {
			yyerror("bad receiver in method");
			break;
		}

		t = nod(OTFUNC, rcvr, N);
		t->list = (yyvsp[-2].list);
		t->rlist = (yyvsp[0].list);

		(yyval.node) = nod(ODCLFUNC, N, N);
		(yyval.node)->shortname = newname((yyvsp[-4].sym));
		(yyval.node)->nname = methodname1((yyval.node)->shortname, rcvr->right);
		(yyval.node)->nname->defn = (yyval.node);
		(yyval.node)->nname->ntype = t;
		(yyval.node)->nname->nointerface = nointerface;
		declare((yyval.node)->nname, PFUNC);

		funchdr((yyval.node));
	}
#line 3830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1413 "go.y" /* yacc.c:1646  */
    {
		Sym *s;
		Type *t;

		(yyval.node) = N;

		s = (yyvsp[-4].sym);
		t = functype(N, (yyvsp[-2].list), (yyvsp[0].list));

		importsym(s, ONAME);
		if(s->def != N && s->def->op == ONAME) {
			if(eqtype(t, s->def->type)) {
				dclcontext = PDISCARD;  // since we skip funchdr below
				break;
			}
			yyerror("inconsistent definition for func %S during import\n\t%T\n\t%T", s, s->def->type, t);
		}

		(yyval.node) = newname(s);
		(yyval.node)->type = t;
		declare((yyval.node), PFUNC);

		funchdr((yyval.node));
	}
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1438 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = methodname1(newname((yyvsp[-4].sym)), (yyvsp[-6].list)->n->right); 
		(yyval.node)->type = functype((yyvsp[-6].list)->n, (yyvsp[-2].list), (yyvsp[0].list));

		checkwidth((yyval.node)->type);
		addmethod((yyvsp[-4].sym), (yyval.node)->type, 0, nointerface);
		nointerface = 0;
		funchdr((yyval.node));
		
		// inl.c's inlnode in on a dotmeth node expects to find the inlineable body as
		// (dotmeth's type)->nname->inl, and dotmeth's type has been pulled
		// out by typecheck's lookdot as this $$->ttype.  So by providing
		// this back link here we avoid special casing there.
		(yyval.node)->type->nname = (yyval.node);
	}
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1456 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1464 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1468 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		if((yyval.list) == nil)
			(yyval.list) = list1(nod(OEMPTY, N, N));
	}
#line 3908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1476 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1480 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, (yyvsp[0].node)));
	}
#line 3924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1484 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].list) = checkarglist((yyvsp[-1].list), 0);
		(yyval.list) = (yyvsp[-1].list);
	}
#line 3933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1491 "go.y" /* yacc.c:1646  */
    {
		closurehdr((yyvsp[0].node));
	}
#line 3941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1497 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody((yyvsp[-1].list));
		fixlbrace((yyvsp[-2].i));
	}
#line 3950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1502 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody(nil);
	}
#line 3958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1513 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1517 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[-1].list));
		if(nsyntaxerrors == 0)
			testdclstack();
		nointerface = 0;
		noescape = 0;
		nosplit = 0;
	}
#line 3979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1529 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1536 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1542 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1546 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1553 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1559 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1563 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1569 "go.y" /* yacc.c:1646  */
    {
		NodeList *l;

		Node *n;
		l = (yyvsp[-2].list);
		if(l == nil) {
			// ? symbol, during import (list1(N) == nil)
			n = (yyvsp[-1].node);
			if(n->op == OIND)
				n = n->left;
			n = embedded(n->sym, importpkg);
			n->right = (yyvsp[-1].node);
			n->val = (yyvsp[0].val);
			(yyval.list) = list1(n);
			break;
		}

		for(l=(yyvsp[-2].list); l; l=l->next) {
			l->n = nod(ODCLFIELD, l->n, (yyvsp[-1].node));
			l->n->val = (yyvsp[0].val);
		}
	}
#line 4062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1592 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1597 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1603 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->right = nod(OIND, (yyvsp[-1].node)->right, N);
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1609 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1616 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1625 "go.y" /* yacc.c:1646  */
    {
		Node *n;

		(yyval.sym) = (yyvsp[0].sym);
		n = oldname((yyvsp[0].sym));
		if(n->pack != N)
			n->pack->used = 1;
	}
#line 4126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1634 "go.y" /* yacc.c:1646  */
    {
		Pkg *pkg;

		if((yyvsp[-2].sym)->def == N || (yyvsp[-2].sym)->def->op != OPACK) {
			yyerror("%S is not a package", (yyvsp[-2].sym));
			pkg = localpkg;
		} else {
			(yyvsp[-2].sym)->def->used = 1;
			pkg = (yyvsp[-2].sym)->def->pkg;
		}
		(yyval.sym) = restrictlookup((yyvsp[0].sym)->name, pkg);
	}
#line 4143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1649 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = embedded((yyvsp[0].sym), localpkg);
	}
#line 4151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1655 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, (yyvsp[-1].node), (yyvsp[0].node));
		ifacedcl((yyval.node));
	}
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1660 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[0].sym)));
	}
#line 4168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1664 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[-1].sym)));
		yyerror("cannot parenthesize embedded type");
	}
#line 4177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1671 "go.y" /* yacc.c:1646  */
    {
		// without func keyword
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, fakethis(), N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 4189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1685 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1691 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1700 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1704 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1709 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1713 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1721 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1726 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = liststmt((yyvsp[0].list));
	}
#line 4257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1731 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1742 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node) = nod(OLABEL, (yyvsp[-1].node), N);
		(yyvsp[-1].node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1747 "go.y" /* yacc.c:1646  */
    {
		NodeList *l;

		(yyvsp[-3].node)->defn = (yyvsp[0].node);
		l = list1((yyvsp[-3].node));
		if((yyvsp[0].node))
			l = list(l, (yyvsp[0].node));
		(yyval.node) = liststmt(l);
	}
#line 4288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1757 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OFALL
		(yyval.node) = nod(OXFALL, N, N);
		(yyval.node)->xoffset = block;
	}
#line 4298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1763 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OBREAK, (yyvsp[0].node), N);
	}
#line 4306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1767 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCONTINUE, (yyvsp[0].node), N);
	}
#line 4314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1771 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPROC, (yyvsp[0].node), N);
	}
#line 4322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1775 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODEFER, (yyvsp[0].node), N);
	}
#line 4330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1779 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGOTO, (yyvsp[0].node), N);
		(yyval.node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1784 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORETURN, N, N);
		(yyval.node)->list = (yyvsp[0].list);
		if((yyval.node)->list == nil && curfn != N) {
			NodeList *l;

			for(l=curfn->dcl; l; l=l->next) {
				if(l->n->class == PPARAM)
					continue;
				if(l->n->class != PPARAMOUT)
					break;
				if(l->n->sym->def != l->n)
					yyerror("%s is shadowed during return", l->n->sym->name);
			}
		}
	}
#line 4360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1803 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		if((yyvsp[0].node) != N)
			(yyval.list) = list1((yyvsp[0].node));
	}
#line 4370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1809 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		if((yyvsp[0].node) != N)
			(yyval.list) = list((yyval.list), (yyvsp[0].node));
	}
#line 4380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1817 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1821 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1827 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1831 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1837 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1841 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1847 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1851 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1860 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1864 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1868 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1872 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1877 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1881 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1895 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1901 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1907 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1913 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1919 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1925 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1931 "go.y" /* yacc.c:1646  */
    {
		(yyval.val).ctype = CTxxx;
	}
#line 4548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1941 "go.y" /* yacc.c:1646  */
    {
		importimport((yyvsp[-2].sym), (yyvsp[-1].val).u.sval);
	}
#line 4556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1945 "go.y" /* yacc.c:1646  */
    {
		importvar((yyvsp[-2].sym), (yyvsp[-1].type));
	}
#line 4564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1949 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-3].sym), types[TIDEAL], (yyvsp[-1].node));
	}
#line 4572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1953 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-4].sym), (yyvsp[-3].type), (yyvsp[-1].node));
	}
#line 4580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1957 "go.y" /* yacc.c:1646  */
    {
		importtype((yyvsp[-2].type), (yyvsp[-1].type));
	}
#line 4588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1961 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node) == N) {
			dclcontext = PEXTERN;  // since we skip the funcbody below
			break;
		}

		(yyvsp[-2].node)->inl = (yyvsp[-1].list);

		funcbody((yyvsp[-2].node));
		importlist = list(importlist, (yyvsp[-2].node));

		if(debug['E']) {
			print("import [%Z] func %lN \n", importpkg->path, (yyvsp[-2].node));
			if(debug['m'] > 2 && (yyvsp[-2].node)->inl)
				print("inl body:%+H\n", (yyvsp[-2].node)->inl);
		}
	}
#line 4610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1981 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		structpkg = (yyval.sym)->pkg;
	}
#line 4619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1988 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
		importsym((yyvsp[0].sym), OTYPE);
	}
#line 4628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2008 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
	}
#line 4636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2012 "go.y" /* yacc.c:1646  */
    {
		// predefined name like uint8
		(yyvsp[0].sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
		if((yyvsp[0].sym)->def == N || (yyvsp[0].sym)->def->op != OTYPE) {
			yyerror("%s is not a type", (yyvsp[0].sym)->name);
			(yyval.type) = T;
		} else
			(yyval.type) = (yyvsp[0].sym)->def->type;
	}
#line 4650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2022 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(N, (yyvsp[0].type));
	}
#line 4658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2026 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(nodlit((yyvsp[-2].val)), (yyvsp[0].type));
	}
#line 4666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2030 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = maptype((yyvsp[-2].type), (yyvsp[0].type));
	}
#line 4674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2034 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tostruct((yyvsp[-1].list));
	}
#line 4682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2038 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tointerface((yyvsp[-1].list));
	}
#line 4690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2042 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = ptrto((yyvsp[0].type));
	}
#line 4698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2046 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Cboth;
	}
#line 4708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2052 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[-1].type);
		(yyval.type)->chan = Cboth;
	}
#line 4718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2058 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Csend;
	}
#line 4728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2066 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Crecv;
	}
#line 4738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2074 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = functype(nil, (yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2080 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[-1].type)));
		if((yyvsp[-2].sym))
			(yyval.node)->left = newname((yyvsp[-2].sym));
		(yyval.node)->val = (yyvsp[0].val);
	}
#line 4757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2087 "go.y" /* yacc.c:1646  */
    {
		Type *t;
	
		t = typ(TARRAY);
		t->bound = -1;
		t->type = (yyvsp[-1].type);

		(yyval.node) = nod(ODCLFIELD, N, typenod(t));
		if((yyvsp[-3].sym))
			(yyval.node)->left = newname((yyvsp[-3].sym));
		(yyval.node)->isddd = 1;
		(yyval.node)->val = (yyvsp[0].val);
	}
#line 4775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2103 "go.y" /* yacc.c:1646  */
    {
		Sym *s;
		Pkg *p;

		if((yyvsp[-2].sym) != S && strcmp((yyvsp[-2].sym)->name, "?") != 0) {
			(yyval.node) = nod(ODCLFIELD, newname((yyvsp[-2].sym)), typenod((yyvsp[-1].type)));
			(yyval.node)->val = (yyvsp[0].val);
		} else {
			s = (yyvsp[-1].type)->sym;
			if(s == S && isptr[(yyvsp[-1].type)->etype])
				s = (yyvsp[-1].type)->type->sym;
			p = importpkg;
			if((yyvsp[-2].sym) != S)
				p = (yyvsp[-2].sym)->pkg;
			(yyval.node) = embedded(s, p);
			(yyval.node)->right = typenod((yyvsp[-1].type));
			(yyval.node)->val = (yyvsp[0].val);
		}
	}
#line 4799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2125 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, newname((yyvsp[-4].sym)), typenod(functype(fakethis(), (yyvsp[-2].list), (yyvsp[0].list))));
	}
#line 4807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2129 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[0].type)));
	}
#line 4815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2134 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2141 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2145 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, typenod((yyvsp[0].type))));
	}
#line 4839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2155 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 4847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2159 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
		switch((yyval.node)->val.ctype){
		case CTINT:
		case CTRUNE:
			mpnegfix((yyval.node)->val.u.xval);
			break;
		case CTFLT:
			mpnegflt((yyval.node)->val.u.fval);
			break;
		case CTCPLX:
			mpnegflt(&(yyval.node)->val.u.cval->real);
			mpnegflt(&(yyval.node)->val.u.cval->imag);
			break;
		default:
			yyerror("bad negated constant");
		}
	}
#line 4870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2178 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname(pkglookup((yyvsp[0].sym)->name, builtinpkg));
		if((yyval.node)->op != OLITERAL)
			yyerror("bad constant %S", (yyval.node)->sym);
	}
#line 4880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2187 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].node)->val.ctype == CTRUNE && (yyvsp[-1].node)->val.ctype == CTINT) {
			(yyval.node) = (yyvsp[-3].node);
			mpaddfixfix((yyvsp[-3].node)->val.u.xval, (yyvsp[-1].node)->val.u.xval, 0);
			break;
		}
		(yyvsp[-1].node)->val.u.cval->real = (yyvsp[-1].node)->val.u.cval->imag;
		mpmovecflt(&(yyvsp[-1].node)->val.u.cval->imag, 0.0);
		(yyval.node) = nodcplxlit((yyvsp[-3].node)->val, (yyvsp[-1].node)->val);
	}
#line 4895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2203 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2207 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2213 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2217 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2223 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2227 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4943 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4947 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2231 "go.y" /* yacc.c:1906  */


static void
fixlbrace(int lbr)
{
	// If the opening brace was an LBODY,
	// set up for another one now that we're done.
	// See comment in lex.c about loophack.
	if(lbr == LBODY)
		loophack = 1;
}

