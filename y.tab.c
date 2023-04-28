/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "pyParser.y"
 
   #include <stdio.h> 
   #include <stdlib.h>
   #include <stdlib.h> //to use system()
   int yylex();
   void yyerror(char * s);
   void os();
   extern FILE* yyin;
   extern char* yytext;


#line 83 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OPENBRACE = 258,               /* OPENBRACE  */
    CLBRACE = 259,                 /* CLBRACE  */
    BLOCKSTART = 260,              /* BLOCKSTART  */
    OPENLIST = 261,                /* OPENLIST  */
    CLLIST = 262,                  /* CLLIST  */
    NEWLINE = 263,                 /* NEWLINE  */
    INDENT = 264,                  /* INDENT  */
    DEDENT = 265,                  /* DEDENT  */
    ASSIGNOPR = 266,               /* ASSIGNOPR  */
    REL_OP = 267,                  /* REL_OP  */
    COMA = 268,                    /* COMA  */
    ARTH_OP = 269,                 /* ARTH_OP  */
    IDENTIFIER = 270,              /* IDENTIFIER  */
    NUMBER = 271,                  /* NUMBER  */
    WHILE = 272,                   /* WHILE  */
    FOR = 273,                     /* FOR  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    ELIF = 276,                    /* ELIF  */
    IMPORT = 277,                  /* IMPORT  */
    AS = 278,                      /* AS  */
    FROM = 279,                    /* FROM  */
    CLASS = 280,                   /* CLASS  */
    DEF = 281,                     /* DEF  */
    IN = 282,                      /* IN  */
    RETURN = 283                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define OPENBRACE 258
#define CLBRACE 259
#define BLOCKSTART 260
#define OPENLIST 261
#define CLLIST 262
#define NEWLINE 263
#define INDENT 264
#define DEDENT 265
#define ASSIGNOPR 266
#define REL_OP 267
#define COMA 268
#define ARTH_OP 269
#define IDENTIFIER 270
#define NUMBER 271
#define WHILE 272
#define FOR 273
#define IF 274
#define ELSE 275
#define ELIF 276
#define IMPORT 277
#define AS 278
#define FROM 279
#define CLASS 280
#define DEF 281
#define IN 282
#define RETURN 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OPENBRACE = 3,                  /* OPENBRACE  */
  YYSYMBOL_CLBRACE = 4,                    /* CLBRACE  */
  YYSYMBOL_BLOCKSTART = 5,                 /* BLOCKSTART  */
  YYSYMBOL_OPENLIST = 6,                   /* OPENLIST  */
  YYSYMBOL_CLLIST = 7,                     /* CLLIST  */
  YYSYMBOL_NEWLINE = 8,                    /* NEWLINE  */
  YYSYMBOL_INDENT = 9,                     /* INDENT  */
  YYSYMBOL_DEDENT = 10,                    /* DEDENT  */
  YYSYMBOL_ASSIGNOPR = 11,                 /* ASSIGNOPR  */
  YYSYMBOL_REL_OP = 12,                    /* REL_OP  */
  YYSYMBOL_COMA = 13,                      /* COMA  */
  YYSYMBOL_ARTH_OP = 14,                   /* ARTH_OP  */
  YYSYMBOL_IDENTIFIER = 15,                /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 16,                    /* NUMBER  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_ELIF = 21,                      /* ELIF  */
  YYSYMBOL_IMPORT = 22,                    /* IMPORT  */
  YYSYMBOL_AS = 23,                        /* AS  */
  YYSYMBOL_FROM = 24,                      /* FROM  */
  YYSYMBOL_CLASS = 25,                     /* CLASS  */
  YYSYMBOL_DEF = 26,                       /* DEF  */
  YYSYMBOL_IN = 27,                        /* IN  */
  YYSYMBOL_RETURN = 28,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 29,                  /* $accept  */
  YYSYMBOL_statements = 30,                /* statements  */
  YYSYMBOL_declarations = 31,              /* declarations  */
  YYSYMBOL_variable = 32,                  /* variable  */
  YYSYMBOL_function_dec = 33,              /* function_dec  */
  YYSYMBOL_arguments = 34,                 /* arguments  */
  YYSYMBOL_set_of_args = 35,               /* set_of_args  */
  YYSYMBOL_return_stmt = 36,               /* return_stmt  */
  YYSYMBOL_class = 37,                     /* class  */
  YYSYMBOL_set_of_functions = 38,          /* set_of_functions  */
  YYSYMBOL_statement = 39,                 /* statement  */
  YYSYMBOL_imports = 40,                   /* imports  */
  YYSYMBOL_assignment = 41,                /* assignment  */
  YYSYMBOL_function_call_explicit = 42,    /* function_call_explicit  */
  YYSYMBOL_function_call = 43,             /* function_call  */
  YYSYMBOL_iterations = 44,                /* iterations  */
  YYSYMBOL_test = 45,                      /* test  */
  YYSYMBOL_blockstart = 46,                /* blockstart  */
  YYSYMBOL_indent = 47,                    /* indent  */
  YYSYMBOL_dedent = 48,                    /* dedent  */
  YYSYMBOL_block_stmts = 49,               /* block_stmts  */
  YYSYMBOL_if_stmt_s = 50,                 /* if_stmt_s  */
  YYSYMBOL_if_stmt = 51,                   /* if_stmt  */
  YYSYMBOL_elif_stmt = 52,                 /* elif_stmt  */
  YYSYMBOL_else_stmt = 53,                 /* else_stmt  */
  YYSYMBOL_list_dec = 54                   /* list_dec  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    23,    23,    24,    24,    26,    27,    28,    30,    30,
      32,    34,    34,    36,    37,    39,    39,    40,    42,    44,
      44,    46,    47,    48,    49,    50,    52,    53,    55,    56,
      58,    60,    62,    63,    64,    65,    66,    68,    70,    72,
      74,    76,    77,    79,    81,    82,    84,    84,    85,    87,
      87,    89,    90
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "OPENBRACE", "CLBRACE",
  "BLOCKSTART", "OPENLIST", "CLLIST", "NEWLINE", "INDENT", "DEDENT",
  "ASSIGNOPR", "REL_OP", "COMA", "ARTH_OP", "IDENTIFIER", "NUMBER",
  "WHILE", "FOR", "IF", "ELSE", "ELIF", "IMPORT", "AS", "FROM", "CLASS",
  "DEF", "IN", "RETURN", "$accept", "statements", "declarations",
  "variable", "function_dec", "arguments", "set_of_args", "return_stmt",
  "class", "set_of_functions", "statement", "imports", "assignment",
  "function_call_explicit", "function_call", "iterations", "test",
  "blockstart", "indent", "dedent", "block_stmts", "if_stmt_s", "if_stmt",
  "elif_stmt", "else_stmt", "list_dec", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-15)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     104,     4,     8,    22,    27,     3,     5,    16,    21,    62,
     104,   -77,   -77,   104,   -77,   -77,   -77,   -77,   -77,    44,
     -77,    55,     6,    24,   -77,   -77,    60,    68,    65,    56,
      24,    68,    59,    69,    68,    92,   -77,   -77,   -77,    45,
      72,    88,    98,   -77,    40,   100,   101,   103,   108,    24,
     106,   107,    91,   105,   120,   107,   110,   116,   107,    55,
      24,    68,    68,   -77,    55,   124,    28,   119,   127,    55,
     -77,   -77,    68,   -77,   -77,   -77,    89,   122,    63,    68,
      68,    89,   130,   112,   113,   136,   137,   107,   107,   -77,
     -77,    24,   134,   139,   107,    89,   135,   140,   107,   107,
     107,   135,   -77,   131,   113,   135,    68,    68,    89,    89,
     129,   -77,   -77,    89,   -77,   -77,   -77,    68,    89,    89,
      89,   -77,   141,   -77,   -77,   107,   107,   135,   135,   133,
     135,   107,   135,   135,   135,   -77,   104,    89,   -77,   -77,
     123,   -77,    89,   -77,   -77,   -77,   125,   135,   142,   135,
     143,   135,   -77,   100,   144,   -77,    61,   146,   -77,   147,
     -77,   -77,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     6,     4,     7,    21,    25,    23,    24,    46,
      22,    11,     0,     0,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     3,     2,     0,
      49,    14,     0,    12,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,    43,     0,     0,     8,     0,     0,    11,
      28,    29,     0,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,    13,
      30,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,    26,     0,    20,     0,     0,     0,     0,     0,
       0,    51,    31,     0,    41,    40,    34,     0,     0,     0,
       0,    45,     0,    19,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     4,     0,    48,    50,
       0,    32,     0,    35,    36,    44,    15,     0,     0,     0,
       0,     0,    47,     0,     0,    33,     0,     0,    10,     0,
      17,    16,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,    -9,   -77,   -17,   -76,   -43,   -35,   -77,   -77,    48,
       0,   -77,   -77,     9,   -51,   -77,    15,   -28,   -41,   -34,
     -32,   -77,   -77,   -77,   -77,   -77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    10,    26,    11,    42,    43,   151,    12,   105,
      95,    14,    15,    16,    47,    17,    27,    51,    76,   116,
      96,    18,    19,    40,    63,    20
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    37,    79,    55,    38,    46,    58,    21,   104,    68,
      13,    23,    44,    13,    81,    22,    85,    84,    32,    31,
      33,    45,    25,    24,    25,    28,    93,    67,   104,    89,
      30,    34,    73,    87,    88,   -14,    35,    29,    48,    24,
      25,    64,    24,    25,    94,    54,   108,   109,    60,   101,
      98,    99,   100,   113,    61,    66,    25,   118,   119,   120,
      24,    25,    36,   114,    21,    39,    69,   121,    50,   160,
      41,   124,    49,    50,   110,    86,   127,   128,   125,   126,
      52,   130,    56,    53,   136,   137,   132,   133,   134,   131,
     142,    57,    62,   138,   139,    59,   141,   154,   143,   144,
     145,    64,    65,    69,     1,   147,     2,     3,     4,    70,
     149,    71,    72,   152,    74,   155,    75,   158,    77,     1,
      78,     2,     3,     4,    80,    82,     5,   146,     6,     7,
       8,    83,    90,    91,    92,   103,    13,    97,   102,     8,
     106,   107,   111,   112,   117,   115,   122,   129,   140,   135,
     148,   159,   123,   150,   161,   162,     0,   153,   156,   157
};

static const yytype_int16 yycheck[] =
{
       0,    10,    53,    31,    13,    22,    34,     3,    84,    44,
      10,     3,     6,    13,    55,    11,    59,    58,    15,     4,
      15,    15,    16,    15,    16,     3,    69,    44,   104,    64,
       3,    15,    49,    61,    62,     7,    15,    15,    23,    15,
      16,    13,    15,    16,    72,    30,    87,    88,     3,    81,
      78,    79,    80,    94,    39,    15,    16,    98,    99,   100,
      15,    16,     0,    95,     3,    21,     3,   101,     5,     8,
      15,   105,    12,     5,    91,    60,   108,   109,   106,   107,
      15,   113,    23,    27,   125,   126,   118,   119,   120,   117,
     131,    22,    20,   127,   128,     3,   130,   148,   132,   133,
     134,    13,     4,     3,    15,   137,    17,    18,    19,     8,
     142,     8,     4,   147,     8,   149,     9,   151,    27,    15,
      15,    17,    18,    19,     4,    15,    22,   136,    24,    25,
      26,    15,     8,    14,     7,    23,   136,    15,     8,    26,
       4,     4,     8,     4,     4,    10,    15,    18,    15,     8,
      27,     7,   104,    28,     8,     8,    -1,    15,    15,   150
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    17,    18,    19,    22,    24,    25,    26,    30,
      31,    33,    37,    39,    40,    41,    42,    44,    50,    51,
      54,     3,    11,     3,    15,    16,    32,    45,     3,    15,
       3,    45,    15,    15,    15,    15,     0,    30,    30,    21,
      52,    15,    34,    35,     6,    15,    32,    43,    45,    12,
       5,    46,    15,    27,    45,    46,    23,    22,    46,     3,
       3,    45,    20,    53,    13,     4,    15,    32,    35,     3,
       8,     8,     4,    32,     8,     9,    47,    27,    15,    43,
       4,    47,    15,    15,    47,    34,    45,    46,    46,    35,
       8,    14,     7,    34,    46,    39,    49,    15,    46,    46,
      46,    49,     8,    23,    33,    38,     4,     4,    47,    47,
      32,     8,     4,    47,    49,    10,    48,     4,    47,    47,
      47,    48,    15,    38,    48,    46,    46,    49,    49,    18,
      49,    46,    49,    49,    49,     8,    47,    47,    48,    48,
      15,    48,    47,    48,    48,    48,    30,    49,    27,    49,
      28,    36,    48,    15,    43,    48,    15,    42,    48,     7,
       8,     8,     8
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    30,    30,    31,    31,    31,    32,    32,
      33,    34,    34,    35,    35,    36,    36,    36,    37,    38,
      38,    39,    39,    39,    39,    39,    40,    40,    41,    41,
      42,    43,    44,    44,    44,    44,    44,    45,    46,    47,
      48,    49,    49,    50,    51,    51,    52,    52,    52,    53,
      53,    54,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
      10,     0,     1,     3,     1,     0,     3,     3,     6,     2,
       0,     1,     1,     1,     1,     1,     5,     7,     4,     4,
       5,     4,     8,    10,     6,     8,     8,     3,     2,     1,
       1,     2,     1,     3,     8,     6,     0,     8,     6,     0,
       5,     6,    12
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 10: /* function_dec: DEF IDENTIFIER OPENBRACE arguments CLBRACE blockstart indent statements return_stmt dedent  */
#line 32 "pyParser.y"
                                                                                                          {printf("func_def completed\n");}
#line 1314 "y.tab.c"
    break;

  case 12: /* arguments: set_of_args  */
#line 34 "pyParser.y"
                          {printf("args done\n");}
#line 1320 "y.tab.c"
    break;

  case 16: /* return_stmt: RETURN function_call_explicit NEWLINE  */
#line 39 "pyParser.y"
                                                       {printf("return done\n");}
#line 1326 "y.tab.c"
    break;

  case 17: /* return_stmt: RETURN IDENTIFIER NEWLINE  */
#line 40 "pyParser.y"
                                            {printf("return done\n");}
#line 1332 "y.tab.c"
    break;

  case 18: /* class: CLASS IDENTIFIER blockstart indent set_of_functions dedent  */
#line 42 "pyParser.y"
                                                                   {printf("classes completed\n");}
#line 1338 "y.tab.c"
    break;

  case 26: /* imports: IMPORT IDENTIFIER AS IDENTIFIER NEWLINE  */
#line 52 "pyParser.y"
                                                  {printf("imports done\n");}
#line 1344 "y.tab.c"
    break;

  case 28: /* assignment: IDENTIFIER ASSIGNOPR variable NEWLINE  */
#line 55 "pyParser.y"
                                                   {printf("assignment done\n");}
#line 1350 "y.tab.c"
    break;

  case 29: /* assignment: IDENTIFIER ASSIGNOPR function_call NEWLINE  */
#line 56 "pyParser.y"
                                                         {printf("assignment done\n");}
#line 1356 "y.tab.c"
    break;

  case 30: /* function_call_explicit: IDENTIFIER OPENBRACE arguments CLBRACE NEWLINE  */
#line 58 "pyParser.y"
                                                                        {printf("function_call_explicit done\n");}
#line 1362 "y.tab.c"
    break;

  case 31: /* function_call: IDENTIFIER OPENBRACE arguments CLBRACE  */
#line 60 "pyParser.y"
                                                       {printf("function_call done\n");}
#line 1368 "y.tab.c"
    break;

  case 32: /* iterations: WHILE OPENBRACE test CLBRACE blockstart indent block_stmts dedent  */
#line 62 "pyParser.y"
                                                                               {printf("iterations completed\n");}
#line 1374 "y.tab.c"
    break;

  case 33: /* iterations: FOR OPENBRACE IDENTIFIER IN IDENTIFIER CLBRACE blockstart indent block_stmts dedent  */
#line 63 "pyParser.y"
                                                                                                 {printf("for_stmt completed\n");}
#line 1380 "y.tab.c"
    break;

  case 34: /* iterations: WHILE test blockstart indent block_stmts dedent  */
#line 64 "pyParser.y"
                                                              {printf("iterations completed\n");}
#line 1386 "y.tab.c"
    break;

  case 35: /* iterations: FOR IDENTIFIER IN IDENTIFIER blockstart indent block_stmts dedent  */
#line 65 "pyParser.y"
                                                                               {printf("for_stmt completed\n");}
#line 1392 "y.tab.c"
    break;

  case 36: /* iterations: FOR IDENTIFIER IN function_call blockstart indent block_stmts dedent  */
#line 66 "pyParser.y"
                                                                                  {printf("for_stmt completed\n");}
#line 1398 "y.tab.c"
    break;

  case 37: /* test: variable REL_OP variable  */
#line 68 "pyParser.y"
                                {printf("test done\n");}
#line 1404 "y.tab.c"
    break;

  case 38: /* blockstart: BLOCKSTART NEWLINE  */
#line 70 "pyParser.y"
                               {printf("blockstart done\n");}
#line 1410 "y.tab.c"
    break;

  case 39: /* indent: INDENT  */
#line 72 "pyParser.y"
               {printf("indent done\n");}
#line 1416 "y.tab.c"
    break;

  case 40: /* dedent: DEDENT  */
#line 74 "pyParser.y"
               {printf("dedent done\n");}
#line 1422 "y.tab.c"
    break;

  case 44: /* if_stmt: IF OPENBRACE test CLBRACE blockstart indent block_stmts dedent  */
#line 81 "pyParser.y"
                                                                         {printf("if_stmt completed\n");}
#line 1428 "y.tab.c"
    break;

  case 45: /* if_stmt: IF test blockstart indent block_stmts dedent  */
#line 82 "pyParser.y"
                                                        {printf("if_stmt completed\n");}
#line 1434 "y.tab.c"
    break;

  case 47: /* elif_stmt: ELIF OPENBRACE test CLBRACE blockstart indent block_stmts dedent  */
#line 84 "pyParser.y"
                                                                               {printf("elif_stmt completed\n");}
#line 1440 "y.tab.c"
    break;

  case 48: /* elif_stmt: ELIF test blockstart indent block_stmts dedent  */
#line 85 "pyParser.y"
                                                             {printf("elif_stmt completed\n");}
#line 1446 "y.tab.c"
    break;

  case 50: /* else_stmt: ELSE blockstart indent block_stmts dedent  */
#line 87 "pyParser.y"
                                                       {printf("else_stmt completed\n");}
#line 1452 "y.tab.c"
    break;


#line 1456 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 92 "pyParser.y"
 


int main(int argc , char** argv){
  
  if(argc == 1){
      printf("Input file not given as command line input\n");
      return 0;
  }
  
   os();

   FILE *fp;
   fp = fopen(argv[1],"r");

   yyin = fp; 

   yyparse();

   printf("==========================\n");
   printf("+                        +\n");
   printf("+ Succesfull compilation +\n");
   printf("+                        +\n");
   printf("==========================\n");
}

void os(){    
  system("lex -o lexForIndentDedent.c lexForIndentDedent.l");
  system("gcc lexForIndentDedent.c -o lexForIndentDedent");
  system("./lexForIndentDedent input.py > input");
}

void yyerror(char* s){
   printf("!!!!!!!!!!!!!!!!!\n");
   printf("%s\n" , s);
   printf("!!!!!!!!!!!!!!!!!\n");
   exit(0);
}



