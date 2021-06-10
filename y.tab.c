
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
extern int yylineno;
extern FILE *yyin, *yyout;

SymbolTableTree* symbolTable = new SymbolTableTree();
void insert(char id, int kind, int type, int modifier);
struct nodeType* intNode(int value);
struct nodeType* charNode(char value);
struct nodeType* doubleNode(double value);
struct nodeType* boolNode(bool value);
struct nodeType* idNode(char id, int type=-1);
nodeType *opNode(int op, int nops, ...);
void lookup(char id);
void isInitialized(char id);
bool invalidTypes(int op, nodeType* op1, nodeType* op2);
bool type_op(int op);
int expr_out(int op, int t1, int t2);
bool isFunction(char id);
static int error;



/* Line 189 of yacc.c  */
#line 107 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     EXIT = 274,
     INT = 275,
     CHAR = 276,
     BOOL = 277,
     DOUBLE = 278,
     CONST = 279,
     OR = 280,
     AND = 281,
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
#define EXIT 274
#define INT 275
#define CHAR 276
#define BOOL 277
#define DOUBLE 278
#define CONST 279
#define OR 280
#define AND 281
#define NE 282
#define EQ 283
#define LE 284
#define GE 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 35 "grammar.y"

    int iValue;
	double dValue;
    char cValue;
	bool bValue;
	struct nodeType* node_type;



/* Line 214 of yacc.c  */
#line 213 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 225 "y.tab.c"

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
#define YYLAST   896

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    43,     2,     2,
      41,    42,    35,    33,    45,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    39,
      28,    40,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
     106,   109,   111,   114,   118,   123,   124,   126,   128,   130,
     132,   134,   137,   139,   141,   143,   146,   148,   152,   156,
     160,   164,   168,   172,   176,   180,   184,   188,   192,   196,
     200,   204,   209,   211,   212,   214,   217,   218,   224,   228,
     229,   238,   247,   256,   263,   270,   277,   279,   282,   291,
     300,   303,   305,   309,   310,   312,   316
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    47,    50,    19,    -1,    -1,    37,    -1,
      38,    -1,    53,    39,    -1,    52,     5,    40,    53,    39,
      -1,     5,    40,    53,    39,    -1,    52,     5,    39,    -1,
      24,    52,     5,    40,    53,    39,    -1,     8,    41,    53,
      42,    48,    50,    49,     9,    48,    50,    49,    -1,     8,
      41,    53,    42,    48,    50,    49,    -1,    10,    41,    53,
      42,    48,    50,    49,    -1,    11,    48,    50,    49,    10,
      41,    53,    42,    39,    -1,    12,    41,    51,    39,    54,
      39,    51,    42,    48,    50,    49,    -1,    48,    55,    49,
      -1,    13,    41,     5,    42,    48,    58,    56,    49,    -1,
      17,    54,    39,    -1,    59,    -1,    50,    50,    -1,    39,
      -1,     1,    38,    -1,     5,    40,    53,    -1,    52,     5,
      40,    53,    -1,    -1,    20,    -1,    21,    -1,    23,    -1,
      22,    -1,     3,    -1,    34,     3,    -1,     4,    -1,     7,
      -1,     6,    -1,    34,     6,    -1,     5,    -1,    53,    33,
      53,    -1,    53,    34,    53,    -1,    53,    35,    53,    -1,
      53,    36,    53,    -1,    53,    43,    53,    -1,    53,    26,
      53,    -1,    53,    25,    53,    -1,    53,    27,    53,    -1,
      53,    28,    53,    -1,    53,    31,    53,    -1,    53,    32,
      53,    -1,    53,    30,    53,    -1,    53,    29,    53,    -1,
      41,    53,    42,    -1,     5,    41,    62,    42,    -1,    53,
      -1,    -1,    50,    -1,    55,    50,    -1,    -1,    16,    44,
      55,    15,    39,    -1,    16,    44,    55,    -1,    -1,    14,
      41,     3,    42,    44,    55,    15,    39,    -1,    14,    41,
       6,    42,    44,    55,    15,    39,    -1,    14,    41,     4,
      42,    44,    55,    15,    39,    -1,    14,    41,     3,    42,
      44,    55,    -1,    14,    41,     6,    42,    44,    55,    -1,
      14,    41,     4,    42,    44,    55,    -1,    57,    -1,    58,
      57,    -1,    18,     5,    41,    61,    42,    48,    55,    49,
      -1,    52,     5,    41,    61,    42,    48,    55,    49,    -1,
      52,     5,    -1,    60,    -1,    61,    45,    60,    -1,    -1,
      53,    -1,    62,    45,    53,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    72,    76,    80,    84,    85,    90,    96,
     100,   105,   106,   107,   108,   109,   110,   111,   117,   120,
     121,   122,   123,   127,   133,   138,   142,   143,   144,   145,
     149,   150,   151,   152,   153,   154,   155,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   183,   184,   188,   189,   190,   195,   196,   197,
     201,   202,   203,   204,   205,   206,   210,   211,   215,   220,
     228,   235,   236,   237,   241,   242,   243
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "CHARACTER", "IDENTIFIER",
  "DOUBLE_VALUE", "BOOLEAN", "IF", "ELSE", "WHILE", "DO", "FOR", "SWITCH",
  "CASE", "BREAK", "DEFAULT", "RETURN", "VOID", "EXIT", "INT", "CHAR",
  "BOOL", "DOUBLE", "CONST", "OR", "AND", "'>'", "'<'", "NE", "EQ", "LE",
  "GE", "'+'", "'-'", "'*'", "'/'", "'{'", "'}'", "';'", "'='", "'('",
  "')'", "'%'", "':'", "','", "$accept", "program", "open_bracket",
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
     283,   284,   285,    43,    45,    42,    47,   123,   125,    59,
      61,    40,    41,    37,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    58,    58,    59,    59,
      60,    61,    61,    61,    62,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     2,     5,     4,     3,
       6,    11,     7,     7,     9,    11,     3,     8,     3,     1,
       2,     1,     2,     3,     4,     0,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     1,     0,     1,     2,     0,     5,     3,     0,
       8,     8,     8,     6,     6,     6,     1,     2,     8,     8,
       2,     1,     3,     0,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,    30,    32,    36,    34,    33,     0,
       0,     0,     0,     0,    53,     0,    26,    27,    29,    28,
       0,     0,     4,    21,     0,     0,     0,     0,     0,    19,
      22,     0,    76,     0,     0,     0,    25,     0,    36,    52,
       0,     0,     0,    31,    35,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    73,     0,    50,     5,
      16,     0,     9,     0,    73,    43,    42,    44,    45,    49,
      48,    46,    47,    37,    38,    39,    40,    41,     8,    51,
       0,     0,     0,     0,     0,    53,     0,     0,     0,    71,
       0,     0,     0,     0,    75,     0,     0,     0,    23,     0,
       0,     0,    70,     0,     0,     0,     7,     0,     0,     0,
       0,    25,    24,     0,    66,    59,     0,    72,    10,     0,
      12,    13,     0,     0,     0,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    68,    69,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    15,     0,     0,     0,    57,     0,
       0,     0,    60,    62,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    25,    80,    49,    72,    27,    28,    40,    47,
     146,   134,   135,    29,   109,   110,    67
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
     -96,   177,   -96,    -5,   -96,   -96,    -9,   -96,   -96,    36,
      40,     3,    42,    52,    32,    89,   -96,   -96,   -96,   -96,
      99,    19,   -96,   -96,    32,   567,   606,    90,   701,   -96,
     -96,    32,    32,    32,    32,   684,    67,    93,    58,   853,
      63,    65,   100,   -96,   -96,   720,   255,   645,   -96,   216,
     -24,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,   -96,    32,   739,   853,   -40,   758,   777,
     645,    68,    70,   105,    81,   -96,    99,    72,   -96,   -96,
     -96,   294,   -96,    32,    99,   853,   853,   -22,   -22,   -22,
     -22,   -22,   -22,   -17,   -17,    43,    43,   853,   -96,   -96,
      32,     3,     3,   114,    32,    32,    85,     3,   122,   -96,
      17,    32,   796,    25,   853,   684,   684,    87,   853,    91,
      32,   115,   -96,     3,    99,   815,   -96,     3,   645,   645,
      32,    67,   853,    92,   -96,    64,   567,   -96,   -96,   567,
     123,   -96,   834,    94,    39,    95,    96,   -96,   645,   645,
       3,    98,     3,   101,   102,   103,   489,   -96,   -96,   -96,
     684,   -96,   684,    97,   106,   107,   528,   645,   645,   333,
     333,   333,   110,   -96,   -96,   372,   411,   450,   -96,   113,
     117,   118,   -96,   -96,   -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -96,   -96,   -10,   -64,    -1,     0,   -13,    -4,    41,   -95,
     -96,    18,   -96,   -96,    30,    74,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -66
static const yytype_int16 yytable[] =
{
      26,    35,    99,    51,    52,   100,   103,    42,    51,    52,
      39,    59,    60,    61,    62,    82,    83,    84,    61,    62,
      45,    64,    43,    73,    46,    44,    64,    65,    66,    68,
      69,    31,    32,    30,    70,     4,     5,    38,     7,     8,
      22,   148,   153,   154,   149,   155,    81,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,   123,
      97,   166,   124,   108,   140,   141,    21,   127,    51,    52,
     124,   108,    71,    24,   175,   176,   177,    33,   133,   112,
     145,    34,   157,    36,   158,   159,    64,    16,    17,    18,
      19,   115,   116,    37,    41,    50,   114,   121,    74,    32,
     118,    39,    75,   173,   174,    77,    76,   125,   104,   105,
     106,   108,   111,   136,   128,   129,   132,   139,    73,    16,
      17,    18,    19,   107,   117,   120,   142,   122,   130,   133,
     131,   143,   150,   144,    79,    46,   152,   161,    46,   156,
     160,   169,   162,   163,   164,   165,   119,    81,    81,   178,
     170,   171,   182,   147,   137,    46,   183,   184,   113,   167,
       0,   168,     0,     0,     0,    81,     0,     0,    46,    46,
      46,     0,     0,     0,    81,    81,    81,     2,     3,     0,
       4,     5,     6,     7,     8,     9,     0,    10,    11,    12,
      13,     0,     0,     0,    14,    15,     0,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,    22,     0,    23,     3,    24,     4,
       5,     6,     7,     8,     9,     0,    10,    11,    12,    13,
     -20,   -20,   -20,    14,    15,   -20,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    22,   -20,    23,     3,    24,     4,     5,
       6,     7,     8,     9,     0,    10,    11,    12,    13,   -54,
     -54,   -54,    14,    15,     0,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,    22,   -54,    23,     3,    24,     4,     5,     6,
       7,     8,     9,     0,    10,    11,    12,    13,   -55,   -55,
     -55,    14,    15,     0,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,    22,   -55,    23,     3,    24,     4,     5,     6,     7,
       8,     9,     0,    10,    11,    12,    13,   -56,   -56,   -56,
      14,    15,     0,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
      22,   -56,    23,     3,    24,     4,     5,     6,     7,     8,
       9,     0,    10,    11,    12,    13,   -63,   179,   -63,    14,
      15,     0,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,    22,
     -63,    23,     3,    24,     4,     5,     6,     7,     8,     9,
       0,    10,    11,    12,    13,   -65,   180,   -65,    14,    15,
       0,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    22,   -65,
      23,     3,    24,     4,     5,     6,     7,     8,     9,     0,
      10,    11,    12,    13,   -64,   181,   -64,    14,    15,     0,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,    22,   -64,    23,
       3,    24,     4,     5,     6,     7,     8,     9,     0,    10,
      11,    12,    13,     0,   -56,     0,    14,    15,     0,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,    22,   -56,    23,     3,
      24,     4,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,     0,   172,     0,    14,    15,     0,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,    22,   -58,    23,     3,    24,
       4,     5,     6,     7,     8,     9,     0,    10,    11,    12,
      13,     0,     0,     0,    14,    15,     0,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,    22,   -56,    23,     3,    24,     4,
       5,     6,     7,     8,     9,     0,    10,    11,    12,    13,
       0,     0,     0,    14,    15,    48,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    22,     0,    23,     3,    24,     4,     5,
       6,     7,     8,     9,     0,    10,    11,    12,    13,     0,
       0,     0,    14,    15,     0,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,    22,    79,    23,     3,    24,     4,     5,     6,
       7,     8,     9,     0,    10,    11,    12,    13,     0,     0,
       0,    14,    15,     0,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,    22,     0,    23,     0,    24,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
      63,     0,     0,     0,    64,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,    78,    64,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,    98,     0,
       0,     0,    64,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
     101,    64,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,   102,
      64,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,   126,     0,     0,     0,    64,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,   138,     0,     0,     0,    64,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,   151,    64,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,    64
};

static const yytype_int16 yycheck[] =
{
       1,    11,    42,    25,    26,    45,    70,    20,    25,    26,
      14,    33,    34,    35,    36,    39,    40,    41,    35,    36,
      24,    43,     3,    36,    25,     6,    43,    31,    32,    33,
      34,    40,    41,    38,    35,     3,     4,     5,     6,     7,
      37,   136,     3,     4,   139,     6,    47,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    42,
      64,   156,    45,    76,   128,   129,    34,    42,    25,    26,
      45,    84,     5,    41,   169,   170,   171,    41,    14,    83,
      16,    41,   146,    41,   148,   149,    43,    20,    21,    22,
      23,   101,   102,    41,     5,     5,   100,   107,     5,    41,
     104,   105,    39,   167,   168,     5,    41,   111,    40,    39,
       5,   124,    40,   123,   115,   116,   120,   127,   131,    20,
      21,    22,    23,    42,    10,    40,   130,     5,    41,    14,
      39,   131,     9,    41,    38,   136,    42,    39,   139,    44,
     150,    44,   152,    42,    42,    42,   105,   148,   149,    39,
      44,    44,    39,   135,   124,   156,    39,    39,    84,   160,
      -1,   162,    -1,    -1,    -1,   166,    -1,    -1,   169,   170,
     171,    -1,    -1,    -1,   175,   176,   177,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,     1,    41,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    38,    39,     1,    41,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    38,    39,     1,    41,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,     1,    41,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,     1,    41,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      38,    39,     1,    41,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,     1,    41,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,    39,
       1,    41,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    -1,    15,    -1,    17,    18,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    38,    39,     1,
      41,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    -1,    15,    -1,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    38,    39,     1,    41,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    38,    39,     1,    41,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,    39,     1,    41,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    38,    39,     1,    41,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    41,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    43,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    43,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    43,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    43,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,     0,     1,     3,     4,     5,     6,     7,     8,
      10,    11,    12,    13,    17,    18,    20,    21,    22,    23,
      24,    34,    37,    39,    41,    48,    50,    52,    53,    59,
      38,    40,    41,    41,    41,    48,    41,    41,     5,    53,
      54,     5,    52,     3,     6,    53,    50,    55,    19,    50,
       5,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    39,    43,    53,    53,    62,    53,    53,
      50,     5,    51,    52,     5,    39,    41,     5,    42,    38,
      49,    50,    39,    40,    41,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    39,    42,
      45,    42,    42,    49,    40,    39,     5,    42,    52,    60,
      61,    40,    53,    61,    53,    48,    48,    10,    53,    54,
      40,    48,     5,    42,    45,    53,    39,    42,    50,    50,
      41,    39,    53,    14,    57,    58,    48,    60,    39,    48,
      49,    49,    53,    51,    41,    16,    56,    57,    55,    55,
       9,    42,    42,     3,     4,     6,    44,    49,    49,    49,
      48,    39,    48,    42,    42,    42,    55,    50,    50,    44,
      44,    44,    15,    49,    49,    55,    55,    55,    39,    15,
      15,    15,    39,    39,    39
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
#line 62 "grammar.y"
    { 	
																			yyout = fopen("outputs/warnings.txt", "w");
																			symbolTable->unusedVariables();
																			yyout = fopen("outputs/quadruples.txt", "w"); 
																			if (!error) {
																				ex((yyvsp[(2) - (3)].node_type));
																			}
																			yyout = fopen("outputs/symbol_table.txt", "w");
																			symbolTable->print();
																	}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 76 "grammar.y"
    { symbolTable->create(); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 80 "grammar.y"
    { symbolTable->up(); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 84 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (2)].node_type); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 85 "grammar.y"
    {	
																			insert((yyvsp[(2) - (5)].cValue), KIND_VAR, (yyvsp[(1) - (5)].iValue), NO_MOD);
																			symbolTable->markInitialized((yyvsp[(2) - (5)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(2) - (5)].cValue)), (yyvsp[(4) - (5)].node_type));
																		}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 90 "grammar.y"
    { 
																			lookup((yyvsp[(1) - (4)].cValue));
																			symbolTable->markUsed((yyvsp[(1) - (4)].cValue));
																			symbolTable->markInitialized((yyvsp[(1) - (4)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(1) - (4)].cValue)), (yyvsp[(3) - (4)].node_type));
		 																}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 96 "grammar.y"
    {	 
																			(yyval.node_type) = opNode('e', 0);
																			insert((yyvsp[(2) - (3)].cValue), KIND_VAR, (yyvsp[(1) - (3)].iValue), NO_MOD);
																		}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 100 "grammar.y"
    {
																			insert((yyvsp[(3) - (6)].cValue), KIND_VAR, (yyvsp[(2) - (6)].iValue), MOD_CONST);
																			symbolTable->markInitialized((yyvsp[(3) - (6)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(3) - (6)].cValue)), (yyvsp[(5) - (6)].node_type));
																		}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 105 "grammar.y"
    { (yyval.node_type) = opNode(IF, 3, (yyvsp[(3) - (11)].node_type), (yyvsp[(6) - (11)].node_type), (yyvsp[(10) - (11)].node_type)); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 106 "grammar.y"
    { (yyval.node_type) = opNode(IF, 2, (yyvsp[(3) - (7)].node_type), (yyvsp[(6) - (7)].node_type)); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 107 "grammar.y"
    { (yyval.node_type) = opNode(WHILE, 2, (yyvsp[(3) - (7)].node_type), (yyvsp[(6) - (7)].node_type)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 108 "grammar.y"
    { (yyval.node_type) = opNode(DO, 2, (yyvsp[(3) - (9)].node_type), (yyvsp[(7) - (9)].node_type)); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 109 "grammar.y"
    { (yyval.node_type) = opNode(FOR, 4, (yyvsp[(3) - (11)].node_type), (yyvsp[(5) - (11)].node_type), (yyvsp[(7) - (11)].node_type), (yyvsp[(10) - (11)].node_type)); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 110 "grammar.y"
    { (yyval.node_type) = (yyvsp[(2) - (3)].node_type); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 111 "grammar.y"
    {
																								lookup((yyvsp[(3) - (8)].cValue));
																								isInitialized((yyvsp[(3) - (8)].cValue)); 
																								symbolTable->markUsed((yyvsp[(3) - (8)].cValue));
																								(yyval.node_type) = opNode(SWITCH, 3, idNode((yyvsp[(3) - (8)].cValue)), (yyvsp[(6) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																							}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 117 "grammar.y"
    {
																			(yyval.node_type) = opNode(RETURN, 1, (yyvsp[(2) - (3)].node_type)); 
																		}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 120 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 121 "grammar.y"
    { (yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type)); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 122 "grammar.y"
    { (yyval.node_type) = opNode(';', 0); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 127 "grammar.y"
    { 
																			lookup((yyvsp[(1) - (3)].cValue));
																			symbolTable->markUsed((yyvsp[(1) - (3)].cValue));
																			symbolTable->markInitialized((yyvsp[(1) - (3)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(1) - (3)].cValue)), (yyvsp[(3) - (3)].node_type));
																		}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 133 "grammar.y"
    { 
																			insert((yyvsp[(2) - (4)].cValue), KIND_VAR, (yyvsp[(1) - (4)].iValue), NO_MOD);
																			symbolTable->markInitialized((yyvsp[(2) - (4)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(2) - (4)].cValue)), (yyvsp[(4) - (4)].node_type));
																		}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 138 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 142 "grammar.y"
    { (yyval.iValue) = TYPE_INT; }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 143 "grammar.y"
    { (yyval.iValue) = TYPE_CHAR; }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 144 "grammar.y"
    { (yyval.iValue) = TYPE_DOUBLE; }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 145 "grammar.y"
    { (yyval.iValue) = TYPE_BOOL; }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 149 "grammar.y"
    { (yyval.node_type) = intNode((yyvsp[(1) - (1)].iValue)); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 150 "grammar.y"
    { (yyval.node_type) = intNode(-1*(yyvsp[(2) - (2)].iValue)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 151 "grammar.y"
    { (yyval.node_type) = charNode((yyvsp[(1) - (1)].cValue)); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 152 "grammar.y"
    { (yyval.node_type) = boolNode((yyvsp[(1) - (1)].bValue)); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 153 "grammar.y"
    { (yyval.node_type) = doubleNode((yyvsp[(1) - (1)].dValue)); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 154 "grammar.y"
    { (yyval.node_type) = doubleNode(-1*(yyvsp[(2) - (2)].dValue)); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 155 "grammar.y"
    { 
																isInitialized((yyvsp[(1) - (1)].cValue));
																isFunction((yyvsp[(1) - (1)].cValue));
																symbolTable->markUsed((yyvsp[(1) - (1)].cValue));
																(yyval.node_type) = idNode((yyvsp[(1) - (1)].cValue)); 
															}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 161 "grammar.y"
    { (yyval.node_type) = opNode('+', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 162 "grammar.y"
    { (yyval.node_type) = opNode('-', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type));  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 163 "grammar.y"
    { (yyval.node_type) = opNode('*', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 164 "grammar.y"
    { (yyval.node_type) = opNode('/', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 165 "grammar.y"
    { (yyval.node_type) = opNode('%', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 166 "grammar.y"
    { (yyval.node_type) = opNode(AND, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 167 "grammar.y"
    { (yyval.node_type) = opNode(OR, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 168 "grammar.y"
    { (yyval.node_type) = opNode('>', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 169 "grammar.y"
    { (yyval.node_type) = opNode('<', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 170 "grammar.y"
    { (yyval.node_type) = opNode(LE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 171 "grammar.y"
    { (yyval.node_type) = opNode(GE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 172 "grammar.y"
    { (yyval.node_type) = opNode(EQ, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 173 "grammar.y"
    { (yyval.node_type) = opNode(NE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 174 "grammar.y"
    { (yyval.node_type) = (yyvsp[(2) - (3)].node_type); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 175 "grammar.y"
    { 
																lookup((yyvsp[(1) - (4)].cValue));
																symbolTable->markUsed((yyvsp[(1) - (4)].cValue));
																(yyval.node_type) = opNode('c', 2, idNode((yyvsp[(1) - (4)].cValue)), (yyvsp[(3) - (4)].node_type));
															}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 183 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 184 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 188 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 189 "grammar.y"
    { (yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type)); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 190 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 195 "grammar.y"
    { (yyval.node_type) = opNode(DEFAULT, 1, (yyvsp[(3) - (5)].node_type));}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 196 "grammar.y"
    { (yyval.node_type) = opNode(DEFAULT, 1, (yyvsp[(3) - (3)].node_type));}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 197 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 201 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, intNode((yyvsp[(3) - (8)].iValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 202 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, doubleNode((yyvsp[(3) - (8)].dValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 203 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, charNode((yyvsp[(3) - (8)].cValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 204 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, intNode((yyvsp[(3) - (6)].iValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 205 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, doubleNode((yyvsp[(3) - (6)].dValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 206 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, charNode((yyvsp[(3) - (6)].cValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 210 "grammar.y"
    {(yyval.node_type) = (yyvsp[(1) - (1)].node_type);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 211 "grammar.y"
    {(yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type));}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 215 "grammar.y"
    {
																						(yyval.node_type) = opNode('f', 3, idNode((yyvsp[(2) - (8)].cValue)), (yyvsp[(4) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																						insert((yyvsp[(2) - (8)].cValue), KIND_FUN, TYPE_VOID, NO_MOD);
																						symbolTable->markInitialized((yyvsp[(2) - (8)].cValue)); 
																					}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 220 "grammar.y"
    {
																								(yyval.node_type) = opNode('f', 3, idNode((yyvsp[(2) - (8)].cValue)), (yyvsp[(4) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																								insert((yyvsp[(2) - (8)].cValue), KIND_FUN, (yyvsp[(1) - (8)].iValue), NO_MOD);
																								symbolTable->markInitialized((yyvsp[(2) - (8)].cValue));
																							}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 228 "grammar.y"
    {
																						symbolTable->pushParameter((yyvsp[(2) - (2)].cValue), (yyvsp[(1) - (2)].iValue));
																						(yyval.node_type) = opNode('=', 1, idNode((yyvsp[(2) - (2)].cValue), (yyvsp[(1) - (2)].iValue)));
																					}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 235 "grammar.y"
    { (yyval.node_type) = opNode(',', 1, (yyvsp[(1) - (1)].node_type)); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 236 "grammar.y"
    { (yyval.node_type) = opNode(',', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 237 "grammar.y"
    { (yyval.node_type) = opNode('e', 0); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 241 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 242 "grammar.y"
    { (yyval.node_type) = opNode(',', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type));}
    break;



/* Line 1455 of yacc.c  */
#line 2274 "y.tab.c"
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
#line 245 "grammar.y"


void yyerror(char *s) {
 fprintf(yyout, "line %d: %s\n", yylineno, s);
}

void insert(char id, int kind, int type, int modifier) {
	bool res = symbolTable->insert(id, kind, type, modifier);
	if (!res) {
		fprintf(yyout, "Declaration conflict!, Symbol %c declared before.\n", id);
		error = 1;
	}
}

void lookup(char id) {
	bool res = symbolTable->lookup(id);
	if (!res) {
		fprintf(yyout, "Symbol %c used before being declared!\n", id);
		error = 1;
	}
}

void isInitialized(char id) {
	bool res = symbolTable->lookup(id);
	if (!res) {
		fprintf(yyout, "Symbol %c used before being declared!\n", id);
		error = 1;
	} else {
		res = symbolTable->isInitialized(id);
		if (!res) {
			fprintf(yyout, "Symbol %c used before being initialized!\n", id);
			error = 1;
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




nodeType *idNode(char id, int type) {
    nodeType* p = new nodeType();
    p->type = ID_NODE;
	bool exists = symbolTable->lookup(id); 
	p->expr_type = exists ? symbolTable->getType(id) : type;
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

	if (nops == 2 && type_op(op)) {
		if (invalidTypes(op, operands[0], operands[1])) {
			error = 1;
		}
	}

    nodeType* p = new nodeType();

    p->type = OP_NODE;
    p->opNode.op = op;
    p->opNode.nops = nops;

	if(op == '=') {
		p->expr_type = symbolTable->getType(operands[0]->idNode.id);
	} else if (type_op(op) && nops == 2) {
		p->expr_type = expr_out(op, operands[0]->expr_type, operands[1]->expr_type);
	}

	for (int i = 0; i < nops; i++)
        p->opNode.operands[i] = operands[i];

    return p;
}

bool invalidTypes(int op, nodeType* op1, nodeType* op2) {
	int t1 = op1->expr_type;
	int t2 = op2->expr_type;

	if (op == '%') {
		bool f = (t1 == TYPE_DOUBLE || t2 == TYPE_DOUBLE);
		if (f) {
			fprintf(yyout, "Type mismatch! modulus double operations\n");
		}
		return f;
	} else if (op == '=') {
		bool f = ( t1 == TYPE_CHAR && t2 == TYPE_DOUBLE );
		if (f) {
			fprintf(yyout, "Type mismatch! assigning double to char\n");
		}
		return f;
	}

	return false; 
}

int expr_out(int op, int t1, int t2) {
	if (t1 == t2) return t1;
	else if (op == OR || op == AND) return TYPE_BOOL;
	else if (t1 == TYPE_DOUBLE || t2 == TYPE_DOUBLE) return TYPE_DOUBLE;
	else if (t1 == TYPE_INT || t2 == TYPE_INT) return TYPE_INT;
	else if (t1 == TYPE_CHAR || t2 == TYPE_CHAR) return TYPE_CHAR;
	else return TYPE_BOOL;
}

bool type_op(int op) {
	return op != ';' && op != IF && op != WHILE &&
	    op != DO && op != FOR && op != SWITCH && op != CASE && op != DEFAULT &&
		op != 'f' && op != 'p' && op != ',' && op != 'c' && op != 'e';
}

bool isFunction(char id) {
	if(symbolTable->getKind(id) == KIND_FUN) {
		fprintf(yyout, "Type mismatch ! Cant assign a function type to variable type!\n");
		error = 1;
		return true;
	}
	return false;
}


int main (int argc, char** argv) {
	yyin = fopen(argv[1], "r");
	yyout = fopen("outputs/errors.txt", "w");
	yyparse();
	return 0;
}

