#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym__line_comment = 1,
  sym__block_comment = 2,
  anon_sym_DOT = 3,
  anon_sym_COLON_DASH = 4,
  anon_sym_QMARK_DASH = 5,
  anon_sym_COMMA = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_atom = 9,
  sym_variable = 10,
  sym_num = 11,
  aux_sym_str_token1 = 12,
  aux_sym_str_token2 = 13,
  aux_sym_str_token3 = 14,
  anon_sym_is = 15,
  aux_sym_op_token1 = 16,
  sym__cut = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_program = 20,
  sym_comment = 21,
  sym_fact = 22,
  sym_statement = 23,
  sym_predicate = 24,
  sym__exprs = 25,
  sym__expr = 26,
  sym__group = 27,
  sym_call = 28,
  sym__lit = 29,
  sym_str = 30,
  sym__binop = 31,
  sym_op = 32,
  sym__list = 33,
  aux_sym_program_repeat1 = 34,
  aux_sym__exprs_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__line_comment] = "_line_comment",
  [sym__block_comment] = "_block_comment",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_QMARK_DASH] = "\?-",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_atom] = "atom",
  [sym_variable] = "variable",
  [sym_num] = "num",
  [aux_sym_str_token1] = "str_token1",
  [aux_sym_str_token2] = "str_token2",
  [aux_sym_str_token3] = "str_token3",
  [anon_sym_is] = "is",
  [aux_sym_op_token1] = "op_token1",
  [sym__cut] = "_cut",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_fact] = "fact",
  [sym_statement] = "statement",
  [sym_predicate] = "predicate",
  [sym__exprs] = "_exprs",
  [sym__expr] = "_expr",
  [sym__group] = "_group",
  [sym_call] = "call",
  [sym__lit] = "_lit",
  [sym_str] = "str",
  [sym__binop] = "_binop",
  [sym_op] = "op",
  [sym__list] = "_list",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__exprs_repeat1] = "_exprs_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__line_comment] = sym__line_comment,
  [sym__block_comment] = sym__block_comment,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_QMARK_DASH] = anon_sym_QMARK_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_atom] = sym_atom,
  [sym_variable] = sym_variable,
  [sym_num] = sym_num,
  [aux_sym_str_token1] = aux_sym_str_token1,
  [aux_sym_str_token2] = aux_sym_str_token2,
  [aux_sym_str_token3] = aux_sym_str_token3,
  [anon_sym_is] = anon_sym_is,
  [aux_sym_op_token1] = aux_sym_op_token1,
  [sym__cut] = sym__cut,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_fact] = sym_fact,
  [sym_statement] = sym_statement,
  [sym_predicate] = sym_predicate,
  [sym__exprs] = sym__exprs,
  [sym__expr] = sym__expr,
  [sym__group] = sym__group,
  [sym_call] = sym_call,
  [sym__lit] = sym__lit,
  [sym_str] = sym_str,
  [sym__binop] = sym__binop,
  [sym_op] = sym_op,
  [sym__list] = sym__list,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__exprs_repeat1] = aux_sym__exprs_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_str_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_op_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__cut] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym__exprs] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__lit] = {
    .visible = false,
    .named = true,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [sym__binop] = {
    .visible = false,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym__list] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exprs_repeat1] = {
    .visible = false,
    .named = false,
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
  [9] = 8,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 5,
  [15] = 8,
  [16] = 6,
  [17] = 8,
  [18] = 6,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 4,
  [39] = 11,
  [40] = 7,
  [41] = 4,
  [42] = 4,
  [43] = 13,
  [44] = 44,
  [45] = 26,
  [46] = 7,
  [47] = 20,
  [48] = 21,
  [49] = 13,
  [50] = 7,
  [51] = 11,
  [52] = 25,
  [53] = 25,
  [54] = 20,
  [55] = 21,
  [56] = 26,
  [57] = 57,
  [58] = 25,
  [59] = 20,
  [60] = 21,
  [61] = 26,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 63,
  [66] = 62,
  [67] = 63,
  [68] = 68,
  [69] = 63,
  [70] = 62,
  [71] = 71,
  [72] = 72,
};

static inline bool aux_sym_op_token1_character_set_1(int32_t c) {
  return (c < '\\'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '/' || (c >= ';' && c <= '@')))
    : (c <= '\\' || (c < '|'
      ? (c < '`'
        ? c == '^'
        : c <= '`')
      : (c <= '|' || c == '~'))));
}

static inline bool aux_sym_op_token1_character_set_2(int32_t c) {
  return (c < '\\'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '/' || (c >= ';' && c <= '@')))
    : (c <= '\\' || (c < '|'
      ? (c < '`'
        ? c == '^'
        : c <= '`')
      : (c <= '|' || c == '~'))));
}

static inline bool aux_sym_op_token1_character_set_3(int32_t c) {
  return (c < '\\'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '.' || (c >= ';' && c <= '@')))
    : (c <= '\\' || (c < '|'
      ? (c < '`'
        ? c == '^'
        : c <= '`')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '`') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('#' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(39);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '`') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '*') ADVANCE(46);
      if (aux_sym_op_token1_character_set_2(lookahead)) ADVANCE(47);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__line_comment);
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__block_comment);
      if (lookahead == '*') ADVANCE(46);
      if (aux_sym_op_token1_character_set_2(lookahead)) ADVANCE(47);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__block_comment);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_QMARK_DASH);
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_atom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_str_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_str_token2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_str_token3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_str_token3);
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_op_token1);
      if (lookahead == '*') ADVANCE(44);
      if (aux_sym_op_token1_character_set_2(lookahead)) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_op_token1);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (aux_sym_op_token1_character_set_2(lookahead)) ADVANCE(47);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_op_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(18);
      if (aux_sym_op_token1_character_set_3(lookahead)) ADVANCE(47);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_op_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(22);
      if (aux_sym_op_token1_character_set_3(lookahead)) ADVANCE(47);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_op_token1);
      if (lookahead == '*') ADVANCE(46);
      if (aux_sym_op_token1_character_set_2(lookahead)) ADVANCE(47);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_op_token1);
      if (lookahead == '-') ADVANCE(28);
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_op_token1);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(49);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_op_token1);
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__cut);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__cut);
      if (aux_sym_op_token1_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__line_comment] = ACTIONS(1),
    [sym__block_comment] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_QMARK_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [aux_sym_str_token1] = ACTIONS(1),
    [aux_sym_str_token2] = ACTIONS(1),
    [aux_sym_str_token3] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [aux_sym_op_token1] = ACTIONS(1),
    [sym__cut] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(72),
    [sym_comment] = STATE(2),
    [sym_fact] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_predicate] = STATE(2),
    [sym__expr] = STATE(44),
    [sym__group] = STATE(44),
    [sym_call] = STATE(44),
    [sym__lit] = STATE(44),
    [sym_str] = STATE(44),
    [sym__binop] = STATE(44),
    [sym__list] = STATE(44),
    [aux_sym_program_repeat1] = STATE(2),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(5),
    [anon_sym_QMARK_DASH] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_atom] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
    [sym_num] = ACTIONS(15),
    [aux_sym_str_token1] = ACTIONS(17),
    [aux_sym_str_token2] = ACTIONS(17),
    [aux_sym_str_token3] = ACTIONS(17),
    [sym__cut] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [2] = {
    [sym_comment] = STATE(3),
    [sym_fact] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_predicate] = STATE(3),
    [sym__expr] = STATE(44),
    [sym__group] = STATE(44),
    [sym_call] = STATE(44),
    [sym__lit] = STATE(44),
    [sym_str] = STATE(44),
    [sym__binop] = STATE(44),
    [sym__list] = STATE(44),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__line_comment] = ACTIONS(3),
    [sym__block_comment] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(5),
    [anon_sym_QMARK_DASH] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_atom] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
    [sym_num] = ACTIONS(15),
    [aux_sym_str_token1] = ACTIONS(17),
    [aux_sym_str_token2] = ACTIONS(17),
    [aux_sym_str_token3] = ACTIONS(17),
    [sym__cut] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(19),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym_fact] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_predicate] = STATE(3),
    [sym__expr] = STATE(44),
    [sym__group] = STATE(44),
    [sym_call] = STATE(44),
    [sym__lit] = STATE(44),
    [sym_str] = STATE(44),
    [sym__binop] = STATE(44),
    [sym__list] = STATE(44),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__line_comment] = ACTIONS(25),
    [sym__block_comment] = ACTIONS(25),
    [anon_sym_COLON_DASH] = ACTIONS(28),
    [anon_sym_QMARK_DASH] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(34),
    [sym_atom] = ACTIONS(37),
    [sym_variable] = ACTIONS(40),
    [sym_num] = ACTIONS(43),
    [aux_sym_str_token1] = ACTIONS(46),
    [aux_sym_str_token2] = ACTIONS(46),
    [aux_sym_str_token3] = ACTIONS(46),
    [sym__cut] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__group,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      anon_sym_LBRACK,
    ACTIONS(54), 10,
      sym__line_comment,
      sym__block_comment,
      anon_sym_QMARK_DASH,
      anon_sym_COMMA,
      sym_atom,
      sym_variable,
      aux_sym_str_token3,
      anon_sym_is,
      aux_sym_op_token1,
      sym__cut,
  [27] = 9,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_atom,
    ACTIONS(60), 1,
      sym_variable,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      aux_sym__exprs_repeat1,
    STATE(31), 1,
      sym__exprs,
    ACTIONS(62), 2,
      sym_num,
      sym__cut,
    ACTIONS(64), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(13), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [64] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      sym_variable,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym__exprs_repeat1,
    STATE(70), 1,
      sym__exprs,
    ACTIONS(74), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(43), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [101] = 3,
    STATE(27), 1,
      sym_op,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      anon_sym_LBRACK,
    ACTIONS(82), 10,
      sym__line_comment,
      sym__block_comment,
      anon_sym_QMARK_DASH,
      anon_sym_COMMA,
      sym_atom,
      sym_variable,
      aux_sym_str_token3,
      anon_sym_is,
      aux_sym_op_token1,
      sym__cut,
  [126] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      sym_variable,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym__exprs_repeat1,
    STATE(67), 1,
      sym__exprs,
    ACTIONS(74), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(43), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [163] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      sym_variable,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym__exprs_repeat1,
    STATE(69), 1,
      sym__exprs,
    ACTIONS(74), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(43), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [200] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      sym_variable,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym__exprs_repeat1,
    STATE(66), 1,
      sym__exprs,
    ACTIONS(74), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(43), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [237] = 5,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_op,
    ACTIONS(90), 2,
      anon_sym_is,
      aux_sym_op_token1,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      anon_sym_LBRACK,
    ACTIONS(86), 7,
      sym__line_comment,
      sym__block_comment,
      anon_sym_QMARK_DASH,
      sym_atom,
      sym_variable,
      aux_sym_str_token3,
      sym__cut,
  [266] = 9,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      sym_atom,
    ACTIONS(96), 1,
      sym_variable,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym__exprs_repeat1,
    STATE(71), 1,
      sym__exprs,
    ACTIONS(98), 2,
      sym_num,
      sym__cut,
    ACTIONS(100), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(49), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [303] = 5,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_op,
    ACTIONS(90), 2,
      anon_sym_is,
      aux_sym_op_token1,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      anon_sym_LBRACK,
    ACTIONS(106), 7,
      sym__line_comment,
      sym__block_comment,
      anon_sym_QMARK_DASH,
      sym_atom,
      sym_variable,
      aux_sym_str_token3,
      sym__cut,
  [332] = 9,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      sym_atom,
    ACTIONS(96), 1,
      sym_variable,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      aux_sym__exprs_repeat1,
    STATE(31), 1,
      sym__exprs,
    ACTIONS(98), 2,
      sym_num,
      sym__cut,
    ACTIONS(100), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(49), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [369] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      sym_variable,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym__exprs_repeat1,
    STATE(65), 1,
      sym__exprs,
    ACTIONS(74), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(43), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [406] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      sym_variable,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym__exprs_repeat1,
    STATE(64), 1,
      sym__exprs,
    ACTIONS(74), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(43), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [443] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      sym_variable,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym__exprs_repeat1,
    STATE(63), 1,
      sym__exprs,
    ACTIONS(74), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(43), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [480] = 9,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(72), 1,
      sym_variable,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym__exprs_repeat1,
    STATE(62), 1,
      sym__exprs,
    ACTIONS(74), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(43), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [517] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_variable,
    STATE(22), 1,
      aux_sym__exprs_repeat1,
    ACTIONS(110), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(39), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [551] = 2,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      anon_sym_LBRACK,
    ACTIONS(114), 10,
      sym__line_comment,
      sym__block_comment,
      anon_sym_QMARK_DASH,
      anon_sym_COMMA,
      sym_atom,
      sym_variable,
      aux_sym_str_token3,
      anon_sym_is,
      aux_sym_op_token1,
      sym__cut,
  [573] = 2,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      anon_sym_LBRACK,
    ACTIONS(118), 10,
      sym__line_comment,
      sym__block_comment,
      anon_sym_QMARK_DASH,
      anon_sym_COMMA,
      sym_atom,
      sym_variable,
      aux_sym_str_token3,
      anon_sym_is,
      aux_sym_op_token1,
      sym__cut,
  [595] = 8,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_atom,
    ACTIONS(126), 1,
      sym_variable,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym__exprs_repeat1,
    ACTIONS(129), 2,
      sym_num,
      sym__cut,
    ACTIONS(132), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(57), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [629] = 8,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      sym_atom,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      sym_variable,
    STATE(22), 1,
      aux_sym__exprs_repeat1,
    ACTIONS(140), 2,
      sym_num,
      sym__cut,
    ACTIONS(100), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(51), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [663] = 8,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_atom,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      sym_variable,
    STATE(22), 1,
      aux_sym__exprs_repeat1,
    ACTIONS(144), 2,
      sym_num,
      sym__cut,
    ACTIONS(64), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(11), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [697] = 2,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      anon_sym_LBRACK,
    ACTIONS(148), 10,
      sym__line_comment,
      sym__block_comment,
      anon_sym_QMARK_DASH,
      anon_sym_COMMA,
      sym_atom,
      sym_variable,
      aux_sym_str_token3,
      anon_sym_is,
      aux_sym_op_token1,
      sym__cut,
  [719] = 2,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      anon_sym_LBRACK,
    ACTIONS(152), 10,
      sym__line_comment,
      sym__block_comment,
      anon_sym_QMARK_DASH,
      anon_sym_COMMA,
      sym_atom,
      sym_variable,
      aux_sym_str_token3,
      anon_sym_is,
      aux_sym_op_token1,
      sym__cut,
  [741] = 7,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_atom,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      sym_variable,
    ACTIONS(156), 2,
      sym_num,
      sym__cut,
    ACTIONS(64), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(7), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [772] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_atom,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      sym_variable,
    ACTIONS(160), 2,
      sym_num,
      sym__cut,
    ACTIONS(17), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(46), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [803] = 7,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_atom,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_variable,
    ACTIONS(164), 2,
      sym_num,
      sym__cut,
    ACTIONS(76), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(40), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [834] = 7,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      sym_atom,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      sym_variable,
    ACTIONS(168), 2,
      sym_num,
      sym__cut,
    ACTIONS(100), 3,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
    STATE(50), 7,
      sym__expr,
      sym__group,
      sym_call,
      sym__lit,
      sym_str,
      sym__binop,
      sym__list,
  [865] = 2,
    ACTIONS(172), 3,
      sym__line_comment,
      sym__block_comment,
      sym_variable,
    ACTIONS(170), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      anon_sym_LPAREN,
      sym_atom,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
      sym__cut,
      anon_sym_LBRACK,
  [885] = 2,
    ACTIONS(176), 3,
      sym__line_comment,
      sym__block_comment,
      sym_variable,
    ACTIONS(174), 11,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      anon_sym_LPAREN,
      sym_atom,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
      sym__cut,
      anon_sym_LBRACK,
  [904] = 2,
    ACTIONS(180), 3,
      sym__line_comment,
      sym__block_comment,
      sym_variable,
    ACTIONS(178), 11,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      anon_sym_LPAREN,
      sym_atom,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
      sym__cut,
      anon_sym_LBRACK,
  [923] = 2,
    ACTIONS(184), 3,
      sym__line_comment,
      sym__block_comment,
      sym_variable,
    ACTIONS(182), 11,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      anon_sym_LPAREN,
      sym_atom,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
      sym__cut,
      anon_sym_LBRACK,
  [942] = 2,
    ACTIONS(188), 3,
      sym__line_comment,
      sym__block_comment,
      sym_variable,
    ACTIONS(186), 11,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_QMARK_DASH,
      anon_sym_LPAREN,
      sym_atom,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
      sym__cut,
      anon_sym_LBRACK,
  [961] = 2,
    ACTIONS(192), 1,
      sym_variable,
    ACTIONS(190), 8,
      anon_sym_LPAREN,
      sym_atom,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
      sym__cut,
      anon_sym_LBRACK,
  [975] = 2,
    ACTIONS(196), 1,
      sym_variable,
    ACTIONS(194), 8,
      anon_sym_LPAREN,
      sym_atom,
      sym_num,
      aux_sym_str_token1,
      aux_sym_str_token2,
      aux_sym_str_token3,
      sym__cut,
      anon_sym_LBRACK,
  [989] = 4,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__group,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      aux_sym_op_token1,
    ACTIONS(52), 3,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_RBRACK,
  [1005] = 5,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      aux_sym_op_token1,
    ACTIONS(198), 1,
      anon_sym_is,
    STATE(29), 1,
      sym_op,
    ACTIONS(84), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1022] = 3,
    STATE(29), 1,
      sym_op,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      aux_sym_op_token1,
    ACTIONS(80), 3,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_RBRACK,
  [1035] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym__group,
    ACTIONS(52), 2,
      anon_sym_COLON_DASH,
      anon_sym_is,
    ACTIONS(54), 2,
      anon_sym_DOT,
      aux_sym_op_token1,
  [1050] = 4,
    ACTIONS(52), 1,
      anon_sym_is,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym__group,
    ACTIONS(54), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_op_token1,
  [1065] = 5,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      aux_sym_op_token1,
    ACTIONS(198), 1,
      anon_sym_is,
    STATE(29), 1,
      sym_op,
    ACTIONS(104), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1082] = 6,
    ACTIONS(90), 1,
      aux_sym_op_token1,
    ACTIONS(198), 1,
      anon_sym_is,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_COLON_DASH,
    STATE(28), 1,
      sym_op,
    STATE(68), 1,
      sym_statement,
  [1101] = 2,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      aux_sym_op_token1,
    ACTIONS(150), 3,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_RBRACK,
  [1111] = 3,
    STATE(28), 1,
      sym_op,
    ACTIONS(80), 2,
      anon_sym_COLON_DASH,
      anon_sym_is,
    ACTIONS(82), 2,
      anon_sym_DOT,
      aux_sym_op_token1,
  [1123] = 2,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      aux_sym_op_token1,
    ACTIONS(112), 3,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_RBRACK,
  [1133] = 2,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      aux_sym_op_token1,
    ACTIONS(116), 3,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_RBRACK,
  [1143] = 5,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      aux_sym_op_token1,
    ACTIONS(106), 1,
      anon_sym_DOT,
    ACTIONS(198), 1,
      anon_sym_is,
    STATE(30), 1,
      sym_op,
  [1159] = 3,
    ACTIONS(80), 1,
      anon_sym_is,
    STATE(30), 1,
      sym_op,
    ACTIONS(82), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_op_token1,
  [1171] = 5,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      aux_sym_op_token1,
    ACTIONS(198), 1,
      anon_sym_is,
    STATE(30), 1,
      sym_op,
  [1187] = 2,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      aux_sym_op_token1,
    ACTIONS(146), 3,
      anon_sym_RPAREN,
      anon_sym_is,
      anon_sym_RBRACK,
  [1197] = 2,
    ACTIONS(146), 2,
      anon_sym_COLON_DASH,
      anon_sym_is,
    ACTIONS(148), 2,
      anon_sym_DOT,
      aux_sym_op_token1,
  [1206] = 2,
    ACTIONS(112), 1,
      anon_sym_is,
    ACTIONS(114), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_op_token1,
  [1215] = 2,
    ACTIONS(116), 1,
      anon_sym_is,
    ACTIONS(118), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_op_token1,
  [1224] = 2,
    ACTIONS(150), 1,
      anon_sym_is,
    ACTIONS(152), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_op_token1,
  [1233] = 4,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      aux_sym_op_token1,
    ACTIONS(198), 1,
      anon_sym_is,
    STATE(29), 1,
      sym_op,
  [1246] = 2,
    ACTIONS(146), 1,
      anon_sym_is,
    ACTIONS(148), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      aux_sym_op_token1,
  [1255] = 2,
    ACTIONS(112), 2,
      anon_sym_COLON_DASH,
      anon_sym_is,
    ACTIONS(114), 2,
      anon_sym_DOT,
      aux_sym_op_token1,
  [1264] = 2,
    ACTIONS(116), 2,
      anon_sym_COLON_DASH,
      anon_sym_is,
    ACTIONS(118), 2,
      anon_sym_DOT,
      aux_sym_op_token1,
  [1273] = 2,
    ACTIONS(150), 2,
      anon_sym_COLON_DASH,
      anon_sym_is,
    ACTIONS(152), 2,
      anon_sym_DOT,
      aux_sym_op_token1,
  [1282] = 1,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
  [1286] = 1,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
  [1290] = 1,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [1294] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
  [1298] = 1,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [1302] = 1,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
  [1306] = 1,
    ACTIONS(216), 1,
      anon_sym_DOT,
  [1310] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
  [1314] = 1,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [1318] = 1,
    ACTIONS(222), 1,
      anon_sym_DOT,
  [1322] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 27,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 101,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 163,
  [SMALL_STATE(10)] = 200,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 369,
  [SMALL_STATE(16)] = 406,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 480,
  [SMALL_STATE(19)] = 517,
  [SMALL_STATE(20)] = 551,
  [SMALL_STATE(21)] = 573,
  [SMALL_STATE(22)] = 595,
  [SMALL_STATE(23)] = 629,
  [SMALL_STATE(24)] = 663,
  [SMALL_STATE(25)] = 697,
  [SMALL_STATE(26)] = 719,
  [SMALL_STATE(27)] = 741,
  [SMALL_STATE(28)] = 772,
  [SMALL_STATE(29)] = 803,
  [SMALL_STATE(30)] = 834,
  [SMALL_STATE(31)] = 865,
  [SMALL_STATE(32)] = 885,
  [SMALL_STATE(33)] = 904,
  [SMALL_STATE(34)] = 923,
  [SMALL_STATE(35)] = 942,
  [SMALL_STATE(36)] = 961,
  [SMALL_STATE(37)] = 975,
  [SMALL_STATE(38)] = 989,
  [SMALL_STATE(39)] = 1005,
  [SMALL_STATE(40)] = 1022,
  [SMALL_STATE(41)] = 1035,
  [SMALL_STATE(42)] = 1050,
  [SMALL_STATE(43)] = 1065,
  [SMALL_STATE(44)] = 1082,
  [SMALL_STATE(45)] = 1101,
  [SMALL_STATE(46)] = 1111,
  [SMALL_STATE(47)] = 1123,
  [SMALL_STATE(48)] = 1133,
  [SMALL_STATE(49)] = 1143,
  [SMALL_STATE(50)] = 1159,
  [SMALL_STATE(51)] = 1171,
  [SMALL_STATE(52)] = 1187,
  [SMALL_STATE(53)] = 1197,
  [SMALL_STATE(54)] = 1206,
  [SMALL_STATE(55)] = 1215,
  [SMALL_STATE(56)] = 1224,
  [SMALL_STATE(57)] = 1233,
  [SMALL_STATE(58)] = 1246,
  [SMALL_STATE(59)] = 1255,
  [SMALL_STATE(60)] = 1264,
  [SMALL_STATE(61)] = 1273,
  [SMALL_STATE(62)] = 1282,
  [SMALL_STATE(63)] = 1286,
  [SMALL_STATE(64)] = 1290,
  [SMALL_STATE(65)] = 1294,
  [SMALL_STATE(66)] = 1298,
  [SMALL_STATE(67)] = 1302,
  [SMALL_STATE(68)] = 1306,
  [SMALL_STATE(69)] = 1310,
  [SMALL_STATE(70)] = 1314,
  [SMALL_STATE(71)] = 1318,
  [SMALL_STATE(72)] = 1322,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binop, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binop, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exprs, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exprs, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exprs, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exprs, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 3),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exprs_repeat1, 2), SHIFT_REPEAT(10),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exprs_repeat1, 2), SHIFT_REPEAT(38),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__exprs_repeat1, 2), SHIFT_REPEAT(57),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exprs_repeat1, 2), SHIFT_REPEAT(57),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exprs_repeat1, 2), SHIFT_REPEAT(52),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exprs_repeat1, 2), SHIFT_REPEAT(8),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__exprs_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__exprs_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prolog(void) {
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
