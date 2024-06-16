#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_negation = 1,
  aux_sym_variable_token1 = 2,
  anon_sym_c = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_0 = 5,
  anon_sym_p = 6,
  anon_sym_cnf = 7,
  sym_source_file = 8,
  sym_variable = 9,
  sym_literal = 10,
  sym_comment = 11,
  sym_clause = 12,
  sym_variables = 13,
  sym_clauses = 14,
  sym_problem = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_clause_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_negation] = "negation",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_c] = "c",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_0] = "0",
  [anon_sym_p] = "p",
  [anon_sym_cnf] = "cnf",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_literal] = "literal",
  [sym_comment] = "comment",
  [sym_clause] = "clause",
  [sym_variables] = "variables",
  [sym_clauses] = "clauses",
  [sym_problem] = "problem",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_clause_repeat1] = "clause_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_negation] = sym_negation,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_c] = anon_sym_c,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_cnf] = anon_sym_cnf,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_literal] = sym_literal,
  [sym_comment] = sym_comment,
  [sym_clause] = sym_clause,
  [sym_variables] = sym_variables,
  [sym_clauses] = sym_clauses,
  [sym_problem] = sym_problem,
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
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
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
  [sym_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_clauses] = {
    .visible = true,
    .named = true,
  },
  [sym_problem] = {
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(11);
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
      if (lookahead == 'f') ADVANCE(12);
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
      ACCEPT_TOKEN(aux_sym_variable_token1);
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
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_cnf);
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_negation] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym_variable] = STATE(11),
    [sym_literal] = STATE(4),
    [sym_comment] = STATE(2),
    [sym_clause] = STATE(2),
    [sym_problem] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_clause_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_negation] = ACTIONS(5),
    [aux_sym_variable_token1] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [anon_sym_p] = ACTIONS(13),
  },
  [2] = {
    [sym_variable] = STATE(11),
    [sym_literal] = STATE(4),
    [sym_comment] = STATE(3),
    [sym_clause] = STATE(3),
    [sym_problem] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_clause_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_negation] = ACTIONS(5),
    [aux_sym_variable_token1] = ACTIONS(7),
    [anon_sym_c] = ACTIONS(9),
    [anon_sym_0] = ACTIONS(11),
    [anon_sym_p] = ACTIONS(13),
  },
  [3] = {
    [sym_variable] = STATE(11),
    [sym_literal] = STATE(4),
    [sym_comment] = STATE(3),
    [sym_clause] = STATE(3),
    [sym_problem] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_clause_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_negation] = ACTIONS(19),
    [aux_sym_variable_token1] = ACTIONS(22),
    [anon_sym_c] = ACTIONS(25),
    [anon_sym_0] = ACTIONS(28),
    [anon_sym_p] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_negation,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    ACTIONS(34), 1,
      anon_sym_0,
    STATE(11), 1,
      sym_variable,
    STATE(8), 2,
      sym_literal,
      aux_sym_clause_repeat1,
  [17] = 1,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      sym_negation,
      aux_sym_variable_token1,
      anon_sym_c,
      anon_sym_0,
      anon_sym_p,
  [26] = 1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      sym_negation,
      aux_sym_variable_token1,
      anon_sym_c,
      anon_sym_0,
      anon_sym_p,
  [35] = 1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      sym_negation,
      aux_sym_variable_token1,
      anon_sym_c,
      anon_sym_0,
      anon_sym_p,
  [44] = 5,
    ACTIONS(42), 1,
      sym_negation,
    ACTIONS(45), 1,
      aux_sym_variable_token1,
    ACTIONS(48), 1,
      anon_sym_0,
    STATE(11), 1,
      sym_variable,
    STATE(8), 2,
      sym_literal,
      aux_sym_clause_repeat1,
  [61] = 1,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      sym_negation,
      aux_sym_variable_token1,
      anon_sym_c,
      anon_sym_0,
      anon_sym_p,
  [70] = 1,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      sym_negation,
      aux_sym_variable_token1,
      anon_sym_c,
      anon_sym_0,
      anon_sym_p,
  [79] = 1,
    ACTIONS(54), 3,
      sym_negation,
      aux_sym_variable_token1,
      anon_sym_0,
  [85] = 1,
    ACTIONS(56), 3,
      sym_negation,
      aux_sym_variable_token1,
      anon_sym_0,
  [91] = 1,
    ACTIONS(58), 3,
      sym_negation,
      aux_sym_variable_token1,
      anon_sym_0,
  [97] = 2,
    ACTIONS(7), 1,
      aux_sym_variable_token1,
    STATE(12), 1,
      sym_variable,
  [104] = 2,
    ACTIONS(60), 1,
      aux_sym_variable_token1,
    STATE(16), 1,
      sym_variables,
  [111] = 2,
    ACTIONS(62), 1,
      aux_sym_variable_token1,
    STATE(10), 1,
      sym_clauses,
  [118] = 1,
    ACTIONS(64), 1,
      anon_sym_cnf,
  [122] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [126] = 1,
    ACTIONS(68), 1,
      aux_sym_comment_token1,
  [130] = 1,
    ACTIONS(70), 1,
      aux_sym_variable_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 61,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 79,
  [SMALL_STATE(12)] = 85,
  [SMALL_STATE(13)] = 91,
  [SMALL_STATE(14)] = 97,
  [SMALL_STATE(15)] = 104,
  [SMALL_STATE(16)] = 111,
  [SMALL_STATE(17)] = 118,
  [SMALL_STATE(18)] = 122,
  [SMALL_STATE(19)] = 126,
  [SMALL_STATE(20)] = 130,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clause_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clauses, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_problem, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 1, 0, 0),
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
