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
#line 1 "levcomp.ypp"



#include "AppHdr.h"
#include <map>
#include <algorithm>
#include "end.h"
#include "l_defs.h"
#include "mapdef.h"
#include "maps.h"
#include "stringutil.h"

#define YYERROR_VERBOSE 1
#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 0

int yylex();

extern int yylineno;

static NORETURN void yyerror(const char *e)
{
    if (strstr(e, lc_desfile.c_str()) == e)
        fprintf(stderr, "%s\n", e);
    else
        fprintf(stderr, "%s:%d: %s\n", lc_desfile.c_str(), yylineno, e);
    // Bail bail bail.
    end(1);
}


#line 103 "levcomp.tab.cc"

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

#include "levcomp.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DEFAULT_DEPTH = 3,              /* DEFAULT_DEPTH  */
  YYSYMBOL_SHUFFLE = 4,                    /* SHUFFLE  */
  YYSYMBOL_CLEAR = 5,                      /* CLEAR  */
  YYSYMBOL_SUBST = 6,                      /* SUBST  */
  YYSYMBOL_TAGS = 7,                       /* TAGS  */
  YYSYMBOL_KFEAT = 8,                      /* KFEAT  */
  YYSYMBOL_KITEM = 9,                      /* KITEM  */
  YYSYMBOL_KMONS = 10,                     /* KMONS  */
  YYSYMBOL_KMASK = 11,                     /* KMASK  */
  YYSYMBOL_KPROP = 12,                     /* KPROP  */
  YYSYMBOL_NAME = 13,                      /* NAME  */
  YYSYMBOL_DEPTH = 14,                     /* DEPTH  */
  YYSYMBOL_ORIENT = 15,                    /* ORIENT  */
  YYSYMBOL_PLACE = 16,                     /* PLACE  */
  YYSYMBOL_CHANCE = 17,                    /* CHANCE  */
  YYSYMBOL_WEIGHT = 18,                    /* WEIGHT  */
  YYSYMBOL_MONS = 19,                      /* MONS  */
  YYSYMBOL_ITEM = 20,                      /* ITEM  */
  YYSYMBOL_MARKER = 21,                    /* MARKER  */
  YYSYMBOL_COLOUR = 22,                    /* COLOUR  */
  YYSYMBOL_PRELUDE = 23,                   /* PRELUDE  */
  YYSYMBOL_MAIN = 24,                      /* MAIN  */
  YYSYMBOL_VALIDATE = 25,                  /* VALIDATE  */
  YYSYMBOL_VETO = 26,                      /* VETO  */
  YYSYMBOL_EPILOGUE = 27,                  /* EPILOGUE  */
  YYSYMBOL_NSUBST = 28,                    /* NSUBST  */
  YYSYMBOL_WELCOME = 29,                   /* WELCOME  */
  YYSYMBOL_LFLAGS = 30,                    /* LFLAGS  */
  YYSYMBOL_BFLAGS = 31,                    /* BFLAGS  */
  YYSYMBOL_LFLOORCOL = 32,                 /* LFLOORCOL  */
  YYSYMBOL_LROCKCOL = 33,                  /* LROCKCOL  */
  YYSYMBOL_LFLOORTILE = 34,                /* LFLOORTILE  */
  YYSYMBOL_LROCKTILE = 35,                 /* LROCKTILE  */
  YYSYMBOL_FTILE = 36,                     /* FTILE  */
  YYSYMBOL_RTILE = 37,                     /* RTILE  */
  YYSYMBOL_TILE = 38,                      /* TILE  */
  YYSYMBOL_SUBVAULT = 39,                  /* SUBVAULT  */
  YYSYMBOL_FHEIGHT = 40,                   /* FHEIGHT  */
  YYSYMBOL_DESC = 41,                      /* DESC  */
  YYSYMBOL_ORDER = 42,                     /* ORDER  */
  YYSYMBOL_COMMA = 43,                     /* COMMA  */
  YYSYMBOL_COLON = 44,                     /* COLON  */
  YYSYMBOL_PERC = 45,                      /* PERC  */
  YYSYMBOL_DASH = 46,                      /* DASH  */
  YYSYMBOL_CHARACTER = 47,                 /* CHARACTER  */
  YYSYMBOL_NUMBER = 48,                    /* NUMBER  */
  YYSYMBOL_STRING = 49,                    /* STRING  */
  YYSYMBOL_MAP_LINE = 50,                  /* MAP_LINE  */
  YYSYMBOL_MONSTER_NAME = 51,              /* MONSTER_NAME  */
  YYSYMBOL_ITEM_INFO = 52,                 /* ITEM_INFO  */
  YYSYMBOL_LUA_LINE = 53,                  /* LUA_LINE  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_file = 55,                      /* file  */
  YYSYMBOL_definitions = 56,               /* definitions  */
  YYSYMBOL_definition = 57,                /* definition  */
  YYSYMBOL_error_seq = 58,                 /* error_seq  */
  YYSYMBOL_def = 59,                       /* def  */
  YYSYMBOL_defdepth = 60,                  /* defdepth  */
  YYSYMBOL_level = 61,                     /* level  */
  YYSYMBOL_map_specs = 62,                 /* map_specs  */
  YYSYMBOL_map_spec = 63,                  /* map_spec  */
  YYSYMBOL_name = 64,                      /* name  */
  YYSYMBOL_metaline = 65,                  /* metaline  */
  YYSYMBOL_global_lua = 66,                /* global_lua  */
  YYSYMBOL_global_lua_lines = 67,          /* global_lua_lines  */
  YYSYMBOL_global_lua_line = 68,           /* global_lua_line  */
  YYSYMBOL_main_lua = 69,                  /* main_lua  */
  YYSYMBOL_main_lua_lines = 70,            /* main_lua_lines  */
  YYSYMBOL_main_lua_line = 71,             /* main_lua_line  */
  YYSYMBOL_validate_lua = 72,              /* validate_lua  */
  YYSYMBOL_validate_lua_lines = 73,        /* validate_lua_lines  */
  YYSYMBOL_validate_lua_line = 74,         /* validate_lua_line  */
  YYSYMBOL_veto_lua = 75,                  /* veto_lua  */
  YYSYMBOL_veto_lua_lines = 76,            /* veto_lua_lines  */
  YYSYMBOL_veto_lua_line = 77,             /* veto_lua_line  */
  YYSYMBOL_prelude_lua = 78,               /* prelude_lua  */
  YYSYMBOL_prelude_lua_lines = 79,         /* prelude_lua_lines  */
  YYSYMBOL_prelude_lua_line = 80,          /* prelude_lua_line  */
  YYSYMBOL_epilogue_lua = 81,              /* epilogue_lua  */
  YYSYMBOL_epilogue_lua_lines = 82,        /* epilogue_lua_lines  */
  YYSYMBOL_epilogue_lua_line = 83,         /* epilogue_lua_line  */
  YYSYMBOL_kfeat = 84,                     /* kfeat  */
  YYSYMBOL_kmons = 85,                     /* kmons  */
  YYSYMBOL_kitem = 86,                     /* kitem  */
  YYSYMBOL_kmask = 87,                     /* kmask  */
  YYSYMBOL_kprop = 88,                     /* kprop  */
  YYSYMBOL_shuffle = 89,                   /* shuffle  */
  YYSYMBOL_shuffle_specifiers = 90,        /* shuffle_specifiers  */
  YYSYMBOL_shuffle_spec = 91,              /* shuffle_spec  */
  YYSYMBOL_clear = 92,                     /* clear  */
  YYSYMBOL_tags = 93,                      /* tags  */
  YYSYMBOL_tagstrings = 94,                /* tagstrings  */
  YYSYMBOL_tagstring = 95,                 /* tagstring  */
  YYSYMBOL_lflags = 96,                    /* lflags  */
  YYSYMBOL_bflags = 97,                    /* bflags  */
  YYSYMBOL_marker = 98,                    /* marker  */
  YYSYMBOL_colour = 99,                    /* colour  */
  YYSYMBOL_lfloorcol = 100,                /* lfloorcol  */
  YYSYMBOL_lrockcol = 101,                 /* lrockcol  */
  YYSYMBOL_lfloortile = 102,               /* lfloortile  */
  YYSYMBOL_lrocktile = 103,                /* lrocktile  */
  YYSYMBOL_fheight = 104,                  /* fheight  */
  YYSYMBOL_fheight_specifiers = 105,       /* fheight_specifiers  */
  YYSYMBOL_fheight_specifier = 106,        /* fheight_specifier  */
  YYSYMBOL_ftile = 107,                    /* ftile  */
  YYSYMBOL_ftile_specifiers = 108,         /* ftile_specifiers  */
  YYSYMBOL_ftile_specifier = 109,          /* ftile_specifier  */
  YYSYMBOL_rtile = 110,                    /* rtile  */
  YYSYMBOL_rtile_specifiers = 111,         /* rtile_specifiers  */
  YYSYMBOL_rtile_specifier = 112,          /* rtile_specifier  */
  YYSYMBOL_tile = 113,                     /* tile  */
  YYSYMBOL_tile_specifiers = 114,          /* tile_specifiers  */
  YYSYMBOL_tile_specifier = 115,           /* tile_specifier  */
  YYSYMBOL_colour_specifiers = 116,        /* colour_specifiers  */
  YYSYMBOL_colour_specifier = 117,         /* colour_specifier  */
  YYSYMBOL_nsubst = 118,                   /* nsubst  */
  YYSYMBOL_nsubst_specifiers = 119,        /* nsubst_specifiers  */
  YYSYMBOL_nsubst_spec = 120,              /* nsubst_spec  */
  YYSYMBOL_subst = 121,                    /* subst  */
  YYSYMBOL_subst_specifiers = 122,         /* subst_specifiers  */
  YYSYMBOL_subst_spec = 123,               /* subst_spec  */
  YYSYMBOL_items = 124,                    /* items  */
  YYSYMBOL_item_specifiers = 125,          /* item_specifiers  */
  YYSYMBOL_item_specifier = 126,           /* item_specifier  */
  YYSYMBOL_mons = 127,                     /* mons  */
  YYSYMBOL_mnames = 128,                   /* mnames  */
  YYSYMBOL_mname = 129,                    /* mname  */
  YYSYMBOL_place = 130,                    /* place  */
  YYSYMBOL_desc = 131,                     /* desc  */
  YYSYMBOL_order = 132,                    /* order  */
  YYSYMBOL_depth = 133,                    /* depth  */
  YYSYMBOL_chance = 134,                   /* chance  */
  YYSYMBOL_chance_specifiers = 135,        /* chance_specifiers  */
  YYSYMBOL_chance_roll = 136,              /* chance_roll  */
  YYSYMBOL_chance_num = 137,               /* chance_num  */
  YYSYMBOL_chance_specifier = 138,         /* chance_specifier  */
  YYSYMBOL_weight = 139,                   /* weight  */
  YYSYMBOL_weight_specifiers = 140,        /* weight_specifiers  */
  YYSYMBOL_weight_specifier = 141,         /* weight_specifier  */
  YYSYMBOL_orientation = 142,              /* orientation  */
  YYSYMBOL_welcome = 143,                  /* welcome  */
  YYSYMBOL_map_def = 144,                  /* map_def  */
  YYSYMBOL_map_lines = 145,                /* map_lines  */
  YYSYMBOL_map_line = 146,                 /* map_line  */
  YYSYMBOL_subvault = 147,                 /* subvault  */
  YYSYMBOL_subvault_specifiers = 148,      /* subvault_specifiers  */
  YYSYMBOL_subvault_specifier = 149        /* subvault_specifier  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    63,    64,    67,    68,    71,    77,    78,
      81,    91,   112,   113,   116,   117,   120,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   185,   187,   188,   191,
     196,   198,   199,   202,   207,   209,   210,   213,   218,   220,
     221,   224,   229,   231,   232,   235,   240,   242,   243,   246,
     251,   252,   260,   261,   269,   270,   278,   279,   287,   288,
     296,   299,   300,   303,   311,   320,   323,   324,   327,   336,
     345,   354,   387,   390,   391,   399,   400,   408,   409,   418,
     419,   428,   430,   431,   434,   443,   446,   447,   450,   459,
     462,   463,   466,   475,   478,   479,   482,   492,   493,   496,
     505,   508,   509,   512,   521,   524,   525,   528,   537,   538,
     541,   542,   545,   553,   554,   557,   558,   561,   570,   579,
     588,   596,   597,   606,   607,   610,   611,   613,   617,   622,
     627,   634,   642,   651,   653,   654,   656,   663,   671,   672,
     681,   690,   693,   694,   697,   706,   709,   710,   713
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
  "\"end of file\"", "error", "\"invalid token\"", "DEFAULT_DEPTH",
  "SHUFFLE", "CLEAR", "SUBST", "TAGS", "KFEAT", "KITEM", "KMONS", "KMASK",
  "KPROP", "NAME", "DEPTH", "ORIENT", "PLACE", "CHANCE", "WEIGHT", "MONS",
  "ITEM", "MARKER", "COLOUR", "PRELUDE", "MAIN", "VALIDATE", "VETO",
  "EPILOGUE", "NSUBST", "WELCOME", "LFLAGS", "BFLAGS", "LFLOORCOL",
  "LROCKCOL", "LFLOORTILE", "LROCKTILE", "FTILE", "RTILE", "TILE",
  "SUBVAULT", "FHEIGHT", "DESC", "ORDER", "COMMA", "COLON", "PERC", "DASH",
  "CHARACTER", "NUMBER", "STRING", "MAP_LINE", "MONSTER_NAME", "ITEM_INFO",
  "LUA_LINE", "$accept", "file", "definitions", "definition", "error_seq",
  "def", "defdepth", "level", "map_specs", "map_spec", "name", "metaline",
  "global_lua", "global_lua_lines", "global_lua_line", "main_lua",
  "main_lua_lines", "main_lua_line", "validate_lua", "validate_lua_lines",
  "validate_lua_line", "veto_lua", "veto_lua_lines", "veto_lua_line",
  "prelude_lua", "prelude_lua_lines", "prelude_lua_line", "epilogue_lua",
  "epilogue_lua_lines", "epilogue_lua_line", "kfeat", "kmons", "kitem",
  "kmask", "kprop", "shuffle", "shuffle_specifiers", "shuffle_spec",
  "clear", "tags", "tagstrings", "tagstring", "lflags", "bflags", "marker",
  "colour", "lfloorcol", "lrockcol", "lfloortile", "lrocktile", "fheight",
  "fheight_specifiers", "fheight_specifier", "ftile", "ftile_specifiers",
  "ftile_specifier", "rtile", "rtile_specifiers", "rtile_specifier",
  "tile", "tile_specifiers", "tile_specifier", "colour_specifiers",
  "colour_specifier", "nsubst", "nsubst_specifiers", "nsubst_spec",
  "subst", "subst_specifiers", "subst_spec", "items", "item_specifiers",
  "item_specifier", "mons", "mnames", "mname", "place", "desc", "order",
  "depth", "chance", "chance_specifiers", "chance_roll", "chance_num",
  "chance_specifier", "weight", "weight_specifiers", "weight_specifier",
  "orientation", "welcome", "map_def", "map_lines", "map_line", "subvault",
  "subvault_specifiers", "subvault_specifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -132,     9,    36,  -132,    -9,    -5,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,    -8,    -4,  -132,  -132,    -2,
      -1,     0,  -132,     2,     4,     5,     6,     7,     8,    10,
      12,    14,    15,    13,    16,    17,    18,  -132,  -132,  -132,
    -132,  -132,    19,    20,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    35,    33,    37,    32,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
      38,  -132,  -132,  -132,    22,  -132,  -132,  -132,  -132,    44,
      40,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,    -3,
      47,  -132,    42,  -132,    43,    50,  -132,  -132,  -132,    51,
    -132,    52,  -132,  -132,  -132,    53,  -132,    -6,    45,    46,
      48,    49,  -132,    54,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,    57,  -132,  -132,    60,  -132,  -132,    61,
    -132,  -132,    62,  -132,  -132,    63,  -132,  -132,  -132,  -132,
      -2,     0,  -132,  -132,    59,  -132,    14,  -132,  -132,    15,
      13,    16,    18,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,    19,    29,    30,    31,    35,    33,  -132,
    -132,    34,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,    57,     4,     5,     8,
       6,    12,     9,    10,    16,    56,    11,    59,    58,     0,
       0,     0,    96,    80,    84,    82,    86,    88,   151,   168,
       0,   154,     0,   143,   138,     0,     0,    73,    61,    65,
      69,    77,     0,     0,     0,     0,   103,   105,   107,   109,
       0,     0,     0,     0,     0,     0,     0,     7,   174,    55,
      13,    14,    50,    52,    53,    51,    54,    43,    45,    44,
      46,    47,    38,    39,    40,    41,    42,    27,    30,    31,
      32,    33,    34,    48,    35,    36,    37,    29,    28,    26,
      25,    17,    18,    19,    20,    21,    22,    23,    24,    15,
     171,   173,    49,    93,    90,    91,    94,   137,   134,   135,
      95,    81,    85,    83,    87,    89,   152,   169,   148,   158,
     153,   160,   162,   156,   167,   163,   165,   147,   144,   146,
     142,   139,   141,   101,   129,   102,   127,    72,    60,    64,
      68,    76,   133,   130,   131,   170,    99,   100,   104,   106,
     108,   110,   118,   115,   116,   122,   119,   120,   126,   123,
     124,   178,   175,   176,   114,   111,   112,   149,   150,   172,
       0,     0,    98,    97,     0,   157,     0,   161,   166,     0,
       0,     0,     0,    75,    74,    63,    62,    67,    66,    71,
      70,    79,    78,     0,     0,     0,     0,     0,     0,    92,
     136,   158,   159,   155,   164,   145,   140,   128,   132,   117,
     121,   125,   177,   113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -112,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -131,  -132,  -132,  -116,  -132,  -132,   -87,  -132,
    -132,   -86,  -132,   -73,  -132,  -132,   -82,  -132,   -59,  -132,
    -132,  -132,   -68,  -132,   -66,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,   -58,  -132,   -61,  -132,  -132,   -62,  -132,  -132,
    -132,  -132,    21,  -132,  -132,   -79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,    59,     8,     9,    10,    16,    60,
      11,    61,    12,    15,    18,    62,   138,   186,    63,   139,
     188,    64,   140,   190,    65,   137,   184,    66,   141,   192,
      67,    68,    69,    70,    71,    72,   104,   105,    73,    74,
     110,   173,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   165,   166,    84,   153,   154,    85,   156,   157,    86,
     159,   160,   135,   136,    87,   143,   144,    88,   108,   109,
      89,   131,   132,    90,   128,   129,    91,    92,    93,    94,
      95,   120,   121,   122,   123,    96,   125,   126,    97,    98,
      99,   100,   101,   102,   162,   163
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      19,    20,    21,    22,    23,    24,    25,    26,    27,     3,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     4,
      13,   174,   175,    57,    14,    17,    58,   183,   106,     5,
     103,   111,   107,   112,   113,   114,   115,   116,   199,   117,
       6,   118,   119,   124,   127,   170,   133,   213,   130,   145,
     134,   142,   146,   147,   148,   149,   150,   151,   209,   175,
     168,   152,   155,   158,   161,   164,   167,   171,    58,   172,
     176,   177,   178,   179,   180,   181,   182,   193,   185,   187,
     194,   189,   191,   195,   196,   197,   198,   201,   210,   207,
     211,   208,   200,   206,   205,   203,   202,   204,   212,     0,
       0,   169
};

static const yytype_int16 yycheck[] =
{
       4,     5,     6,     7,     8,     9,    10,    11,    12,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
      49,    44,    45,    47,    49,    53,    50,    53,    49,    13,
      52,    49,    52,    49,    49,    49,    49,    49,   170,    49,
      24,    49,    48,    48,    51,    43,    49,   198,    52,    49,
      52,    52,    49,    49,    49,    49,    49,    49,   194,    45,
      48,    52,    52,    52,    49,    52,    49,    43,    50,    49,
      43,    49,    49,    43,    43,    43,    43,    43,    53,    53,
      43,    53,    53,    43,    43,    43,    43,    48,   195,   182,
     196,   193,   171,   181,   180,   176,   174,   179,   197,    -1,
      -1,   100
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     3,    13,    24,    57,    59,    60,
      61,    64,    66,    49,    49,    67,    62,    53,    68,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    47,    50,    58,
      63,    65,    69,    72,    75,    78,    81,    84,    85,    86,
      87,    88,    89,    92,    93,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   107,   110,   113,   118,   121,   124,
     127,   130,   131,   132,   133,   134,   139,   142,   143,   144,
     145,   146,   147,    52,    90,    91,    49,    52,   122,   123,
      94,    49,    49,    49,    49,    49,    49,    49,    49,    48,
     135,   136,   137,   138,    48,   140,   141,    51,   128,   129,
      52,   125,   126,    49,    52,   116,   117,    79,    70,    73,
      76,    82,    52,   119,   120,    49,    49,    49,    49,    49,
      49,    49,    52,   108,   109,    52,   111,   112,    52,   114,
     115,    49,   148,   149,    52,   105,   106,    49,    48,   146,
      43,    43,    49,    95,    44,    45,    43,    49,    49,    43,
      43,    43,    43,    53,    80,    53,    71,    53,    74,    53,
      77,    53,    83,    43,    43,    43,    43,    43,    43,    91,
     122,    48,   136,   138,   141,   128,   126,   117,   120,   109,
     112,   115,   149,   106
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    61,    62,    62,    63,    63,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    67,    67,    68,
      69,    70,    70,    71,    72,    73,    73,    74,    75,    76,
      76,    77,    78,    79,    79,    80,    81,    82,    82,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    90,    90,    91,    92,    93,    94,    94,    95,    96,
      97,    98,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   105,   105,   106,   107,   108,   108,   109,   110,
     111,   111,   112,   113,   114,   114,   115,   116,   116,   117,
     118,   119,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   127,   128,   128,   129,   130,   131,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   140,   140,   141,   141,   142,   142,
     143,   144,   145,   145,   146,   147,   148,   148,   149
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       2,     2,     0,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     2,     1,
       2,     0,     2,     1,     2,     0,     2,     1,     2,     0,
       2,     1,     2,     0,     2,     1,     2,     0,     2,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     1,     3,     1,     2,     2,     0,     2,     1,     2,
       2,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     2,     1,     3,     1,     2,     1,     3,     1,     2,
       1,     3,     1,     2,     1,     3,     1,     1,     3,     1,
       2,     1,     3,     1,     2,     1,     3,     1,     1,     2,
       3,     1,     1,     1,     2,     3,     1,     1,     2,     2,
       2,     1,     2,     2,     1,     3,     1,     2,     1,     3,
       1,     2,     1,     2,     3,     1,     2,     1,     1,     2,
       2,     1,     2,     1,     1,     2,     1,     3,     1
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
  case 2: /* file: definitions  */
#line 60 "levcomp.ypp"
                              { }
#line 1412 "levcomp.tab.cc"
    break;

  case 3: /* definitions: %empty  */
#line 63 "levcomp.ypp"
                                            {}
#line 1418 "levcomp.tab.cc"
    break;

  case 4: /* definitions: definitions definition  */
#line 64 "levcomp.ypp"
                                            {}
#line 1424 "levcomp.tab.cc"
    break;

  case 5: /* definition: def  */
#line 67 "levcomp.ypp"
                            {}
#line 1430 "levcomp.tab.cc"
    break;

  case 6: /* definition: level  */
#line 68 "levcomp.ypp"
                            {}
#line 1436 "levcomp.tab.cc"
    break;

  case 7: /* error_seq: CHARACTER  */
#line 72 "levcomp.ypp"
                {
                    yyerror("Unexpected character sequence.");
                }
#line 1444 "levcomp.tab.cc"
    break;

  case 8: /* def: defdepth  */
#line 77 "levcomp.ypp"
                            {}
#line 1450 "levcomp.tab.cc"
    break;

  case 9: /* def: global_lua  */
#line 78 "levcomp.ypp"
                              {}
#line 1456 "levcomp.tab.cc"
    break;

  case 10: /* defdepth: DEFAULT_DEPTH STRING  */
#line 82 "levcomp.ypp"
                {
                    dgn_reset_default_depth();
                    string err = dgn_set_default_depth((yyvsp[0].text));
                    if (!err.empty())
                        yyerror(make_stringf("Bad default-depth: %s (%s)",
                                (yyvsp[0].text), err.c_str()).c_str());
                }
#line 1468 "levcomp.tab.cc"
    break;

  case 11: /* level: name map_specs  */
#line 92 "levcomp.ypp"
                {
                    lc_map.set_file(lc_desfile);

                    if (lc_run_global_prelude && !lc_global_prelude.empty())
                    {
                        lc_global_prelude.set_file(lc_desfile);
                        lc_run_global_prelude = false;
                        if (lc_global_prelude.load_call(dlua, NULL))
                            yyerror( lc_global_prelude.orig_error().c_str() );
                    }

                    string err =
                        lc_map.validate_map_def(lc_default_depths);
                    dump_map(lc_map);
                    if (!err.empty())
                        yyerror(err.c_str());
                    add_parsed_map(lc_map);
                }
#line 1491 "levcomp.tab.cc"
    break;

  case 12: /* map_specs: %empty  */
#line 112 "levcomp.ypp"
                                     { }
#line 1497 "levcomp.tab.cc"
    break;

  case 13: /* map_specs: map_specs map_spec  */
#line 113 "levcomp.ypp"
                                     { }
#line 1503 "levcomp.tab.cc"
    break;

  case 14: /* map_spec: metaline  */
#line 116 "levcomp.ypp"
                           { }
#line 1509 "levcomp.tab.cc"
    break;

  case 15: /* map_spec: map_def  */
#line 117 "levcomp.ypp"
                           { }
#line 1515 "levcomp.tab.cc"
    break;

  case 16: /* name: NAME STRING  */
#line 121 "levcomp.ypp"
                {
                    lc_map.init();
                    lc_map.name = (yyvsp[0].text);

                    map_load_info_t::const_iterator i =
                        lc_loaded_maps.find((yyvsp[0].text));

                    if (i != lc_loaded_maps.end())
                    {
                        yyerror(
                            make_stringf(
                                "Map named '%s' already loaded at %s:%d",
                                (yyvsp[0].text),
                                i->second.filename.c_str(),
                                i->second.lineno).c_str() );
                    }

                    lc_map.place_loaded_from =
                        map_file_place(lc_desfile, yylineno);
                    lc_loaded_maps[(yyvsp[0].text)] = lc_map.place_loaded_from;
                }
#line 1541 "levcomp.tab.cc"
    break;

  case 55: /* metaline: error_seq  */
#line 182 "levcomp.ypp"
                            {}
#line 1547 "levcomp.tab.cc"
    break;

  case 56: /* global_lua: MAIN global_lua_lines  */
#line 185 "levcomp.ypp"
                                        { }
#line 1553 "levcomp.tab.cc"
    break;

  case 57: /* global_lua_lines: %empty  */
#line 187 "levcomp.ypp"
                                { }
#line 1559 "levcomp.tab.cc"
    break;

  case 58: /* global_lua_lines: global_lua_lines global_lua_line  */
#line 188 "levcomp.ypp"
                                                   { }
#line 1565 "levcomp.tab.cc"
    break;

  case 59: /* global_lua_line: LUA_LINE  */
#line 192 "levcomp.ypp"
                {
                    lc_global_prelude.add(yylineno, (yyvsp[0].text));
                }
#line 1573 "levcomp.tab.cc"
    break;

  case 60: /* main_lua: MAIN main_lua_lines  */
#line 196 "levcomp.ypp"
                                      { }
#line 1579 "levcomp.tab.cc"
    break;

  case 61: /* main_lua_lines: %empty  */
#line 198 "levcomp.ypp"
                              { }
#line 1585 "levcomp.tab.cc"
    break;

  case 62: /* main_lua_lines: main_lua_lines main_lua_line  */
#line 199 "levcomp.ypp"
                                               { }
#line 1591 "levcomp.tab.cc"
    break;

  case 63: /* main_lua_line: LUA_LINE  */
#line 203 "levcomp.ypp"
                {
                    lc_map.main.add(yylineno, (yyvsp[0].text));
                }
#line 1599 "levcomp.tab.cc"
    break;

  case 64: /* validate_lua: VALIDATE validate_lua_lines  */
#line 207 "levcomp.ypp"
                                              { }
#line 1605 "levcomp.tab.cc"
    break;

  case 65: /* validate_lua_lines: %empty  */
#line 209 "levcomp.ypp"
                                  { }
#line 1611 "levcomp.tab.cc"
    break;

  case 66: /* validate_lua_lines: validate_lua_lines validate_lua_line  */
#line 210 "levcomp.ypp"
                                                       { }
#line 1617 "levcomp.tab.cc"
    break;

  case 67: /* validate_lua_line: LUA_LINE  */
#line 214 "levcomp.ypp"
                {
                    lc_map.validate.add(yylineno, (yyvsp[0].text));
                }
#line 1625 "levcomp.tab.cc"
    break;

  case 68: /* veto_lua: VETO veto_lua_lines  */
#line 218 "levcomp.ypp"
                                      { }
#line 1631 "levcomp.tab.cc"
    break;

  case 69: /* veto_lua_lines: %empty  */
#line 220 "levcomp.ypp"
                              { }
#line 1637 "levcomp.tab.cc"
    break;

  case 70: /* veto_lua_lines: veto_lua_lines veto_lua_line  */
#line 221 "levcomp.ypp"
                                               { }
#line 1643 "levcomp.tab.cc"
    break;

  case 71: /* veto_lua_line: LUA_LINE  */
#line 225 "levcomp.ypp"
                {
                    lc_map.veto.add(yylineno, (yyvsp[0].text));
                }
#line 1651 "levcomp.tab.cc"
    break;

  case 72: /* prelude_lua: PRELUDE prelude_lua_lines  */
#line 229 "levcomp.ypp"
                                            { }
#line 1657 "levcomp.tab.cc"
    break;

  case 73: /* prelude_lua_lines: %empty  */
#line 231 "levcomp.ypp"
                                { }
#line 1663 "levcomp.tab.cc"
    break;

  case 74: /* prelude_lua_lines: prelude_lua_lines prelude_lua_line  */
#line 232 "levcomp.ypp"
                                                     { }
#line 1669 "levcomp.tab.cc"
    break;

  case 75: /* prelude_lua_line: LUA_LINE  */
#line 236 "levcomp.ypp"
                {
                    lc_map.prelude.add(yylineno, (yyvsp[0].text));
                }
#line 1677 "levcomp.tab.cc"
    break;

  case 76: /* epilogue_lua: EPILOGUE epilogue_lua_lines  */
#line 240 "levcomp.ypp"
                                              { }
#line 1683 "levcomp.tab.cc"
    break;

  case 77: /* epilogue_lua_lines: %empty  */
#line 242 "levcomp.ypp"
                                 { }
#line 1689 "levcomp.tab.cc"
    break;

  case 78: /* epilogue_lua_lines: epilogue_lua_lines epilogue_lua_line  */
#line 243 "levcomp.ypp"
                                                       { }
#line 1695 "levcomp.tab.cc"
    break;

  case 79: /* epilogue_lua_line: LUA_LINE  */
#line 247 "levcomp.ypp"
                {
                    lc_map.epilogue.add(yylineno, (yyvsp[0].text));
                }
#line 1703 "levcomp.tab.cc"
    break;

  case 80: /* kfeat: KFEAT  */
#line 251 "levcomp.ypp"
                        { }
#line 1709 "levcomp.tab.cc"
    break;

  case 81: /* kfeat: KFEAT STRING  */
#line 253 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kfeat(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1720 "levcomp.tab.cc"
    break;

  case 82: /* kmons: KMONS  */
#line 260 "levcomp.ypp"
                        { }
#line 1726 "levcomp.tab.cc"
    break;

  case 83: /* kmons: KMONS STRING  */
#line 262 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kmons(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1737 "levcomp.tab.cc"
    break;

  case 84: /* kitem: KITEM  */
#line 269 "levcomp.ypp"
                        { }
#line 1743 "levcomp.tab.cc"
    break;

  case 85: /* kitem: KITEM STRING  */
#line 271 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kitem(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1754 "levcomp.tab.cc"
    break;

  case 86: /* kmask: KMASK  */
#line 278 "levcomp.ypp"
                        { }
#line 1760 "levcomp.tab.cc"
    break;

  case 87: /* kmask: KMASK STRING  */
#line 280 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kmask(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1771 "levcomp.tab.cc"
    break;

  case 88: /* kprop: KPROP  */
#line 287 "levcomp.ypp"
                        { }
#line 1777 "levcomp.tab.cc"
    break;

  case 89: /* kprop: KPROP STRING  */
#line 289 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("kprop(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1788 "levcomp.tab.cc"
    break;

  case 90: /* shuffle: SHUFFLE shuffle_specifiers  */
#line 296 "levcomp.ypp"
                                             {}
#line 1794 "levcomp.tab.cc"
    break;

  case 93: /* shuffle_spec: ITEM_INFO  */
#line 304 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("shuffle(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1805 "levcomp.tab.cc"
    break;

  case 94: /* clear: CLEAR STRING  */
#line 312 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("clear(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1816 "levcomp.tab.cc"
    break;

  case 95: /* tags: TAGS tagstrings  */
#line 320 "levcomp.ypp"
                                  {}
#line 1822 "levcomp.tab.cc"
    break;

  case 98: /* tagstring: STRING  */
#line 328 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("tags(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1833 "levcomp.tab.cc"
    break;

  case 99: /* lflags: LFLAGS STRING  */
#line 337 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lflags(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1844 "levcomp.tab.cc"
    break;

  case 100: /* bflags: BFLAGS STRING  */
#line 346 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("bflags(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1855 "levcomp.tab.cc"
    break;

  case 101: /* marker: MARKER STRING  */
#line 355 "levcomp.ypp"
                {
                    string key, arg;
                    int sep(0);

                    const string err =
                      mapdef_split_key_item((yyvsp[0].text), &key, &sep, &arg);

                    if (!err.empty())
                      yyerror(err.c_str());

                    // Special treatment for Lua markers.
                    if (arg.find("lua:") == 0)
                    {
                       arg = arg.substr(4);
                       lc_map.main.add(
                         yylineno,
                         make_stringf("lua_marker(\"%s\", function () "
                                      "  return %s "
                                      "end)",
                                      quote_lua_string(key).c_str(),
                                      arg.c_str()));
                    }
                    else
                    {
                       lc_map.main.add(
                         yylineno,
                         make_stringf("marker(\"%s\")",
                                      quote_lua_string((yyvsp[0].text)).c_str()));
                    }
                }
#line 1890 "levcomp.tab.cc"
    break;

  case 102: /* colour: COLOUR colour_specifiers  */
#line 387 "levcomp.ypp"
                                           { }
#line 1896 "levcomp.tab.cc"
    break;

  case 103: /* lfloorcol: LFLOORCOL  */
#line 390 "levcomp.ypp"
                            { }
#line 1902 "levcomp.tab.cc"
    break;

  case 104: /* lfloorcol: LFLOORCOL STRING  */
#line 392 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lfloorcol(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1913 "levcomp.tab.cc"
    break;

  case 105: /* lrockcol: LROCKCOL  */
#line 399 "levcomp.ypp"
                           { }
#line 1919 "levcomp.tab.cc"
    break;

  case 106: /* lrockcol: LROCKCOL STRING  */
#line 401 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lrockcol(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1930 "levcomp.tab.cc"
    break;

  case 107: /* lfloortile: LFLOORTILE  */
#line 408 "levcomp.ypp"
                             { }
#line 1936 "levcomp.tab.cc"
    break;

  case 108: /* lfloortile: LFLOORTILE STRING  */
#line 410 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lfloortile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1947 "levcomp.tab.cc"
    break;

  case 109: /* lrocktile: LROCKTILE  */
#line 418 "levcomp.ypp"
                            { }
#line 1953 "levcomp.tab.cc"
    break;

  case 110: /* lrocktile: LROCKTILE STRING  */
#line 420 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("lrocktile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1964 "levcomp.tab.cc"
    break;

  case 114: /* fheight_specifier: ITEM_INFO  */
#line 435 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("fheight(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1975 "levcomp.tab.cc"
    break;

  case 118: /* ftile_specifier: ITEM_INFO  */
#line 451 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("ftile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1986 "levcomp.tab.cc"
    break;

  case 122: /* rtile_specifier: ITEM_INFO  */
#line 467 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("rtile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 1997 "levcomp.tab.cc"
    break;

  case 126: /* tile_specifier: ITEM_INFO  */
#line 483 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("tile(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2008 "levcomp.tab.cc"
    break;

  case 127: /* colour_specifiers: colour_specifier  */
#line 492 "levcomp.ypp"
                                      { }
#line 2014 "levcomp.tab.cc"
    break;

  case 128: /* colour_specifiers: colour_specifiers COMMA colour_specifier  */
#line 493 "levcomp.ypp"
                                                             { }
#line 2020 "levcomp.tab.cc"
    break;

  case 129: /* colour_specifier: ITEM_INFO  */
#line 497 "levcomp.ypp"
                  {
                      lc_map.main.add(
                          yylineno,
                          make_stringf("colour(\"%s\")",
                              quote_lua_string((yyvsp[0].text)).c_str()));
                  }
#line 2031 "levcomp.tab.cc"
    break;

  case 130: /* nsubst: NSUBST nsubst_specifiers  */
#line 505 "levcomp.ypp"
                                           { }
#line 2037 "levcomp.tab.cc"
    break;

  case 131: /* nsubst_specifiers: nsubst_spec  */
#line 508 "levcomp.ypp"
                                 { }
#line 2043 "levcomp.tab.cc"
    break;

  case 132: /* nsubst_specifiers: nsubst_specifiers COMMA nsubst_spec  */
#line 509 "levcomp.ypp"
                                                        { }
#line 2049 "levcomp.tab.cc"
    break;

  case 133: /* nsubst_spec: ITEM_INFO  */
#line 513 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("nsubst(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2060 "levcomp.tab.cc"
    break;

  case 134: /* subst: SUBST subst_specifiers  */
#line 521 "levcomp.ypp"
                                         { }
#line 2066 "levcomp.tab.cc"
    break;

  case 137: /* subst_spec: ITEM_INFO  */
#line 529 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("subst(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2077 "levcomp.tab.cc"
    break;

  case 138: /* items: ITEM  */
#line 537 "levcomp.ypp"
                       {}
#line 2083 "levcomp.tab.cc"
    break;

  case 139: /* items: ITEM item_specifiers  */
#line 538 "levcomp.ypp"
                                       {}
#line 2089 "levcomp.tab.cc"
    break;

  case 142: /* item_specifier: ITEM_INFO  */
#line 546 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("item(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2100 "levcomp.tab.cc"
    break;

  case 143: /* mons: MONS  */
#line 553 "levcomp.ypp"
                       {}
#line 2106 "levcomp.tab.cc"
    break;

  case 144: /* mons: MONS mnames  */
#line 554 "levcomp.ypp"
                              {}
#line 2112 "levcomp.tab.cc"
    break;

  case 147: /* mname: MONSTER_NAME  */
#line 562 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("mons(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2123 "levcomp.tab.cc"
    break;

  case 148: /* place: PLACE STRING  */
#line 571 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("place(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2134 "levcomp.tab.cc"
    break;

  case 149: /* desc: DESC STRING  */
#line 580 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("desc(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2145 "levcomp.tab.cc"
    break;

  case 150: /* order: ORDER NUMBER  */
#line 589 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("order(%d)", int((yyvsp[0].f))));
                }
#line 2155 "levcomp.tab.cc"
    break;

  case 151: /* depth: DEPTH  */
#line 596 "levcomp.ypp"
                        {}
#line 2161 "levcomp.tab.cc"
    break;

  case 152: /* depth: DEPTH STRING  */
#line 598 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("depth(\"%s\")",
                            quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2172 "levcomp.tab.cc"
    break;

  case 153: /* chance: CHANCE chance_specifiers  */
#line 606 "levcomp.ypp"
                                           { }
#line 2178 "levcomp.tab.cc"
    break;

  case 154: /* chance: CHANCE  */
#line 607 "levcomp.ypp"
                         { }
#line 2184 "levcomp.tab.cc"
    break;

  case 157: /* chance_roll: NUMBER PERC  */
#line 614 "levcomp.ypp"
                {
                    (yyval.i) = (yyvsp[-1].f) * 100;
                }
#line 2192 "levcomp.tab.cc"
    break;

  case 158: /* chance_roll: NUMBER  */
#line 618 "levcomp.ypp"
                {
                    (yyval.i) = (yyvsp[0].f);
                }
#line 2200 "levcomp.tab.cc"
    break;

  case 159: /* chance_num: NUMBER COLON chance_roll  */
#line 623 "levcomp.ypp"
                {
                    (yyval.chance).priority = (yyvsp[-2].f);
                    (yyval.chance).chance   = (yyvsp[0].i);
                }
#line 2209 "levcomp.tab.cc"
    break;

  case 160: /* chance_num: chance_roll  */
#line 628 "levcomp.ypp"
                {
                    (yyval.chance).priority = DEFAULT_CHANCE_PRIORITY;
                    (yyval.chance).chance   = (yyvsp[0].i);
                }
#line 2218 "levcomp.tab.cc"
    break;

  case 161: /* chance_specifier: chance_num STRING  */
#line 635 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("depth_chance(\"%s\", %d, %d)",
                                     quote_lua_string((yyvsp[0].text)).c_str(),
                                     (yyvsp[-1].chance).priority, (yyvsp[-1].chance).chance));
                }
#line 2230 "levcomp.tab.cc"
    break;

  case 162: /* chance_specifier: chance_num  */
#line 643 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("chance(%d, %d)",
                                     (yyvsp[0].chance).priority, (yyvsp[0].chance).chance));
                }
#line 2241 "levcomp.tab.cc"
    break;

  case 166: /* weight_specifier: NUMBER STRING  */
#line 657 "levcomp.ypp"
                 {
                     lc_map.main.add(
                         yylineno,
                         make_stringf("depth_weight(\"%s\", %d)",
                                      quote_lua_string((yyvsp[0].text)).c_str(), (int)(yyvsp[-1].f)));
                 }
#line 2252 "levcomp.tab.cc"
    break;

  case 167: /* weight_specifier: NUMBER  */
#line 664 "levcomp.ypp"
                 {
                     lc_map.main.add(
                         yylineno,
                         make_stringf("weight(%d)", (int)(yyvsp[0].f)));
                 }
#line 2262 "levcomp.tab.cc"
    break;

  case 168: /* orientation: ORIENT  */
#line 671 "levcomp.ypp"
                         {}
#line 2268 "levcomp.tab.cc"
    break;

  case 169: /* orientation: ORIENT STRING  */
#line 673 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("orient(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2279 "levcomp.tab.cc"
    break;

  case 170: /* welcome: WELCOME STRING  */
#line 682 "levcomp.ypp"
                {
                    lc_map.main.add(
                        yylineno,
                        make_stringf("welcome(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2290 "levcomp.tab.cc"
    break;

  case 174: /* map_line: MAP_LINE  */
#line 698 "levcomp.ypp"
                {
                    lc_map.mapchunk.add(
                        yylineno,
                        make_stringf("map(\"%s\")",
                                     quote_lua_string((yyvsp[0].text)).c_str()));
                }
#line 2301 "levcomp.tab.cc"
    break;

  case 178: /* subvault_specifier: STRING  */
#line 714 "levcomp.ypp"
                   {
                       lc_map.main.add(
                           yylineno,
                           make_stringf("subvault(\"%s\")",
                               quote_lua_string((yyvsp[0].text)).c_str()));
                   }
#line 2312 "levcomp.tab.cc"
    break;


#line 2316 "levcomp.tab.cc"

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

#line 722 "levcomp.ypp"

