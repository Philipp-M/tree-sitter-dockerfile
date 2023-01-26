#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  aux_sym_run_instruction_token1 = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_DOLLAR2 = 4,
  anon_sym_LBRACE = 5,
  aux_sym__expansion_body_token1 = 6,
  anon_sym_RBRACE = 7,
  sym_variable = 8,
  anon_sym_DASH_DASH = 9,
  aux_sym_param_token1 = 10,
  anon_sym_EQ = 11,
  aux_sym_param_token2 = 12,
  anon_sym_mount = 13,
  anon_sym_COMMA = 14,
  aux_sym_mount_param_param_token1 = 15,
  anon_sym_LBRACK = 16,
  anon_sym_COMMA2 = 17,
  anon_sym_RBRACK = 18,
  sym_shell_command = 19,
  anon_sym_BSLASH_LF = 20,
  anon_sym_POUND = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_double_quoted_string_token1 = 23,
  anon_sym_BSLASH = 24,
  sym_escape_sequence = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym__instruction = 28,
  sym_run_instruction = 29,
  sym__immediate_expansion = 30,
  sym__imm_expansion = 31,
  sym__expansion_body = 32,
  sym_param = 33,
  sym_mount_param = 34,
  sym_mount_param_param = 35,
  sym_string_array = 36,
  sym_line_continuation = 37,
  sym_double_quoted_string = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_run_instruction_repeat1 = 40,
  aux_sym_mount_param_repeat1 = 41,
  aux_sym_string_array_repeat1 = 42,
  aux_sym_double_quoted_string_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_run_instruction_token1] = "RUN",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym__expansion_body_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_param_token2] = "param_token2",
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_shell_command] = "shell_command",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [sym_param] = "param",
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
  [sym_string_array] = "string_array",
  [sym_line_continuation] = "line_continuation",
  [sym_double_quoted_string] = "double_quoted_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__expansion_body_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_shell_command] = sym_shell_command,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym__imm_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [sym_param] = sym_param,
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
  [sym_string_array] = sym_string_array,
  [sym_line_continuation] = sym_line_continuation,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expansion_body_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mount_param_param_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym__imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__expansion_body] = {
    .visible = false,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param_param] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mount_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 3},
  [2] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == 'U') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == 'U') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_mount);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(36);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 7},
  [50] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_run_instruction_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_mount] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__instruction] = STATE(49),
    [sym_run_instruction] = STATE(47),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_run_instruction_token1] = ACTIONS(7),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_shell_command,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    STATE(2), 1,
      sym_line_continuation,
    STATE(4), 1,
      aux_sym_run_instruction_repeat1,
    STATE(39), 1,
      sym_string_array,
    STATE(20), 2,
      sym_param,
      sym_mount_param,
  [26] = 8,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(19), 1,
      anon_sym_DOLLAR2,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(24), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(27), 1,
      sym_escape_sequence,
    STATE(18), 1,
      sym__imm_expansion,
    STATE(19), 1,
      sym__immediate_expansion,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [52] = 8,
    ACTIONS(11), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(30), 1,
      sym_shell_command,
    STATE(4), 1,
      sym_line_continuation,
    STATE(7), 1,
      aux_sym_run_instruction_repeat1,
    STATE(45), 1,
      sym_string_array,
    STATE(20), 2,
      sym_param,
      sym_mount_param,
  [78] = 9,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(32), 1,
      anon_sym_DOLLAR2,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(38), 1,
      sym_escape_sequence,
    STATE(3), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(5), 1,
      sym_line_continuation,
    STATE(18), 1,
      sym__imm_expansion,
    STATE(19), 1,
      sym__immediate_expansion,
  [106] = 9,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(32), 1,
      anon_sym_DOLLAR2,
    ACTIONS(36), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(38), 1,
      sym_escape_sequence,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(6), 1,
      sym_line_continuation,
    STATE(18), 1,
      sym__imm_expansion,
    STATE(19), 1,
      sym__immediate_expansion,
  [134] = 5,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(42), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 2,
      anon_sym_LBRACK,
      sym_shell_command,
    STATE(7), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(20), 2,
      sym_param,
      sym_mount_param,
  [153] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_line_continuation,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_run_instruction,
    STATE(49), 1,
      sym__instruction,
  [178] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(54), 1,
      sym_comment,
    STATE(47), 1,
      sym_run_instruction,
    STATE(49), 1,
      sym__instruction,
    STATE(9), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
  [201] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(10), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(57), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [217] = 5,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_mount_param_repeat1,
    STATE(11), 1,
      sym_line_continuation,
    ACTIONS(62), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [235] = 5,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_mount_param_repeat1,
    STATE(12), 1,
      sym_line_continuation,
    ACTIONS(66), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [253] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    STATE(13), 1,
      sym_line_continuation,
    ACTIONS(68), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(70), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [268] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      sym_line_continuation,
    ACTIONS(57), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [283] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      sym_line_continuation,
    ACTIONS(74), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [298] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    STATE(16), 1,
      sym_line_continuation,
    ACTIONS(78), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(80), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [313] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    STATE(17), 1,
      sym_line_continuation,
    ACTIONS(82), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(84), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [328] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    STATE(18), 1,
      sym_line_continuation,
    ACTIONS(86), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(88), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [343] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    STATE(19), 1,
      sym_line_continuation,
    ACTIONS(90), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(92), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [358] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    STATE(20), 1,
      sym_line_continuation,
    ACTIONS(94), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [370] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(21), 1,
      sym_line_continuation,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_run_instruction_token1,
      sym_comment,
  [382] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      sym_variable,
    STATE(16), 1,
      sym__expansion_body,
    STATE(22), 1,
      sym_line_continuation,
  [398] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_line_continuation,
    STATE(24), 1,
      sym_double_quoted_string,
  [414] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_COMMA2,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym_line_continuation,
    STATE(26), 1,
      aux_sym_string_array_repeat1,
  [430] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_COMMA2,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(25), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [444] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_COMMA2,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_string_array_repeat1,
    STATE(26), 1,
      sym_line_continuation,
  [460] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    STATE(27), 1,
      sym_line_continuation,
    ACTIONS(115), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [472] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      aux_sym_param_token1,
    ACTIONS(119), 1,
      anon_sym_mount,
    STATE(28), 1,
      sym_line_continuation,
  [485] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      aux_sym_mount_param_param_token1,
    STATE(12), 1,
      sym_mount_param_param,
    STATE(29), 1,
      sym_line_continuation,
  [498] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(30), 1,
      sym_line_continuation,
    ACTIONS(123), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [509] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      aux_sym_mount_param_param_token1,
    STATE(14), 1,
      sym_mount_param_param,
    STATE(31), 1,
      sym_line_continuation,
  [522] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_line_continuation,
    STATE(33), 1,
      sym_double_quoted_string,
  [535] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(33), 1,
      sym_line_continuation,
    ACTIONS(111), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [546] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(34), 1,
      sym_line_continuation,
    ACTIONS(125), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [557] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_line_continuation,
  [567] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_line_continuation,
  [577] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(131), 1,
      aux_sym__expansion_body_token1,
    STATE(37), 1,
      sym_line_continuation,
  [587] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      aux_sym_param_token2,
    STATE(38), 1,
      sym_line_continuation,
  [597] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(135), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_line_continuation,
  [607] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_line_continuation,
  [617] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(139), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym_line_continuation,
  [627] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(141), 1,
      anon_sym_EQ,
    STATE(42), 1,
      sym_line_continuation,
  [637] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(143), 1,
      aux_sym_mount_param_param_token1,
    STATE(43), 1,
      sym_line_continuation,
  [647] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym_line_continuation,
  [657] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym_line_continuation,
  [667] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_line_continuation,
  [677] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym_line_continuation,
  [687] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_line_continuation,
  [697] = 3,
    ACTIONS(17), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym_line_continuation,
  [707] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 235,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 268,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 328,
  [SMALL_STATE(19)] = 343,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 370,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 430,
  [SMALL_STATE(26)] = 444,
  [SMALL_STATE(27)] = 460,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 485,
  [SMALL_STATE(30)] = 498,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 535,
  [SMALL_STATE(34)] = 546,
  [SMALL_STATE(35)] = 557,
  [SMALL_STATE(36)] = 567,
  [SMALL_STATE(37)] = 577,
  [SMALL_STATE(38)] = 587,
  [SMALL_STATE(39)] = 597,
  [SMALL_STATE(40)] = 607,
  [SMALL_STATE(41)] = 617,
  [SMALL_STATE(42)] = 627,
  [SMALL_STATE(43)] = 637,
  [SMALL_STATE(44)] = 647,
  [SMALL_STATE(45)] = 657,
  [SMALL_STATE(46)] = 667,
  [SMALL_STATE(47)] = 677,
  [SMALL_STATE(48)] = 687,
  [SMALL_STATE(49)] = 697,
  [SMALL_STATE(50)] = 707,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(22),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(28),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(31),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
