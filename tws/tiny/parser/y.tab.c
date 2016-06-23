/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "code.y" /* yacc.c:339  */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <DLists.h>
#include <Tokenizer.h>
#include <Trees.h>

extern TREENODE *root;
typedef struct {
    DNODE mynode;
    TREENODE *nodeptr;
} T_NODE;


#line 82 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    END = 259,
    UPTO = 260,
    VAR = 261,
    IDENTIFIER = 262,
    CHR = 263,
    POOL = 264,
    IF = 265,
    FUNCTION = 266,
    READ = 267,
    REPEAT = 268,
    RANGE = 269,
    ELSE = 270,
    RETURN = 271,
    UNTIL = 272,
    FOR = 273,
    THEN = 274,
    SWAP = 275,
    OF = 276,
    NE = 277,
    CHAR = 278,
    MOD = 279,
    GT = 280,
    CASE = 281,
    WHILE = 282,
    OUTPUT = 283,
    EQ = 284,
    PROCEDURE = 285,
    CONST = 286,
    GTE = 287,
    PRED = 288,
    NOT = 289,
    DO = 290,
    BEGINX = 291,
    INTEGER_NUM = 292,
    ORD = 293,
    AND = 294,
    EOFX = 295,
    EXP = 296,
    LTE = 297,
    LOOP = 298,
    SUCC = 299,
    TYPE = 300,
    OR = 301,
    LT = 302,
    OTHERWISE = 303,
    EXITX = 304,
    ASSIGNMENT = 305,
    PROGRAM = 306,
    DOWNTO = 307
  };
#endif
/* Tokens.  */
#define STRING 258
#define END 259
#define UPTO 260
#define VAR 261
#define IDENTIFIER 262
#define CHR 263
#define POOL 264
#define IF 265
#define FUNCTION 266
#define READ 267
#define REPEAT 268
#define RANGE 269
#define ELSE 270
#define RETURN 271
#define UNTIL 272
#define FOR 273
#define THEN 274
#define SWAP 275
#define OF 276
#define NE 277
#define CHAR 278
#define MOD 279
#define GT 280
#define CASE 281
#define WHILE 282
#define OUTPUT 283
#define EQ 284
#define PROCEDURE 285
#define CONST 286
#define GTE 287
#define PRED 288
#define NOT 289
#define DO 290
#define BEGINX 291
#define INTEGER_NUM 292
#define ORD 293
#define AND 294
#define EOFX 295
#define EXP 296
#define LTE 297
#define LOOP 298
#define SUCC 299
#define TYPE 300
#define OR 301
#define LT 302
#define OTHERWISE 303
#define EXITX 304
#define ASSIGNMENT 305
#define PROGRAM 306
#define DOWNTO 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "code.y" /* yacc.c:355  */

   TOKEN_INFO info;
   DLIST dlist;

#line 231 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,    58,    61,    59,    56,    60,    54,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    55,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   181,   218,   239,   251,   268,   293,   308,
     325,   362,   383,   395,   412,   453,   465,   477,   491,   528,
     549,   561,   578,   619,   644,   656,   673,   697,   718,   730,
     747,   759,   773,   832,   888,   913,   925,   939,   954,   971,
     983,  1000,  1038,  1061,  1078,  1117,  1156,  1192,  1245,  1295,
    1331,  1367,  1400,  1478,  1556,  1606,  1642,  1668,  1704,  1717,
    1738,  1750,  1767,  1779,  1796,  1811,  1828,  1848,  1873,  1896,
    1913,  1939,  1957,  1965,  1990,  2002,  2019,  2044,  2067,  2092,
    2120,  2159,  2173,  2185,  2197,  2211,  2253,  2261,  2272,  2284,
    2323,  2362,  2401,  2440,  2479,  2520,  2532,  2558,  2584,  2625,
    2637,  2663,  2689,  2728,  2769,  2792,  2815,  2851,  2865,  2904,
    2918,  2951,  2963,  2975,  2987,  3023,  3059,  3095,  3131,  3157,
    3171,  3183,  3200,  3235,  3270,  3305
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "END", "UPTO", "VAR",
  "IDENTIFIER", "CHR", "POOL", "IF", "FUNCTION", "READ", "REPEAT", "RANGE",
  "ELSE", "RETURN", "UNTIL", "FOR", "THEN", "SWAP", "OF", "NE", "CHAR",
  "MOD", "GT", "CASE", "WHILE", "OUTPUT", "EQ", "PROCEDURE", "CONST",
  "GTE", "PRED", "NOT", "DO", "BEGINX", "INTEGER_NUM", "ORD", "AND",
  "EOFX", "EXP", "LTE", "LOOP", "SUCC", "TYPE", "OR", "LT", "OTHERWISE",
  "EXITX", "ASSIGNMENT", "PROGRAM", "DOWNTO", "':'", "'.'", "';'", "','",
  "'('", "')'", "'+'", "'-'", "'*'", "'/'", "$accept", "Tiny", "Dclns",
  "Dclns_1", "Dcln", "Dcln_1", "Consts", "Consts_1", "Con", "Constants",
  "Enums", "Enums_1", "Typ", "Literals", "Literals_1", "Subprogs",
  "Subprogs_1", "Subroutines", "Function", "Procedure", "Params",
  "Params_1", "Params_1_1_1", "Params_1_1", "Body", "Body_1", "Statement",
  "Statement_1_1_1_1_1_1_1", "Statement_1_1_1_1_1_1",
  "Statement_1_1_1_1_1", "Statement_1_1_1_1_1_1_1_1", "Statement_1_1_1_1",
  "Statement_1_1_1", "Statement_1_1", "Statement_1", "MName",
  "MExpression", "CaseClause", "Cl", "RangeStuf", "OtherwiseClause",
  "OtherwiseClause_1", "Expression", "Term", "Primary", "Secondary",
  "Tertiary", "A", "A_1", "Name", "Ints", "Chrs", "Strs", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    58,    46,    59,    44,    40,    41,    43,
      45,    42,    47
};
# endif

#define YYPACT_NINF -216

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-216)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -25,    23,    31,  -216,   -14,  -216,    21,    23,    37,  -216,
      38,    83,    23,   107,    23,    13,  -216,    60,    89,    23,
      40,  -216,  -216,  -216,  -216,  -216,  -216,  -216,    23,    62,
    -216,    71,  -216,   -31,    23,    23,    93,  -216,    40,  -216,
    -216,  -216,    23,  -216,    23,    23,    23,    75,    76,   251,
      23,  -216,  -216,    27,  -216,  -216,  -216,    23,    23,   197,
      85,   251,    92,    23,   197,   197,    96,   251,  -216,  -216,
    -216,     3,    57,   101,    23,  -216,     8,   100,  -216,  -216,
    -216,   103,   105,   106,   197,   108,  -216,   109,   197,   197,
     197,   131,    42,    29,  -216,  -216,   123,   112,  -216,  -216,
      23,    -9,  -216,   197,   120,   150,   138,    97,     0,  -216,
    -216,   251,    23,   197,   197,  -216,  -216,    23,  -216,   121,
     124,   197,   197,  -216,   197,   197,   117,  -216,  -216,   251,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   170,   197,  -216,    50,  -216,   197,   251,
     118,   197,    13,   251,  -216,  -216,    69,  -216,  -216,  -216,
     251,  -216,  -216,  -216,  -216,    80,  -216,  -216,    23,    21,
     122,   125,   126,   127,  -216,   166,    63,    63,    63,    63,
      63,    29,    63,    29,    29,  -216,  -216,  -216,  -216,  -216,
      87,  -216,    23,  -216,  -216,  -216,  -216,     7,  -216,    17,
     137,   180,  -216,  -216,  -216,  -216,    97,  -216,  -216,   197,
    -216,   142,    37,  -216,  -216,  -216,  -216,   251,  -216,   197,
    -216,  -216,   197,   197,  -216,   251,  -216,  -216,   195,   251,
      13,  -216,  -216,    21,   107,  -216,  -216,   165,   167,   146,
    -216,   151,  -216,    37,    93,   251,   251,  -216,  -216,  -216,
     107,    23,  -216,  -216,    93,   156,    23,  -216,   157,  -216
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   122,     0,     1,    11,     0,    19,    10,
       0,     0,     0,     4,    12,     0,    18,     0,     0,     0,
      27,    13,   124,   123,    14,    17,    16,    15,    20,     0,
       3,     0,     7,     0,     0,     0,     0,    26,    28,    30,
      31,    21,     0,    22,     5,     0,     0,     0,     0,    59,
       0,    29,    23,     0,     6,     8,     9,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,    59,    51,    58,
      41,     0,     0,     0,     0,    24,    39,     0,    34,    36,
      35,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,    88,    95,    99,   107,   109,   111,   112,   113,
       0,     0,    49,     0,     0,     0,     0,     0,     0,    50,
      42,    59,     0,     0,     0,     2,    25,     0,    37,     0,
       0,     0,     0,   106,     0,     0,     0,   105,   104,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,    76,     0,    59,
       0,     0,     0,    59,   125,    46,     0,    77,    78,    68,
      59,    43,    45,    44,    56,     0,    38,    40,     0,    11,
       0,     0,     0,     0,   119,    72,    91,    94,    90,    92,
      89,    98,    93,    96,    97,   103,   102,   100,   101,   108,
       0,   118,     0,    62,    70,    71,    57,     0,    54,     0,
       0,    81,    82,    84,    83,    48,     0,    74,    69,     0,
      60,     0,    19,   117,   115,   116,   114,    59,    47,     0,
     120,    63,     0,     0,    66,    59,    65,    64,     0,    59,
       0,    75,    61,    11,     4,    73,   121,     0,     0,    86,
      67,     0,    80,    19,     0,    59,    59,    87,    85,    79,
       4,     0,    52,    53,     0,     0,     0,    33,     0,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -215,   169,    -2,   175,  -164,   201,  -216,  -216,
    -196,   194,  -216,  -216,   149,  -216,   187,  -216,  -216,  -216,
     168,   160,   115,   116,   -35,   128,   -57,    33,    46,    41,
    -216,    86,    94,  -216,    43,  -216,  -216,  -216,  -216,    18,
    -216,  -216,   -27,   140,     9,   -61,   104,  -216,    32,    -1,
     -13,   -12,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    20,    30,    76,    32,     8,     9,    10,    24,
      13,    16,    17,    43,    52,    36,    37,    38,    39,    40,
      77,    78,    79,    80,    69,    70,    71,   164,   145,   198,
     227,   109,   102,   218,   155,   146,   156,   199,   200,   201,
     228,   248,   157,    92,    93,    94,    95,    96,   191,    97,
      98,    99,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
       4,    50,    26,    27,   101,   212,    11,   110,   148,   159,
     108,    18,   222,    11,    25,     3,   234,    31,    33,   244,
       3,   224,    45,   123,     3,    46,     1,    18,   127,   128,
       3,     5,    91,    47,    48,   254,    22,   105,   106,     6,
      22,    53,    31,    33,    55,    33,   149,   250,    72,    73,
      23,    34,     7,   139,    23,   160,    33,    33,   111,   223,
      72,   126,   104,   117,   130,   225,    72,   131,   140,   243,
      35,   132,   175,    53,   133,    33,   150,   112,   185,   186,
     187,   188,    12,    74,   134,    75,   163,   165,   135,   136,
     141,   142,   101,    14,   170,   171,   205,   172,   173,   147,
     154,   137,   138,   108,     3,    82,   192,   113,   193,   135,
      72,   162,    15,    19,   114,    28,    33,   190,    29,    42,
      22,   194,   137,   138,   197,   206,    44,   207,    72,    49,
      83,    84,    57,    58,    23,    85,   209,    86,   210,   203,
     204,    87,   100,   219,   181,   220,   183,   184,    72,   103,
     129,   202,    72,   107,    88,   115,    89,    90,   119,    72,
     235,   120,   121,   122,   143,   124,   125,   211,   239,   144,
     151,   152,   241,   153,   168,   174,   196,     3,    82,   169,
     213,   217,   165,   214,   215,   216,   203,   204,   252,   253,
     229,   147,   190,    22,   230,   237,   238,   233,   202,   240,
     245,   247,   246,    83,     3,    82,   249,    23,    85,   251,
      86,   257,   259,    54,    87,    21,    72,   203,   204,   256,
      22,    56,    41,   116,    72,    51,    81,    88,    72,   202,
      83,    84,   166,   167,    23,    85,   118,    86,   221,   161,
     226,    87,   232,   195,    72,    72,   208,   189,   242,   231,
     255,   236,     0,     0,    88,   258,    89,    90,     3,     0,
       0,    59,     0,    60,    61,     0,     0,    62,     0,    63,
     176,   177,   178,   179,   180,     0,   182,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,     0,
      68
};

static const yytype_int16 yycheck[] =
{
       1,    36,    15,    15,    61,   169,     7,     4,    17,     9,
      67,    12,     5,    14,    15,     7,   212,    19,    19,   234,
       7,     4,    53,    84,     7,    56,    51,    28,    89,    90,
       7,     0,    59,    34,    35,   250,    23,    64,    65,    53,
      23,    42,    44,    44,    45,    46,    55,   243,    49,    50,
      37,    11,    31,    24,    37,    55,    57,    58,    55,    52,
      61,    88,    63,    55,    22,    48,    67,    25,    39,   233,
      30,    29,   129,    74,    32,    76,   103,    20,   139,   140,
     141,   142,    45,    56,    42,    58,   113,   114,    46,    47,
      61,    62,   149,    55,   121,   122,   153,   124,   125,   100,
       3,    59,    60,   160,     7,     8,    56,    50,    58,    46,
     111,   112,    29,     6,    57,    55,   117,   144,    29,    57,
      23,   148,    59,    60,   151,    56,    55,    58,   129,    36,
      33,    34,    57,    57,    37,    38,    56,    40,    58,   152,
     152,    44,    57,    56,   135,    58,   137,   138,   149,    57,
      19,   152,   153,    57,    57,    54,    59,    60,    58,   160,
     217,    58,    57,    57,    41,    57,    57,   168,   225,    57,
      50,    21,   229,    35,    53,    58,    58,     7,     8,    55,
      58,    15,   209,    58,    58,    58,   199,   199,   245,   246,
      53,   192,   219,    23,    14,   222,   223,    55,   199,     4,
      35,    55,    35,    33,     7,     8,    55,    37,    38,   244,
      40,    55,    55,    44,    44,    14,   217,   230,   230,   254,
      23,    46,    28,    74,   225,    38,    58,    57,   229,   230,
      33,    34,   117,   117,    37,    38,    76,    40,   192,   111,
     199,    44,   209,   149,   245,   246,   160,   143,   230,   206,
     251,   219,    -1,    -1,    57,   256,    59,    60,     7,    -1,
      -1,    10,    -1,    12,    13,    -1,    -1,    16,    -1,    18,
     130,   131,   132,   133,   134,    -1,   136,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    64,     7,   112,     0,    53,    31,    69,    70,
      71,   112,    45,    73,    55,    29,    74,    75,   112,     6,
      65,    70,    23,    37,    72,   112,   113,   114,    55,    29,
      66,    67,    68,   112,    11,    30,    78,    79,    80,    81,
      82,    74,    57,    76,    55,    53,    56,   112,   112,    36,
      87,    79,    77,   112,    66,   112,    68,    57,    57,    10,
      12,    13,    16,    18,    26,    27,    28,    43,    49,    87,
      88,    89,   112,   112,    56,    58,    67,    83,    84,    85,
      86,    83,     8,    33,    34,    38,    40,    44,    57,    59,
      60,   105,   106,   107,   108,   109,   110,   112,   113,   114,
      57,    89,    95,    57,   112,   105,   105,    57,    89,    94,
       4,    55,    20,    50,    57,    54,    77,    55,    84,    58,
      58,    57,    57,   108,    57,    57,   105,   108,   108,    19,
      22,    25,    29,    32,    42,    46,    47,    59,    60,    24,
      39,    61,    62,    41,    57,    91,    98,   112,    17,    55,
     105,    50,    21,    35,     3,    97,    99,   105,   115,     9,
      55,    88,   112,   105,    90,   105,    85,    86,    53,    55,
     105,   105,   105,   105,    58,    89,   106,   106,   106,   106,
     106,   107,   106,   107,   107,   108,   108,   108,   108,   109,
     105,   111,    56,    58,   105,    95,    58,   105,    92,   100,
     101,   102,   112,   113,   114,    89,    56,    58,    94,    56,
      58,   112,    69,    58,    58,    58,    58,    15,    96,    56,
      58,    91,     5,    52,     4,    48,    92,    93,   103,    53,
      14,    97,    90,    55,    73,    89,   111,   105,   105,    89,
       4,    89,   102,    69,    65,    35,    35,    55,   104,    55,
      73,    87,    89,    89,    65,   112,    87,    55,   112,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    67,    68,    68,
      69,    69,    70,    70,    71,    72,    72,    72,    73,    73,
      74,    74,    75,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    82,    83,    84,    84,    85,    85,    86,
      86,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    99,    99,   100,
     101,   101,   102,   102,   102,   103,   104,   104,   105,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   107,
     107,   107,   107,   107,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   113,   114,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     2,     0,     2,     3,     1,     3,     3,
       2,     0,     2,     3,     3,     1,     1,     1,     2,     0,
       2,     3,     3,     2,     2,     3,     1,     0,     1,     2,
       1,     1,    14,    12,     1,     1,     1,     2,     3,     1,
       3,     2,     2,     3,     3,     3,     3,     5,     4,     2,
       2,     1,     8,     8,     4,     3,     3,     4,     1,     0,
       2,     3,     2,     3,     2,     2,     1,     2,     2,     3,
       3,     3,     0,     2,     2,     3,     1,     1,     1,     4,
       3,     1,     1,     1,     1,     3,     0,     1,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     3,     2,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     3,     3,
       2,     3,     1,     1,     1,     1
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
int yychar;

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
    int yystate;
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
#line 125 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-9].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-9].info).string,
		                                TREETAG_LINE,(yyvsp[-9].info).line,
		                                TREETAG_COLUMN,(yyvsp[-9].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-8].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-8].dlist)));

		while (DCount(&(yyvsp[-6].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-6].dlist)));

		while (DCount(&(yyvsp[-5].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-5].dlist)));

		while (DCount(&(yyvsp[-4].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-4].dlist)));

		while (DCount(&(yyvsp[-3].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-3].dlist)));

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"program",
		                                TREETAG_LINE,(yyvsp[-9].info).line,
		                                TREETAG_COLUMN,(yyvsp[-9].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		t->mynode = *(DHead(&r));
		root = t->nodeptr;

             }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 182 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 218 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 240 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 252 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 269 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"var",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 294 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 309 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 326 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"consts",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 362 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"consts",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 384 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 396 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 413 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"const",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 454 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 466 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 478 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 492 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"types",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 528 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"types",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 550 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 562 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 579 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 620 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"lit",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 645 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 657 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 674 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"subprogs",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 697 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"subprogs",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 719 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 731 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 748 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 760 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 774 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-13].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-13].info).string,
		                                TREETAG_LINE,(yyvsp[-13].info).line,
		                                TREETAG_COLUMN,(yyvsp[-13].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-12].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-12].dlist)));

		while (DCount(&(yyvsp[-10].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-10].dlist)));

		while (DCount(&(yyvsp[-7].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-7].dlist)));

		while (DCount(&(yyvsp[-5].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-5].dlist)));

		while (DCount(&(yyvsp[-4].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-4].dlist)));

		while (DCount(&(yyvsp[-3].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-3].dlist)));

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"function",
		                                TREETAG_LINE,(yyvsp[-13].info).line,
		                                TREETAG_COLUMN,(yyvsp[-13].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 833 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-11].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-11].info).string,
		                                TREETAG_LINE,(yyvsp[-11].info).line,
		                                TREETAG_COLUMN,(yyvsp[-11].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-10].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-10].dlist)));

		while (DCount(&(yyvsp[-8].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-8].dlist)));

		while (DCount(&(yyvsp[-5].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-5].dlist)));

		while (DCount(&(yyvsp[-4].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-4].dlist)));

		while (DCount(&(yyvsp[-3].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-3].dlist)));

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"procedure",
		                                TREETAG_LINE,(yyvsp[-11].info).line,
		                                TREETAG_COLUMN,(yyvsp[-11].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 889 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"params",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 914 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 926 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 940 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 955 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 972 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 984 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1001 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"block",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1039 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 1062 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1079 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"assign",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1118 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"swap",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1157 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-2].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-2].info).string,
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"output",
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 1193 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-4].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-4].info).string,
		                                TREETAG_LINE,(yyvsp[-4].info).line,
		                                TREETAG_COLUMN,(yyvsp[-4].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-3].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-3].dlist)));

		if ((yyvsp[-2].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-2].info).string,
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"if",
		                                TREETAG_LINE,(yyvsp[-4].info).line,
		                                TREETAG_COLUMN,(yyvsp[-4].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 1246 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"while",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1296 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"repeat",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1332 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"loop",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1368 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"exit",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1401 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-7].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-7].info).string,
		                                TREETAG_LINE,(yyvsp[-7].info).line,
		                                TREETAG_COLUMN,(yyvsp[-7].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-6].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-6].dlist)));

		if ((yyvsp[-5].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-5].info).string,
		                                TREETAG_LINE,(yyvsp[-5].info).line,
		                                TREETAG_COLUMN,(yyvsp[-5].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-4].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-4].dlist)));

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"upto",
		                                TREETAG_LINE,(yyvsp[-7].info).line,
		                                TREETAG_COLUMN,(yyvsp[-7].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1479 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-7].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-7].info).string,
		                                TREETAG_LINE,(yyvsp[-7].info).line,
		                                TREETAG_COLUMN,(yyvsp[-7].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-6].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-6].dlist)));

		if ((yyvsp[-5].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-5].info).string,
		                                TREETAG_LINE,(yyvsp[-5].info).line,
		                                TREETAG_COLUMN,(yyvsp[-5].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-4].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-4].dlist)));

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"downto",
		                                TREETAG_LINE,(yyvsp[-7].info).line,
		                                TREETAG_COLUMN,(yyvsp[-7].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1557 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1607 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-2].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-2].info).string,
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"read",
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1643 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"call",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1669 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"return",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1705 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1717 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<null>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1739 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 3323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1751 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1768 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 3358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1780 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1797 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1812 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1829 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
#line 3439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1849 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1874 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
#line 3493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1897 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1914 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1940 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1957 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
#line 3574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1966 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1991 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 3617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2003 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2020 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type_disambiguation",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 2045 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type_disambiguation",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2068 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type_disambiguation",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2093 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-3].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-3].dlist)));

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case_clause",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2121 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"range",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2160 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 2174 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 2186 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 2198 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2212 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-2].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-2].info).string,
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"otherwise",
		                                TREETAG_LINE,(yyvsp[-2].info).line,
		                                TREETAG_COLUMN,(yyvsp[-2].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2253 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
#line 3910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 2262 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
#line 3923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 2273 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 2285 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<=",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 3982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 2324 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"=",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 2363 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<>",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2402 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">=",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2441 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 2480 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2521 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 4213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2533 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2559 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 2585 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"or",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 2626 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 4332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 2638 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"*",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 2664 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"/",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 2690 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"and",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 2729 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"mod",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 2770 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 2793 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 2816 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"not",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 2852 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 4588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 2866 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		if ((yyvsp[-1].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-1].info).string,
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"exp",
		                                TREETAG_LINE,(yyvsp[-1].info).line,
		                                TREETAG_COLUMN,(yyvsp[-1].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 2905 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 4647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 2919 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"eof",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 2952 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 4700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 2964 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 4716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 2976 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 4732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 2988 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"succ",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 3024 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"pred",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 3060 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"ord",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 3096 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[-3].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[-3].info).string,
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"chr",
		                                TREETAG_LINE,(yyvsp[-3].info).line,
		                                TREETAG_COLUMN,(yyvsp[-3].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 3132 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"call",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 4922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 3158 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 4938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 3172 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-1].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-1].dlist)));

		(yyval.dlist) = r;

             }
#line 4954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 3184 "code.y" /* yacc.c:1646  */
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[-2].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[-2].dlist)));

		while (DCount(&(yyvsp[0].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[0].dlist)));

		(yyval.dlist) = r;

             }
#line 4973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 3201 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<identifier>",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 5010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 3236 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 5047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 3271 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<char>",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 5084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 3306 "code.y" /* yacc.c:1646  */
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[0].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[0].info).string,
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<string>",
		                                TREETAG_LINE,(yyvsp[0].info).line,
		                                TREETAG_COLUMN,(yyvsp[0].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
#line 5121 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5125 "y.tab.c" /* yacc.c:1646  */
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
        char const *yymsgp = YY_("syntax error");
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
