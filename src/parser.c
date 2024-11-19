#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  sym_number = 6,
  anon_sym_or = 7,
  anon_sym_QMARK_QMARK = 8,
  anon_sym_and = 9,
  anon_sym_EQ_EQ = 10,
  anon_sym_TILDE_EQ = 11,
  anon_sym_BANG_EQ = 12,
  anon_sym_LT = 13,
  anon_sym_GT = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT_EQ_GT = 17,
  anon_sym_instanceof = 18,
  anon_sym_PIPE = 19,
  anon_sym_TILDE = 20,
  anon_sym_AMP = 21,
  anon_sym_LT_LT = 22,
  anon_sym_GT_GT = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_SLASH_SLASH = 28,
  anon_sym_PERCENT = 29,
  anon_sym_in = 30,
  anon_sym_DOT_DOT = 31,
  anon_sym_CARET = 32,
  anon_sym_not = 33,
  anon_sym_BANG = 34,
  anon_sym_POUND = 35,
  anon_sym_new = 36,
  anon_sym_pluto_new = 37,
  anon_sym_PLUS_PLUS = 38,
  aux_sym_increment_expression_token1 = 39,
  sym_chunk = 40,
  sym__expression = 41,
  sym__prefix_expression = 42,
  sym_boolean = 43,
  sym_binary_operation = 44,
  sym_unary_operation = 45,
  sym_new_expression = 46,
  sym_increment_expression = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
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
  [anon_sym_not] = "not",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [anon_sym_new] = "new",
  [anon_sym_pluto_new] = "pluto_new",
  [anon_sym_PLUS_PLUS] = "++",
  [aux_sym_increment_expression_token1] = "increment_expression_token1",
  [sym_chunk] = "chunk",
  [sym__expression] = "_expression",
  [sym__prefix_expression] = "_prefix_expression",
  [sym_boolean] = "boolean",
  [sym_binary_operation] = "binary_operation",
  [sym_unary_operation] = "unary_operation",
  [sym_new_expression] = "new_expression",
  [sym_increment_expression] = "increment_expression",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
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
  [anon_sym_not] = anon_sym_not,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_pluto_new] = anon_sym_pluto_new,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [aux_sym_increment_expression_token1] = aux_sym_increment_expression_token1,
  [sym_chunk] = sym_chunk,
  [sym__expression] = sym__expression,
  [sym__prefix_expression] = sym__prefix_expression,
  [sym_boolean] = sym_boolean,
  [sym_binary_operation] = sym_binary_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_new_expression] = sym_new_expression,
  [sym_increment_expression] = sym_increment_expression,
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
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pluto_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_increment_expression_token1] = {
    .visible = false,
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
  [sym__prefix_expression] = {
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
  [sym_new_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_increment_expression] = {
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '?') ADVANCE(59);
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
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(83);
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
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(86);
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
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 36:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 38:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '~') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(72);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_pluto_new);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_increment_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 44},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 44},
  [20] = {.lex_state = 44},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 39},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
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
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_pluto_new] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
  },
  [1] = {
    [sym_chunk] = STATE(36),
    [sym__expression] = STATE(20),
    [sym__prefix_expression] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_binary_operation] = STATE(20),
    [sym_unary_operation] = STATE(20),
    [sym_new_expression] = STATE(20),
    [sym_increment_expression] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_nil] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(7),
    [anon_sym_false] = ACTIONS(7),
    [sym_number] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_new] = ACTIONS(13),
    [anon_sym_pluto_new] = ACTIONS(13),
    [anon_sym_PLUS_PLUS] = ACTIONS(15),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(17),
    [anon_sym_QMARK_QMARK] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_TILDE_EQ] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ_GT] = ACTIONS(17),
    [anon_sym_instanceof] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(17),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_QMARK_QMARK] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_TILDE_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ_GT] = ACTIONS(29),
    [anon_sym_instanceof] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_GT_GT] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(29),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(21),
    [anon_sym_GT_GT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_QMARK_QMARK] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_TILDE_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_LT_EQ_GT] = ACTIONS(41),
    [anon_sym_instanceof] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_GT_GT] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(41),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(47),
    [anon_sym_QMARK_QMARK] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_TILDE_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ_GT] = ACTIONS(51),
    [anon_sym_instanceof] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_QMARK_QMARK] = ACTIONS(63),
    [anon_sym_and] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_TILDE_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(65),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_LT_EQ_GT] = ACTIONS(63),
    [anon_sym_instanceof] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(63),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_in] = ACTIONS(65),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(63),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_TILDE_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ_GT] = ACTIONS(21),
    [anon_sym_instanceof] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_TILDE_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ_GT] = ACTIONS(51),
    [anon_sym_instanceof] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_QMARK_QMARK] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_TILDE_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ_GT] = ACTIONS(51),
    [anon_sym_instanceof] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_or] = ACTIONS(47),
    [anon_sym_QMARK_QMARK] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_TILDE_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ_GT] = ACTIONS(51),
    [anon_sym_instanceof] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(47),
    [anon_sym_QMARK_QMARK] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_TILDE_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ_GT] = ACTIONS(51),
    [anon_sym_instanceof] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(71), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(8), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [38] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(73), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(7), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [76] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(75), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(6), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [114] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(77), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(5), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [152] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(79), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(3), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [190] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(81), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(19), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [228] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(83), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(9), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [266] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(85), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(13), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [304] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(87), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(14), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [342] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(89), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(15), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [380] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(91), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(16), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [418] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(93), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(17), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [456] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(95), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(18), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [494] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(97), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(11), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [532] = 8,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_PLUS,
    ACTIONS(15), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(7), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      anon_sym_new,
      anon_sym_pluto_new,
    ACTIONS(99), 2,
      sym_nil,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_BANG,
      anon_sym_POUND,
    STATE(10), 7,
      sym__expression,
      sym__prefix_expression,
      sym_boolean,
      sym_binary_operation,
      sym_unary_operation,
      sym_new_expression,
      sym_increment_expression,
  [570] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [574] = 1,
    ACTIONS(103), 1,
      aux_sym_increment_expression_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 38,
  [SMALL_STATE(23)] = 76,
  [SMALL_STATE(24)] = 114,
  [SMALL_STATE(25)] = 152,
  [SMALL_STATE(26)] = 190,
  [SMALL_STATE(27)] = 228,
  [SMALL_STATE(28)] = 266,
  [SMALL_STATE(29)] = 304,
  [SMALL_STATE(30)] = 342,
  [SMALL_STATE(31)] = 380,
  [SMALL_STATE(32)] = 418,
  [SMALL_STATE(33)] = 456,
  [SMALL_STATE(34)] = 494,
  [SMALL_STATE(35)] = 532,
  [SMALL_STATE(36)] = 570,
  [SMALL_STATE(37)] = 574,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_expression, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_expression, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_expression, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_expression, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_expression, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
