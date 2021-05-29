
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
#include <stdlib.h>
#include <ctype.h>


/* Line 189 of yacc.c  */
#line 82 "y.tab.c"

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
     IDENTIFIER = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     DO = 262,
     FOR = 263,
     SWITCH = 264,
     CASE = 265,
     BREAK = 266,
     DEFAULT = 267,
     RETURN = 268,
     VOID = 269,
     INTEGER = 270,
     CHARACTER = 271,
     DOUBLE_VALUE = 272,
     INT = 273,
     CHAR = 274,
     BOOL = 275,
     DOUBLE = 276,
     BOOLEAN = 277,
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
#define IDENTIFIER 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define DO 262
#define FOR 263
#define SWITCH 264
#define CASE 265
#define BREAK 266
#define DEFAULT 267
#define RETURN 268
#define VOID 269
#define INTEGER 270
#define CHARACTER 271
#define DOUBLE_VALUE 272
#define INT 273
#define CHAR 274
#define BOOL 275
#define DOUBLE 276
#define BOOLEAN 277
#define CONST 278
#define OR 279
#define AND 280
#define NOT 281
#define NE 282
#define EQ 283
#define LE 284
#define GE 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 184 "y.tab.c"

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
#define YYLAST   804

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  179

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
      40,    41,    35,    33,    46,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    38,
      28,    39,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
       0,     0,     3,     7,     8,    11,    16,    22,    26,    33,
      41,    47,    53,    61,    71,    75,    84,    88,    92,    96,
     100,   104,   108,   110,   113,   115,   119,   124,   125,   127,
     129,   131,   133,   135,   138,   140,   142,   144,   147,   149,
     153,   157,   161,   165,   169,   173,   177,   181,   185,   189,
     193,   197,   201,   205,   210,   212,   213,   215,   218,   219,
     223,   224,   233,   242,   251,   258,   265,   272,   274,   277,
     286,   295,   298,   300,   304,   305,   307,   311
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    48,    49,    37,    -1,    -1,    52,    38,
      -1,     3,    39,    52,    38,    -1,    51,     3,    39,    52,
      38,    -1,    51,     3,    38,    -1,    23,    51,     3,    39,
      52,    38,    -1,     4,    40,    52,    41,    49,     5,    49,
      -1,     4,    40,    52,    41,    49,    -1,     6,    40,    52,
      41,    49,    -1,     7,    49,     6,    40,    52,    41,    38,
      -1,     8,    40,    50,    38,    53,    38,    50,    41,    49,
      -1,    42,    54,    43,    -1,     9,    40,     3,    41,    42,
      57,    55,    43,    -1,    13,     3,    38,    -1,    13,    53,
      38,    -1,    13,    15,    38,    -1,    13,    16,    38,    -1,
      13,    17,    38,    -1,    13,    22,    38,    -1,    58,    -1,
      49,    49,    -1,    38,    -1,     3,    39,    52,    -1,    51,
       3,    39,    52,    -1,    -1,    18,    -1,    19,    -1,    21,
      -1,    20,    -1,    15,    -1,    34,    15,    -1,    16,    -1,
      22,    -1,    17,    -1,    34,    17,    -1,     3,    -1,    52,
      33,    52,    -1,    52,    34,    52,    -1,    52,    35,    52,
      -1,    52,    36,    52,    -1,    52,    44,    52,    -1,    52,
      25,    52,    -1,    52,    24,    52,    -1,    52,    27,    52,
      -1,    52,    28,    52,    -1,    52,    31,    52,    -1,    52,
      32,    52,    -1,    52,    30,    52,    -1,    52,    29,    52,
      -1,    40,    52,    41,    -1,     3,    40,    61,    41,    -1,
      52,    -1,    -1,    49,    -1,    54,    49,    -1,    -1,    12,
      45,    54,    -1,    -1,    10,    40,    15,    41,    45,    54,
      11,    38,    -1,    10,    40,    17,    41,    45,    54,    11,
      38,    -1,    10,    40,    16,    41,    45,    54,    11,    38,
      -1,    10,    40,    15,    41,    45,    54,    -1,    10,    40,
      17,    41,    45,    54,    -1,    10,    40,    16,    41,    45,
      54,    -1,    56,    -1,    57,    56,    -1,    14,     3,    40,
      60,    41,    42,    54,    43,    -1,    51,     3,    40,    60,
      41,    42,    54,    43,    -1,    51,     3,    -1,    59,    -1,
      60,    46,    59,    -1,    -1,    52,    -1,    61,    46,    52,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    20,    20,    21,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    49,    50,    51,    55,    56,
      57,    58,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    87,    88,    92,    93,    94,    99,
     100,   104,   105,   106,   107,   108,   109,   113,   114,   118,
     119,   123,   127,   128,   129,   133,   134,   135
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "IF", "ELSE", "WHILE",
  "DO", "FOR", "SWITCH", "CASE", "BREAK", "DEFAULT", "RETURN", "VOID",
  "INTEGER", "CHARACTER", "DOUBLE_VALUE", "INT", "CHAR", "BOOL", "DOUBLE",
  "BOOLEAN", "CONST", "OR", "AND", "NOT", "'>'", "'<'", "NE", "EQ", "LE",
  "GE", "'+'", "'-'", "'*'", "'/'", "'\\n'", "';'", "'='", "'('", "')'",
  "'{'", "'}'", "'%'", "':'", "','", "$accept", "program", "stmt",
  "for_statement", "data_type", "expr", "opt_expr", "stmt_list",
  "default_stmt", "case_stmt", "case_list", "function_stmt", "paramter",
  "paramter_list", "identifier_list", 0
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
     283,   284,   285,    43,    45,    42,    47,    10,    59,    61,
      40,    41,   123,   125,    37,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    50,    51,    51,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    54,    54,    54,    55,
      55,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    59,    60,    60,    60,    61,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     2,     4,     5,     3,     6,     7,
       5,     5,     7,     9,     3,     8,     3,     3,     3,     3,
       3,     3,     1,     2,     1,     3,     4,     0,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     1,     0,     1,     2,     0,     3,
       0,     8,     8,     8,     6,     6,     6,     1,     2,     8,
       8,     2,     1,     3,     0,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    38,     0,     0,     0,     0,     0,    55,
       0,    32,    34,    36,    28,    29,    31,    30,    35,     0,
       0,    24,     0,    58,     0,     0,     0,    22,     0,    77,
       0,     0,     0,    27,     0,    38,    32,    34,    36,    35,
      54,     0,     0,     0,    33,    37,    38,     0,    56,     0,
       2,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    18,    19,
      20,    21,    17,    74,     0,    52,    14,    57,     7,     0,
      74,    45,    44,    46,    47,    51,    50,    48,    49,    39,
      40,    41,    42,    43,     5,    53,     0,     0,     0,     0,
       0,    55,     0,     0,     0,    72,     0,     0,     0,     0,
      76,    10,    11,     0,    25,     0,     0,     0,    71,     0,
       0,     0,     6,     0,     0,     0,    27,    26,     0,    67,
      60,    58,    73,     8,    58,     9,    12,     0,     0,     0,
       0,    68,     0,     0,     0,     0,     0,     0,    58,    15,
      69,    70,    13,     0,     0,     0,    59,    58,    58,    58,
      64,    66,    65,     0,     0,     0,    61,    63,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    51,    74,    25,    26,    41,    49,   150,   139,
     140,    27,   115,   116,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -119
static const yytype_int16 yypact[] =
{
    -119,   172,  -119,    14,   -33,    45,   535,    53,    54,     3,
      32,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,   103,
      -7,  -119,    12,   535,   335,    39,    48,  -119,    12,    12,
      12,    12,   575,    84,    85,   -24,     0,    59,    72,    87,
     760,    88,    89,   124,  -119,  -119,    90,   634,   535,   212,
    -119,   535,    31,    12,    12,    12,    12,    12,    12,    12,
      12,    12,    12,    12,    12,  -119,    12,   652,   760,   -37,
     670,   688,    91,    93,    97,   133,    96,  -119,  -119,  -119,
    -119,  -119,  -119,   103,    99,  -119,  -119,   535,  -119,    12,
     103,   760,   760,    65,    65,    65,    65,    65,    65,   -23,
     -23,    71,    71,   760,  -119,  -119,    12,   535,   535,    12,
      12,    12,   100,   102,   138,  -119,    -5,    12,   706,    -2,
     760,   375,   535,   724,   760,   104,    12,   135,  -119,   105,
     103,   742,  -119,   106,   535,   615,    84,   760,   109,  -119,
      35,   535,  -119,  -119,   535,   535,  -119,   113,   101,   110,
     107,  -119,   253,   294,   535,   115,   117,   118,   535,  -119,
    -119,  -119,   535,   116,   119,   128,   535,   535,   535,   535,
     415,   455,   495,   108,   122,   125,  -119,  -119,  -119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -119,  -119,    -1,    26,   -16,     2,    63,  -118,  -119,    37,
    -119,  -119,    52,    94,  -119
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      24,    53,    54,    43,   105,    32,    35,    30,    44,   106,
      45,    40,    63,    64,    77,    46,    29,    75,    36,    37,
      38,    66,    48,   152,    47,    39,   153,    11,    12,    13,
      67,    68,    70,    71,    18,    42,   129,    20,    78,   133,
     166,   130,    52,    22,   130,   138,    20,   149,    87,   170,
     171,   172,    22,    28,    29,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   114,   103,    88,
      89,    90,    53,    54,   114,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    31,    65,    73,    76,    53,
      54,   118,    66,    33,    34,    53,    54,    79,    61,    62,
      63,    64,    14,    15,    16,    17,   121,   122,   120,    66,
      80,   123,   124,    40,   114,    66,   155,   156,   157,   131,
      75,    14,    15,    16,    17,    81,    82,    84,   137,    83,
      29,   109,   110,   145,   122,   111,   112,   113,   117,   126,
      48,   128,   136,    48,   127,   138,   176,   141,   144,   148,
     159,    87,    87,   162,   154,   158,   163,    48,   164,   165,
     177,   167,   147,   178,   168,    87,    48,    48,    48,    87,
      87,    87,     2,   169,   125,     3,     4,   151,     5,     6,
       7,     8,   142,     0,   119,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
      21,     0,    22,     0,    23,     3,     4,     0,     5,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
      21,     0,    22,     0,    23,    86,     3,     4,     0,     5,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,    21,     0,    22,     0,    23,   160,     3,     4,     0,
       5,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,    21,     0,    22,     0,    23,   161,     3,     4,
       0,     5,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,    50,    21,     0,    22,     0,    23,     3,     4,
     134,     5,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,    22,     0,    23,     3,     4,
       0,     5,     6,     7,     8,     0,   173,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,    22,     0,    23,     3,     4,
       0,     5,     6,     7,     8,     0,   174,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,    22,     0,    23,     3,     4,
       0,     5,     6,     7,     8,     0,   175,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,    22,     0,    23,     3,     4,
       0,     5,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,    22,     0,    23,     3,     4,
       0,    72,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    21,     0,    22,     0,    23,     3,     4,
       0,     5,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,   146,     0,    22,     0,    23,    53,    54,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,    85,    53,    54,    66,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
     104,     0,     0,     0,    53,    54,    66,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,   107,    53,    54,    66,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,   108,
      53,    54,    66,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,   132,     0,     0,     0,    53,    54,
      66,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,   135,    53,    54,    66,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
     143,     0,     0,     0,    53,    54,    66,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       1,    24,    25,    19,    41,     6,     3,    40,    15,    46,
      17,     9,    35,    36,    38,     3,    40,    33,    15,    16,
      17,    44,    23,   141,    22,    22,   144,    15,    16,    17,
      28,    29,    30,    31,    22,     3,    41,    34,    38,    41,
     158,    46,     3,    40,    46,    10,    34,    12,    49,   167,
     168,   169,    40,    39,    40,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    83,    66,    38,
      39,    40,    24,    25,    90,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    40,    38,     3,     3,    24,
      25,    89,    44,    40,    40,    24,    25,    38,    33,    34,
      35,    36,    18,    19,    20,    21,   107,   108,   106,    44,
      38,   109,   110,   111,   130,    44,    15,    16,    17,   117,
     136,    18,    19,    20,    21,    38,    38,     3,   126,    40,
      40,    40,    39,   134,   135,    38,     3,    41,    39,    39,
     141,     3,    38,   144,    42,    10,    38,    42,    42,    40,
      43,   152,   153,   154,    41,    45,    41,   158,    41,    41,
      38,    45,   136,    38,    45,   166,   167,   168,   169,   170,
     171,   172,     0,    45,   111,     3,     4,   140,     6,     7,
       8,     9,   130,    -1,    90,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    -1,    40,    -1,    42,     3,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    -1,    40,    -1,    42,    43,     3,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    38,    -1,    40,    -1,    42,    43,     3,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    -1,    42,    43,     3,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    38,    -1,    40,    -1,    42,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,
      -1,     6,     7,     8,     9,    -1,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,
      -1,     6,     7,     8,     9,    -1,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,
      -1,     6,     7,     8,     9,    -1,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,     3,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    41,    24,    25,    44,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    -1,    24,    25,    44,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    41,    24,    25,    44,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    41,
      24,    25,    44,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    -1,    24,    25,
      44,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    41,    24,    25,    44,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    -1,    24,    25,    44,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     3,     4,     6,     7,     8,     9,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      34,    38,    40,    42,    49,    51,    52,    58,    39,    40,
      40,    40,    49,    40,    40,     3,    15,    16,    17,    22,
      52,    53,     3,    51,    15,    17,     3,    52,    49,    54,
      37,    49,     3,    24,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    38,    44,    52,    52,    61,
      52,    52,     6,     3,    50,    51,     3,    38,    38,    38,
      38,    38,    38,    40,     3,    41,    43,    49,    38,    39,
      40,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    38,    41,    46,    41,    41,    40,
      39,    38,     3,    41,    51,    59,    60,    39,    52,    60,
      52,    49,    49,    52,    52,    53,    39,    42,     3,    41,
      46,    52,    38,    41,     5,    41,    38,    52,    10,    56,
      57,    42,    59,    38,    42,    49,    38,    50,    40,    12,
      55,    56,    54,    54,    41,    15,    16,    17,    45,    43,
      43,    43,    49,    41,    41,    41,    54,    45,    45,    45,
      54,    54,    54,    11,    11,    11,    38,    38,    38
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
        case 4:

/* Line 1455 of yacc.c  */
#line 25 "grammar.y"
    { printf("Expression\n"); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 26 "grammar.y"
    { printf("Assignment\n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 27 "grammar.y"
    { printf("Declaration with assignment\n"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 28 "grammar.y"
    { printf("Declaration\n"); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 29 "grammar.y"
    { printf("Const Declaration\n"); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 30 "grammar.y"
    { printf("IF Else Condition\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 31 "grammar.y"
    { printf("IF Condition\n"); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 32 "grammar.y"
    { printf("While Loop\n"); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 33 "grammar.y"
    { printf("Do While Loop\n"); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 34 "grammar.y"
    { printf("For Loop\n"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 35 "grammar.y"
    { printf("List\n"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 36 "grammar.y"
    { printf("Switch Case\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 37 "grammar.y"
    { printf("Return variable\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 38 "grammar.y"
    { printf("Return expression\n");}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 39 "grammar.y"
    { printf("Return integer\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 40 "grammar.y"
    { printf("Return char\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 41 "grammar.y"
    { printf("Return double\n");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 42 "grammar.y"
    { printf("Return boolean\n");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 43 "grammar.y"
    { printf("Function\n");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 55 "grammar.y"
    { printf("Integer datatype\n"); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 56 "grammar.y"
    { printf("Charater datatype\n"); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 57 "grammar.y"
    { printf("Double datatype\n"); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 58 "grammar.y"
    { printf("Boolean datatype\n"); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 62 "grammar.y"
    { printf("Integer\n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 63 "grammar.y"
    { printf("Negative Integer\n");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 64 "grammar.y"
    { printf("Character\n"); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 65 "grammar.y"
    { printf("Boolean\n"); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 66 "grammar.y"
    { printf("Double\n"); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 67 "grammar.y"
    { printf("Negative Double\n"); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 68 "grammar.y"
    { printf("Identifier\n"); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 69 "grammar.y"
    { printf("Addition\n");  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 70 "grammar.y"
    { printf("Subtraction\n");  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 71 "grammar.y"
    { printf("Multiplication\n"); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 72 "grammar.y"
    { printf("Division\n"); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 73 "grammar.y"
    { printf("Modulus\n"); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 74 "grammar.y"
    { printf("AND\n"); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 75 "grammar.y"
    { printf("OR\n"); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 76 "grammar.y"
    { printf("Greater than\n"); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 77 "grammar.y"
    { printf("Less than\n"); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 78 "grammar.y"
    { printf("Less than or Equal\n"); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 79 "grammar.y"
    { printf("Greater than or Equal\n"); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 80 "grammar.y"
    { printf("Equal\n"); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 81 "grammar.y"
    { printf("Not Equal\n"); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 82 "grammar.y"
    { printf("Brackets\n"); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 83 "grammar.y"
    { printf("Function Call\n"); }
    break;



/* Line 1455 of yacc.c  */
#line 1962 "y.tab.c"
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
#line 137 "grammar.y"


int main (void) {
	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 

