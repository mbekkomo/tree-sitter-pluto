#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  sym_nil = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  anon_sym_or = 6,
  anon_sym_QMARK_QMARK = 7,
  anon_sym_and = 8,
  anon_sym_EQ_EQ = 9,
  anon_sym_TILDE_EQ = 10,
  anon_sym_BANG_EQ = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_LT_EQ_GT = 16,
  anon_sym_instanceof = 17,
  anon_sym_PIPE = 18,
  anon_sym_TILDE = 19,
  anon_sym_AMP = 20,
  anon_sym_LT_LT = 21,
  anon_sym_GT_GT = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_SLASH_SLASH = 27,
  anon_sym_PERCENT = 28,
  anon_sym_in = 29,
  anon_sym_DOT_DOT = 30,
  anon_sym_CARET = 31,
  anon_sym_new = 32,
  anon_sym_pluto_new = 33,
  anon_sym_not = 34,
  anon_sym_BANG = 35,
  anon_sym_POUND = 36,
  anon_sym_PLUS_PLUS = 37,
  sym_chunk = 38,
  sym__expression = 39,
  sym_boolean = 40,
  sym_binary_operation = 41,
  sym_unary_operation = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_or] = "or",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_instanceof] = "instanceof",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT] = "%",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_CARET] = "^",
  [anon_sym_new] = "new",
  [anon_sym_pluto_new] = "pluto_new",
  [anon_sym_not] = "not",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [anon_sym_PLUS_PLUS] = "++",
  [sym_chunk] = "chunk",
  [sym__expression] = "_expression",
  [sym_boolean] = "boolean",
  [sym_binary_operation] = "binary_operation",
  [sym_unary_operation] = "unary_operation",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_instanceof] = anon_sym_instanceof,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_pluto_new] = anon_sym_pluto_new,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [sym_chunk] = sym_chunk,
  [sym__expression] = sym__expression,
  [sym_boolean] = sym_boolean,
  [sym_binary_operation] = sym_binary_operation,
  [sym_unary_operation] = sym_unary_operation,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instanceof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pluto_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '&') ADVANCE(59);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '~') ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '+') ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '?') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'w') ADVANCE(72);
      END_STATE();
    case 36:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '+') ADVANCE(1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '~') ADVANCE(57);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '&') ADVANCE(59);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '~') ADVANCE(58);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_pluto_new);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_instanceof] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_pluto_new] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_chunk] = STATE(33),
    [sym__expression] = STATE(17),
    [sym_boolean] = STATE(17),
    [sym_binary_operation] = STATE(17),
    [sym_unary_operation] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_nil] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_new] = ACTIONS(9),
    [anon_sym_pluto_new] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_PLUS_PLUS] = ACTIONS(9),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_QMARK_QMARK] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_TILDE_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_instanceof] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_AMP] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(39),
    [anon_sym_QMARK_QMARK] = ACTIONS(39),
    [anon_sym_and] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ_GT] = ACTIONS(39),
    [anon_sym_instanceof] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_SLASH_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(11),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_BANG_EQ] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ_GT] = ACTIONS(11),
    [anon_sym_instanceof] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_or] = ACTIONS(43),
    [anon_sym_QMARK_QMARK] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_TILDE_EQ] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_LT_EQ_GT] = ACTIONS(43),
    [anon_sym_instanceof] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_GT_GT] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(43),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(47),
    [anon_sym_instanceof] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_QMARK_QMARK] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(47),
    [anon_sym_instanceof] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_QMARK_QMARK] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(47),
    [anon_sym_instanceof] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_QMARK_QMARK] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ_GT] = ACTIONS(47),
    [anon_sym_instanceof] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(25),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [27] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [54] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [81] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [108] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [135] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [162] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [189] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [216] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [243] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [270] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [297] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [324] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [351] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_nil,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 4,
      sym__expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
    ACTIONS(9), 8,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_new,
      anon_sym_pluto_new,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
      anon_sym_PLUS_PLUS,
  [378] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 27,
  [SMALL_STATE(21)] = 54,
  [SMALL_STATE(22)] = 81,
  [SMALL_STATE(23)] = 108,
  [SMALL_STATE(24)] = 135,
  [SMALL_STATE(25)] = 162,
  [SMALL_STATE(26)] = 189,
  [SMALL_STATE(27)] = 216,
  [SMALL_STATE(28)] = 243,
  [SMALL_STATE(29)] = 270,
  [SMALL_STATE(30)] = 297,
  [SMALL_STATE(31)] = 324,
  [SMALL_STATE(32)] = 351,
  [SMALL_STATE(33)] = 378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pluto(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
