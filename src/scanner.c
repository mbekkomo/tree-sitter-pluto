#include "tree_sitter/parser.h"

enum TokenType {
  STRING_START,
  STRING_END,
  STRING_CONTENT,

  BLOCK_START,
  BLOCK_CONTENT,
  BLOCK_END,
};

#define consume(x) (x)->advance((x), false)
#define skip(x) (x)->advance((x), true)

void *tree_sitter_pluto_external_scanner_create() { return NULL; }

void tree_sitter_pluto_external_scanner_destroy(void *_) {}

int ending_char = 0;
int level_count = 0;

static inline void reset_state() {
  ending_char = 0;
  level_count = 0;
}

unsigned tree_sitter_pluto_external_scanner_serialize(void *_, char *buffer) {
  buffer[0] = ending_char;
  buffer[1] = level_count;
  return 2;
}

void tree_sitter_pluto_external_scanner_deserialize(void *_, char *buffer,
                                                    unsigned length) {
  if (length == 0)
    return;
  ending_char = buffer[0];
  if (length == 1)
    return;
  level_count = buffer[1];
}

static bool scan_string_start(TSLexer *lex) {
  if (lex->lookahead == '"' || lex->lookahead == '\'') {
    lex->result_symbol = STRING_START;
    ending_char = lex->lookahead;
    consume(lex);
    return true;
  };
  return false;
}

static bool scan_string_end(TSLexer *lex) {
  if (lex->lookahead == ending_char) {
    reset_state();
    lex->result_symbol = STRING_END;
    consume(lex);
    return true;
  }
  return false;
}

static bool scan_string_content(TSLexer *lex) {
  lex->log(lex, "==== %s was triggered", __FUNCTION__);
  lex->result_symbol = STRING_CONTENT;
  while (lex->lookahead != '\n' || lex->lookahead != 0 ||
         lex->lookahead != ending_char) {
    consume(lex);
  }

  return true;
}

bool tree_sitter_pluto_external_scanner_scan(void *_, TSLexer *lex,
                                             const bool *valid_symbols) {
  if (valid_symbols[STRING_START])
    return scan_string_start(lex);
  if (valid_symbols[STRING_END])
    return scan_string_end(lex);
  if (valid_symbols[STRING_CONTENT])
    return scan_string_content(lex);
  return false;
}
