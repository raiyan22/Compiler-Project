
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
#line 3 "m.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>
	#include "required.h"
	int yyparse();
	int yylex();
	int yyerror();
	extern int yylineno;
	int isdeclared(char*);
	int addnewval(char*,int );
	int getval(char*);
	int setval(char* , int );
   


/* Line 189 of yacc.c  */
#line 91 "m.tab.c"

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
     ID = 258,
     NUMBER = 259,
     STR = 260,
     GREATEREQUAL = 261,
     LESSEQUAL = 262,
     GREATERTHAN = 263,
     LESSTHAN = 264,
     MINUS = 265,
     PLUS = 266,
     DIVIDE = 267,
     MULTIPLY = 268,
     INT = 269,
     DOUBLE = 270,
     CHAR = 271,
     RUN = 272,
     PB = 273,
     PE = 274,
     BB = 275,
     BE = 276,
     SEMICOLON = 277,
     COMMA = 278,
     ASSIGN = 279,
     PRINTVAR = 280,
     PRINTSTR = 281,
     PRINTLN = 282,
     PRINTFUNC = 283,
     DIVIVE = 284,
     MOD = 285,
     FACT = 286,
     IF = 287,
     ELSE = 288,
     ELSEIF = 289,
     FOR = 290,
     TO = 291,
     SWITCH = 292,
     DEFAULT = 293,
     COLON = 294,
     UDFUNCTION = 295,
     EQUAL = 296,
     NOTEQUAL = 297,
     LOGFUNC = 298,
     LOG10FUNC = 299,
     TANFUNC = 300,
     MAXNUMBER = 301,
     MINNUMBER = 302,
     ODDEVEN = 303,
     SUMDIGIT = 304,
     REVNUM = 305,
     COMPARE = 306,
     COMPAREREVERSE = 307,
     REVERSE = 308,
     SORT = 309,
     SINFUNC = 310,
     COSFUNC = 311,
     GCDFUNC = 312,
     LCMFUNC = 313,
     POWERFUNC = 314,
     IFX = 315,
     UMINUS = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "m.y"

  char text[1000];
  int value;



/* Line 214 of yacc.c  */
#line 195 "m.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "m.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1033

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    12,    13,    16,    19,    22,    25,
      28,    31,    34,    37,    40,    44,    46,    48,    50,    54,
      56,    58,    62,    66,    72,    78,    84,    90,    96,   102,
     108,   113,   119,   125,   131,   137,   143,   149,   154,   159,
     165,   171,   176,   179,   180,   183,   189,   195,   200,   201,
     204,   210,   216,   221,   223,   225,   228,   232,   236,   240,
     244,   248,   252,   256,   260,   264,   268,   272,   276,   280,
     284,   288,   292,   296,   305,   307,   308,   317,   323,   335,
     343,   345,   346,   353,   360,   361,   364,   373,   374,   378,
     379
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    85,    64,    -1,    17,    20,    65,    21,
      22,    -1,    -1,    65,    66,    -1,    65,    72,    -1,    65,
      77,    -1,    65,    78,    -1,    65,    71,    -1,    65,    81,
      -1,    65,    82,    -1,    65,    75,    -1,    65,    70,    -1,
      67,    68,    22,    -1,    14,    -1,    15,    -1,    16,    -1,
      69,    23,    68,    -1,    69,    -1,     3,    -1,     3,    24,
      77,    -1,     3,    24,    70,    -1,    46,    18,    77,    19,
      22,    -1,    47,    18,    77,    19,    22,    -1,    55,    18,
      77,    19,    22,    -1,    56,    18,    77,    19,    22,    -1,
      45,    18,    77,    19,    22,    -1,    44,    18,    77,    19,
      22,    -1,    43,    18,    77,    19,    22,    -1,    18,    77,
      19,    22,    -1,    31,    18,    77,    19,    22,    -1,    48,
      18,    77,    19,    22,    -1,    49,    18,    77,    19,    22,
      -1,    50,    18,    77,    19,    22,    -1,    53,    18,     5,
      19,    22,    -1,    54,    18,     5,    19,    22,    -1,     3,
      24,    77,    22,    -1,     3,    24,    70,    22,    -1,    25,
      18,     3,    19,    22,    -1,    26,    18,     5,    19,    22,
      -1,    27,    18,    19,    22,    -1,    28,    70,    -1,    -1,
      73,    74,    -1,    25,    18,     3,    19,    22,    -1,    26,
      18,     5,    19,    22,    -1,    27,    18,    19,    22,    -1,
      -1,    75,    76,    -1,    25,    18,     3,    19,    22,    -1,
      26,    18,     5,    19,    22,    -1,    27,    18,    19,    22,
      -1,     4,    -1,     3,    -1,    10,    77,    -1,    77,    11,
      77,    -1,    77,    10,    77,    -1,    77,    13,    77,    -1,
      77,    12,    77,    -1,    77,    30,    77,    -1,    77,    51,
      77,    -1,    77,    52,    77,    -1,    77,    57,    77,    -1,
      77,    58,    77,    -1,    77,    59,    77,    -1,    77,     9,
      77,    -1,    77,     8,    77,    -1,    77,     7,    77,    -1,
      77,     6,    77,    -1,    77,    41,    77,    -1,    77,    42,
      77,    -1,    18,    77,    19,    -1,    32,    18,    79,    19,
      20,    73,    21,    80,    -1,    77,    -1,    -1,    80,    34,
      18,    77,    19,    20,    73,    21,    -1,    80,    33,    20,
      73,    21,    -1,    35,    18,    77,    36,    77,    39,    77,
      19,    20,    75,    21,    -1,    37,    18,    83,    19,    20,
      84,    21,    -1,    77,    -1,    -1,    84,    77,    39,    20,
      75,    21,    -1,    84,    38,    39,    20,    75,    21,    -1,
      -1,    85,    86,    -1,    67,    40,    18,    87,    19,    20,
      65,    21,    -1,    -1,    67,     3,    88,    -1,    -1,    88,
      23,    67,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    47,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    63,    65,    65,    65,    67,    68,
      70,    78,    85,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   113,   118,   126,   134,   139,   159,   167,   182,
     190,   194,   196,   199,   200,   204,   214,   218,   223,   224,
     228,   238,   242,   252,   253,   261,   262,   263,   264,   265,
     274,   279,   284,   289,   301,   315,   327,   328,   329,   330,
     331,   332,   333,   342,   361,   371,   372,   388,   416,   459,
     462,   468,   469,   486,   510,   511,   514,   516,   517,   519,
     520
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUMBER", "STR", "GREATEREQUAL",
  "LESSEQUAL", "GREATERTHAN", "LESSTHAN", "MINUS", "PLUS", "DIVIDE",
  "MULTIPLY", "INT", "DOUBLE", "CHAR", "RUN", "PB", "PE", "BB", "BE",
  "SEMICOLON", "COMMA", "ASSIGN", "PRINTVAR", "PRINTSTR", "PRINTLN",
  "PRINTFUNC", "DIVIVE", "MOD", "FACT", "IF", "ELSE", "ELSEIF", "FOR",
  "TO", "SWITCH", "DEFAULT", "COLON", "UDFUNCTION", "EQUAL", "NOTEQUAL",
  "LOGFUNC", "LOG10FUNC", "TANFUNC", "MAXNUMBER", "MINNUMBER", "ODDEVEN",
  "SUMDIGIT", "REVNUM", "COMPARE", "COMPAREREVERSE", "REVERSE", "SORT",
  "SINFUNC", "COSFUNC", "GCDFUNC", "LCMFUNC", "POWERFUNC", "IFX", "UMINUS",
  "$accept", "starthere", "program", "statement", "declaration", "type",
  "variables", "variable", "furstatement", "assign", "print", "ifbody",
  "ifstatement", "loopbody", "loopstatement", "expression", "ifelse",
  "ifexp", "elseif", "forloop", "switch", "expswitch", "switchinside",
  "function", "func", "fparameter", "fsparameter", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    67,    67,    67,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    72,    72,    73,    73,    74,    74,    74,    75,    75,
      76,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    79,    80,    80,    80,    81,    82,
      83,    84,    84,    84,    85,    85,    86,    87,    87,    88,
      88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     5,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     1,     1,     1,     3,     1,
       1,     3,     3,     5,     5,     5,     5,     5,     5,     5,
       4,     5,     5,     5,     5,     5,     5,     4,     4,     5,
       5,     4,     2,     0,     2,     5,     5,     4,     0,     2,
       5,     5,     4,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     8,     1,     0,     8,     5,    11,     7,
       1,     0,     6,     6,     0,     2,     8,     0,     3,     0,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      84,     0,     0,     1,    15,    16,    17,     0,     2,     0,
      85,     4,     0,     0,    87,    54,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,    13,     9,     6,    12,     7,     8,    10,    11,
       0,     0,     0,    54,     0,    55,     0,     3,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,    19,     0,     0,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,    74,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,     0,     0,     0,    69,    68,    67,    66,
      57,    56,    59,    58,    60,    70,    71,    61,    62,    63,
      64,    65,    88,     4,    38,    37,    72,    30,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    21,
      18,     0,     0,     0,     0,     0,    39,    40,    31,    43,
       0,    81,    29,    28,    27,    23,    24,    32,    33,    34,
      35,    36,    25,    26,     0,     0,    52,     0,    86,     0,
       0,     0,    50,    51,    90,    75,     0,     0,     0,    44,
       0,    79,     0,     0,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    48,    48,    43,
       0,     0,     0,    47,     0,     0,     0,     0,     0,    45,
      46,    78,    83,    82,    77,     0,    43,     0,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     8,    13,    40,    41,    80,    81,    42,    43,
      44,   209,   219,    45,    85,    46,    47,   114,   224,    48,
      49,   117,   211,     2,    10,    51,   152
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -234
static const yytype_int16 yypact[] =
{
    -234,    13,    51,  -234,  -234,  -234,  -234,    -8,  -234,   -25,
    -234,  -234,    -1,    90,    12,    -6,  -234,     6,     6,    -2,
       3,    16,    20,   953,    25,    27,    41,    77,    81,    89,
      91,    94,    96,   101,   102,   105,   108,   113,   114,   123,
    -234,    30,  -234,  -234,  -234,    61,   931,  -234,  -234,  -234,
     139,   129,   202,  -234,     6,   974,   253,  -234,   146,   145,
     132,     6,  -234,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,   147,   148,     6,     6,   130,
     133,   136,   138,   142,   143,  -234,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,  -234,   151,   140,   267,   321,   141,   155,   157,
     144,   335,   389,   931,   158,   403,   931,   159,   457,   471,
     525,   539,   593,   607,   661,   675,   164,   168,   729,   743,
     202,  -234,    30,   162,   185,   169,   935,   935,   935,   935,
     183,   183,   974,   974,   931,   931,   931,   931,   931,   931,
     931,   931,   150,  -234,  -234,  -234,  -234,  -234,   170,   189,
    -234,   141,   192,   195,     6,   196,   197,   199,   200,   204,
     205,   206,   207,   208,   209,   210,   214,   215,  -234,   931,
    -234,   198,   219,   217,    12,   154,  -234,  -234,  -234,  -234,
     797,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,   221,   222,  -234,   250,  -234,     4,
       6,     1,  -234,  -234,  -234,  -234,   149,   236,   249,  -234,
     810,  -234,   179,   864,   -26,   265,   264,   251,   261,   262,
     266,   268,   269,   252,   271,   263,  -234,  -234,  -234,  -234,
       6,   270,   274,  -234,    15,    37,    64,    71,   877,  -234,
    -234,  -234,  -234,  -234,  -234,   273,  -234,   103,  -234
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -234,  -234,  -234,   131,  -234,     0,   166,  -234,   -20,  -234,
    -234,  -233,  -234,  -135,  -234,   -17,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      55,    56,     9,    62,    53,    16,   247,   231,   232,    53,
      16,    17,    11,     3,    50,    12,    17,    14,    52,    54,
      57,    58,   221,   257,    54,   215,     4,     5,     6,   216,
     217,   218,   104,    79,    59,   105,   251,   106,    60,   222,
      82,    83,    84,    63,   111,    64,   112,   113,   115,   116,
     118,   119,   120,   121,   122,   123,   124,   125,   252,    65,
     128,   129,    82,    83,    84,     4,     5,     6,     7,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   253,    82,    83,    84,    82,
      83,    84,   254,    15,    16,    66,   216,   217,   218,    67,
      17,   244,   245,   246,     4,     5,     6,    68,    18,    69,
     178,    19,    70,   179,    71,    20,    21,    22,    23,    72,
      73,    24,    25,    74,   258,    26,    75,    27,   216,   217,
     218,    76,    77,    28,    29,    30,    31,    32,    33,    34,
      35,    78,   102,    36,    37,    38,    39,   190,   103,   108,
     109,   110,   126,   127,   130,   131,   133,    15,    16,   132,
     134,   135,   154,   157,    17,   181,   160,   225,     4,     5,
       6,   153,    18,   184,   158,   208,   159,   163,   165,    20,
      21,    22,    23,   174,   207,    24,    25,   175,   183,    26,
     182,    27,   186,   220,   223,    92,    93,    28,    29,    30,
      31,    32,    33,    34,    35,    53,    16,    36,    37,    38,
      39,   187,    17,    94,   188,   189,   191,   204,   229,   192,
      18,   193,   194,   248,    95,    96,   195,   196,   197,   198,
     199,   200,   201,    24,    97,    98,   202,   203,   205,   206,
      99,   100,   101,   212,   213,    28,    29,    30,    31,    32,
      33,    34,    35,   214,   226,    36,    37,    38,    39,    86,
      87,    88,    89,    90,    91,    92,    93,   227,   233,   234,
     235,   241,   107,    86,    87,    88,    89,    90,    91,    92,
      93,   236,   237,    94,   185,   243,   238,   240,   239,   155,
     242,     0,   249,   256,    95,    96,   250,    94,   180,     0,
       0,     0,     0,     0,    97,    98,     0,     0,    95,    96,
      99,   100,   101,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,    99,   100,   101,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     156,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,    94,     0,     0,   161,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,    94,     0,     0,     0,     0,
       0,     0,    97,    98,     0,     0,    95,    96,    99,   100,
     101,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,    99,   100,   101,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,   162,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,     0,    94,     0,     0,     0,     0,     0,   164,
      97,    98,     0,     0,    95,    96,    99,   100,   101,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
      99,   100,   101,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,   166,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,    94,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,    94,     0,     0,     0,     0,     0,     0,    97,    98,
       0,     0,    95,    96,    99,   100,   101,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,    99,   100,
     101,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   168,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,    94,     0,     0,   169,     0,
       0,     0,     0,     0,     0,     0,    95,    96,     0,    94,
       0,     0,     0,     0,     0,     0,    97,    98,     0,     0,
      95,    96,    99,   100,   101,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,    99,   100,   101,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,   170,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,    94,     0,     0,   171,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,    94,     0,     0,
       0,     0,     0,     0,    97,    98,     0,     0,    95,    96,
      99,   100,   101,     0,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,    99,   100,   101,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     172,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,    94,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,    94,     0,     0,     0,     0,
       0,     0,    97,    98,     0,     0,    95,    96,    99,   100,
     101,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,     0,    99,   100,   101,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,   176,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,    94,
       0,     0,   177,     0,     0,     0,     0,     0,     0,     0,
      95,    96,     0,    94,     0,     0,     0,     0,     0,     0,
      97,    98,     0,     0,    95,    96,    99,   100,   101,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
      99,   100,   101,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    92,    93,     0,     0,     0,    94,     0,   228,
       0,     0,     0,     0,     0,     0,   210,     0,    95,    96,
      94,     0,     0,     0,     0,     0,     0,     0,    97,    98,
       0,    95,    96,     0,    99,   100,   101,     0,     0,     0,
       0,    97,    98,     0,     0,     0,     0,    99,   100,   101,
      86,    87,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,    94,     0,   255,     0,     0,     0,
       0,     0,     0,   230,     0,    95,    96,    94,     0,     0,
       0,     0,     0,     0,     0,    97,    98,     0,    95,    96,
       0,    99,   100,   101,     0,     0,     0,     0,    97,    98,
       0,     0,     0,     0,    99,   100,   101,    86,    87,    88,
      89,    90,    91,    92,    93,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,     0,    94,     0,     0,     0,     0,
       0,    61,    95,    96,     0,     0,    95,    96,     0,     0,
       0,     0,    97,    98,    24,     0,    97,    98,    99,   100,
     101,     0,    99,   100,   101,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    94,     0,    36,    37,    38,    39,
       0,     0,     0,     0,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,    97,    98,     0,     0,     0,
       0,    99,   100,   101
};

static const yytype_int16 yycheck[] =
{
      17,    18,     2,    23,     3,     4,   239,    33,    34,     3,
       4,    10,    20,     0,    14,    40,    10,    18,    24,    18,
      22,    18,    21,   256,    18,    21,    14,    15,    16,    25,
      26,    27,    52,     3,    18,    52,    21,    54,    18,    38,
      25,    26,    27,    18,    61,    18,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    21,    18,
      77,    78,    25,    26,    27,    14,    15,    16,    17,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    21,    25,    26,    27,    25,
      26,    27,    21,     3,     4,    18,    25,    26,    27,    18,
      10,   236,   237,   238,    14,    15,    16,    18,    18,    18,
     130,    21,    18,   130,    18,    25,    26,    27,    28,    18,
      18,    31,    32,    18,    21,    35,    18,    37,    25,    26,
      27,    18,    18,    43,    44,    45,    46,    47,    48,    49,
      50,    18,     3,    53,    54,    55,    56,   164,    19,     3,
       5,    19,     5,     5,    24,    22,    18,     3,     4,    23,
      18,    18,    22,    22,    10,     3,    22,    18,    14,    15,
      16,    20,    18,    23,    19,    21,    19,    19,    19,    25,
      26,    27,    28,    19,   184,    31,    32,    19,    19,    35,
       5,    37,    22,   210,   211,    12,    13,    43,    44,    45,
      46,    47,    48,    49,    50,     3,     4,    53,    54,    55,
      56,    22,    10,    30,    22,    20,    20,    19,    39,    22,
      18,    22,    22,   240,    41,    42,    22,    22,    22,    22,
      22,    22,    22,    31,    51,    52,    22,    22,    19,    22,
      57,    58,    59,    22,    22,    43,    44,    45,    46,    47,
      48,    49,    50,     3,    18,    53,    54,    55,    56,     6,
       7,     8,     9,    10,    11,    12,    13,    18,     3,     5,
      19,    19,    19,     6,     7,     8,     9,    10,    11,    12,
      13,    20,    20,    30,   153,    22,    20,    18,    20,    22,
      19,    -1,    22,    20,    41,    42,    22,    30,   132,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    41,    42,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    30,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    41,    42,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,
      51,    52,    -1,    -1,    41,    42,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      57,    58,    59,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    30,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    41,    42,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    57,    58,
      59,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    30,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      41,    42,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    57,    58,    59,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    30,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    41,    42,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    30,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    41,    42,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    30,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    41,    42,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      57,    58,    59,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    30,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    41,    42,    -1,    57,    58,    59,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    30,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    41,    42,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,     6,     7,     8,
       9,    10,    11,    12,    13,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    18,    41,    42,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    51,    52,    31,    -1,    51,    52,    57,    58,
      59,    -1,    57,    58,    59,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    30,    -1,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    85,     0,    14,    15,    16,    17,    64,    67,
      86,    20,    40,    65,    18,     3,     4,    10,    18,    21,
      25,    26,    27,    28,    31,    32,    35,    37,    43,    44,
      45,    46,    47,    48,    49,    50,    53,    54,    55,    56,
      66,    67,    70,    71,    72,    75,    77,    78,    81,    82,
      67,    87,    24,     3,    18,    77,    77,    22,    18,    18,
      18,    18,    70,    18,    18,    18,    18,    18,    18,    18,
      18,    18,    18,    18,    18,    18,    18,    18,    18,     3,
      68,    69,    25,    26,    27,    76,     6,     7,     8,     9,
      10,    11,    12,    13,    30,    41,    42,    51,    52,    57,
      58,    59,     3,    19,    70,    77,    77,    19,     3,     5,
      19,    77,    77,    77,    79,    77,    77,    83,    77,    77,
      77,    77,    77,    77,    77,    77,     5,     5,    77,    77,
      24,    22,    23,    18,    18,    18,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    88,    20,    22,    22,    19,    22,    19,    19,
      22,    19,    19,    19,    36,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    70,    77,
      68,     3,     5,    19,    23,    65,    22,    22,    22,    20,
      77,    20,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    19,    19,    22,    67,    21,    73,
      39,    84,    22,    22,     3,    21,    25,    26,    27,    74,
      77,    21,    38,    77,    80,    18,    18,    18,    19,    39,
      39,    33,    34,     3,     5,    19,    20,    20,    20,    20,
      18,    19,    19,    22,    75,    75,    75,    73,    77,    22,
      22,    21,    21,    21,    21,    19,    20,    73,    21
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
#line 45 "m.y"
    { printf("\n\n\n>>>> Success <<<<\n\n"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 63 "m.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 65 "m.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 67 "m.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 68 "m.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 70 "m.y"
    {//printf("%s\n",$1);
												int x = addnewval((yyvsp[(1) - (1)].text),0);
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,(yyvsp[(1) - (1)].text));
													exit(-1);
												}

											;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 78 "m.y"
    {//printf("%s %d\n",$1,$3);
												int x = addnewval((yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].value));
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,(yyvsp[(1) - (3)].text));
													exit(-1);
													}
											;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 85 "m.y"
    {//printf("%s %d\n",$1,$3);
												int x = addnewval((yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].value));
												if(!x) {
													printf("Compilation Error:\nLine no: %d   Variable %s is already declared\n",yylineno,(yyvsp[(1) - (3)].text));
													exit(-1);
													}
											;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 99 "m.y"
    { printf("%d\n",(yyvsp[(3) - (5)].value));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 100 "m.y"
    { printf("%d\n",(yyvsp[(3) - (5)].value));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 101 "m.y"
    { printf("%lf\n",sin( (yyvsp[(3) - (5)].value)*3.1416/180)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 102 "m.y"
    { printf("%lf\n",cos( (yyvsp[(3) - (5)].value)*3.1416/180)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 103 "m.y"
    { printf("%lf\n",tan( (yyvsp[(3) - (5)].value)*3.1416/180)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 104 "m.y"
    { printf("%lf\n",(log( (yyvsp[(3) - (5)].value)*1.0)/log(10.0))); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 105 "m.y"
    { printf("%lf\n",(log( (yyvsp[(3) - (5)].value))));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 106 "m.y"
    { (yyval.value)=(yyvsp[(2) - (4)].value);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 107 "m.y"
    { int n=(yyvsp[(3) - (5)].value);
																int ans=1,i;
																for(i=n;i>1;i--)
																	ans= ans * i;
																printf("%d\n",ans);
															;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 113 "m.y"
    { int n=abs((yyvsp[(3) - (5)].value));
																	if (n%2==0)	{	
																printf("even\n");}
																else { printf("odd\n"); }
															;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 118 "m.y"
    { int s=0, n=(yyvsp[(3) - (5)].value), m;
																	while(n>0){    
																	m=n%10;    
																	s+=m;    
																	n/=10;    
																	}    
																	printf("%d\n",s);
															;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 126 "m.y"
    { int n=(yyvsp[(3) - (5)].value), reverse=0, rem; 
															while(n!=0){    
																	rem=n%10;    
																	reverse=reverse*10+rem;    
																	n/=10;    
																}     
																	printf("%d\n",reverse);
															;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 134 "m.y"
    { int l = strlen((yyvsp[(3) - (5)].text));
																int i;
																for(i = l-2;  i >0; i--) 
																	printf("%c",(yyvsp[(3) - (5)].text)[i]);
															;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 139 "m.y"
    { int l = strlen((yyvsp[(3) - (5)].text));
																int i,j;
																for(i=1; i<l-1; i++)
																{
																	for(j=i+1; j<l-1; j++)
																	{
																		if((yyvsp[(3) - (5)].text)[i] > (yyvsp[(3) - (5)].text)[j])
																		{
																			char temp     = (yyvsp[(3) - (5)].text)[i];
																			(yyvsp[(3) - (5)].text)[i] = (yyvsp[(3) - (5)].text)[j];
																			(yyvsp[(3) - (5)].text)[j] = temp;
																		}
																	}
																}
																for(i = 1;  i < l-1; i++) 
																	printf("%c",(yyvsp[(3) - (5)].text)[i]);
															;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 159 "m.y"
    {	if(!isdeclared((yyvsp[(1) - (4)].text))) {
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(1) - (4)].text));
																	exit(-1);
																}
																else{
																	setval((yyvsp[(1) - (4)].text),(yyvsp[(3) - (4)].value));
																}
															;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 167 "m.y"
    {	if(!isdeclared((yyvsp[(1) - (4)].text))) {
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(1) - (4)].text));
																	exit(-1);
																}
																else{
																	setval((yyvsp[(1) - (4)].text),(yyvsp[(3) - (4)].value));
																}
															;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 182 "m.y"
    {	if( isdeclared((yyvsp[(3) - (5)].text)) ){
																	printf("%d",getval((yyvsp[(3) - (5)].text)));
																}
																else{
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(3) - (5)].text));
																	exit(-1);
																}
															;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 190 "m.y"
    {	int i,l = strlen((yyvsp[(3) - (5)].text));
															for(i = 1;  i < l-1; i++) {
																	printf("%c",(yyvsp[(3) - (5)].text)[i]); }
															;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 194 "m.y"
    {	printf("\n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 204 "m.y"
    {	pop++;
																if(!isdeclared((yyvsp[(3) - (5)].text))){
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(3) - (5)].text));
																	exit(-1);
																}
																else{
																	mark=1;
																	v1[pop] = getval((yyvsp[(3) - (5)].text));
																}							
															;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 214 "m.y"
    {	pop++;
																mark=2;
																strcpy(keep[pop],(yyvsp[(3) - (5)].text));	
															;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 218 "m.y"
    {	pop++;
																mark=3;
															;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 228 "m.y"
    {
																if(!isdeclared((yyvsp[(3) - (5)].text))){
																	printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(3) - (5)].text));
																	exit(-1);
																}
																else{
																	mark=1;
																	v1[3] = getval((yyvsp[(3) - (5)].text));
																}
															;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 238 "m.y"
    {
																mark = 2;
																strcpy(keep[3],(yyvsp[(3) - (5)].text));
															;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 242 "m.y"
    {
																mark = 3;
															;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 252 "m.y"
    { (yyval.value) = (yyvsp[(1) - (1)].value);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 253 "m.y"
    { if(!isdeclared((yyvsp[(1) - (1)].text))) {
														printf("Compilation Error:\nLine no: %d   Variable %s is not declared\n",yylineno,(yyvsp[(1) - (1)].text));
														exit(-1);
													}
												  else{
													(yyval.value) = getval((yyvsp[(1) - (1)].text));
													}
												;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 261 "m.y"
    { (yyval.value) = -(yyvsp[(2) - (2)].value);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 262 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) + (yyvsp[(3) - (3)].value);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 263 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) - (yyvsp[(3) - (3)].value);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 264 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) * (yyvsp[(3) - (3)].value);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 265 "m.y"
    { if((yyvsp[(3) - (3)].value)) {
 													(yyval.value) = (yyvsp[(1) - (3)].value) / (yyvsp[(3) - (3)].value);
													}
				  								  else {
													(yyval.value) = 0;
													printf("\nError:\nLine no: %d   division by zero\n",yylineno);
													exit(-1);
													} 
												;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 274 "m.y"
    { if((yyvsp[(3) - (3)].value))
													(yyval.value) = (yyvsp[(1) - (3)].value) % (yyvsp[(3) - (3)].value);
												else
													(yyval.value)=0;
												;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 279 "m.y"
    { if((yyvsp[(1) - (3)].value)>(yyvsp[(3) - (3)].value)) 
													(yyval.value)=(yyvsp[(1) - (3)].value);
												  else 
												  	(yyval.value)=(yyvsp[(3) - (3)].value);
												;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 284 "m.y"
    { if((yyvsp[(3) - (3)].value)>(yyvsp[(1) - (3)].value)) 
														(yyval.value)=(yyvsp[(1) - (3)].value);
													 else 
													 	(yyval.value)=(yyvsp[(3) - (3)].value);
													;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 289 "m.y"
    { int n1=(yyvsp[(1) - (3)].value);
														int n2=(yyvsp[(3) - (3)].value);
														while(n1!=n2)
														{
															if(n1 > n2)
																n1 -= n2;
															else
																n2 -= n1;
														}
														//printf("%d\n",n1);
														(yyval.value) = n1;
													;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 301 "m.y"
    { int n1=(yyvsp[(1) - (3)].value);
														int n2=(yyvsp[(3) - (3)].value);
														int a=n1*n2;
														while(n1!=n2)
														{
															if(n1 > n2)
																n1 -= n2;
															else
																n2 -= n1;
														}
														n1=a/n1;
														//printf("%d\n",n1);
														(yyval.value) = n1;
													;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 315 "m.y"
    { int n1=(yyvsp[(1) - (3)].value);
														int n2=(yyvsp[(3) - (3)].value);
														int ans=1;
														while(n2)
														{
															ans*=n1;
															n2--;
														}
														//printf("%d\n",ans);
														(yyval.value) = ans;
													;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 327 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) < (yyvsp[(3) - (3)].value); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 328 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) > (yyvsp[(3) - (3)].value); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 329 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) <= (yyvsp[(3) - (3)].value); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 330 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) >= (yyvsp[(3) - (3)].value); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 331 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) == (yyvsp[(3) - (3)].value); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 332 "m.y"
    { (yyval.value) = (yyvsp[(1) - (3)].value) != (yyvsp[(3) - (3)].value); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 333 "m.y"
    {(yyval.value) = (yyvsp[(2) - (3)].value);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 342 "m.y"
    {	ifdone[ifptr] = 0;
															ifptr--;
														
															if(mark1){
																if(mark==1){
																	printf("%d",v1[0]);
																}
																else if(mark==2){
																	int i;
																	int l=strlen(keep[0]);
																	for(i = 1;  i < l-1; i++) 
																		printf("%c",keep[0][i]);
																}
																else{
																	printf("\n");
																}
															}
														;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 361 "m.y"
    {	ifptr++;
														ifdone[ifptr] = 0;
														pop = -1;
														mark1 = 0;
														if((yyvsp[(1) - (1)].value)){
															mark1 = 1;
															ifdone[ifptr] = 1;
														}
													;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 372 "m.y"
    {	if((yyvsp[(4) - (8)].value) && ifdone[ifptr] == 0){
																	ifdone[ifptr] = 1;
																	if(mark==1){
																		printf("%d",v1[1]);
																	}
																	else if(mark==2){
																		int i;
																		int l=strlen(keep[1]);
																		for(i = 1;  i < l-1; i++) 
																			printf("%c",keep[1][i]);
																	}
																	else{
																		printf("\n");
																	}
																}
															;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 388 "m.y"
    {	if(ifdone[ifptr] == 0){
																	ifdone[ifptr] = 1;
																	if(mark==1)
																	{
																		printf("%d",v1[2]);
																	}
																	else if(mark==2)
																	{
																		int i;
																		int l=strlen(keep[2]);
																		for(i = 1;  i < l-1; i++) 
																			printf("%c",keep[2][i]);
																	}
																	else
																	{
																		printf("\n");
																	}
																}
															;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 417 "m.y"
    {
						int start = (yyvsp[(3) - (11)].value);
						int end = (yyvsp[(5) - (11)].value);
						int dif = (yyvsp[(7) - (11)].value);
						int count = 0;
						int i = 0;
						finaldif=dif;
						for(i = start; i <= end; i += dif){
							count++;
						}	
						savestate = count;
						if(mark==1){
							int k=0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("%d",v1[3]);
							}
						}
						else if(mark==2){
							int l = strlen(keep[3]);
							int k = 0,i=0;
							for(k = 1; k <= savestate; k += finaldif){
								for(i = 1;  i < l-1; i++) { 
									printf("%c",keep[3][i]);
								}
							}
						}
						else{
							int k = 0;
							for(k = 1; k <= savestate; k += finaldif){
								printf("\n");
							}
						}
						
					;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 462 "m.y"
    {	switchdone = 0;
											switchvar = (yyvsp[(1) - (1)].value);
										;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 469 "m.y"
    {	if((yyvsp[(2) - (6)].value) == switchvar){
																			if(mark==1){
																				printf("%d\n",v1[3]);
																			}
																			else if(mark==2){
																				int l = strlen(keep[3]);
																				int i=0;
																				for(i = 1;  i < l-1; i++) { 
																						printf("%c",keep[3][i]);
																					}
																			}
																			else{
																				printf("\n");
																			}
																			switchdone = 1;
																		}					
																	;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 486 "m.y"
    {	if(switchdone == 0){
																			if(mark==1){
																				printf("%d\n",v1[3]);
																			}
																			else if(mark==2){
																				int l = strlen(keep[3]);
																				int i=0;
																				for(i = 1;  i < l-1; i++) { 
																						printf("%c",keep[3][i]);
																					}
																			}
																			else{
																				printf("\n");
																			}
																			switchdone = 1;
																		}
																	;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 514 "m.y"
    {	printf("UDFunction found\n");  ;}
    break;



/* Line 1455 of yacc.c  */
#line 2501 "m.tab.c"
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
#line 525 "m.y"


int yyerror(char *s){
	printf( "\nError on Line %d:\n %s\n",yylineno, s);
}
