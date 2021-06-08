
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
#line 106 "y.tab.c"

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
#line 34 "grammar.y"

    int iValue;
	double dValue;
    char cValue;
	bool bValue;
	struct nodeType* node_type;



/* Line 214 of yacc.c  */
#line 212 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "y.tab.c"

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
#define YYLAST   633

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  181

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
     106,   109,   111,   115,   120,   121,   123,   125,   127,   129,
     131,   134,   136,   138,   140,   143,   145,   149,   153,   157,
     161,   165,   169,   173,   177,   181,   185,   189,   193,   197,
     201,   206,   208,   209,   211,   214,   215,   219,   220,   229,
     238,   247,   254,   261,   268,   270,   273,   282,   291,   294,
     296,   300,   301,   303,   307
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
      17,    55,    40,    -1,    60,    -1,    51,    51,    -1,    40,
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
       0,    59,    59,    68,    72,    76,    80,    81,    86,    92,
      96,   101,   102,   103,   104,   105,   106,   107,   113,   116,
     117,   118,   122,   128,   133,   137,   138,   139,   140,   144,
     145,   146,   147,   148,   149,   150,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   178,   179,   183,   184,   185,   190,   191,   195,   196,
     197,   198,   199,   200,   204,   205,   209,   214,   222,   229,
     230,   231,   235,   236,   237
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
      51,    51,    52,    52,    52,    53,    53,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    56,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    58,    59,    59,    60,    60,    61,    62,
      62,    62,    63,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     2,     5,     4,     3,
       6,    11,     7,     7,     9,    11,     3,     8,     3,     1,
       2,     1,     3,     4,     0,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     1,     0,     1,     2,     0,     3,     0,     8,     8,
       8,     6,     6,     6,     1,     2,     8,     8,     2,     1,
       3,     0,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    29,    31,    35,    33,    32,     0,     0,
       0,     0,     0,    52,     0,    25,    26,    28,    27,     0,
       0,     4,    21,     0,    55,     0,     0,     0,    19,     0,
      74,     0,     0,     0,    24,     0,    35,    51,     0,     0,
       0,    30,    34,     0,    53,     0,     2,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    71,     0,    49,     5,    16,    54,
       9,     0,    71,    42,    41,    43,    44,    48,    47,    45,
      46,    36,    37,    38,    39,    40,     8,    50,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    69,     0,     0,
       0,     0,    73,     0,     0,     0,    22,     0,     0,     0,
      68,     0,     0,     0,     7,     0,     0,     0,     0,    24,
      23,     0,    64,    57,    55,    70,    10,    55,    12,    13,
       0,     0,     0,     0,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    17,    66,    67,     0,    14,
       0,     0,     0,     0,    56,     0,     0,    55,    55,    55,
      11,    15,    61,    63,    62,     0,     0,     0,    58,    60,
      59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    24,    78,    47,    70,    26,    27,    38,    45,
     144,   132,   133,    28,   107,   108,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -130
static const yytype_int16 yypact[] =
{
    -130,   174,  -130,  -130,  -130,   -11,  -130,  -130,   -40,   -35,
     -29,   -18,    29,    30,    36,  -130,  -130,  -130,  -130,    -8,
      16,  -130,  -130,    30,   414,   214,    74,   433,  -130,    30,
      30,    30,    30,   414,    -4,    81,    47,   589,    50,    52,
      91,  -130,  -130,   451,   414,   254,  -130,   414,    63,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,  -130,    30,   472,   589,    27,   490,   511,   254,    56,
      67,   103,    76,  -130,    -8,    79,  -130,  -130,  -130,   414,
    -130,    30,    -8,   589,   589,    41,    41,    41,    41,    41,
      41,    86,    86,    43,    43,   589,  -130,  -130,    30,   -29,
     -29,   107,    30,    30,    82,   -29,   119,  -130,    38,    30,
     532,    45,   589,   414,   414,    84,   589,    87,    30,   114,
    -130,   -29,    -8,   550,  -130,   -29,   254,   254,    30,    -4,
     589,    89,  -130,    44,   414,  -130,  -130,   414,   120,  -130,
     568,    92,    39,    93,    95,  -130,   254,   254,   -29,    97,
     -29,    96,    99,   101,   414,  -130,  -130,  -130,   414,  -130,
     414,   102,   104,   105,   414,   254,   254,   414,   414,   414,
    -130,  -130,   294,   334,   374,   100,   108,   111,  -130,  -130,
    -130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,    -7,   -64,    -1,     3,   -13,    -3,    49,  -129,
    -130,    21,  -130,  -130,    33,    78,  -130
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      25,    69,    31,    33,   101,   146,    40,    32,   147,    21,
      37,    15,    16,    17,    18,    15,    16,    17,    18,    41,
      43,    71,    42,    44,    34,   164,    63,    64,    66,    67,
      29,    30,    68,     3,     4,    36,     6,     7,   172,   173,
     174,    39,   151,   152,    79,   153,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,   131,    95,
     143,   106,   138,   139,    20,    49,    50,    49,    50,   106,
      97,    35,    23,    98,    57,    58,    59,    60,   110,    48,
     155,   121,   156,   157,   122,    62,    72,    62,   125,    30,
      73,   122,   113,   114,    74,   112,    75,   102,   119,   116,
      37,   170,   171,    80,    81,    82,   123,   103,   104,   106,
      49,    50,   126,   127,   134,   130,    71,   115,   137,   105,
     109,    59,    60,   118,   120,   140,   128,   129,   131,   148,
      62,   142,   141,    44,    77,   150,    44,   159,   154,   161,
     178,   158,   162,   160,   163,    79,    79,   167,   179,   168,
     169,   180,   117,    44,   145,   135,     0,   165,     0,   166,
     111,     0,     0,    79,     0,     0,    44,    44,    44,     0,
       0,    79,    79,    79,     2,     0,     0,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,    46,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,    77,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,   175,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,   176,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,   177,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,    49,    50,     0,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,    61,     0,    49,    50,    62,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,    76,    62,    49,    50,     0,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,    96,     0,    49,    50,    62,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,    99,    62,    49,    50,     0,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,   100,    62,    49,    50,     0,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
       0,     0,   124,     0,    49,    50,    62,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
     136,     0,    49,    50,    62,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,   149,    62,    49,    50,     0,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,    62
};

static const yytype_int16 yycheck[] =
{
       1,     5,    42,    10,    68,   134,    19,    42,   137,    38,
      13,    19,    20,    21,    22,    19,    20,    21,    22,     3,
      23,    34,     6,    24,    42,   154,    29,    30,    31,    32,
      41,    42,    33,     3,     4,     5,     6,     7,   167,   168,
     169,     5,     3,     4,    45,     6,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    14,    62,
      16,    74,   126,   127,    34,    24,    25,    24,    25,    82,
      43,    42,    42,    46,    33,    34,    35,    36,    81,     5,
     144,    43,   146,   147,    46,    44,     5,    44,    43,    42,
      40,    46,    99,   100,    42,    98,     5,    41,   105,   102,
     103,   165,   166,    40,    41,    42,   109,    40,     5,   122,
      24,    25,   113,   114,   121,   118,   129,    10,   125,    43,
      41,    35,    36,    41,     5,   128,    42,    40,    14,     9,
      44,    42,   129,   134,    39,    43,   137,    40,    45,    43,
      40,   148,    43,   150,    43,   146,   147,    45,    40,    45,
      45,    40,   103,   154,   133,   122,    -1,   158,    -1,   160,
      82,    -1,    -1,   164,    -1,    -1,   167,   168,   169,    -1,
      -1,   172,   173,   174,     0,    -1,    -1,     3,     4,     5,
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
      42,    42,    42,    49,    42,    42,     5,    54,    55,     5,
      53,     3,     6,    54,    51,    56,    37,    51,     5,    24,
      25,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    40,    44,    54,    54,    63,    54,    54,    51,     5,
      52,    53,     5,    40,    42,     5,    43,    39,    50,    51,
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
#line 59 "grammar.y"
    { 
																			symbolTable->unusedVariables(); 
																			if (!error) {
																				printf("\n\n\n************** Quadruples **************\n\n\n");
																				ex((yyvsp[(2) - (3)].node_type));
																			}
																			printf("\n\n\n************** Symbol Tables **************\n\n\n");
																			symbolTable->print();
																		 }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 68 "grammar.y"
    {}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 72 "grammar.y"
    { symbolTable->create(); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 76 "grammar.y"
    { symbolTable->up(); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 80 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (2)].node_type); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 81 "grammar.y"
    {	
																			insert((yyvsp[(2) - (5)].cValue), KIND_VAR, (yyvsp[(1) - (5)].iValue), NO_MOD);
																			symbolTable->markInitialized((yyvsp[(2) - (5)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(2) - (5)].cValue)), (yyvsp[(4) - (5)].node_type));
																		}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 86 "grammar.y"
    { 
																			lookup((yyvsp[(1) - (4)].cValue));
																			symbolTable->markUsed((yyvsp[(1) - (4)].cValue));
																			symbolTable->markInitialized((yyvsp[(1) - (4)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(1) - (4)].cValue)), (yyvsp[(3) - (4)].node_type));
		 																}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 92 "grammar.y"
    {	 
																			(yyval.node_type) = opNode('e', 0);
																			insert((yyvsp[(2) - (3)].cValue), KIND_VAR, (yyvsp[(1) - (3)].iValue), NO_MOD);
																		}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 96 "grammar.y"
    {
																			insert((yyvsp[(3) - (6)].cValue), KIND_VAR, (yyvsp[(2) - (6)].iValue), MOD_CONST);
																			symbolTable->markInitialized((yyvsp[(3) - (6)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(3) - (6)].cValue)), (yyvsp[(5) - (6)].node_type));
																		}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 101 "grammar.y"
    { (yyval.node_type) = opNode(IF, 3, (yyvsp[(3) - (11)].node_type), (yyvsp[(6) - (11)].node_type), (yyvsp[(10) - (11)].node_type)); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 102 "grammar.y"
    { (yyval.node_type) = opNode(IF, 2, (yyvsp[(3) - (7)].node_type), (yyvsp[(6) - (7)].node_type)); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 103 "grammar.y"
    { (yyval.node_type) = opNode(WHILE, 2, (yyvsp[(3) - (7)].node_type), (yyvsp[(6) - (7)].node_type)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 104 "grammar.y"
    { (yyval.node_type) = opNode(DO, 2, (yyvsp[(3) - (9)].node_type), (yyvsp[(7) - (9)].node_type)); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 105 "grammar.y"
    { (yyval.node_type) = opNode(FOR, 4, (yyvsp[(3) - (11)].node_type), (yyvsp[(5) - (11)].node_type), (yyvsp[(7) - (11)].node_type), (yyvsp[(10) - (11)].node_type)); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 106 "grammar.y"
    { (yyval.node_type) = (yyvsp[(2) - (3)].node_type); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 107 "grammar.y"
    {
																								lookup((yyvsp[(3) - (8)].cValue));
																								isInitialized((yyvsp[(3) - (8)].cValue)); 
																								symbolTable->markUsed((yyvsp[(3) - (8)].cValue));
																								(yyval.node_type) = opNode(SWITCH, 3, idNode((yyvsp[(3) - (8)].cValue)), (yyvsp[(6) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																							}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 113 "grammar.y"
    {
																			(yyval.node_type) = opNode(RETURN, 1, (yyvsp[(2) - (3)].node_type)); 
																		}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 116 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 117 "grammar.y"
    { (yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type)); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 118 "grammar.y"
    { (yyval.node_type) = opNode(';', 0); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 122 "grammar.y"
    { 
																			lookup((yyvsp[(1) - (3)].cValue));
																			symbolTable->markUsed((yyvsp[(1) - (3)].cValue));
																			symbolTable->markInitialized((yyvsp[(1) - (3)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(1) - (3)].cValue)), (yyvsp[(3) - (3)].node_type));
																		}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 128 "grammar.y"
    { 
																			insert((yyvsp[(2) - (4)].cValue), KIND_VAR, (yyvsp[(1) - (4)].iValue), NO_MOD);
																			symbolTable->markInitialized((yyvsp[(2) - (4)].cValue));
																			(yyval.node_type) = opNode('=', 2, idNode((yyvsp[(2) - (4)].cValue)), (yyvsp[(4) - (4)].node_type));
																		}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 133 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 137 "grammar.y"
    { (yyval.iValue) = TYPE_INT; }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 138 "grammar.y"
    { (yyval.iValue) = TYPE_CHAR; }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 139 "grammar.y"
    { (yyval.iValue) = TYPE_DOUBLE; }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 140 "grammar.y"
    { (yyval.iValue) = TYPE_BOOL; }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 144 "grammar.y"
    { (yyval.node_type) = intNode((yyvsp[(1) - (1)].iValue)); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 145 "grammar.y"
    { (yyval.node_type) = intNode(-1*(yyvsp[(2) - (2)].iValue)); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 146 "grammar.y"
    { (yyval.node_type) = charNode((yyvsp[(1) - (1)].cValue)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 147 "grammar.y"
    { (yyval.node_type) = boolNode((yyvsp[(1) - (1)].bValue)); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 148 "grammar.y"
    { (yyval.node_type) = doubleNode((yyvsp[(1) - (1)].dValue)); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 149 "grammar.y"
    { (yyval.node_type) = doubleNode(-1*(yyvsp[(2) - (2)].dValue)); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 150 "grammar.y"
    { 
																isInitialized((yyvsp[(1) - (1)].cValue));
																isFunction((yyvsp[(1) - (1)].cValue));
																symbolTable->markUsed((yyvsp[(1) - (1)].cValue));
																(yyval.node_type) = idNode((yyvsp[(1) - (1)].cValue)); 
															}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 156 "grammar.y"
    { (yyval.node_type) = opNode('+', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 157 "grammar.y"
    { (yyval.node_type) = opNode('-', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type));  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 158 "grammar.y"
    { (yyval.node_type) = opNode('*', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 159 "grammar.y"
    { (yyval.node_type) = opNode('/', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 160 "grammar.y"
    { (yyval.node_type) = opNode('%', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 161 "grammar.y"
    { (yyval.node_type) = opNode(AND, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 162 "grammar.y"
    { (yyval.node_type) = opNode(OR, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 163 "grammar.y"
    { (yyval.node_type) = opNode('>', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 164 "grammar.y"
    { (yyval.node_type) = opNode('<', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 165 "grammar.y"
    { (yyval.node_type) = opNode(LE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 166 "grammar.y"
    { (yyval.node_type) = opNode(GE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 167 "grammar.y"
    { (yyval.node_type) = opNode(EQ, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 168 "grammar.y"
    { (yyval.node_type) = opNode(NE, 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 169 "grammar.y"
    { (yyval.node_type) = (yyvsp[(2) - (3)].node_type); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 170 "grammar.y"
    { 
																lookup((yyvsp[(1) - (4)].cValue));
																symbolTable->markUsed((yyvsp[(1) - (4)].cValue));
																(yyval.node_type) = opNode('c', 2, idNode((yyvsp[(1) - (4)].cValue)), (yyvsp[(3) - (4)].node_type));
															}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 178 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 179 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 183 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 184 "grammar.y"
    { (yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type)); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 185 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 190 "grammar.y"
    { (yyval.node_type) = opNode(DEFAULT, 1, (yyvsp[(3) - (3)].node_type));}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 191 "grammar.y"
    { (yyval.node_type) = opNode('e', 0);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 195 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, intNode((yyvsp[(3) - (8)].iValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 196 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, doubleNode((yyvsp[(3) - (8)].dValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 197 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, charNode((yyvsp[(3) - (8)].cValue)), (yyvsp[(6) - (8)].node_type));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 198 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, intNode((yyvsp[(3) - (6)].iValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 199 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, doubleNode((yyvsp[(3) - (6)].dValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 200 "grammar.y"
    { (yyval.node_type) = opNode(CASE, 2, charNode((yyvsp[(3) - (6)].cValue)), (yyvsp[(6) - (6)].node_type));}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 204 "grammar.y"
    {(yyval.node_type) = (yyvsp[(1) - (1)].node_type);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 205 "grammar.y"
    {(yyval.node_type) = opNode(';', 2, (yyvsp[(1) - (2)].node_type), (yyvsp[(2) - (2)].node_type));}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 209 "grammar.y"
    {
																						(yyval.node_type) = opNode('f', 3, idNode((yyvsp[(2) - (8)].cValue)), (yyvsp[(4) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																						insert((yyvsp[(2) - (8)].cValue), KIND_FUN, TYPE_VOID, NO_MOD);
																						symbolTable->markInitialized((yyvsp[(2) - (8)].cValue)); 
																					}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 214 "grammar.y"
    {
																								(yyval.node_type) = opNode('f', 3, idNode((yyvsp[(2) - (8)].cValue)), (yyvsp[(4) - (8)].node_type), (yyvsp[(7) - (8)].node_type));
																								insert((yyvsp[(2) - (8)].cValue), KIND_FUN, (yyvsp[(1) - (8)].iValue), NO_MOD);
																								symbolTable->markInitialized((yyvsp[(2) - (8)].cValue));
																							}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 222 "grammar.y"
    {
																						symbolTable->pushParameter((yyvsp[(2) - (2)].cValue), (yyvsp[(1) - (2)].iValue));
																						(yyval.node_type) = opNode('=', 1, idNode((yyvsp[(2) - (2)].cValue), (yyvsp[(1) - (2)].iValue)));
																					}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 229 "grammar.y"
    { (yyval.node_type) = opNode(',', 1, (yyvsp[(1) - (1)].node_type)); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 230 "grammar.y"
    { (yyval.node_type) = opNode(',', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type)); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 231 "grammar.y"
    { (yyval.node_type) = opNode('e', 0); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 235 "grammar.y"
    { (yyval.node_type) = (yyvsp[(1) - (1)].node_type); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 236 "grammar.y"
    { (yyval.node_type) = opNode(',', 2, (yyvsp[(1) - (3)].node_type), (yyvsp[(3) - (3)].node_type));}
    break;



/* Line 1455 of yacc.c  */
#line 2219 "y.tab.c"
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
#line 239 "grammar.y"


int main (void) {
	yyparse();
	return 0;
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 

void insert(char id, int kind, int type, int modifier) {
	bool res = symbolTable->insert(id, kind, type, modifier);
	if (!res) {
		printf("Declaration conflict!, Variable %c declared before.\n", id);
		error = 1;
	}
}

void lookup(char id) {
	bool res = symbolTable->lookup(id);
	if (!res) {
		printf("Variable %c used before being declared!\n", id);
		error = 1;
	}
}

void isInitialized(char id) {
	bool res = symbolTable->lookup(id);
	if (!res) {
		printf("Variable %c used before being declared!\n", id);
		error = 1;
	} else {
		res = symbolTable->isInitialized(id);
		if (!res) {
			printf("Variable %c used before being initialized!\n", id);
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
			printf("Type mismatch!\n");
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
		return t1 == TYPE_DOUBLE || t2 == TYPE_DOUBLE;
	} else if (op == '=') {
		return t1 == TYPE_CHAR && t2 == TYPE_DOUBLE;
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
		printf("Type mismatch ! Cant assign a function type to variable type!\n");
		error = 1;
		return true;
	}
	return false;
}


