#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 303
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_add_instruction_token1 = 9,
  aux_sym_copy_instruction_token1 = 10,
  aux_sym_entrypoint_instruction_token1 = 11,
  aux_sym_volume_instruction_token1 = 12,
  aux_sym_user_instruction_token1 = 13,
  anon_sym_COLON = 14,
  aux_sym__user_name_or_group_token1 = 15,
  aux_sym__immediate_user_name_or_group_fragment_token1 = 16,
  aux_sym_workdir_instruction_token1 = 17,
  aux_sym_arg_instruction_token1 = 18,
  aux_sym_arg_instruction_token2 = 19,
  anon_sym_EQ = 20,
  aux_sym_onbuild_instruction_token1 = 21,
  aux_sym_stopsignal_instruction_token1 = 22,
  aux_sym__stopsignal_value_token1 = 23,
  aux_sym__stopsignal_value_token2 = 24,
  aux_sym_healthcheck_instruction_token1 = 25,
  anon_sym_NONE = 26,
  aux_sym_shell_instruction_token1 = 27,
  aux_sym_maintainer_instruction_token1 = 28,
  aux_sym_maintainer_instruction_token2 = 29,
  aux_sym_cross_build_instruction_token1 = 30,
  aux_sym_path_token1 = 31,
  aux_sym_path_token2 = 32,
  anon_sym_DOLLAR = 33,
  anon_sym_DOLLAR2 = 34,
  anon_sym_LBRACE = 35,
  aux_sym__expansion_body_token1 = 36,
  anon_sym_RBRACE = 37,
  sym_variable = 38,
  aux_sym__spaced_env_pair_token1 = 39,
  aux_sym__env_key_token1 = 40,
  aux_sym_expose_port_token1 = 41,
  anon_sym_SLASHtcp = 42,
  anon_sym_SLASHudp = 43,
  aux_sym_label_pair_token1 = 44,
  aux_sym_image_name_token1 = 45,
  aux_sym_image_name_token2 = 46,
  aux_sym_image_tag_token1 = 47,
  anon_sym_AT = 48,
  aux_sym_image_digest_token1 = 49,
  anon_sym_DASH_DASH = 50,
  aux_sym_param_token1 = 51,
  aux_sym_param_token2 = 52,
  anon_sym_mount = 53,
  anon_sym_COMMA = 54,
  aux_sym_mount_param_param_token1 = 55,
  aux_sym_image_alias_token1 = 56,
  aux_sym_image_alias_token2 = 57,
  anon_sym_LBRACK = 58,
  anon_sym_COMMA2 = 59,
  anon_sym_RBRACK = 60,
  sym_shell_command = 61,
  anon_sym_BSLASH_LF = 62,
  anon_sym_POUND = 63,
  anon_sym_DQUOTE = 64,
  aux_sym_double_quoted_string_token1 = 65,
  aux_sym_unquoted_string_token1 = 66,
  anon_sym_BSLASH = 67,
  sym_escape_sequence = 68,
  sym__non_newline_whitespace = 69,
  sym_comment = 70,
  sym_source_file = 71,
  sym__instruction = 72,
  sym_from_instruction = 73,
  sym_run_instruction = 74,
  sym_cmd_instruction = 75,
  sym_label_instruction = 76,
  sym_expose_instruction = 77,
  sym_env_instruction = 78,
  sym_add_instruction = 79,
  sym_copy_instruction = 80,
  sym_entrypoint_instruction = 81,
  sym_volume_instruction = 82,
  sym_user_instruction = 83,
  sym__user_name_or_group = 84,
  aux_sym__immediate_user_name_or_group = 85,
  sym__immediate_user_name_or_group_fragment = 86,
  sym_workdir_instruction = 87,
  sym_arg_instruction = 88,
  sym_onbuild_instruction = 89,
  sym_stopsignal_instruction = 90,
  sym__stopsignal_value = 91,
  sym_healthcheck_instruction = 92,
  sym_shell_instruction = 93,
  sym_maintainer_instruction = 94,
  sym_cross_build_instruction = 95,
  sym_path = 96,
  sym_expansion = 97,
  sym__immediate_expansion = 98,
  sym__imm_expansion = 99,
  sym__expansion_body = 100,
  sym_env_pair = 101,
  sym__spaced_env_pair = 102,
  sym__env_key = 103,
  sym_expose_port = 104,
  sym_label_pair = 105,
  sym_image_spec = 106,
  sym_image_name = 107,
  sym_image_tag = 108,
  sym_image_digest = 109,
  sym_param = 110,
  sym_mount_param = 111,
  sym_mount_param_param = 112,
  sym_image_alias = 113,
  sym_string_array = 114,
  sym_line_continuation = 115,
  sym_double_quoted_string = 116,
  sym_unquoted_string = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_run_instruction_repeat1 = 119,
  aux_sym_label_instruction_repeat1 = 120,
  aux_sym_expose_instruction_repeat1 = 121,
  aux_sym_env_instruction_repeat1 = 122,
  aux_sym_add_instruction_repeat1 = 123,
  aux_sym_volume_instruction_repeat1 = 124,
  aux_sym__user_name_or_group_repeat1 = 125,
  aux_sym__stopsignal_value_repeat1 = 126,
  aux_sym_healthcheck_instruction_repeat1 = 127,
  aux_sym_path_repeat1 = 128,
  aux_sym_image_name_repeat1 = 129,
  aux_sym_image_tag_repeat1 = 130,
  aux_sym_image_digest_repeat1 = 131,
  aux_sym_mount_param_repeat1 = 132,
  aux_sym_image_alias_repeat1 = 133,
  aux_sym_string_array_repeat1 = 134,
  aux_sym_double_quoted_string_repeat1 = 135,
  aux_sym_unquoted_string_repeat1 = 136,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "FROM",
  [aux_sym_from_instruction_token2] = "AS",
  [aux_sym_run_instruction_token1] = "RUN",
  [aux_sym_cmd_instruction_token1] = "CMD",
  [aux_sym_label_instruction_token1] = "LABEL",
  [aux_sym_expose_instruction_token1] = "EXPOSE",
  [aux_sym_env_instruction_token1] = "ENV",
  [aux_sym_add_instruction_token1] = "ADD",
  [aux_sym_copy_instruction_token1] = "COPY",
  [aux_sym_entrypoint_instruction_token1] = "ENTRYPOINT",
  [aux_sym_volume_instruction_token1] = "VOLUME",
  [aux_sym_user_instruction_token1] = "USER",
  [anon_sym_COLON] = ":",
  [aux_sym__user_name_or_group_token1] = "_user_name_or_group_token1",
  [aux_sym__immediate_user_name_or_group_fragment_token1] = "_immediate_user_name_or_group_fragment_token1",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_arg_instruction_token2] = "unquoted_string",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "ONBUILD",
  [aux_sym_stopsignal_instruction_token1] = "STOPSIGNAL",
  [aux_sym__stopsignal_value_token1] = "_stopsignal_value_token1",
  [aux_sym__stopsignal_value_token2] = "_stopsignal_value_token2",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "SHELL",
  [aux_sym_maintainer_instruction_token1] = "MAINTAINER",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "CROSS_BUILD",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym__expansion_body_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym__spaced_env_pair_token1] = "_spaced_env_pair_token1",
  [aux_sym__env_key_token1] = "unquoted_string",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "unquoted_string",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_shell_command] = "shell_command",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym__user_name_or_group] = "unquoted_string",
  [aux_sym__immediate_user_name_or_group] = "_immediate_user_name_or_group",
  [sym__immediate_user_name_or_group_fragment] = "_immediate_user_name_or_group_fragment",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym__stopsignal_value] = "_stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [sym_env_pair] = "env_pair",
  [sym__spaced_env_pair] = "env_pair",
  [sym__env_key] = "_env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
  [sym_image_alias] = "image_alias",
  [sym_string_array] = "string_array",
  [sym_line_continuation] = "line_continuation",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym__user_name_or_group_repeat1] = "_user_name_or_group_repeat1",
  [aux_sym__stopsignal_value_repeat1] = "_stopsignal_value_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__user_name_or_group_token1] = aux_sym__user_name_or_group_token1,
  [aux_sym__immediate_user_name_or_group_fragment_token1] = aux_sym__immediate_user_name_or_group_fragment_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = sym_unquoted_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym__stopsignal_value_token1] = aux_sym__stopsignal_value_token1,
  [aux_sym__stopsignal_value_token2] = aux_sym__stopsignal_value_token2,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__expansion_body_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym__spaced_env_pair_token1] = aux_sym__spaced_env_pair_token1,
  [aux_sym__env_key_token1] = sym_unquoted_string,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = sym_unquoted_string,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_shell_command] = sym_shell_command,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym__user_name_or_group] = sym_unquoted_string,
  [aux_sym__immediate_user_name_or_group] = aux_sym__immediate_user_name_or_group,
  [sym__immediate_user_name_or_group_fragment] = sym__immediate_user_name_or_group_fragment,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym__stopsignal_value] = sym__stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [sym_env_pair] = sym_env_pair,
  [sym__spaced_env_pair] = sym_env_pair,
  [sym__env_key] = sym__env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
  [sym_image_alias] = sym_image_alias,
  [sym_string_array] = sym_string_array,
  [sym_line_continuation] = sym_line_continuation,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym__user_name_or_group_repeat1] = aux_sym__user_name_or_group_repeat1,
  [aux_sym__stopsignal_value_repeat1] = aux_sym__stopsignal_value_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
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
  [aux_sym_from_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__immediate_user_name_or_group_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__stopsignal_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stopsignal_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
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
  [aux_sym__spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__env_key_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
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
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token2] = {
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
  [aux_sym_unquoted_string_token1] = {
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
  [sym__non_newline_whitespace] = {
    .visible = false,
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
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__immediate_user_name_or_group] = {
    .visible = false,
    .named = false,
  },
  [sym__immediate_user_name_or_group_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__stopsignal_value] = {
    .visible = false,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
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
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__env_key] = {
    .visible = false,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
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
  [sym_image_alias] = {
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
  [sym_unquoted_string] = {
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
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__user_name_or_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stopsignal_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mount_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
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
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [3] =
    {field_user, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_name, 0},
    {field_tag, 1},
  [7] =
    {field_digest, 1},
    {field_name, 0},
  [9] =
    {field_as, 3},
  [10] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [13] =
    {field_key, 0},
    {field_value, 2},
  [15] =
    {field_name, 0},
    {field_value, 2},
  [17] =
    {field_group, 3},
    {field_user, 1},
  [19] =
    {field_default, 3},
    {field_name, 1},
  [21] =
    {field_name, 1},
    {field_value, 3},
  [23] =
    {field_as, 4},
  [24] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [3] = sym_unquoted_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__immediate_user_name_or_group, 2,
    aux_sym__immediate_user_name_or_group,
    sym_unquoted_string,
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
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 24,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 32,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 27,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 29,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 26,
  [60] = 29,
  [61] = 27,
  [62] = 62,
  [63] = 26,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 46,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 65,
  [75] = 46,
  [76] = 76,
  [77] = 49,
  [78] = 62,
  [79] = 65,
  [80] = 46,
  [81] = 81,
  [82] = 82,
  [83] = 65,
  [84] = 49,
  [85] = 62,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 62,
  [98] = 49,
  [99] = 68,
  [100] = 46,
  [101] = 101,
  [102] = 102,
  [103] = 65,
  [104] = 104,
  [105] = 49,
  [106] = 106,
  [107] = 62,
  [108] = 65,
  [109] = 49,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 65,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 41,
  [120] = 62,
  [121] = 121,
  [122] = 122,
  [123] = 46,
  [124] = 49,
  [125] = 46,
  [126] = 65,
  [127] = 41,
  [128] = 46,
  [129] = 129,
  [130] = 62,
  [131] = 131,
  [132] = 49,
  [133] = 62,
  [134] = 134,
  [135] = 106,
  [136] = 62,
  [137] = 137,
  [138] = 138,
  [139] = 137,
  [140] = 140,
  [141] = 46,
  [142] = 137,
  [143] = 41,
  [144] = 137,
  [145] = 65,
  [146] = 46,
  [147] = 41,
  [148] = 148,
  [149] = 149,
  [150] = 137,
  [151] = 151,
  [152] = 149,
  [153] = 137,
  [154] = 65,
  [155] = 46,
  [156] = 156,
  [157] = 49,
  [158] = 149,
  [159] = 137,
  [160] = 149,
  [161] = 137,
  [162] = 149,
  [163] = 62,
  [164] = 41,
  [165] = 65,
  [166] = 137,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 149,
  [171] = 137,
  [172] = 49,
  [173] = 173,
  [174] = 174,
  [175] = 62,
  [176] = 62,
  [177] = 137,
  [178] = 49,
  [179] = 65,
  [180] = 41,
  [181] = 137,
  [182] = 182,
  [183] = 46,
  [184] = 149,
  [185] = 49,
  [186] = 186,
  [187] = 106,
  [188] = 188,
  [189] = 149,
  [190] = 46,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 65,
  [196] = 41,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 199,
  [202] = 202,
  [203] = 203,
  [204] = 198,
  [205] = 198,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 191,
  [211] = 211,
  [212] = 212,
  [213] = 191,
  [214] = 214,
  [215] = 199,
  [216] = 216,
  [217] = 217,
  [218] = 191,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 251,
  [258] = 252,
  [259] = 251,
  [260] = 252,
  [261] = 261,
  [262] = 251,
  [263] = 252,
  [264] = 264,
  [265] = 265,
  [266] = 251,
  [267] = 267,
  [268] = 268,
  [269] = 251,
  [270] = 270,
  [271] = 271,
  [272] = 251,
  [273] = 273,
  [274] = 274,
  [275] = 251,
  [276] = 276,
  [277] = 251,
  [278] = 278,
  [279] = 251,
  [280] = 280,
  [281] = 251,
  [282] = 282,
  [283] = 251,
  [284] = 251,
  [285] = 245,
  [286] = 246,
  [287] = 245,
  [288] = 246,
  [289] = 245,
  [290] = 246,
  [291] = 245,
  [292] = 245,
  [293] = 245,
  [294] = 245,
  [295] = 245,
  [296] = 245,
  [297] = 245,
  [298] = 245,
  [299] = 245,
  [300] = 271,
  [301] = 271,
  [302] = 302,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(249);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(256);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(219);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(201);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(243);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(249);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(249);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(249);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(256);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(256);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '[') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 160},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 32},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 50},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 160},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 160},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 32},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 23},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 38},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 21},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 160},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 20},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 46},
  [138] = {.lex_state = 21},
  [139] = {.lex_state = 46},
  [140] = {.lex_state = 160},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 46},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 46},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 46},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 46},
  [153] = {.lex_state = 46},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 46},
  [159] = {.lex_state = 46},
  [160] = {.lex_state = 46},
  [161] = {.lex_state = 46},
  [162] = {.lex_state = 46},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 160},
  [168] = {.lex_state = 25},
  [169] = {.lex_state = 51},
  [170] = {.lex_state = 46},
  [171] = {.lex_state = 46},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 21},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 46},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 46},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 31},
  [184] = {.lex_state = 46},
  [185] = {.lex_state = 31},
  [186] = {.lex_state = 24},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 46},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 24},
  [192] = {.lex_state = 160},
  [193] = {.lex_state = 25},
  [194] = {.lex_state = 160},
  [195] = {.lex_state = 31},
  [196] = {.lex_state = 31},
  [197] = {.lex_state = 53},
  [198] = {.lex_state = 160},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 32},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 160},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 160},
  [211] = {.lex_state = 160},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 32},
  [214] = {.lex_state = 35},
  [215] = {.lex_state = 160},
  [216] = {.lex_state = 160},
  [217] = {.lex_state = 14},
  [218] = {.lex_state = 33},
  [219] = {.lex_state = 53},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 19},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 160},
  [228] = {.lex_state = 41},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 41},
  [231] = {.lex_state = 160},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 31},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 160},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 54},
  [246] = {.lex_state = 160},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 160},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 160},
  [252] = {.lex_state = 55},
  [253] = {.lex_state = 160},
  [254] = {.lex_state = 52},
  [255] = {.lex_state = 53},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 160},
  [258] = {.lex_state = 55},
  [259] = {.lex_state = 160},
  [260] = {.lex_state = 55},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 160},
  [263] = {.lex_state = 55},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 160},
  [266] = {.lex_state = 160},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 198},
  [269] = {.lex_state = 160},
  [270] = {.lex_state = 198},
  [271] = {.lex_state = 49},
  [272] = {.lex_state = 160},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 160},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 160},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 160},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 160},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 160},
  [284] = {.lex_state = 160},
  [285] = {.lex_state = 54},
  [286] = {.lex_state = 160},
  [287] = {.lex_state = 54},
  [288] = {.lex_state = 160},
  [289] = {.lex_state = 54},
  [290] = {.lex_state = 160},
  [291] = {.lex_state = 54},
  [292] = {.lex_state = 54},
  [293] = {.lex_state = 54},
  [294] = {.lex_state = 54},
  [295] = {.lex_state = 54},
  [296] = {.lex_state = 54},
  [297] = {.lex_state = 54},
  [298] = {.lex_state = 54},
  [299] = {.lex_state = 54},
  [300] = {.lex_state = 49},
  [301] = {.lex_state = 49},
  [302] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__stopsignal_value_token2] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(276),
    [sym__instruction] = STATE(274),
    [sym_from_instruction] = STATE(280),
    [sym_run_instruction] = STATE(280),
    [sym_cmd_instruction] = STATE(280),
    [sym_label_instruction] = STATE(280),
    [sym_expose_instruction] = STATE(280),
    [sym_env_instruction] = STATE(280),
    [sym_add_instruction] = STATE(280),
    [sym_copy_instruction] = STATE(280),
    [sym_entrypoint_instruction] = STATE(280),
    [sym_volume_instruction] = STATE(280),
    [sym_user_instruction] = STATE(280),
    [sym_workdir_instruction] = STATE(280),
    [sym_arg_instruction] = STATE(280),
    [sym_onbuild_instruction] = STATE(280),
    [sym_stopsignal_instruction] = STATE(280),
    [sym_healthcheck_instruction] = STATE(280),
    [sym_shell_instruction] = STATE(280),
    [sym_maintainer_instruction] = STATE(280),
    [sym_cross_build_instruction] = STATE(280),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_from_instruction_token1] = ACTIONS(7),
    [aux_sym_run_instruction_token1] = ACTIONS(9),
    [aux_sym_cmd_instruction_token1] = ACTIONS(11),
    [aux_sym_label_instruction_token1] = ACTIONS(13),
    [aux_sym_expose_instruction_token1] = ACTIONS(15),
    [aux_sym_env_instruction_token1] = ACTIONS(17),
    [aux_sym_add_instruction_token1] = ACTIONS(19),
    [aux_sym_copy_instruction_token1] = ACTIONS(21),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(23),
    [aux_sym_volume_instruction_token1] = ACTIONS(25),
    [aux_sym_user_instruction_token1] = ACTIONS(27),
    [aux_sym_workdir_instruction_token1] = ACTIONS(29),
    [aux_sym_arg_instruction_token1] = ACTIONS(31),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(33),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(35),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(37),
    [aux_sym_shell_instruction_token1] = ACTIONS(39),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(41),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(43),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(52), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(55), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(58), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(61), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(64), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(67), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(70), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(73), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(76), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(79), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(82), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(85), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(88), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(91), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(94), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(97), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(100), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(103), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(106), 1,
      sym_comment,
    STATE(274), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(280), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [95] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_line_continuation,
    STATE(274), 1,
      sym__instruction,
    STATE(280), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [192] = 23,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(4), 1,
      sym_line_continuation,
    STATE(241), 1,
      sym__instruction,
    STATE(280), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [280] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(5), 1,
      sym_line_continuation,
    ACTIONS(47), 21,
      ts_builtin_sym_end,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
      sym_comment,
  [310] = 11,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 1,
      anon_sym_DOLLAR2,
    ACTIONS(115), 1,
      aux_sym__env_key_token1,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(85), 1,
      sym__imm_expansion,
    STATE(99), 1,
      sym__immediate_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(223), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [346] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(68), 1,
      sym__immediate_expansion,
    STATE(97), 1,
      sym__imm_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(278), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [376] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(131), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(133), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      aux_sym_image_name_token2,
    STATE(8), 1,
      sym_line_continuation,
    STATE(9), 1,
      aux_sym_image_name_repeat1,
    STATE(42), 1,
      sym__immediate_expansion,
    STATE(62), 1,
      sym__imm_expansion,
    ACTIONS(129), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [406] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(139), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(141), 1,
      anon_sym_DOLLAR2,
    ACTIONS(144), 1,
      aux_sym_image_name_token2,
    STATE(42), 1,
      sym__immediate_expansion,
    STATE(62), 1,
      sym__imm_expansion,
    STATE(9), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(137), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [434] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(68), 1,
      sym__immediate_expansion,
    STATE(97), 1,
      sym__imm_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(225), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [464] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      aux_sym_image_name_token2,
    ACTIONS(149), 1,
      aux_sym_from_instruction_token2,
    STATE(8), 1,
      aux_sym_image_name_repeat1,
    STATE(11), 1,
      sym_line_continuation,
    STATE(42), 1,
      sym__immediate_expansion,
    STATE(62), 1,
      sym__imm_expansion,
    ACTIONS(147), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [494] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(68), 1,
      sym__immediate_expansion,
    STATE(97), 1,
      sym__imm_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(273), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [524] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(153), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(158), 1,
      aux_sym_image_tag_token1,
    STATE(76), 1,
      sym__immediate_expansion,
    STATE(78), 1,
      sym__imm_expansion,
    ACTIONS(151), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [551] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    STATE(101), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(116), 1,
      sym__immediate_expansion,
    STATE(120), 1,
      sym__imm_expansion,
    ACTIONS(161), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(14), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [578] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(171), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(173), 1,
      anon_sym_DOLLAR2,
    STATE(14), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(15), 1,
      sym_line_continuation,
    STATE(101), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(116), 1,
      sym__immediate_expansion,
    STATE(120), 1,
      sym__imm_expansion,
    ACTIONS(169), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [607] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(177), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(179), 1,
      anon_sym_DOLLAR2,
    ACTIONS(181), 1,
      aux_sym_image_tag_token1,
    STATE(13), 1,
      aux_sym_image_tag_repeat1,
    STATE(16), 1,
      sym_line_continuation,
    STATE(76), 1,
      sym__immediate_expansion,
    STATE(78), 1,
      sym__imm_expansion,
    ACTIONS(175), 2,
      anon_sym_LF,
      anon_sym_AT,
  [636] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      anon_sym_DOLLAR2,
    ACTIONS(188), 1,
      aux_sym_label_pair_token1,
    STATE(68), 1,
      sym__immediate_expansion,
    STATE(97), 1,
      sym__imm_expansion,
    ACTIONS(190), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(17), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [663] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(188), 1,
      aux_sym__env_key_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR2,
    STATE(85), 1,
      sym__imm_expansion,
    STATE(99), 1,
      sym__immediate_expansion,
    ACTIONS(196), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [690] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(171), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(173), 1,
      anon_sym_DOLLAR2,
    STATE(15), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(19), 1,
      sym_line_continuation,
    STATE(101), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(116), 1,
      sym__immediate_expansion,
    STATE(120), 1,
      sym__imm_expansion,
    ACTIONS(199), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [719] = 9,
    ACTIONS(113), 1,
      anon_sym_DOLLAR2,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(203), 1,
      aux_sym__env_key_token1,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(20), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym__imm_expansion,
    STATE(99), 1,
      sym__immediate_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [748] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(203), 1,
      aux_sym_label_pair_token1,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(68), 1,
      sym__immediate_expansion,
    STATE(97), 1,
      sym__imm_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [777] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      anon_sym_LF,
    ACTIONS(207), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(209), 1,
      anon_sym_DOLLAR2,
    ACTIONS(211), 1,
      aux_sym_image_digest_token1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(31), 1,
      aux_sym_image_digest_repeat1,
    STATE(129), 1,
      sym__immediate_expansion,
    STATE(130), 1,
      sym__imm_expansion,
  [805] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(171), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(173), 1,
      anon_sym_DOLLAR2,
    ACTIONS(213), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(116), 1,
      sym__immediate_expansion,
    STATE(120), 1,
      sym__imm_expansion,
    STATE(151), 1,
      sym__immediate_user_name_or_group_fragment,
  [833] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    STATE(24), 1,
      sym_line_continuation,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(133), 1,
      sym__imm_expansion,
    STATE(134), 1,
      sym__immediate_expansion,
  [861] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    ACTIONS(219), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_line_continuation,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(133), 1,
      sym__imm_expansion,
    STATE(134), 1,
      sym__immediate_expansion,
  [889] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      aux_sym_path_token2,
    ACTIONS(229), 1,
      anon_sym_DOLLAR2,
    STATE(26), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(106), 1,
      sym__immediate_expansion,
    STATE(107), 1,
      sym__imm_expansion,
    ACTIONS(225), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [915] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(233), 1,
      aux_sym_path_token2,
    ACTIONS(236), 1,
      anon_sym_DOLLAR2,
    STATE(106), 1,
      sym__immediate_expansion,
    STATE(107), 1,
      sym__imm_expansion,
    ACTIONS(231), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [939] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym_path_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    STATE(28), 1,
      sym_line_continuation,
    STATE(63), 1,
      sym_expansion,
    STATE(70), 1,
      sym_param,
    STATE(71), 1,
      aux_sym_add_instruction_repeat1,
    STATE(236), 1,
      sym_path,
  [967] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      aux_sym_path_token2,
    ACTIONS(229), 1,
      anon_sym_DOLLAR2,
    STATE(27), 1,
      aux_sym_path_repeat1,
    STATE(29), 1,
      sym_line_continuation,
    STATE(106), 1,
      sym__immediate_expansion,
    STATE(107), 1,
      sym__imm_expansion,
    ACTIONS(245), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [993] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym_path_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR,
    ACTIONS(243), 1,
      anon_sym_DASH_DASH,
    STATE(30), 1,
      sym_line_continuation,
    STATE(63), 1,
      sym_expansion,
    STATE(66), 1,
      sym_param,
    STATE(69), 1,
      aux_sym_add_instruction_repeat1,
    STATE(236), 1,
      sym_path,
  [1021] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(251), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_image_digest_token1,
    STATE(129), 1,
      sym__immediate_expansion,
    STATE(130), 1,
      sym__imm_expansion,
    STATE(31), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1047] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    ACTIONS(219), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_line_continuation,
    STATE(33), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(133), 1,
      sym__imm_expansion,
    STATE(134), 1,
      sym__immediate_expansion,
  [1075] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    ACTIONS(219), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_line_continuation,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(133), 1,
      sym__imm_expansion,
    STATE(134), 1,
      sym__immediate_expansion,
  [1103] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(261), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(269), 1,
      sym_escape_sequence,
    STATE(133), 1,
      sym__imm_expansion,
    STATE(134), 1,
      sym__immediate_expansion,
    STATE(34), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1129] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(277), 1,
      anon_sym_DOLLAR2,
    STATE(116), 1,
      sym__immediate_expansion,
    STATE(120), 1,
      sym__imm_expansion,
    STATE(151), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(35), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [1155] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(280), 1,
      anon_sym_DASH_DASH,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(284), 1,
      sym_shell_command,
    STATE(36), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_run_instruction_repeat1,
    STATE(250), 1,
      sym_string_array,
    STATE(186), 2,
      sym_param,
      sym_mount_param,
  [1181] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    ACTIONS(219), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(37), 1,
      sym_line_continuation,
    STATE(133), 1,
      sym__imm_expansion,
    STATE(134), 1,
      sym__immediate_expansion,
  [1209] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(280), 1,
      anon_sym_DASH_DASH,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      sym_shell_command,
    STATE(36), 1,
      aux_sym_run_instruction_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(247), 1,
      sym_string_array,
    STATE(186), 2,
      sym_param,
      sym_mount_param,
  [1235] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    ACTIONS(219), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(39), 1,
      sym_line_continuation,
    STATE(133), 1,
      sym__imm_expansion,
    STATE(134), 1,
      sym__immediate_expansion,
  [1263] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      aux_sym_image_name_token1,
    ACTIONS(296), 1,
      anon_sym_DASH_DASH,
    STATE(11), 1,
      sym_expansion,
    STATE(40), 1,
      sym_line_continuation,
    STATE(45), 1,
      sym_image_name,
    STATE(73), 1,
      sym_param,
    STATE(206), 1,
      sym_image_spec,
  [1291] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(41), 1,
      sym_line_continuation,
    ACTIONS(300), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(298), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1308] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(42), 1,
      sym_line_continuation,
    ACTIONS(304), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(302), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1325] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(306), 1,
      aux_sym_path_token2,
    ACTIONS(309), 1,
      anon_sym_DOLLAR2,
    ACTIONS(312), 1,
      sym__non_newline_whitespace,
    STATE(135), 1,
      sym__immediate_expansion,
    STATE(136), 1,
      sym__imm_expansion,
    STATE(43), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1348] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(319), 1,
      anon_sym_DOLLAR2,
    STATE(163), 1,
      sym__imm_expansion,
    STATE(173), 1,
      sym__immediate_expansion,
    STATE(44), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [1371] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(324), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(326), 1,
      anon_sym_COLON,
    ACTIONS(328), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym_image_tag,
    STATE(202), 1,
      sym_image_digest,
  [1396] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(46), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1413] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    ACTIONS(338), 1,
      aux_sym_image_alias_token2,
    STATE(47), 1,
      sym_line_continuation,
    STATE(52), 1,
      aux_sym_image_alias_repeat1,
    STATE(156), 1,
      sym__immediate_expansion,
    STATE(176), 1,
      sym__imm_expansion,
  [1438] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    ACTIONS(338), 1,
      aux_sym_image_alias_token2,
    ACTIONS(340), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym_image_alias_repeat1,
    STATE(48), 1,
      sym_line_continuation,
    STATE(156), 1,
      sym__immediate_expansion,
    STATE(176), 1,
      sym__imm_expansion,
  [1463] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 1,
      sym_line_continuation,
    ACTIONS(344), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(342), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1480] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(346), 1,
      anon_sym_NONE,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH,
    STATE(50), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(211), 1,
      sym_param,
    STATE(234), 1,
      sym_cmd_instruction,
  [1505] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(352), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(354), 1,
      anon_sym_DOLLAR2,
    STATE(44), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(51), 1,
      sym_line_continuation,
    STATE(163), 1,
      sym__imm_expansion,
    STATE(173), 1,
      sym__immediate_expansion,
  [1530] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(358), 1,
      anon_sym_DOLLAR2,
    ACTIONS(361), 1,
      aux_sym_image_alias_token2,
    STATE(156), 1,
      sym__immediate_expansion,
    STATE(176), 1,
      sym__imm_expansion,
    STATE(52), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1553] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(171), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(173), 1,
      anon_sym_DOLLAR2,
    STATE(23), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(53), 1,
      sym_line_continuation,
    STATE(116), 1,
      sym__immediate_expansion,
    STATE(120), 1,
      sym__imm_expansion,
    STATE(151), 1,
      sym__immediate_user_name_or_group_fragment,
  [1578] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      aux_sym_path_token2,
    ACTIONS(366), 1,
      anon_sym_DOLLAR2,
    ACTIONS(368), 1,
      sym__non_newline_whitespace,
    STATE(43), 1,
      aux_sym_path_repeat1,
    STATE(54), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym__immediate_expansion,
    STATE(136), 1,
      sym__imm_expansion,
  [1603] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(375), 1,
      aux_sym_expose_port_token1,
    STATE(55), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(182), 2,
      sym_expansion,
      sym_expose_port,
  [1624] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(378), 1,
      anon_sym_DASH_DASH,
    ACTIONS(381), 2,
      anon_sym_LBRACK,
      sym_shell_command,
    STATE(56), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(186), 2,
      sym_param,
      sym_mount_param,
  [1643] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 1,
      anon_sym_DOLLAR,
    ACTIONS(387), 1,
      aux_sym_expose_port_token1,
    STATE(55), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(57), 1,
      sym_line_continuation,
    STATE(182), 2,
      sym_expansion,
      sym_expose_port,
  [1666] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      aux_sym_path_token1,
    ACTIONS(391), 1,
      anon_sym_DOLLAR,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_expansion,
    STATE(58), 1,
      sym_line_continuation,
    STATE(138), 1,
      sym_path,
    STATE(233), 1,
      sym_string_array,
  [1691] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym_path_token2,
    ACTIONS(399), 1,
      anon_sym_DOLLAR2,
    STATE(59), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_path_repeat1,
    STATE(175), 1,
      sym__imm_expansion,
    STATE(187), 1,
      sym__immediate_expansion,
  [1716] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym_path_token2,
    ACTIONS(399), 1,
      anon_sym_DOLLAR2,
    STATE(60), 1,
      sym_line_continuation,
    STATE(61), 1,
      aux_sym_path_repeat1,
    STATE(175), 1,
      sym__imm_expansion,
    STATE(187), 1,
      sym__immediate_expansion,
  [1741] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(401), 1,
      aux_sym_path_token2,
    ACTIONS(404), 1,
      anon_sym_DOLLAR2,
    STATE(175), 1,
      sym__imm_expansion,
    STATE(187), 1,
      sym__immediate_expansion,
    STATE(61), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1764] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(62), 1,
      sym_line_continuation,
    ACTIONS(409), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(407), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1781] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      aux_sym_path_token2,
    ACTIONS(366), 1,
      anon_sym_DOLLAR2,
    ACTIONS(395), 1,
      sym__non_newline_whitespace,
    STATE(54), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym__immediate_expansion,
    STATE(136), 1,
      sym__imm_expansion,
  [1806] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(354), 1,
      anon_sym_DOLLAR2,
    ACTIONS(411), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(163), 1,
      sym__imm_expansion,
    STATE(173), 1,
      sym__immediate_expansion,
  [1831] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(65), 1,
      sym_line_continuation,
    ACTIONS(415), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(413), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1848] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym_path_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_expansion,
    STATE(66), 1,
      sym_line_continuation,
    STATE(93), 1,
      aux_sym_add_instruction_repeat1,
    STATE(236), 1,
      sym_path,
  [1870] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(67), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1886] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      aux_sym_label_pair_token1,
    STATE(68), 1,
      sym_line_continuation,
    ACTIONS(417), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1902] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      aux_sym_path_token1,
    ACTIONS(391), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_expansion,
    STATE(69), 1,
      sym_line_continuation,
    STATE(90), 1,
      aux_sym_add_instruction_repeat1,
    STATE(208), 1,
      sym_path,
  [1924] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym_path_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_expansion,
    STATE(70), 1,
      sym_line_continuation,
    STATE(87), 1,
      aux_sym_add_instruction_repeat1,
    STATE(236), 1,
      sym_path,
  [1946] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      aux_sym_path_token1,
    ACTIONS(391), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_expansion,
    STATE(71), 1,
      sym_line_continuation,
    STATE(90), 1,
      aux_sym_add_instruction_repeat1,
    STATE(212), 1,
      sym_path,
  [1968] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      aux_sym__env_key_token1,
    STATE(72), 1,
      sym_line_continuation,
    STATE(89), 1,
      aux_sym_env_instruction_repeat1,
    STATE(228), 1,
      sym__env_key,
    STATE(229), 1,
      sym_env_pair,
    STATE(238), 1,
      sym__spaced_env_pair,
  [1990] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      aux_sym_image_name_token1,
    STATE(11), 1,
      sym_expansion,
    STATE(45), 1,
      sym_image_name,
    STATE(73), 1,
      sym_line_continuation,
    STATE(200), 1,
      sym_image_spec,
  [2012] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(74), 1,
      sym_line_continuation,
    ACTIONS(415), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(413), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2028] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym__env_key_token1,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2044] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(425), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(423), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2060] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(344), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(342), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2076] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(409), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(407), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2092] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym__env_key_token1,
    STATE(79), 1,
      sym_line_continuation,
    ACTIONS(413), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2108] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_label_pair_token1,
    STATE(80), 1,
      sym_line_continuation,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2124] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      sym_line_continuation,
    STATE(86), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(427), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [2142] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH,
    STATE(82), 1,
      sym_line_continuation,
    STATE(122), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(211), 1,
      sym_param,
    STATE(256), 1,
      sym_cmd_instruction,
  [2164] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_label_pair_token1,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(413), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2180] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      aux_sym__env_key_token1,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(342), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2196] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym__env_key_token1,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(407), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2212] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(431), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [2230] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      aux_sym_path_token1,
    ACTIONS(391), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_expansion,
    STATE(87), 1,
      sym_line_continuation,
    STATE(90), 1,
      aux_sym_add_instruction_repeat1,
    STATE(221), 1,
      sym_path,
  [2252] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(435), 1,
      aux_sym_expose_port_token1,
    STATE(57), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(88), 1,
      sym_line_continuation,
    STATE(182), 2,
      sym_expansion,
      sym_expose_port,
  [2272] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      aux_sym__env_key_token1,
    STATE(89), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_env_instruction_repeat1,
    STATE(229), 1,
      sym_env_pair,
    STATE(253), 1,
      sym__env_key,
  [2294] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      aux_sym_path_token1,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_expansion,
    STATE(236), 1,
      sym_path,
    STATE(90), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [2314] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(179), 1,
      anon_sym_DOLLAR2,
    ACTIONS(181), 1,
      aux_sym_image_tag_token1,
    STATE(16), 1,
      aux_sym_image_tag_repeat1,
    STATE(76), 1,
      sym__immediate_expansion,
    STATE(78), 1,
      sym__imm_expansion,
    STATE(91), 1,
      sym_line_continuation,
  [2336] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(209), 1,
      anon_sym_DOLLAR2,
    ACTIONS(211), 1,
      aux_sym_image_digest_token1,
    STATE(22), 1,
      aux_sym_image_digest_repeat1,
    STATE(92), 1,
      sym_line_continuation,
    STATE(129), 1,
      sym__immediate_expansion,
    STATE(130), 1,
      sym__imm_expansion,
  [2358] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      aux_sym_path_token1,
    ACTIONS(391), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_expansion,
    STATE(90), 1,
      aux_sym_add_instruction_repeat1,
    STATE(93), 1,
      sym_line_continuation,
    STATE(222), 1,
      sym_path,
  [2380] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(94), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(447), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [2396] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(452), 1,
      anon_sym_LF,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(454), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(456), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2414] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(458), 1,
      anon_sym_LF,
    ACTIONS(460), 1,
      aux_sym__env_key_token1,
    STATE(229), 1,
      sym_env_pair,
    STATE(253), 1,
      sym__env_key,
    STATE(96), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2434] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym_label_pair_token1,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(407), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2450] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      aux_sym_label_pair_token1,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(342), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2466] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      aux_sym__env_key_token1,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(417), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2482] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_from_instruction_token2,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2497] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(463), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2510] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      aux_sym_label_pair_token1,
    STATE(209), 1,
      sym_label_pair,
    STATE(102), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2527] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(413), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(415), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2542] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(470), 1,
      aux_sym_path_token1,
    ACTIONS(472), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      sym_expansion,
    STATE(104), 1,
      sym_line_continuation,
    STATE(240), 1,
      sym_path,
  [2561] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(342), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(344), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2576] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      anon_sym_DOLLAR2,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(474), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2591] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      anon_sym_DOLLAR2,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(409), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2606] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_from_instruction_token2,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(413), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2621] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      anon_sym_DOLLAR2,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(344), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2636] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(447), 4,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_shell_command,
  [2649] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(328), 1,
      anon_sym_AT,
    ACTIONS(478), 1,
      anon_sym_LF,
    ACTIONS(480), 1,
      aux_sym_from_instruction_token2,
    STATE(111), 1,
      sym_line_continuation,
    STATE(217), 1,
      sym_image_digest,
  [2668] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(482), 1,
      anon_sym_DOLLAR,
    ACTIONS(484), 1,
      aux_sym_image_alias_token1,
    STATE(48), 1,
      sym_expansion,
    STATE(112), 1,
      sym_line_continuation,
    STATE(264), 1,
      sym_image_alias,
  [2687] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(486), 4,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_shell_command,
  [2700] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      aux_sym_path_token1,
    ACTIONS(391), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_expansion,
    STATE(114), 1,
      sym_line_continuation,
    STATE(220), 1,
      sym_path,
  [2719] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      anon_sym_DOLLAR2,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(415), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2734] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(488), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2747] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(492), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_expansion,
    STATE(117), 1,
      sym_line_continuation,
    STATE(226), 1,
      sym__user_name_or_group,
  [2766] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(496), 1,
      aux_sym_label_pair_token1,
    STATE(102), 1,
      aux_sym_label_instruction_repeat1,
    STATE(118), 1,
      sym_line_continuation,
    STATE(209), 1,
      sym_label_pair,
  [2785] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(300), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2800] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(407), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2813] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(498), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(500), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym_expansion,
    STATE(121), 1,
      sym_line_continuation,
    STATE(239), 1,
      sym__stopsignal_value,
  [2832] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(504), 1,
      anon_sym_DASH_DASH,
    STATE(211), 1,
      sym_param,
    STATE(122), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2849] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(332), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2864] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(342), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2877] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      anon_sym_DOLLAR2,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(332), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2892] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(413), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2905] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(298), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2918] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2931] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(509), 1,
      aux_sym_from_instruction_token2,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(507), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2946] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym_from_instruction_token2,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2961] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(482), 1,
      anon_sym_DOLLAR,
    ACTIONS(484), 1,
      aux_sym_image_alias_token1,
    STATE(48), 1,
      sym_expansion,
    STATE(131), 1,
      sym_line_continuation,
    STATE(267), 1,
      sym_image_alias,
  [2980] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      aux_sym_from_instruction_token2,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(342), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2995] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(409), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3010] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(511), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(513), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3025] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      aux_sym_path_token2,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(476), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3039] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym_path_token2,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3053] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      sym_variable,
    STATE(137), 1,
      sym_line_continuation,
    STATE(178), 1,
      sym__expansion_body,
  [3069] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(521), 1,
      sym__non_newline_whitespace,
    STATE(138), 1,
      sym_line_continuation,
    STATE(174), 1,
      aux_sym_volume_instruction_repeat1,
  [3085] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      sym_variable,
    STATE(84), 1,
      sym__expansion_body,
    STATE(139), 1,
      sym_line_continuation,
  [3101] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      anon_sym_COMMA2,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      sym_line_continuation,
    STATE(167), 1,
      aux_sym_string_array_repeat1,
  [3117] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3129] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    ACTIONS(533), 1,
      sym_variable,
    STATE(98), 1,
      sym__expansion_body,
    STATE(142), 1,
      sym_line_continuation,
  [3145] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3157] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      sym_variable,
    STATE(105), 1,
      sym__expansion_body,
    STATE(144), 1,
      sym_line_continuation,
  [3173] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(413), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3185] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3197] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(298), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3209] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      sym__non_newline_whitespace,
    STATE(148), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [3223] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      sym_variable,
    STATE(143), 1,
      sym__expansion_body,
    STATE(149), 1,
      sym_line_continuation,
  [3239] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
    ACTIONS(546), 1,
      sym_variable,
    STATE(132), 1,
      sym__expansion_body,
    STATE(150), 1,
      sym_line_continuation,
  [3255] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(548), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3267] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      sym_variable,
    STATE(147), 1,
      sym__expansion_body,
    STATE(152), 1,
      sym_line_continuation,
  [3283] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      sym_variable,
    STATE(77), 1,
      sym__expansion_body,
    STATE(153), 1,
      sym_line_continuation,
  [3299] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(413), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3311] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_path_token2,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3325] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(558), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3337] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(157), 1,
      sym_line_continuation,
    ACTIONS(342), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3349] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      sym_variable,
    STATE(158), 1,
      sym_line_continuation,
    STATE(164), 1,
      sym__expansion_body,
  [3365] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      sym_variable,
    STATE(157), 1,
      sym__expansion_body,
    STATE(159), 1,
      sym_line_continuation,
  [3381] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
    STATE(127), 1,
      sym__expansion_body,
    STATE(160), 1,
      sym_line_continuation,
  [3397] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      sym_variable,
    STATE(161), 1,
      sym_line_continuation,
    STATE(172), 1,
      sym__expansion_body,
  [3413] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
    STATE(119), 1,
      sym__expansion_body,
    STATE(162), 1,
      sym_line_continuation,
  [3429] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3441] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym_path_token2,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3455] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_path_token2,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(413), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3469] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
    STATE(124), 1,
      sym__expansion_body,
    STATE(166), 1,
      sym_line_continuation,
  [3485] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_COMMA2,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(167), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3499] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(577), 1,
      sym_shell_command,
    STATE(168), 1,
      sym_line_continuation,
    STATE(243), 1,
      sym_string_array,
  [3515] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      aux_sym_label_pair_token1,
    STATE(118), 1,
      aux_sym_label_instruction_repeat1,
    STATE(169), 1,
      sym_line_continuation,
    STATE(209), 1,
      sym_label_pair,
  [3531] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(583), 1,
      sym_variable,
    STATE(170), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym__expansion_body,
  [3547] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
    STATE(109), 1,
      sym__expansion_body,
    STATE(171), 1,
      sym_line_continuation,
  [3563] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      aux_sym_path_token2,
    STATE(172), 1,
      sym_line_continuation,
    ACTIONS(342), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3577] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(585), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3589] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(521), 1,
      sym__non_newline_whitespace,
    ACTIONS(587), 1,
      anon_sym_LF,
    STATE(148), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(174), 1,
      sym_line_continuation,
  [3605] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym_path_token2,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3619] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3631] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      sym_variable,
    STATE(49), 1,
      sym__expansion_body,
    STATE(177), 1,
      sym_line_continuation,
  [3647] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(342), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3659] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(415), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3673] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3687] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(583), 1,
      sym_variable,
    STATE(181), 1,
      sym_line_continuation,
    STATE(185), 1,
      sym__expansion_body,
  [3703] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(595), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3717] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_path_token2,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3731] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      sym_variable,
    STATE(41), 1,
      sym__expansion_body,
    STATE(184), 1,
      sym_line_continuation,
  [3747] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      aux_sym_path_token2,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(342), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3761] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(597), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [3773] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      aux_sym_path_token2,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(476), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3787] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(599), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(601), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3801] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      sym_variable,
    STATE(180), 1,
      sym__expansion_body,
    STATE(189), 1,
      sym_line_continuation,
  [3817] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3831] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(607), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [3843] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym_line_continuation,
    STATE(194), 1,
      sym_double_quoted_string,
  [3859] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(613), 1,
      sym_shell_command,
    STATE(193), 1,
      sym_line_continuation,
    STATE(235), 1,
      sym_string_array,
  [3875] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      anon_sym_COMMA2,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_string_array_repeat1,
    STATE(194), 1,
      sym_line_continuation,
  [3891] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      aux_sym_path_token2,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(413), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3905] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym_path_token2,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3919] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(617), 1,
      aux_sym_mount_param_param_token1,
    STATE(110), 1,
      sym_mount_param_param,
    STATE(197), 1,
      sym_line_continuation,
  [3932] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(619), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [3943] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      aux_sym_label_pair_token1,
    STATE(199), 1,
      sym_line_continuation,
  [3956] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      aux_sym_from_instruction_token2,
    STATE(200), 1,
      sym_line_continuation,
  [3969] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      aux_sym__env_key_token1,
    STATE(201), 1,
      sym_line_continuation,
  [3982] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      aux_sym_from_instruction_token2,
    STATE(202), 1,
      sym_line_continuation,
  [3995] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      aux_sym_path_token1,
    ACTIONS(635), 1,
      anon_sym_DOLLAR,
    STATE(203), 1,
      sym_line_continuation,
  [4008] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(637), 1,
      aux_sym_label_pair_token1,
    STATE(204), 1,
      sym_line_continuation,
  [4021] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(637), 1,
      aux_sym__env_key_token1,
    STATE(205), 1,
      sym_line_continuation,
  [4034] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(639), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      aux_sym_from_instruction_token2,
    STATE(206), 1,
      sym_line_continuation,
  [4047] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      sym_line_continuation,
    STATE(237), 1,
      sym_string_array,
  [4060] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(645), 1,
      sym__non_newline_whitespace,
    STATE(208), 1,
      sym_line_continuation,
  [4073] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      aux_sym_label_pair_token1,
    STATE(209), 1,
      sym_line_continuation,
  [4086] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(210), 1,
      sym_line_continuation,
    ACTIONS(651), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4097] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(653), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4108] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      sym__non_newline_whitespace,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_line_continuation,
  [4121] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      aux_sym_path_token1,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    STATE(213), 1,
      sym_line_continuation,
  [4134] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(657), 1,
      aux_sym_param_token1,
    ACTIONS(659), 1,
      anon_sym_mount,
    STATE(214), 1,
      sym_line_continuation,
  [4147] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(621), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4158] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(575), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4169] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 1,
      aux_sym_from_instruction_token2,
    STATE(217), 1,
      sym_line_continuation,
  [4182] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      aux_sym_image_name_token1,
    ACTIONS(651), 1,
      anon_sym_DOLLAR,
    STATE(218), 1,
      sym_line_continuation,
  [4195] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(617), 1,
      aux_sym_mount_param_param_token1,
    STATE(81), 1,
      sym_mount_param_param,
    STATE(219), 1,
      sym_line_continuation,
  [4208] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(220), 1,
      sym_line_continuation,
    ACTIONS(539), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4219] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      sym__non_newline_whitespace,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(221), 1,
      sym_line_continuation,
  [4232] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      sym__non_newline_whitespace,
    ACTIONS(667), 1,
      anon_sym_LF,
    STATE(222), 1,
      sym_line_continuation,
  [4245] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(671), 1,
      aux_sym__env_key_token1,
    STATE(223), 1,
      sym_line_continuation,
  [4258] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      anon_sym_EQ,
    STATE(224), 1,
      sym_line_continuation,
  [4271] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(677), 1,
      anon_sym_LF,
    ACTIONS(679), 1,
      aux_sym_label_pair_token1,
    STATE(225), 1,
      sym_line_continuation,
  [4284] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(681), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym_line_continuation,
  [4297] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_double_quoted_string,
    STATE(227), 1,
      sym_line_continuation,
  [4310] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_EQ,
    ACTIONS(687), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(228), 1,
      sym_line_continuation,
  [4323] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(691), 1,
      aux_sym__env_key_token1,
    STATE(229), 1,
      sym_line_continuation,
  [4336] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(230), 1,
      sym_line_continuation,
    ACTIONS(693), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [4347] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(693), 1,
      anon_sym_EQ,
    STATE(231), 1,
      sym_line_continuation,
  [4357] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(232), 1,
      sym_line_continuation,
  [4367] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [4377] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_line_continuation,
  [4387] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(235), 1,
      sym_line_continuation,
  [4397] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(703), 1,
      sym__non_newline_whitespace,
    STATE(236), 1,
      sym_line_continuation,
  [4407] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_line_continuation,
  [4417] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(707), 1,
      anon_sym_LF,
    STATE(238), 1,
      sym_line_continuation,
  [4427] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(239), 1,
      sym_line_continuation,
  [4437] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(711), 1,
      anon_sym_LF,
    STATE(240), 1,
      sym_line_continuation,
  [4447] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(241), 1,
      sym_line_continuation,
  [4457] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(715), 1,
      anon_sym_EQ,
    STATE(242), 1,
      sym_line_continuation,
  [4467] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(717), 1,
      anon_sym_LF,
    STATE(243), 1,
      sym_line_continuation,
  [4477] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      anon_sym_LF,
    STATE(244), 1,
      sym_line_continuation,
  [4487] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(721), 1,
      aux_sym__expansion_body_token1,
    STATE(245), 1,
      sym_line_continuation,
  [4497] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_EQ,
    STATE(246), 1,
      sym_line_continuation,
  [4507] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(247), 1,
      sym_line_continuation,
  [4517] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(727), 1,
      anon_sym_EQ,
    STATE(248), 1,
      sym_line_continuation,
  [4527] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(249), 1,
      sym_line_continuation,
  [4537] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(731), 1,
      anon_sym_LF,
    STATE(250), 1,
      sym_line_continuation,
  [4547] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      sym_line_continuation,
  [4557] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(735), 1,
      aux_sym_param_token2,
    STATE(252), 1,
      sym_line_continuation,
  [4567] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_EQ,
    STATE(253), 1,
      sym_line_continuation,
  [4577] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(737), 1,
      aux_sym_arg_instruction_token2,
    STATE(254), 1,
      sym_line_continuation,
  [4587] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      aux_sym_mount_param_param_token1,
    STATE(255), 1,
      sym_line_continuation,
  [4597] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(741), 1,
      anon_sym_LF,
    STATE(256), 1,
      sym_line_continuation,
  [4607] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(257), 1,
      sym_line_continuation,
  [4617] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(745), 1,
      aux_sym_param_token2,
    STATE(258), 1,
      sym_line_continuation,
  [4627] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_line_continuation,
  [4637] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      aux_sym_param_token2,
    STATE(260), 1,
      sym_line_continuation,
  [4647] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(751), 1,
      anon_sym_LF,
    STATE(261), 1,
      sym_line_continuation,
  [4657] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      sym_line_continuation,
  [4667] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      aux_sym_param_token2,
    STATE(263), 1,
      sym_line_continuation,
  [4677] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(757), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym_line_continuation,
  [4687] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(759), 1,
      anon_sym_EQ,
    STATE(265), 1,
      sym_line_continuation,
  [4697] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      sym_line_continuation,
  [4707] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      anon_sym_LF,
    STATE(267), 1,
      sym_line_continuation,
  [4717] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(268), 1,
      sym_line_continuation,
  [4727] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_line_continuation,
  [4737] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(270), 1,
      sym_line_continuation,
  [4747] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(771), 1,
      aux_sym_param_token1,
    STATE(271), 1,
      sym_line_continuation,
  [4757] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_line_continuation,
  [4767] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(775), 1,
      anon_sym_LF,
    STATE(273), 1,
      sym_line_continuation,
  [4777] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      anon_sym_LF,
    STATE(274), 1,
      sym_line_continuation,
  [4787] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      sym_line_continuation,
  [4797] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      sym_line_continuation,
  [4807] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(783), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_line_continuation,
  [4817] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(785), 1,
      anon_sym_LF,
    STATE(278), 1,
      sym_line_continuation,
  [4827] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      sym_line_continuation,
  [4837] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(789), 1,
      anon_sym_LF,
    STATE(280), 1,
      sym_line_continuation,
  [4847] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_line_continuation,
  [4857] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(282), 1,
      sym_line_continuation,
  [4867] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      sym_line_continuation,
  [4877] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_line_continuation,
  [4887] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(799), 1,
      aux_sym__expansion_body_token1,
    STATE(285), 1,
      sym_line_continuation,
  [4897] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(801), 1,
      anon_sym_EQ,
    STATE(286), 1,
      sym_line_continuation,
  [4907] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(803), 1,
      aux_sym__expansion_body_token1,
    STATE(287), 1,
      sym_line_continuation,
  [4917] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(805), 1,
      anon_sym_EQ,
    STATE(288), 1,
      sym_line_continuation,
  [4927] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(807), 1,
      aux_sym__expansion_body_token1,
    STATE(289), 1,
      sym_line_continuation,
  [4937] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(809), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym_line_continuation,
  [4947] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      aux_sym__expansion_body_token1,
    STATE(291), 1,
      sym_line_continuation,
  [4957] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(813), 1,
      aux_sym__expansion_body_token1,
    STATE(292), 1,
      sym_line_continuation,
  [4967] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(815), 1,
      aux_sym__expansion_body_token1,
    STATE(293), 1,
      sym_line_continuation,
  [4977] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(817), 1,
      aux_sym__expansion_body_token1,
    STATE(294), 1,
      sym_line_continuation,
  [4987] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(819), 1,
      aux_sym__expansion_body_token1,
    STATE(295), 1,
      sym_line_continuation,
  [4997] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(821), 1,
      aux_sym__expansion_body_token1,
    STATE(296), 1,
      sym_line_continuation,
  [5007] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(823), 1,
      aux_sym__expansion_body_token1,
    STATE(297), 1,
      sym_line_continuation,
  [5017] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(825), 1,
      aux_sym__expansion_body_token1,
    STATE(298), 1,
      sym_line_continuation,
  [5027] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(827), 1,
      aux_sym__expansion_body_token1,
    STATE(299), 1,
      sym_line_continuation,
  [5037] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(829), 1,
      aux_sym_param_token1,
    STATE(300), 1,
      sym_line_continuation,
  [5047] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      aux_sym_param_token1,
    STATE(301), 1,
      sym_line_continuation,
  [5057] = 1,
    ACTIONS(833), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 280,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 346,
  [SMALL_STATE(8)] = 376,
  [SMALL_STATE(9)] = 406,
  [SMALL_STATE(10)] = 434,
  [SMALL_STATE(11)] = 464,
  [SMALL_STATE(12)] = 494,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 578,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 663,
  [SMALL_STATE(19)] = 690,
  [SMALL_STATE(20)] = 719,
  [SMALL_STATE(21)] = 748,
  [SMALL_STATE(22)] = 777,
  [SMALL_STATE(23)] = 805,
  [SMALL_STATE(24)] = 833,
  [SMALL_STATE(25)] = 861,
  [SMALL_STATE(26)] = 889,
  [SMALL_STATE(27)] = 915,
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 967,
  [SMALL_STATE(30)] = 993,
  [SMALL_STATE(31)] = 1021,
  [SMALL_STATE(32)] = 1047,
  [SMALL_STATE(33)] = 1075,
  [SMALL_STATE(34)] = 1103,
  [SMALL_STATE(35)] = 1129,
  [SMALL_STATE(36)] = 1155,
  [SMALL_STATE(37)] = 1181,
  [SMALL_STATE(38)] = 1209,
  [SMALL_STATE(39)] = 1235,
  [SMALL_STATE(40)] = 1263,
  [SMALL_STATE(41)] = 1291,
  [SMALL_STATE(42)] = 1308,
  [SMALL_STATE(43)] = 1325,
  [SMALL_STATE(44)] = 1348,
  [SMALL_STATE(45)] = 1371,
  [SMALL_STATE(46)] = 1396,
  [SMALL_STATE(47)] = 1413,
  [SMALL_STATE(48)] = 1438,
  [SMALL_STATE(49)] = 1463,
  [SMALL_STATE(50)] = 1480,
  [SMALL_STATE(51)] = 1505,
  [SMALL_STATE(52)] = 1530,
  [SMALL_STATE(53)] = 1553,
  [SMALL_STATE(54)] = 1578,
  [SMALL_STATE(55)] = 1603,
  [SMALL_STATE(56)] = 1624,
  [SMALL_STATE(57)] = 1643,
  [SMALL_STATE(58)] = 1666,
  [SMALL_STATE(59)] = 1691,
  [SMALL_STATE(60)] = 1716,
  [SMALL_STATE(61)] = 1741,
  [SMALL_STATE(62)] = 1764,
  [SMALL_STATE(63)] = 1781,
  [SMALL_STATE(64)] = 1806,
  [SMALL_STATE(65)] = 1831,
  [SMALL_STATE(66)] = 1848,
  [SMALL_STATE(67)] = 1870,
  [SMALL_STATE(68)] = 1886,
  [SMALL_STATE(69)] = 1902,
  [SMALL_STATE(70)] = 1924,
  [SMALL_STATE(71)] = 1946,
  [SMALL_STATE(72)] = 1968,
  [SMALL_STATE(73)] = 1990,
  [SMALL_STATE(74)] = 2012,
  [SMALL_STATE(75)] = 2028,
  [SMALL_STATE(76)] = 2044,
  [SMALL_STATE(77)] = 2060,
  [SMALL_STATE(78)] = 2076,
  [SMALL_STATE(79)] = 2092,
  [SMALL_STATE(80)] = 2108,
  [SMALL_STATE(81)] = 2124,
  [SMALL_STATE(82)] = 2142,
  [SMALL_STATE(83)] = 2164,
  [SMALL_STATE(84)] = 2180,
  [SMALL_STATE(85)] = 2196,
  [SMALL_STATE(86)] = 2212,
  [SMALL_STATE(87)] = 2230,
  [SMALL_STATE(88)] = 2252,
  [SMALL_STATE(89)] = 2272,
  [SMALL_STATE(90)] = 2294,
  [SMALL_STATE(91)] = 2314,
  [SMALL_STATE(92)] = 2336,
  [SMALL_STATE(93)] = 2358,
  [SMALL_STATE(94)] = 2380,
  [SMALL_STATE(95)] = 2396,
  [SMALL_STATE(96)] = 2414,
  [SMALL_STATE(97)] = 2434,
  [SMALL_STATE(98)] = 2450,
  [SMALL_STATE(99)] = 2466,
  [SMALL_STATE(100)] = 2482,
  [SMALL_STATE(101)] = 2497,
  [SMALL_STATE(102)] = 2510,
  [SMALL_STATE(103)] = 2527,
  [SMALL_STATE(104)] = 2542,
  [SMALL_STATE(105)] = 2561,
  [SMALL_STATE(106)] = 2576,
  [SMALL_STATE(107)] = 2591,
  [SMALL_STATE(108)] = 2606,
  [SMALL_STATE(109)] = 2621,
  [SMALL_STATE(110)] = 2636,
  [SMALL_STATE(111)] = 2649,
  [SMALL_STATE(112)] = 2668,
  [SMALL_STATE(113)] = 2687,
  [SMALL_STATE(114)] = 2700,
  [SMALL_STATE(115)] = 2719,
  [SMALL_STATE(116)] = 2734,
  [SMALL_STATE(117)] = 2747,
  [SMALL_STATE(118)] = 2766,
  [SMALL_STATE(119)] = 2785,
  [SMALL_STATE(120)] = 2800,
  [SMALL_STATE(121)] = 2813,
  [SMALL_STATE(122)] = 2832,
  [SMALL_STATE(123)] = 2849,
  [SMALL_STATE(124)] = 2864,
  [SMALL_STATE(125)] = 2877,
  [SMALL_STATE(126)] = 2892,
  [SMALL_STATE(127)] = 2905,
  [SMALL_STATE(128)] = 2918,
  [SMALL_STATE(129)] = 2931,
  [SMALL_STATE(130)] = 2946,
  [SMALL_STATE(131)] = 2961,
  [SMALL_STATE(132)] = 2980,
  [SMALL_STATE(133)] = 2995,
  [SMALL_STATE(134)] = 3010,
  [SMALL_STATE(135)] = 3025,
  [SMALL_STATE(136)] = 3039,
  [SMALL_STATE(137)] = 3053,
  [SMALL_STATE(138)] = 3069,
  [SMALL_STATE(139)] = 3085,
  [SMALL_STATE(140)] = 3101,
  [SMALL_STATE(141)] = 3117,
  [SMALL_STATE(142)] = 3129,
  [SMALL_STATE(143)] = 3145,
  [SMALL_STATE(144)] = 3157,
  [SMALL_STATE(145)] = 3173,
  [SMALL_STATE(146)] = 3185,
  [SMALL_STATE(147)] = 3197,
  [SMALL_STATE(148)] = 3209,
  [SMALL_STATE(149)] = 3223,
  [SMALL_STATE(150)] = 3239,
  [SMALL_STATE(151)] = 3255,
  [SMALL_STATE(152)] = 3267,
  [SMALL_STATE(153)] = 3283,
  [SMALL_STATE(154)] = 3299,
  [SMALL_STATE(155)] = 3311,
  [SMALL_STATE(156)] = 3325,
  [SMALL_STATE(157)] = 3337,
  [SMALL_STATE(158)] = 3349,
  [SMALL_STATE(159)] = 3365,
  [SMALL_STATE(160)] = 3381,
  [SMALL_STATE(161)] = 3397,
  [SMALL_STATE(162)] = 3413,
  [SMALL_STATE(163)] = 3429,
  [SMALL_STATE(164)] = 3441,
  [SMALL_STATE(165)] = 3455,
  [SMALL_STATE(166)] = 3469,
  [SMALL_STATE(167)] = 3485,
  [SMALL_STATE(168)] = 3499,
  [SMALL_STATE(169)] = 3515,
  [SMALL_STATE(170)] = 3531,
  [SMALL_STATE(171)] = 3547,
  [SMALL_STATE(172)] = 3563,
  [SMALL_STATE(173)] = 3577,
  [SMALL_STATE(174)] = 3589,
  [SMALL_STATE(175)] = 3605,
  [SMALL_STATE(176)] = 3619,
  [SMALL_STATE(177)] = 3631,
  [SMALL_STATE(178)] = 3647,
  [SMALL_STATE(179)] = 3659,
  [SMALL_STATE(180)] = 3673,
  [SMALL_STATE(181)] = 3687,
  [SMALL_STATE(182)] = 3703,
  [SMALL_STATE(183)] = 3717,
  [SMALL_STATE(184)] = 3731,
  [SMALL_STATE(185)] = 3747,
  [SMALL_STATE(186)] = 3761,
  [SMALL_STATE(187)] = 3773,
  [SMALL_STATE(188)] = 3787,
  [SMALL_STATE(189)] = 3801,
  [SMALL_STATE(190)] = 3817,
  [SMALL_STATE(191)] = 3831,
  [SMALL_STATE(192)] = 3843,
  [SMALL_STATE(193)] = 3859,
  [SMALL_STATE(194)] = 3875,
  [SMALL_STATE(195)] = 3891,
  [SMALL_STATE(196)] = 3905,
  [SMALL_STATE(197)] = 3919,
  [SMALL_STATE(198)] = 3932,
  [SMALL_STATE(199)] = 3943,
  [SMALL_STATE(200)] = 3956,
  [SMALL_STATE(201)] = 3969,
  [SMALL_STATE(202)] = 3982,
  [SMALL_STATE(203)] = 3995,
  [SMALL_STATE(204)] = 4008,
  [SMALL_STATE(205)] = 4021,
  [SMALL_STATE(206)] = 4034,
  [SMALL_STATE(207)] = 4047,
  [SMALL_STATE(208)] = 4060,
  [SMALL_STATE(209)] = 4073,
  [SMALL_STATE(210)] = 4086,
  [SMALL_STATE(211)] = 4097,
  [SMALL_STATE(212)] = 4108,
  [SMALL_STATE(213)] = 4121,
  [SMALL_STATE(214)] = 4134,
  [SMALL_STATE(215)] = 4147,
  [SMALL_STATE(216)] = 4158,
  [SMALL_STATE(217)] = 4169,
  [SMALL_STATE(218)] = 4182,
  [SMALL_STATE(219)] = 4195,
  [SMALL_STATE(220)] = 4208,
  [SMALL_STATE(221)] = 4219,
  [SMALL_STATE(222)] = 4232,
  [SMALL_STATE(223)] = 4245,
  [SMALL_STATE(224)] = 4258,
  [SMALL_STATE(225)] = 4271,
  [SMALL_STATE(226)] = 4284,
  [SMALL_STATE(227)] = 4297,
  [SMALL_STATE(228)] = 4310,
  [SMALL_STATE(229)] = 4323,
  [SMALL_STATE(230)] = 4336,
  [SMALL_STATE(231)] = 4347,
  [SMALL_STATE(232)] = 4357,
  [SMALL_STATE(233)] = 4367,
  [SMALL_STATE(234)] = 4377,
  [SMALL_STATE(235)] = 4387,
  [SMALL_STATE(236)] = 4397,
  [SMALL_STATE(237)] = 4407,
  [SMALL_STATE(238)] = 4417,
  [SMALL_STATE(239)] = 4427,
  [SMALL_STATE(240)] = 4437,
  [SMALL_STATE(241)] = 4447,
  [SMALL_STATE(242)] = 4457,
  [SMALL_STATE(243)] = 4467,
  [SMALL_STATE(244)] = 4477,
  [SMALL_STATE(245)] = 4487,
  [SMALL_STATE(246)] = 4497,
  [SMALL_STATE(247)] = 4507,
  [SMALL_STATE(248)] = 4517,
  [SMALL_STATE(249)] = 4527,
  [SMALL_STATE(250)] = 4537,
  [SMALL_STATE(251)] = 4547,
  [SMALL_STATE(252)] = 4557,
  [SMALL_STATE(253)] = 4567,
  [SMALL_STATE(254)] = 4577,
  [SMALL_STATE(255)] = 4587,
  [SMALL_STATE(256)] = 4597,
  [SMALL_STATE(257)] = 4607,
  [SMALL_STATE(258)] = 4617,
  [SMALL_STATE(259)] = 4627,
  [SMALL_STATE(260)] = 4637,
  [SMALL_STATE(261)] = 4647,
  [SMALL_STATE(262)] = 4657,
  [SMALL_STATE(263)] = 4667,
  [SMALL_STATE(264)] = 4677,
  [SMALL_STATE(265)] = 4687,
  [SMALL_STATE(266)] = 4697,
  [SMALL_STATE(267)] = 4707,
  [SMALL_STATE(268)] = 4717,
  [SMALL_STATE(269)] = 4727,
  [SMALL_STATE(270)] = 4737,
  [SMALL_STATE(271)] = 4747,
  [SMALL_STATE(272)] = 4757,
  [SMALL_STATE(273)] = 4767,
  [SMALL_STATE(274)] = 4777,
  [SMALL_STATE(275)] = 4787,
  [SMALL_STATE(276)] = 4797,
  [SMALL_STATE(277)] = 4807,
  [SMALL_STATE(278)] = 4817,
  [SMALL_STATE(279)] = 4827,
  [SMALL_STATE(280)] = 4837,
  [SMALL_STATE(281)] = 4847,
  [SMALL_STATE(282)] = 4857,
  [SMALL_STATE(283)] = 4867,
  [SMALL_STATE(284)] = 4877,
  [SMALL_STATE(285)] = 4887,
  [SMALL_STATE(286)] = 4897,
  [SMALL_STATE(287)] = 4907,
  [SMALL_STATE(288)] = 4917,
  [SMALL_STATE(289)] = 4927,
  [SMALL_STATE(290)] = 4937,
  [SMALL_STATE(291)] = 4947,
  [SMALL_STATE(292)] = 4957,
  [SMALL_STATE(293)] = 4967,
  [SMALL_STATE(294)] = 4977,
  [SMALL_STATE(295)] = 4987,
  [SMALL_STATE(296)] = 4997,
  [SMALL_STATE(297)] = 5007,
  [SMALL_STATE(298)] = 5017,
  [SMALL_STATE(299)] = 5027,
  [SMALL_STATE(300)] = 5037,
  [SMALL_STATE(301)] = 5047,
  [SMALL_STATE(302)] = 5057,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(177),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(42),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(153),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(76),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(116),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(166),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(142),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(68),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(139),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(99),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(106),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(171),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(150),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(129),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(144),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(134),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(134),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(116),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(166),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(135),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(181),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(173),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(159),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(137),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(156),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(189),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(95),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(214),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(187),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(161),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(63),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(170),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(197),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(231),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(242),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(301),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(114),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(227),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [781] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
