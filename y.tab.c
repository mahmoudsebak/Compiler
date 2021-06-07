
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "grammar.y"

void yyerror (char *s);
int yylex();
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <typeinfo>
#include "node.h"
#include "symbol_table_tree.h"
#include "constants.h"
#include "generate_quadrables.h"


SymbolTableTree* symbolTable = new SymbolTableTree();
void insert(char id, int kind, int type, int modifier);
struct nodeType* intNode(int value);
struct nodeType* charNode(char value);
struct nodeType* doubleNode(double value);
struct nodeType* boolNode(bool value);
struct nodeType* idNode(char id);
nodeType *opNode(int op, int nops, ...);
void lookup(char id);
void isInitialized(char id);
bool validTypes(int op, nodeType* op1, nodeType* op2);
bool isType(int t1, int t2, int type);



/* Line 189 of yacc.c  */
#line 103 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     CHARACTER = 259,
     IDENTIFIER = 260,
     DOUBLE_VALUE = 261,
     BOOLEAN = 262,
     IF = 263,
     ELSE = 264,
     WHILE = 265,
     DO = 266,
     FOR = 267,
     SWITCH = 268,
     CASE = 269,
     BREAK = 270,
     DEFAULT = 271,
     RETURN = 272,
     VOID = 273,
     INT = 274,
     CHAR = 275,
     BOOL = 276,
     DOUBLE = 277,
     CONST = 278,
     OR = 279,
     AND = 280,
     NOT = 281,
     NE = 282,
     EQ = 283,
     LE = 284,
     GE = 285
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define CHARACTER 259
#define IDENTIFIER 260
#define DOUBLE_VALUE 261
#define BOOLEAN 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define DO 266
#define FOR 267
#define SWITCH 268
#define CASE 269
#define BREAK 270
#define DEFAULT 271
#define RETURN 272
#define VOID 273
#define INT 274
#define CHAR 275
#define BOOL 276
#define DOUBLE 277
#define CONST 278
#define OR 279
#define AND 280
#define NOT 281
#define NE 282
#define EQ 283
#define LE 284
#define GE 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 31 "grammar.y"

    int iValue;
	double dValue;
    char cValue;
	bool bValue;
	struct nodeType* node_type;



/* Line 214 of yacc.c  */
#line 209 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 221 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   643

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      37,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    44,     2,     2,
      42,    43,    35,    33,    46,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    40,
      28,    41,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
      25,    26,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    10,    12,    15,    21,    26,
      30,    37,    49,    57,    65,    75,    87,    91,   100,   104,
     108,   112,   116,   120,   124,   126,   129,   131,   135,   140,
     141,   143,   145,   147,   149,   151,   154,   156,   158,   160,
     163,   165,   169,   173,   177,   181,   185,   189,   193,   197,
     201,   205,   209,   213,   217,   221,   226,   228,   229,   231,
     234,   235,   239,   240,   249,   258,   267,   274,   281,   288,
     290,   293,   302,   311,   314,   316,   320,   321,   323,   327
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    48,    51,    37,    -1,    -1,    38,    -1,
      39,    -1,    54,    40,    -1,    53,     5,    41,    54,    40,
      -1,     5,    41,    54,    40,    -1,    53,     5,    40,    -1,
      23,    53,     5,    41,    54,    40,    -1,     8,    42,    54,
      43,    49,    51,    50,     9,    49,    51,    50,    -1,     8,
      42,    54,    43,    49,    51,    50,    -1,    10,    42,    54,
      43,    49,    51,    50,    -1,    11,    49,    51,    50,    10,
      42,    54,    43,    40,    -1,    12,    42,    52,    40,    55,
      40,    52,    43,    49,    51,    50,    -1,    49,    56,    50,
      -1,    13,    42,     5,    43,    49,    59,    57,    50,    -1,
      17,     5,    40,    -1,    17,    55,    40,    -1,    17,     3,
      40,    -1,    17,     4,    40,    -1,    17,     6,    40,    -1,
      17,     7,    40,    -1,    60,    -1,    51,    51,    -1,    40,
      -1,     5,    41,    54,    -1,    53,     5,    41,    54,    -1,
      -1,    19,    -1,    20,    -1,    22,    -1,    21,    -1,     3,
      -1,    34,     3,    -1,     4,    -1,     7,    -1,     6,    -1,
      34,     6,    -1,     5,    -1,    54,    33,    54,    -1,    54,
      34,    54,    -1,    54,    35,    54,    -1,    54,    36,    54,
      -1,    54,    44,    54,    -1,    54,    25,    54,    -1,    54,
      24,    54,    -1,    54,    27,    54,    -1,    54,    28,    54,
      -1,    54,    31,    54,    -1,    54,    32,    54,    -1,    54,
      30,    54,    -1,    54,    29,    54,    -1,    42,    54,    43,
      -1,     5,    42,    63,    43,    -1,    54,    -1,    -1,    51,
      -1,    56,    51,    -1,    -1,    16,    45,    56,    -1,    -1,
      14,    42,     3,    43,    45,    56,    15,    40,    -1,    14,
      42,     6,    43,    45,    56,    15,    40,    -1,    14,    42,
       4,    43,    45,    56,    15,    40,    -1,    14,    42,     3,
      43,    45,    56,    -1,    14,    42,     6,    43,    45,    56,
      -1,    14,    42,     4,    43,    45,    56,    -1,    58,    -1,
      59,    58,    -1,    18,     5,    42,    62,    43,    49,    56,
      50,    -1,    53,     5,    42,    62,    43,    49,    56,    50,
      -1,    53,     5,    -1,    61,    -1,    62,    46,    61,    -1,
      -1,    54,    -1,    63,    46,    54,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    63,    67,    71,    75,    76,    81,    87,
      91,    96,    97,    98,    99,   100,   101,   102,   108,   114,
     117,   120,   121,   122,   123,   124,   125,   129,   135,   140,
     144,   145,   146,   147,   151,   152,   153,   154,   155,   156,
     157,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   180,   181,   185,   186,
     187,   192,   193,   197,   198,   199,   200,   201,   202,   206,
     207,   211,   216,   224,   230,   231,   232,   236,   237,   238
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "CHARACTER", "IDENTIFIER",
  "DOUBLE_VALUE", "BOOLEAN", "IF", "ELSE", "WHILE", "DO", "FOR", "SWITCH",
  "CASE", "BREAK", "DEFAULT", "RETURN", "VOID", "INT", "CHAR", "BOOL",
  "DOUBLE", "CONST", "OR", "AND", "NOT", "'>'", "'<'", "NE", "EQ", "LE",
  "GE", "'+'", "'-'", "'*'", "'/'", "'\\n'", "'{'", "'}'", "';'", "'='",
  "'('", "')'", "'%'", "':'", "','", "$accept", "program", "open_bracket",
  "closed_bracket", "stmt", "for_statement", "data_type", "expr",
  "opt_expr", "stmt_list", "default_stmt", "case_stmt", "case_list",
  "function_stmt", "paramter", "paramter_list", "identifier_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    62,    60,   282,
     283,   284,   285,    43,    45,    42,    47,    10,   123,   125,
      59,    61,    40,    41,    37,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    52,    52,    52,
      53,    53,    53,    53,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    56,    56,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    61,    62,    62,    62,    63,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     2,     5,     4,     3,
       6,    11,     7,     7,     9,    11,     3,     8,     3,     3,
       3,     3,     3,     3,     1,     2,     1,     3,     4,     0,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     1,     0,     1,     2,
       0,     3,     0,     8,     8,     8,     6,     6,     6,     1,
       2,     8,     8,     2,     1,     3,     0,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    34,    36,    40,    38,    37,     0,     0,
       0,     0,     0,    57,     0,    30,    31,    33,    32,     0,
       0,     4,    26,     0,    60,     0,     0,     0,    24,     0,
      79,     0,     0,     0,    29,     0,    34,    36,    40,    38,
      37,    56,     0,     0,     0,    35,    39,    40,     0,    58,
       0,     2,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      18,    22,    23,    19,    76,     0,    54,     5,    16,    59,
       9,     0,    76,    47,    46,    48,    49,    53,    52,    50,
      51,    41,    42,    43,    44,    45,     8,    55,     0,     0,
       0,     0,     0,    57,     0,     0,     0,    74,     0,     0,
       0,     0,    78,     0,     0,     0,    27,     0,     0,     0,
      73,     0,     0,     0,     7,     0,     0,     0,     0,    29,
      28,     0,    69,    62,    60,    75,    10,    60,    12,    13,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    17,    71,    72,     0,    14,
       0,     0,     0,     0,    61,     0,     0,    60,    60,    60,
      11,    15,    66,    68,    67,     0,     0,     0,    63,    65,
      64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    24,    88,    52,    75,    26,    27,    42,    50,
     154,   142,   143,    28,   117,   118,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,   184,  -100,  -100,  -100,     5,  -100,  -100,   -40,   -25,
     -13,    21,    29,     1,    31,  -100,  -100,  -100,  -100,    48,
      27,  -100,  -100,     8,   424,   224,    35,   443,  -100,     8,
       8,     8,     8,   424,    77,    72,    49,    54,    41,    60,
      73,   599,    75,    78,    86,  -100,  -100,    85,   461,   424,
     264,  -100,   424,    89,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,  -100,     8,   482,   599,
     -12,   500,   521,   264,    91,    79,   128,    93,  -100,  -100,
    -100,  -100,  -100,  -100,    48,    96,  -100,  -100,  -100,   424,
    -100,     8,    48,   599,   599,    51,    51,    51,    51,    51,
      51,    82,    82,    -6,    -6,   599,  -100,  -100,     8,   -13,
     -13,   124,     8,     8,    97,   -13,   134,  -100,    -2,     8,
     542,    58,   599,   424,   424,    98,   599,   101,     8,   130,
    -100,   -13,    48,   560,  -100,   -13,   264,   264,     8,    77,
     599,   100,  -100,    23,   424,  -100,  -100,   424,   136,  -100,
     578,   104,    18,   103,   110,  -100,   264,   264,   -13,   112,
     -13,   107,   111,   114,   424,  -100,  -100,  -100,   424,  -100,
     424,   113,   115,   116,   424,   264,   264,   424,   424,   424,
    -100,  -100,   304,   344,   384,   119,   122,   125,  -100,  -100,
    -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,    -7,   -64,    -1,    25,   -18,    -3,    53,   -99,
    -100,    28,  -100,  -100,    36,    80,  -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      25,    44,    31,    33,    36,    37,    38,    39,    40,   111,
      41,     3,     4,    47,     6,     7,    76,    32,    54,    55,
      48,   161,   162,    49,   163,    21,    68,    69,    71,    72,
      45,   107,    73,    46,   108,    20,    43,   141,    67,   153,
      53,   131,    20,    23,   132,   156,    29,    30,   157,    89,
      23,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    34,   105,   174,   116,    15,    16,    17,
      18,    35,   148,   149,   116,    54,    55,    77,   182,   183,
     184,    80,    74,    30,    62,    63,    64,    65,   120,    78,
     165,    85,   166,   167,    79,    67,    15,    16,    17,    18,
      81,   135,   123,   124,   132,   122,    54,    55,   129,   126,
      41,   180,   181,    82,   116,    83,   133,    64,    65,   113,
      84,    76,   136,   137,   144,   140,    67,    30,   147,    90,
      91,    92,   112,   114,   125,   150,   115,   119,   128,   130,
     138,   139,   152,    49,   141,   158,    49,   160,   164,    87,
     171,   168,   169,   170,   172,    89,    89,   173,   177,   188,
     178,   179,   189,    49,   151,   190,   127,   175,   145,   176,
       0,   155,   121,    89,     0,     0,    49,    49,    49,     0,
       0,    89,    89,    89,     2,     0,     0,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,    51,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,    87,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,   185,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,   186,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,   187,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,    54,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,    66,     0,    54,    55,    67,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,    86,    67,    54,    55,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,   106,     0,    54,    55,    67,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,   109,    67,    54,    55,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,   110,    67,    54,    55,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,   134,     0,    54,    55,    67,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,     0,     0,
     146,     0,    54,    55,    67,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,     0,
       0,   159,    67,    54,    55,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,    67
};

static const yytype_int16 yycheck[] =
{
       1,    19,    42,    10,     3,     4,     5,     6,     7,    73,
      13,     3,     4,     5,     6,     7,    34,    42,    24,    25,
      23,     3,     4,    24,     6,    38,    29,    30,    31,    32,
       3,    43,    33,     6,    46,    34,     5,    14,    44,    16,
       5,    43,    34,    42,    46,   144,    41,    42,   147,    50,
      42,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    42,    67,   164,    84,    19,    20,    21,
      22,    42,   136,   137,    92,    24,    25,     5,   177,   178,
     179,    40,     5,    42,    33,    34,    35,    36,    91,    40,
     154,     5,   156,   157,    40,    44,    19,    20,    21,    22,
      40,    43,   109,   110,    46,   108,    24,    25,   115,   112,
     113,   175,   176,    40,   132,    40,   119,    35,    36,    40,
      42,   139,   123,   124,   131,   128,    44,    42,   135,    40,
      41,    42,    41,     5,    10,   138,    43,    41,    41,     5,
      42,    40,    42,   144,    14,     9,   147,    43,    45,    39,
      43,   158,    40,   160,    43,   156,   157,    43,    45,    40,
      45,    45,    40,   164,   139,    40,   113,   168,   132,   170,
      -1,   143,    92,   174,    -1,    -1,   177,   178,   179,    -1,
      -1,   182,   183,   184,     0,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    38,    -1,    40,    -1,    42,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    42,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    -1,    42,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    40,    -1,    24,    25,    44,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    -1,    24,    25,    44,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    -1,    24,    25,    44,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      40,    -1,    24,    25,    44,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     3,     4,     5,     6,     7,     8,    10,
      11,    12,    13,    17,    18,    19,    20,    21,    22,    23,
      34,    38,    40,    42,    49,    51,    53,    54,    60,    41,
      42,    42,    42,    49,    42,    42,     3,     4,     5,     6,
       7,    54,    55,     5,    53,     3,     6,     5,    54,    51,
      56,    37,    51,     5,    24,    25,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    40,    44,    54,    54,
      63,    54,    54,    51,     5,    52,    53,     5,    40,    40,
      40,    40,    40,    40,    42,     5,    43,    39,    50,    51,
      40,    41,    42,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    40,    43,    46,    43,
      43,    50,    41,    40,     5,    43,    53,    61,    62,    41,
      54,    62,    54,    49,    49,    10,    54,    55,    41,    49,
       5,    43,    46,    54,    40,    43,    51,    51,    42,    40,
      54,    14,    58,    59,    49,    61,    40,    49,    50,    50,
      54,    52,    42,    16,    57,    58,    56,    56,     9,    43,
      43,     3,     4,     6,    45,    50,    50,    50,    49,    40,
      49,    43,    43,    43,    56,    51,    51,    45,    45,    45,
      50,    50,    56,    56,    56,    15,    15,    15,    40,    40,
      40
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 56 "grammar.y"
    { 
																			symbolTable->unusedVariables(); 
																			printf("\n\n\n************** Quadruples **************\n\n\n");
																			ex((yyvsp[(2) - (3)].node_type));
																			printf("\n\n\n************** Symbol Tables **************\n\n\n");
																			symbolTable->print();
																		 }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 67 "grammar.y"
    { symbolTable->create(); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 71 "grammar.y"
    { symbolTable->up(); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 75 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (2)].node_type); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 76 "grammar.y"
    {	
																			insert((yyvsp[(2) - (5)].cValue), KIND_VAR, (yyvsp[(1) - (5)].iValue), NO_MOD);
																			symbolTable->markInitialized((yyvsp[(2) - (5)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(2) - (5)].cValue)), (yyvsp[(4) - (5)].node_type));
																		}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 81 "grammar.y"
    { 
																			lookup((yyvsp[(1) - (4)].cValue));
																			symbolTable->markUsed((yyvsp[(1) - (4)].cValue));
																			symbolTable->markInitialized((yyvsp[(1) - (4)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(1) - (4)].cValue)), (yyvsp[(3) - (4)].node_type));
		 																}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 87 "grammar.y"
    {	 
																			(yyval.node_type) = opNode('r', 0);
																			insert((yyvsp[(2) - (3)].cValue), KIND_VAR, (yyvsp[(1) - (3)].iValue), NO_MOD);
																		}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 91 "grammar.y"
    {
																			insert((yyvsp[(3) - (6)].cValue), KIND_VAR, (yyvsp[(2) - (6)].iValue), MOD_CONST);
																			symbolTable->markInitialized((yyvsp[(3) - (6)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(3) - (6)].cValue)), (yyvsp[(5) - (6)].node_type));
																		}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 96 "grammar.y"
    { (yyval.node_type) = opNode(IF, 3, (yyvsp[(3) - (11)].node_type), (yyvsp[(6) - (11)].node_type), (yyvsp[(10) - (11)].node_type)); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 97 "grammar.y"
    { (yyval.node_type) = opNode(IF, 2, (yyvsp[(3) - (7)].node_type), (yyvsp[(6) - (7)].node_type)); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 98 "grammar.y"
    { (yyval.node_type) = opNode(WHILE, 2, (yyvsp[(3) - (7)].node_type), (yyvsp[(6) - (7)].node_type)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 99 "grammar.y"
    { (yyval.node_type) = opNode(DO, 2, (yyvsp[(3) - (9)].node_type), (yyvsp[(7) - (9)].node_type)); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 100 "grammar.y"
    { (yyval.node_type) = opNode(FOR, 4, (yyvsp[(3) - (11)].node_type), (yyvsp[(5) - (11)].node_type), (yyvsp[(7) - (11)].node_type), (yyvsp[(10) - (11)].node_type)); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 101 "grammar.y"
    { (yyval.node_type) = (yyvsp[(2) - (3)].node_type); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 102 "grammar.y"
    {
																								lookup((yyvsp[(3) - (8)].cValue));
																								isInitialized((yyvsp[(3) - (8)].cValue)); 
																								symbolTable->markUsed((yyvsp[(3) - (8)].cValue));
																								(yyval.node_type) = opNode(SWITCH, 3, idNode((yyvsp[(3) - (8)].cValue)), (yyvsp[(6) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																							}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 108 "grammar.y"
    {
																			lookup((yyvsp[(2) - (3)].cValue)); 
																			isInitialized((yyvsp[(2) - (3)].cValue));
																			symbolTable->markUsed((yyvsp[(2) - (3)].cValue));
																			(yyval.node_type) = opNode(RETURN, 1, idNode((yyvsp[(2) - (3)].cValue)));
																		}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 114 "grammar.y"
    {
																			(yyval.node_type) = opNode(RETURN, 1, (yyvsp[(2) - (3)].node_type)); 
																		}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 117 "grammar.y"
    { 
																			(yyval.node_type) = opNode(RETURN, 1, intNode((yyvsp[(2) - (3)].iValue)));
																		}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 120 "grammar.y"
    { (yyval.node_type) = opNode(RETURN, 1, charNode((yyvsp[(2) - (3)].cValue))); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 121 "grammar.y"
    { (yyval.node_type) = opNode(RETURN, 1, doubleNode((yyvsp[(2) - (3)].dValue))); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 122 "grammar.y"
    { (yyval.node_type) = opNode(RETURN, 1, boolNode((yyvsp[(2) - (3)].bValue))); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 123 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 124 "grammar.y"
    { (yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type)); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 125 "grammar.y"
    { (yyval.node_type) = opNode(';', 0); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 129 "grammar.y"
    { 
																			lookup((yyvsp[(1) - (3)].cValue));
																			symbolTable->markUsed((yyvsp[(1) - (3)].cValue));
																			symbolTable->markInitialized((yyvsp[(1) - (3)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(1) - (3)].cValue)), (yyvsp[(3) - (3)].node_type));
																		}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 135 "grammar.y"
    { 
																			insert((yyvsp[(2) - (4)].cValue), KIND_VAR, (yyvsp[(1) - (4)].iValue), NO_MOD);
																			symbolTable->markInitialized((yyvsp[(2) - (4)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(2) - (4)].cValue)), (yyvsp[(4) - (4)].node_type));
																		}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 140 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 144 "grammar.y"
    { (yyval.iValue) = TYPE_INT; }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 145 "grammar.y"
    { (yyval.iValue) = TYPE_CHAR; }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 146 "grammar.y"
    { (yyval.iValue) = TYPE_DOUBLE; }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 147 "grammar.y"
    { (yyval.iValue) = TYPE_BOOL; }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 151 "grammar.y"
    { (yyval.node_type) = intNode((yyvsp[(1) - (1)].iValue)); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 152 "grammar.y"
    { (yyval.node_type) = intNode(-1*(yyvsp[(2) - (2)].iValue)); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 153 "grammar.y"
    { (yyval.node_type) = charNode((yyvsp[(1) - (1)].cValue)); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 154 "grammar.y"
    { (yyval.node_type) = boolNode((yyvsp[(1) - (1)].bValue)); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 155 "grammar.y"
    { (yyval.node_type) = doubleNode((yyvsp[(1) - (1)].dValue)); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 156 "grammar.y"
    { (yyval.node_type) = doubleNode(-1*(yyvsp[(2) - (2)].dValue)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 157 "grammar.y"
    { 
																isInitialized((yyvsp[(1) - (1)].cValue));
																symbolTable->markUsed((yyvsp[(1) - (1)].cValue));
																(yyval.node_type) = idNode((yyvsp[(1) - (1)].cValue)); 
															}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 162 "grammar.y"
    { (yyval.node_type) = opNode('+', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 163 "grammar.y"
    { (yyval.node_type) = opNode('-', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type));  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 164 "grammar.y"
    { (yyval.node_type) = opNode('*', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 165 "grammar.y"
    { (yyval.node_type) = opNode('/', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 166 "grammar.y"
    { (yyval.node_type) = opNode('%', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 167 "grammar.y"
    { (yyval.node_type) = opNode(AND, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 168 "grammar.y"
    { (yyval.node_type) = opNode(OR, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 169 "grammar.y"
    { (yyval.node_type) = opNode('>', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 170 "grammar.y"
    { (yyval.node_type) = opNode('<', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 171 "grammar.y"
    { (yyval.node_type) = opNode(LE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 172 "grammar.y"
    { (yyval.node_type) = opNode(GE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 173 "grammar.y"
    { (yyval.node_type) = opNode(EQ, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 174 "grammar.y"
    { (yyval.node_type) = opNode(NE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 175 "grammar.y"
    { (yyval.node_type) = (yyvsp[(2) - (3)].node_type); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 176 "grammar.y"
    { (yyval.node_type) = opNode('c', 2, idNode((yyvsp[(1) - (4)].cValue)), (yyvsp[(3) - (4)].node_type));}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 180 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 181 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 185 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 186 "grammar.y"
    { (yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type)); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 187 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 192 "grammar.y"
    { (yyval.node_type) = opNode(DEFAULT, 1, (yyvsp[(3) - (3)].node_type));}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 193 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 197 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, intNode((yyvsp[(3) - (8)].iValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 198 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, doubleNode((yyvsp[(3) - (8)].dValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 199 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, charNode((yyvsp[(3) - (8)].cValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 200 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, intNode((yyvsp[(3) - (6)].iValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 201 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, doubleNode((yyvsp[(3) - (6)].dValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 202 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, charNode((yyvsp[(3) - (6)].cValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 206 "grammar.y"
    {(yyval.node_type) = (yyvsp[(1) - (1)].node_type);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 207 "grammar.y"
    {(yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type));}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 211 "grammar.y"
    {
																						(yyval.node_type) = opNode('f', 3, idNode((yyvsp[(2) - (8)].cValue)), (yyvsp[(4) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																						insert((yyvsp[(2) - (8)].cValue), KIND_FUN, TYPE_VOID, NO_MOD);
																						symbolTable->markInitialized((yyvsp[(2) - (8)].cValue)); 
																					}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 216 "grammar.y"
    {
																								(yyval.node_type) = opNode('f', 3, idNode((yyvsp[(2) - (8)].cValue)), (yyvsp[(4) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																								insert((yyvsp[(2) - (8)].cValue), KIND_FUN, (yyvsp[(1) - (8)].iValue), NO_MOD);
																								symbolTable->markInitialized((yyvsp[(2) - (8)].cValue));
																							}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 224 "grammar.y"
    {
																						(yyval.node_type) = opNode('=', 1, idNode((yyvsp[(2) - (2)].cValue)));
																					}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 230 "grammar.y"
    { (yyval.node_type) = opNode(',', 1, (yyvsp[(1) - (1)].node_type)); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 231 "grammar.y"
    { (yyval.node_type) = opNode(',', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 232 "grammar.y"
    { (yyval.node_type) = opNode('e', 0); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 236 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 237 "grammar.y"
    { (yyval.node_type) = opNode(',', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type));}
    break;



/* Line 1455 of yacc.c  */
#line 2250 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 240 "grammar.y"


int main (void) {
	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 

void insert(char id, int kind, int type, int modifier) {
	bool res = symbolTable->insert(id, kind, type, modifier);
	if (!res) {
		printf("Declaration conflict!, Variable %c declared before.\n", id);
	}
}

void lookup(char id) {
	bool res = symbolTable->lookup(id);
	if (!res) {
		printf("Variable %c used before being declared!\n", id);
	}
}

void isInitialized(char id) {
	bool res = symbolTable->lookup(id);
	if (!res) {
		printf("Variable %c used before being declared!\n", id);
	} else {
		res = symbolTable->isInitialized(id);
		if (!res) {
			printf("Variable %c used before being initialized!\n", id);
		}
	}
	
}

nodeType* intNode(int value) {
    nodeType* p = new nodeType();
    
	p->type = CONST_NODE;
	p->expr_type = TYPE_INT;
    p->conNode.ivalue = value;

    return p;
}

nodeType* charNode(char value) { 
	nodeType* p = new nodeType();
    
	p->type = CONST_NODE;
	p->expr_type = TYPE_CHAR;
    p->conNode.cvalue = value;

    return p;
}

nodeType* doubleNode(double value) {
    nodeType* p = new nodeType();

    p->type = CONST_NODE;
	p->expr_type = TYPE_DOUBLE;
    p->conNode.dvalue = value;

    return p;
}

nodeType* boolNode(bool value) {
    nodeType* p = new nodeType();

    /* copy information */
    p->type = CONST_NODE;
	p->expr_type = TYPE_BOOL;
    p->conNode.bvalue = value;

    return p;
}




nodeType *idNode(char id) {
    nodeType* p = new nodeType();
    p->type = ID_NODE;
	bool exists = symbolTable->lookup(id); 
	p->expr_type = exists ? symbolTable->getType(id) : -1;
    p->idNode.id = id;

    return p;
}

nodeType *opNode(int op, int nops, ...) {
    va_list ap;
	va_start(ap, nops);
    struct nodeType* operands[4];
	for (int i = 0; i < nops; i++)
        operands[i] = va_arg(ap, nodeType*);
    
	va_end(ap);

	if (nops == 2 && op != ';' && op != IF && op != WHILE &&
	    op != DO && op != FOR && op != SWITCH && op != CASE && op != DEFAULT &&
		op != 'f' && op != 'p' && op != ',' && op != 'c') {
		if (!validTypes(op, operands[0], operands[1]) && 
			operands[0]->expr_type != -1 && operands[1]->expr_type != -1) {
			printf("Type mismatch!\n");
		}
	}

    nodeType* p = new nodeType();

    p->type = OP_NODE;
	p->expr_type = nops > 0 ? operands[0]->expr_type : -1;
    p->opNode.op = op;
    p->opNode.nops = nops;

	for (int i = 0; i < nops; i++)
        p->opNode.operands[i] = operands[i];

    return p;
}

bool validTypes(int op, nodeType* op1, nodeType* op2) {
	int t1 = op1->expr_type;
	int t2 = op2->expr_type;

	if (op == '+' || op == '-' || op == '*' || op == '/') {
		return isType(t1, t2, TYPE_INT) || isType(t1, t2, TYPE_DOUBLE);
	} else if (op == '%') {
		return isType(t1, t2, TYPE_INT);
	} else if (op == AND || op == OR) {
		return isType(t1, t2, TYPE_BOOL);
	} else {
		return isType(t1, t2, TYPE_INT) || isType(t1, t2, TYPE_DOUBLE) ||
				isType(t1, t2, TYPE_CHAR) || isType(t1, t2, TYPE_BOOL) ;
	}
}

bool isType(int t1, int t2, int type) {
	return t1 == type && t2 == type;
}

