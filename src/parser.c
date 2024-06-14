#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_negation = 1,
  sym_variable = 2,
  anon_sym_c = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_p = 5,
  anon_sym_cnf = 6,
  anon_sym_0 = 7,
  sym_source_file = 8,
  sym_literal = 9,
  sym_comment = 10,
  sym_problem = 11,
  sym_clause = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym_clause_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_negation] = "negation",
  [sym_variable] = "variable",
  [anon_sym_c] = "c",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_p] = "p",
  [anon_sym_cnf] = "cnf",
  [anon_sym_0] = "0",
  [sym_source_file] = "source_file",
  [sym_literal] = "literal",
  [sym_comment] = "comment",
  [sym_problem] = "problem",
  [sym_clause] = "clause",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_clause_repeat1] = "clause_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_negation] = sym_negation,
  [sym_variable] = sym_variable,
  [anon_sym_c] = anon_sym_c,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_cnf] = anon_sym_cnf,
  [anon_sym_0] = anon_sym_0,
  [sym_source_file] = sym_source_file,
  [sym_literal] = sym_literal,
  [sym_comment] = sym_comment,
  [sym_problem] = sym_problem,
  [sym_clause] = sym_clause,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_clause_repeat1] = aux_sym_clause_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cnf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_problem] = {
    .visible = true,
    .named = true,
  },
  [sym_clause] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_clause_repeat1] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_negation);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_cnf);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_negation] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_literal] = STATE(8),
    [sym_comment] = STATE(2),
    [sym_problem] = STATE(2),
    [sym_clause] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_clause_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_negation] = ACTIONS(5),
    [sym_variable] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_p] = ACTIONS(11),
    [anon_sym_0] = ACTIONS(13),
  },
  [2] = {
    [sym_literal] = STATE(8),
    [sym_comment] = STATE(3),
    [sym_problem] = STATE(3),
    [sym_clause] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_clause_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_negation] = ACTIONS(5),
    [sym_variable] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_p] = ACTIONS(11),
    [anon_sym_0] = ACTIONS(13),
  },
  [3] = {
    [sym_literal] = STATE(8),
    [sym_comment] = STATE(3),
    [sym_problem] = STATE(3),
    [sym_clause] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_clause_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_negation] = ACTIONS(19),
    [sym_variable] = ACTIONS(22),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_p] = ACTIONS(28),
    [anon_sym_0] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(34), 6,
      ts_builtin_sym_end,
      sym_negation,
      sym_variable,
      anon_sym_c,
      anon_sym_p,
      anon_sym_0,
  [9] = 1,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      sym_negation,
      sym_variable,
      anon_sym_c,
      anon_sym_p,
      anon_sym_0,
  [18] = 1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      sym_negation,
      sym_variable,
      anon_sym_c,
      anon_sym_p,
      anon_sym_0,
  [27] = 1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      sym_negation,
      sym_variable,
      anon_sym_c,
      anon_sym_p,
      anon_sym_0,
  [36] = 4,
    ACTIONS(5), 1,
      sym_negation,
    ACTIONS(7), 1,
      sym_variable,
    ACTIONS(42), 1,
      anon_sym_0,
    STATE(9), 2,
      sym_literal,
      aux_sym_clause_repeat1,
  [50] = 4,
    ACTIONS(44), 1,
      sym_negation,
    ACTIONS(47), 1,
      sym_variable,
    ACTIONS(50), 1,
      anon_sym_0,
    STATE(9), 2,
      sym_literal,
      aux_sym_clause_repeat1,
  [64] = 1,
    ACTIONS(52), 3,
      sym_negation,
      sym_variable,
      anon_sym_0,
  [70] = 1,
    ACTIONS(54), 3,
      sym_negation,
      sym_variable,
      anon_sym_0,
  [76] = 1,
    ACTIONS(56), 1,
      sym_variable,
  [80] = 1,
    ACTIONS(58), 1,
      aux_sym_comment_token1,
  [84] = 1,
    ACTIONS(60), 1,
      anon_sym_cnf,
  [88] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [92] = 1,
    ACTIONS(64), 1,
      sym_variable,
  [96] = 1,
    ACTIONS(66), 1,
      sym_variable,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 9,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 76,
  [SMALL_STATE(13)] = 80,
  [SMALL_STATE(14)] = 84,
  [SMALL_STATE(15)] = 88,
  [SMALL_STATE(16)] = 92,
  [SMALL_STATE(17)] = 96,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_problem, 4, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_DIMACS(void) {
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
