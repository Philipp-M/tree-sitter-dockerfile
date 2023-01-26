#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 305
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
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 13,
  [20] = 20,
  [21] = 21,
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
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 24,
  [37] = 37,
  [38] = 30,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 33,
  [44] = 44,
  [45] = 45,
  [46] = 32,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 33,
  [62] = 62,
  [63] = 31,
  [64] = 32,
  [65] = 31,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 48,
  [75] = 47,
  [76] = 42,
  [77] = 77,
  [78] = 55,
  [79] = 79,
  [80] = 80,
  [81] = 48,
  [82] = 47,
  [83] = 48,
  [84] = 71,
  [85] = 47,
  [86] = 42,
  [87] = 55,
  [88] = 42,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 55,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 47,
  [103] = 48,
  [104] = 55,
  [105] = 41,
  [106] = 106,
  [107] = 107,
  [108] = 42,
  [109] = 55,
  [110] = 47,
  [111] = 48,
  [112] = 41,
  [113] = 42,
  [114] = 47,
  [115] = 115,
  [116] = 48,
  [117] = 48,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 47,
  [122] = 122,
  [123] = 42,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 55,
  [131] = 42,
  [132] = 132,
  [133] = 133,
  [134] = 55,
  [135] = 42,
  [136] = 136,
  [137] = 55,
  [138] = 136,
  [139] = 136,
  [140] = 140,
  [141] = 41,
  [142] = 136,
  [143] = 143,
  [144] = 42,
  [145] = 145,
  [146] = 55,
  [147] = 147,
  [148] = 41,
  [149] = 42,
  [150] = 55,
  [151] = 151,
  [152] = 140,
  [153] = 136,
  [154] = 154,
  [155] = 47,
  [156] = 48,
  [157] = 157,
  [158] = 140,
  [159] = 159,
  [160] = 41,
  [161] = 140,
  [162] = 162,
  [163] = 47,
  [164] = 48,
  [165] = 42,
  [166] = 136,
  [167] = 47,
  [168] = 48,
  [169] = 169,
  [170] = 136,
  [171] = 136,
  [172] = 140,
  [173] = 173,
  [174] = 136,
  [175] = 140,
  [176] = 136,
  [177] = 140,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 42,
  [182] = 41,
  [183] = 136,
  [184] = 48,
  [185] = 47,
  [186] = 120,
  [187] = 55,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 41,
  [192] = 136,
  [193] = 120,
  [194] = 194,
  [195] = 55,
  [196] = 140,
  [197] = 188,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 200,
  [203] = 203,
  [204] = 188,
  [205] = 201,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 188,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 201,
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
  [229] = 200,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 209,
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
  [254] = 232,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 232,
  [261] = 255,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 232,
  [266] = 255,
  [267] = 242,
  [268] = 268,
  [269] = 269,
  [270] = 255,
  [271] = 232,
  [272] = 232,
  [273] = 273,
  [274] = 274,
  [275] = 232,
  [276] = 276,
  [277] = 277,
  [278] = 232,
  [279] = 279,
  [280] = 232,
  [281] = 281,
  [282] = 232,
  [283] = 283,
  [284] = 232,
  [285] = 285,
  [286] = 232,
  [287] = 232,
  [288] = 285,
  [289] = 283,
  [290] = 285,
  [291] = 283,
  [292] = 285,
  [293] = 283,
  [294] = 285,
  [295] = 285,
  [296] = 285,
  [297] = 285,
  [298] = 285,
  [299] = 285,
  [300] = 285,
  [301] = 285,
  [302] = 285,
  [303] = 242,
  [304] = 304,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '_') ADVANCE(210);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '}') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(251);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(259);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') SKIP(22)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(217);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(199);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 45:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 85:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 97:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 147:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
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
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '}') ADVANCE(209);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(251);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(251);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 158},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 158},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 158},
  [98] = {.lex_state = 32},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 37},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 38},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 158},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 20},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 44},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 44},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 158},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 49},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 158},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 44},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 44},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 158},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 44},
  [172] = {.lex_state = 44},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 44},
  [175] = {.lex_state = 44},
  [176] = {.lex_state = 44},
  [177] = {.lex_state = 44},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 158},
  [180] = {.lex_state = 21},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 44},
  [184] = {.lex_state = 31},
  [185] = {.lex_state = 31},
  [186] = {.lex_state = 31},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 24},
  [189] = {.lex_state = 25},
  [190] = {.lex_state = 21},
  [191] = {.lex_state = 31},
  [192] = {.lex_state = 44},
  [193] = {.lex_state = 13},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 31},
  [196] = {.lex_state = 44},
  [197] = {.lex_state = 33},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 21},
  [200] = {.lex_state = 17},
  [201] = {.lex_state = 17},
  [202] = {.lex_state = 19},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 32},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 32},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 14},
  [209] = {.lex_state = 40},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 158},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 51},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 158},
  [217] = {.lex_state = 158},
  [218] = {.lex_state = 158},
  [219] = {.lex_state = 158},
  [220] = {.lex_state = 14},
  [221] = {.lex_state = 35},
  [222] = {.lex_state = 21},
  [223] = {.lex_state = 21},
  [224] = {.lex_state = 40},
  [225] = {.lex_state = 21},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 158},
  [229] = {.lex_state = 158},
  [230] = {.lex_state = 51},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 158},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 50},
  [238] = {.lex_state = 158},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 51},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 47},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 158},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 158},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 196},
  [253] = {.lex_state = 196},
  [254] = {.lex_state = 158},
  [255] = {.lex_state = 52},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 158},
  [261] = {.lex_state = 52},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 158},
  [266] = {.lex_state = 52},
  [267] = {.lex_state = 47},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 31},
  [270] = {.lex_state = 52},
  [271] = {.lex_state = 158},
  [272] = {.lex_state = 158},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 158},
  [275] = {.lex_state = 158},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 158},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 158},
  [281] = {.lex_state = 158},
  [282] = {.lex_state = 158},
  [283] = {.lex_state = 158},
  [284] = {.lex_state = 158},
  [285] = {.lex_state = 53},
  [286] = {.lex_state = 158},
  [287] = {.lex_state = 158},
  [288] = {.lex_state = 53},
  [289] = {.lex_state = 158},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 158},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 158},
  [294] = {.lex_state = 53},
  [295] = {.lex_state = 53},
  [296] = {.lex_state = 53},
  [297] = {.lex_state = 53},
  [298] = {.lex_state = 53},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 53},
  [301] = {.lex_state = 53},
  [302] = {.lex_state = 53},
  [303] = {.lex_state = 47},
  [304] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(231),
    [sym__instruction] = STATE(258),
    [sym_from_instruction] = STATE(263),
    [sym_run_instruction] = STATE(263),
    [sym_cmd_instruction] = STATE(263),
    [sym_label_instruction] = STATE(263),
    [sym_expose_instruction] = STATE(263),
    [sym_env_instruction] = STATE(263),
    [sym_add_instruction] = STATE(263),
    [sym_copy_instruction] = STATE(263),
    [sym_entrypoint_instruction] = STATE(263),
    [sym_volume_instruction] = STATE(263),
    [sym_user_instruction] = STATE(263),
    [sym_workdir_instruction] = STATE(263),
    [sym_arg_instruction] = STATE(263),
    [sym_onbuild_instruction] = STATE(263),
    [sym_stopsignal_instruction] = STATE(263),
    [sym_healthcheck_instruction] = STATE(263),
    [sym_shell_instruction] = STATE(263),
    [sym_maintainer_instruction] = STATE(263),
    [sym_cross_build_instruction] = STATE(263),
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
    STATE(258), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(263), 19,
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
    STATE(258), 1,
      sym__instruction,
    STATE(263), 19,
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
    STATE(263), 19,
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
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(71), 1,
      sym__immediate_expansion,
    STATE(83), 1,
      sym__imm_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(226), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [346] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(125), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(127), 1,
      anon_sym_DOLLAR2,
    ACTIONS(130), 1,
      aux_sym_image_name_token2,
    STATE(48), 1,
      sym__imm_expansion,
    STATE(49), 1,
      sym__immediate_expansion,
    STATE(7), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(123), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [374] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(81), 1,
      sym__imm_expansion,
    STATE(84), 1,
      sym__immediate_expansion,
    ACTIONS(137), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(262), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [404] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(141), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(143), 1,
      anon_sym_DOLLAR2,
    ACTIONS(145), 1,
      aux_sym_image_name_token2,
    STATE(7), 1,
      aux_sym_image_name_repeat1,
    STATE(9), 1,
      sym_line_continuation,
    STATE(48), 1,
      sym__imm_expansion,
    STATE(49), 1,
      sym__immediate_expansion,
    ACTIONS(139), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [434] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(81), 1,
      sym__imm_expansion,
    STATE(84), 1,
      sym__immediate_expansion,
    ACTIONS(137), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(227), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [464] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(143), 1,
      anon_sym_DOLLAR2,
    ACTIONS(145), 1,
      aux_sym_image_name_token2,
    ACTIONS(149), 1,
      aux_sym_from_instruction_token2,
    STATE(9), 1,
      aux_sym_image_name_repeat1,
    STATE(11), 1,
      sym_line_continuation,
    STATE(48), 1,
      sym__imm_expansion,
    STATE(49), 1,
      sym__immediate_expansion,
    ACTIONS(147), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [494] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(81), 1,
      sym__imm_expansion,
    STATE(84), 1,
      sym__immediate_expansion,
    ACTIONS(137), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(257), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [524] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_DOLLAR2,
    ACTIONS(156), 1,
      aux_sym__env_key_token1,
    STATE(71), 1,
      sym__immediate_expansion,
    STATE(83), 1,
      sym__imm_expansion,
    ACTIONS(158), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [551] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DOLLAR2,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      aux_sym_label_pair_token1,
    STATE(14), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(81), 1,
      sym__imm_expansion,
    STATE(84), 1,
      sym__immediate_expansion,
    ACTIONS(137), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [580] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    STATE(15), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(124), 1,
      sym__immediate_expansion,
    STATE(125), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(165), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [609] = 9,
    ACTIONS(113), 1,
      anon_sym_DOLLAR2,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      aux_sym__env_key_token1,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(16), 1,
      sym_line_continuation,
    STATE(71), 1,
      sym__immediate_expansion,
    STATE(83), 1,
      sym__imm_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [638] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(173), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(175), 1,
      anon_sym_DOLLAR2,
    ACTIONS(177), 1,
      aux_sym_image_tag_token1,
    STATE(17), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_image_tag_repeat1,
    STATE(74), 1,
      sym__imm_expansion,
    STATE(89), 1,
      sym__immediate_expansion,
    ACTIONS(171), 2,
      anon_sym_LF,
      anon_sym_AT,
  [667] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    STATE(18), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(124), 1,
      sym__immediate_expansion,
    STATE(125), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(179), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [696] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(156), 1,
      aux_sym_label_pair_token1,
    ACTIONS(181), 1,
      anon_sym_DOLLAR2,
    STATE(81), 1,
      sym__imm_expansion,
    STATE(84), 1,
      sym__immediate_expansion,
    ACTIONS(184), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [723] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(189), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(191), 1,
      anon_sym_DOLLAR2,
    ACTIONS(194), 1,
      aux_sym_image_tag_token1,
    STATE(74), 1,
      sym__imm_expansion,
    STATE(89), 1,
      sym__immediate_expansion,
    ACTIONS(187), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(20), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [750] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(199), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(202), 1,
      anon_sym_DOLLAR2,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(124), 1,
      sym__immediate_expansion,
    STATE(125), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(197), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(21), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [777] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      aux_sym_path_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH,
    STATE(22), 1,
      sym_line_continuation,
    STATE(63), 1,
      sym_expansion,
    STATE(67), 1,
      sym_param,
    STATE(68), 1,
      aux_sym_add_instruction_repeat1,
    STATE(269), 1,
      sym_path,
  [805] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(124), 1,
      sym__immediate_expansion,
    STATE(154), 1,
      sym__immediate_user_name_or_group_fragment,
  [833] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_DOLLAR2,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    STATE(24), 1,
      sym_line_continuation,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [861] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_DOLLAR2,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_line_continuation,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [889] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(227), 1,
      anon_sym_DOLLAR2,
    ACTIONS(229), 1,
      aux_sym_image_digest_token1,
    STATE(26), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_image_digest_repeat1,
    STATE(103), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [917] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(231), 1,
      anon_sym_LF,
    ACTIONS(233), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(235), 1,
      anon_sym_DOLLAR2,
    ACTIONS(238), 1,
      aux_sym_image_digest_token1,
    STATE(103), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [943] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      anon_sym_DOLLAR2,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(249), 1,
      sym_escape_sequence,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
    STATE(28), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [969] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(257), 1,
      anon_sym_DOLLAR2,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(124), 1,
      sym__immediate_expansion,
    STATE(154), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(29), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [995] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_DOLLAR2,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1023] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      aux_sym_path_token2,
    ACTIONS(266), 1,
      anon_sym_DOLLAR2,
    STATE(31), 1,
      sym_line_continuation,
    STATE(32), 1,
      aux_sym_path_repeat1,
    STATE(116), 1,
      sym__imm_expansion,
    STATE(120), 1,
      sym__immediate_expansion,
    ACTIONS(262), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1049] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      aux_sym_path_token2,
    ACTIONS(266), 1,
      anon_sym_DOLLAR2,
    STATE(32), 1,
      sym_line_continuation,
    STATE(33), 1,
      aux_sym_path_repeat1,
    STATE(116), 1,
      sym__imm_expansion,
    STATE(120), 1,
      sym__immediate_expansion,
    ACTIONS(268), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1075] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(272), 1,
      aux_sym_path_token2,
    ACTIONS(275), 1,
      anon_sym_DOLLAR2,
    STATE(116), 1,
      sym__imm_expansion,
    STATE(120), 1,
      sym__immediate_expansion,
    ACTIONS(270), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(33), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1099] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      aux_sym_path_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH,
    STATE(34), 1,
      sym_line_continuation,
    STATE(63), 1,
      sym_expansion,
    STATE(66), 1,
      aux_sym_add_instruction_repeat1,
    STATE(69), 1,
      sym_param,
    STATE(269), 1,
      sym_path,
  [1127] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_DOLLAR2,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_line_continuation,
    STATE(36), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1155] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_DOLLAR2,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1183] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(282), 1,
      anon_sym_DASH_DASH,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(286), 1,
      sym_shell_command,
    STATE(37), 1,
      sym_line_continuation,
    STATE(53), 1,
      aux_sym_run_instruction_repeat1,
    STATE(276), 1,
      sym_string_array,
    STATE(162), 2,
      sym_param,
      sym_mount_param,
  [1209] = 9,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_DOLLAR2,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(117), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1237] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(282), 1,
      anon_sym_DASH_DASH,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      sym_shell_command,
    STATE(37), 1,
      aux_sym_run_instruction_repeat1,
    STATE(39), 1,
      sym_line_continuation,
    STATE(249), 1,
      sym_string_array,
    STATE(162), 2,
      sym_param,
      sym_mount_param,
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
    STATE(44), 1,
      sym_image_name,
    STATE(95), 1,
      sym_param,
    STATE(220), 1,
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
    STATE(184), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(43), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1348] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(320), 1,
      anon_sym_AT,
    STATE(44), 1,
      sym_line_continuation,
    STATE(107), 1,
      sym_image_tag,
    STATE(213), 1,
      sym_image_digest,
  [1373] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    STATE(23), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(45), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(124), 1,
      sym__immediate_expansion,
    STATE(154), 1,
      sym__immediate_user_name_or_group_fragment,
  [1398] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(322), 1,
      aux_sym_path_token2,
    ACTIONS(324), 1,
      anon_sym_DOLLAR2,
    ACTIONS(326), 1,
      sym__non_newline_whitespace,
    STATE(43), 1,
      aux_sym_path_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(184), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
  [1423] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(47), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(328), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1440] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(48), 1,
      sym_line_continuation,
    ACTIONS(334), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(332), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1457] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 1,
      sym_line_continuation,
    ACTIONS(338), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(336), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1474] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(345), 1,
      aux_sym_expose_port_token1,
    STATE(50), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(173), 2,
      sym_expansion,
      sym_expose_port,
  [1495] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(352), 1,
      anon_sym_DOLLAR2,
    STATE(51), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(178), 1,
      sym__immediate_expansion,
  [1520] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      anon_sym_LF,
    ACTIONS(356), 1,
      anon_sym_DOLLAR2,
    ACTIONS(358), 1,
      aux_sym_image_alias_token2,
    STATE(52), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_image_alias_repeat1,
    STATE(159), 1,
      sym__immediate_expansion,
    STATE(164), 1,
      sym__imm_expansion,
  [1545] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(360), 1,
      anon_sym_DASH_DASH,
    ACTIONS(363), 2,
      anon_sym_LBRACK,
      sym_shell_command,
    STATE(53), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(162), 2,
      sym_param,
      sym_mount_param,
  [1564] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(370), 1,
      anon_sym_DOLLAR2,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(178), 1,
      sym__immediate_expansion,
    STATE(54), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [1587] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(375), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(373), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1604] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      anon_sym_DOLLAR2,
    ACTIONS(358), 1,
      aux_sym_image_alias_token2,
    ACTIONS(377), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_image_alias_repeat1,
    STATE(159), 1,
      sym__immediate_expansion,
    STATE(164), 1,
      sym__imm_expansion,
  [1629] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    ACTIONS(383), 1,
      aux_sym_expose_port_token1,
    STATE(50), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(57), 1,
      sym_line_continuation,
    STATE(173), 2,
      sym_expansion,
      sym_expose_port,
  [1652] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(350), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(352), 1,
      anon_sym_DOLLAR2,
    ACTIONS(385), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(58), 1,
      sym_line_continuation,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(178), 1,
      sym__immediate_expansion,
  [1677] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(387), 1,
      anon_sym_NONE,
    ACTIONS(389), 1,
      anon_sym_DASH_DASH,
    STATE(59), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(219), 1,
      sym_param,
    STATE(247), 1,
      sym_cmd_instruction,
  [1702] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 1,
      anon_sym_DOLLAR2,
    ACTIONS(396), 1,
      aux_sym_image_alias_token2,
    STATE(159), 1,
      sym__immediate_expansion,
    STATE(164), 1,
      sym__imm_expansion,
    STATE(60), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1725] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(399), 1,
      aux_sym_path_token2,
    ACTIONS(402), 1,
      anon_sym_DOLLAR2,
    STATE(168), 1,
      sym__imm_expansion,
    STATE(193), 1,
      sym__immediate_expansion,
    STATE(61), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1748] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      aux_sym_path_token1,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_expansion,
    STATE(62), 1,
      sym_line_continuation,
    STATE(190), 1,
      sym_path,
    STATE(236), 1,
      sym_string_array,
  [1773] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(322), 1,
      aux_sym_path_token2,
    ACTIONS(324), 1,
      anon_sym_DOLLAR2,
    ACTIONS(411), 1,
      sym__non_newline_whitespace,
    STATE(46), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(184), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_expansion,
  [1798] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      aux_sym_path_token2,
    ACTIONS(415), 1,
      anon_sym_DOLLAR2,
    STATE(61), 1,
      aux_sym_path_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(168), 1,
      sym__imm_expansion,
    STATE(193), 1,
      sym__immediate_expansion,
  [1823] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      aux_sym_path_token2,
    ACTIONS(415), 1,
      anon_sym_DOLLAR2,
    STATE(64), 1,
      aux_sym_path_repeat1,
    STATE(65), 1,
      sym_line_continuation,
    STATE(168), 1,
      sym__imm_expansion,
    STATE(193), 1,
      sym__immediate_expansion,
  [1848] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      aux_sym_path_token1,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_expansion,
    STATE(66), 1,
      sym_line_continuation,
    STATE(98), 1,
      aux_sym_add_instruction_repeat1,
    STATE(198), 1,
      sym_path,
  [1870] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      aux_sym_path_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_expansion,
    STATE(67), 1,
      sym_line_continuation,
    STATE(99), 1,
      aux_sym_add_instruction_repeat1,
    STATE(269), 1,
      sym_path,
  [1892] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      aux_sym_path_token1,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_expansion,
    STATE(68), 1,
      sym_line_continuation,
    STATE(98), 1,
      aux_sym_add_instruction_repeat1,
    STATE(199), 1,
      sym_path,
  [1914] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      aux_sym_path_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_expansion,
    STATE(69), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(269), 1,
      sym_path,
  [1936] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 1,
      aux_sym__env_key_token1,
    STATE(70), 1,
      sym_line_continuation,
    STATE(90), 1,
      aux_sym_env_instruction_repeat1,
    STATE(207), 1,
      sym_env_pair,
    STATE(274), 1,
      sym__env_key,
  [1958] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      aux_sym__env_key_token1,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(421), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1974] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(72), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(425), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [1990] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_mount_param_repeat1,
    STATE(73), 1,
      sym_line_continuation,
    ACTIONS(430), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [2008] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(74), 1,
      sym_line_continuation,
    ACTIONS(334), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(332), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2024] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2040] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(304), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(302), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2056] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_mount_param_repeat1,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(434), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [2074] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(375), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(373), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2090] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(436), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(440), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2108] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(389), 1,
      anon_sym_DASH_DASH,
    STATE(80), 1,
      sym_line_continuation,
    STATE(128), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(219), 1,
      sym_param,
    STATE(273), 1,
      sym_cmd_instruction,
  [2130] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_label_pair_token1,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(332), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2146] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      aux_sym_label_pair_token1,
    STATE(82), 1,
      sym_line_continuation,
    ACTIONS(328), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2162] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym__env_key_token1,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(332), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2178] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      aux_sym_label_pair_token1,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(421), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2194] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      aux_sym__env_key_token1,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(328), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2210] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(304), 1,
      aux_sym_label_pair_token1,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(302), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2226] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_label_pair_token1,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(373), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2242] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(304), 1,
      aux_sym__env_key_token1,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(302), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2258] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(444), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2274] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(448), 1,
      aux_sym__env_key_token1,
    STATE(207), 1,
      sym_env_pair,
    STATE(274), 1,
      sym__env_key,
    STATE(90), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2294] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(175), 1,
      anon_sym_DOLLAR2,
    ACTIONS(177), 1,
      aux_sym_image_tag_token1,
    STATE(17), 1,
      aux_sym_image_tag_repeat1,
    STATE(74), 1,
      sym__imm_expansion,
    STATE(89), 1,
      sym__immediate_expansion,
    STATE(91), 1,
      sym_line_continuation,
  [2316] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      anon_sym_DOLLAR2,
    ACTIONS(229), 1,
      aux_sym_image_digest_token1,
    STATE(26), 1,
      aux_sym_image_digest_repeat1,
    STATE(92), 1,
      sym_line_continuation,
    STATE(103), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [2338] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym__env_key_token1,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(373), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2354] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      aux_sym__env_key_token1,
    STATE(70), 1,
      aux_sym_env_instruction_repeat1,
    STATE(94), 1,
      sym_line_continuation,
    STATE(207), 1,
      sym_env_pair,
    STATE(224), 1,
      sym__env_key,
    STATE(233), 1,
      sym__spaced_env_pair,
  [2376] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      aux_sym_image_name_token1,
    STATE(11), 1,
      sym_expansion,
    STATE(44), 1,
      sym_image_name,
    STATE(95), 1,
      sym_line_continuation,
    STATE(212), 1,
      sym_image_spec,
  [2398] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      aux_sym_path_token1,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_expansion,
    STATE(96), 1,
      sym_line_continuation,
    STATE(98), 1,
      aux_sym_add_instruction_repeat1,
    STATE(225), 1,
      sym_path,
  [2420] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      aux_sym_expose_port_token1,
    STATE(57), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(97), 1,
      sym_line_continuation,
    STATE(173), 2,
      sym_expansion,
      sym_expose_port,
  [2440] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(457), 1,
      aux_sym_path_token1,
    ACTIONS(460), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      sym_expansion,
    STATE(269), 1,
      sym_path,
    STATE(98), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [2460] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      aux_sym_path_token1,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_expansion,
    STATE(98), 1,
      aux_sym_add_instruction_repeat1,
    STATE(99), 1,
      sym_line_continuation,
    STATE(223), 1,
      sym_path,
  [2482] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(463), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(465), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym_expansion,
    STATE(100), 1,
      sym_line_continuation,
    STATE(243), 1,
      sym__stopsignal_value,
  [2501] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      aux_sym_image_alias_token1,
    STATE(52), 1,
      sym_expansion,
    STATE(101), 1,
      sym_line_continuation,
    STATE(250), 1,
      sym_image_alias,
  [2520] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      aux_sym_from_instruction_token2,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2535] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_from_instruction_token2,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(332), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2550] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(373), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2563] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(298), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2576] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      aux_sym_image_alias_token1,
    STATE(52), 1,
      sym_expansion,
    STATE(106), 1,
      sym_line_continuation,
    STATE(268), 1,
      sym_image_alias,
  [2595] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(320), 1,
      anon_sym_AT,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      aux_sym_from_instruction_token2,
    STATE(107), 1,
      sym_line_continuation,
    STATE(208), 1,
      sym_image_digest,
  [2614] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(302), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2627] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      anon_sym_DOLLAR2,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(375), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2642] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(328), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2655] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(332), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2668] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(300), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2683] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(302), 1,
      anon_sym_DOLLAR2,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(304), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2698] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(328), 1,
      anon_sym_DOLLAR2,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2713] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(477), 1,
      aux_sym_label_pair_token1,
    STATE(215), 1,
      sym_label_pair,
    STATE(115), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2730] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      anon_sym_DOLLAR2,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(334), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2745] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(334), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2760] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(480), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(482), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      sym_expansion,
    STATE(118), 1,
      sym_line_continuation,
    STATE(203), 1,
      sym__user_name_or_group,
  [2779] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(484), 1,
      aux_sym_path_token1,
    ACTIONS(486), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_expansion,
    STATE(119), 1,
      sym_line_continuation,
    STATE(239), 1,
      sym_path,
  [2798] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      anon_sym_DOLLAR2,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(488), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2813] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(328), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(330), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2828] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      aux_sym_path_token1,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_expansion,
    STATE(122), 1,
      sym_line_continuation,
    STATE(222), 1,
      sym_path,
  [2847] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(304), 1,
      aux_sym_from_instruction_token2,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(302), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2862] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(492), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2875] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(494), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2888] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(425), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [2903] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(498), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [2918] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(504), 1,
      anon_sym_DASH_DASH,
    STATE(219), 1,
      sym_param,
    STATE(128), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2935] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      aux_sym_label_pair_token1,
    STATE(115), 1,
      aux_sym_label_instruction_repeat1,
    STATE(129), 1,
      sym_line_continuation,
    STATE(215), 1,
      sym_label_pair,
  [2954] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_from_instruction_token2,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(373), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2969] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(302), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(304), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2984] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(513), 1,
      aux_sym_from_instruction_token2,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(511), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2999] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(515), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(517), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3014] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(373), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(375), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3029] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(304), 1,
      aux_sym_path_token2,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(302), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3043] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      sym_variable,
    STATE(82), 1,
      sym__expansion_body,
    STATE(136), 1,
      sym_line_continuation,
  [3059] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(373), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3071] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      sym_variable,
    STATE(85), 1,
      sym__expansion_body,
    STATE(138), 1,
      sym_line_continuation,
  [3087] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      sym_variable,
    STATE(47), 1,
      sym__expansion_body,
    STATE(139), 1,
      sym_line_continuation,
  [3103] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    ACTIONS(533), 1,
      sym_variable,
    STATE(112), 1,
      sym__expansion_body,
    STATE(140), 1,
      sym_line_continuation,
  [3119] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(298), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3131] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      sym_variable,
    STATE(110), 1,
      sym__expansion_body,
    STATE(142), 1,
      sym_line_continuation,
  [3147] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_COMMA2,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym_line_continuation,
    STATE(169), 1,
      aux_sym_string_array_repeat1,
  [3163] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(302), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3175] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 1,
      sym_shell_command,
    STATE(145), 1,
      sym_line_continuation,
    STATE(246), 1,
      sym_string_array,
  [3191] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(373), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3203] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      aux_sym_label_pair_token1,
    STATE(129), 1,
      aux_sym_label_instruction_repeat1,
    STATE(147), 1,
      sym_line_continuation,
    STATE(215), 1,
      sym_label_pair,
  [3219] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(298), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3231] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(302), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3243] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_path_token2,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(373), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3257] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      sym__non_newline_whitespace,
    STATE(151), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [3271] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      sym_variable,
    STATE(152), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym__expansion_body,
  [3287] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    ACTIONS(533), 1,
      sym_variable,
    STATE(114), 1,
      sym__expansion_body,
    STATE(153), 1,
      sym_line_continuation,
  [3303] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(556), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3315] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(328), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3327] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(332), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3339] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    ACTIONS(560), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_line_continuation,
    STATE(179), 1,
      sym_double_quoted_string,
  [3355] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      sym_variable,
    STATE(41), 1,
      sym__expansion_body,
    STATE(158), 1,
      sym_line_continuation,
  [3371] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(562), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3383] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym_path_token2,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3397] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
    STATE(161), 1,
      sym_line_continuation,
    STATE(182), 1,
      sym__expansion_body,
  [3413] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(568), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [3425] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3437] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(332), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3449] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(304), 1,
      aux_sym_path_token2,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(302), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3463] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    ACTIONS(572), 1,
      sym_variable,
    STATE(102), 1,
      sym__expansion_body,
    STATE(166), 1,
      sym_line_continuation,
  [3479] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      aux_sym_path_token2,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(328), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3493] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_path_token2,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3507] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(574), 1,
      anon_sym_COMMA2,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(169), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3521] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    ACTIONS(581), 1,
      sym_variable,
    STATE(163), 1,
      sym__expansion_body,
    STATE(170), 1,
      sym_line_continuation,
  [3537] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(585), 1,
      sym_variable,
    STATE(167), 1,
      sym__expansion_body,
    STATE(171), 1,
      sym_line_continuation,
  [3553] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      sym_variable,
    STATE(105), 1,
      sym__expansion_body,
    STATE(172), 1,
      sym_line_continuation,
  [3569] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(587), 1,
      anon_sym_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(589), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3583] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(593), 1,
      sym_variable,
    STATE(121), 1,
      sym__expansion_body,
    STATE(174), 1,
      sym_line_continuation,
  [3599] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
    ACTIONS(581), 1,
      sym_variable,
    STATE(141), 1,
      sym__expansion_body,
    STATE(175), 1,
      sym_line_continuation,
  [3615] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_variable,
    STATE(155), 1,
      sym__expansion_body,
    STATE(176), 1,
      sym_line_continuation,
  [3631] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(585), 1,
      sym_variable,
    STATE(160), 1,
      sym__expansion_body,
    STATE(177), 1,
      sym_line_continuation,
  [3647] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(599), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3659] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_COMMA2,
    ACTIONS(601), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      aux_sym_string_array_repeat1,
    STATE(179), 1,
      sym_line_continuation,
  [3675] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      sym__non_newline_whitespace,
    STATE(151), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(180), 1,
      sym_line_continuation,
  [3691] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(302), 1,
      anon_sym_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(304), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3705] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(300), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3719] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      sym_variable,
    STATE(183), 1,
      sym_line_continuation,
    STATE(185), 1,
      sym__expansion_body,
  [3735] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_path_token2,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3749] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      aux_sym_path_token2,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(328), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3763] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(488), 1,
      aux_sym_path_token2,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(490), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3777] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(375), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3791] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(607), 3,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      sym_shell_command,
  [3803] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(609), 1,
      sym_shell_command,
    STATE(189), 1,
      sym_line_continuation,
    STATE(234), 1,
      sym_string_array,
  [3819] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(605), 1,
      sym__non_newline_whitespace,
    ACTIONS(611), 1,
      anon_sym_LF,
    STATE(180), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(190), 1,
      sym_line_continuation,
  [3835] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      aux_sym_path_token2,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(298), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3849] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      sym_variable,
    STATE(75), 1,
      sym__expansion_body,
    STATE(192), 1,
      sym_line_continuation,
  [3865] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(488), 1,
      aux_sym_path_token2,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(490), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3879] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(617), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(619), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3893] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_path_token2,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(373), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3907] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_variable,
    STATE(148), 1,
      sym__expansion_body,
    STATE(196), 1,
      sym_line_continuation,
  [3923] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      aux_sym_image_name_token1,
    ACTIONS(621), 1,
      anon_sym_DOLLAR,
    STATE(197), 1,
      sym_line_continuation,
  [3936] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      sym__non_newline_whitespace,
    STATE(198), 1,
      sym_line_continuation,
  [3949] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      sym__non_newline_whitespace,
    ACTIONS(627), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_line_continuation,
  [3962] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      aux_sym_label_pair_token1,
    STATE(200), 1,
      sym_line_continuation,
  [3975] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 1,
      aux_sym_label_pair_token1,
    STATE(201), 1,
      sym_line_continuation,
  [3988] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      aux_sym__env_key_token1,
    STATE(202), 1,
      sym_line_continuation,
  [4001] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_line_continuation,
  [4014] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      aux_sym_path_token1,
    ACTIONS(621), 1,
      anon_sym_DOLLAR,
    STATE(204), 1,
      sym_line_continuation,
  [4027] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 1,
      aux_sym__env_key_token1,
    STATE(205), 1,
      sym_line_continuation,
  [4040] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(641), 1,
      aux_sym_path_token1,
    ACTIONS(643), 1,
      anon_sym_DOLLAR,
    STATE(206), 1,
      sym_line_continuation,
  [4053] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      aux_sym__env_key_token1,
    STATE(207), 1,
      sym_line_continuation,
  [4066] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(649), 1,
      anon_sym_LF,
    ACTIONS(651), 1,
      aux_sym_from_instruction_token2,
    STATE(208), 1,
      sym_line_continuation,
  [4079] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(653), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [4090] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym_line_continuation,
  [4103] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(621), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4114] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 1,
      aux_sym_from_instruction_token2,
    STATE(212), 1,
      sym_line_continuation,
  [4127] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(665), 1,
      aux_sym_from_instruction_token2,
    STATE(213), 1,
      sym_line_continuation,
  [4140] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(667), 1,
      aux_sym_mount_param_param_token1,
    STATE(126), 1,
      sym_mount_param_param,
    STATE(214), 1,
      sym_line_continuation,
  [4153] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(671), 1,
      aux_sym_label_pair_token1,
    STATE(215), 1,
      sym_line_continuation,
  [4166] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(577), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4177] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    STATE(217), 1,
      sym_line_continuation,
    STATE(256), 1,
      sym_string_array,
  [4190] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(218), 1,
      sym_line_continuation,
    ACTIONS(633), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4201] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(219), 1,
      sym_line_continuation,
    ACTIONS(673), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4212] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 1,
      aux_sym_from_instruction_token2,
    STATE(220), 1,
      sym_line_continuation,
  [4225] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      aux_sym_param_token1,
    ACTIONS(681), 1,
      anon_sym_mount,
    STATE(221), 1,
      sym_line_continuation,
  [4238] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(222), 1,
      sym_line_continuation,
    ACTIONS(547), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4249] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      sym__non_newline_whitespace,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(223), 1,
      sym_line_continuation,
  [4262] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_EQ,
    ACTIONS(687), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(224), 1,
      sym_line_continuation,
  [4275] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      sym__non_newline_whitespace,
    ACTIONS(689), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_line_continuation,
  [4288] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(691), 1,
      anon_sym_LF,
    ACTIONS(693), 1,
      aux_sym__env_key_token1,
    STATE(226), 1,
      sym_line_continuation,
  [4301] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(695), 1,
      anon_sym_LF,
    ACTIONS(697), 1,
      aux_sym_label_pair_token1,
    STATE(227), 1,
      sym_line_continuation,
  [4314] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_double_quoted_string,
    STATE(228), 1,
      sym_line_continuation,
  [4327] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(229), 1,
      sym_line_continuation,
    ACTIONS(629), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4338] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(667), 1,
      aux_sym_mount_param_param_token1,
    STATE(77), 1,
      sym_mount_param_param,
    STATE(230), 1,
      sym_line_continuation,
  [4351] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(699), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym_line_continuation,
  [4361] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_line_continuation,
  [4371] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(703), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [4381] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_line_continuation,
  [4391] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(707), 1,
      anon_sym_LF,
    STATE(235), 1,
      sym_line_continuation,
  [4401] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_line_continuation,
  [4411] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(711), 1,
      aux_sym_arg_instruction_token2,
    STATE(237), 1,
      sym_line_continuation,
  [4421] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(653), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_line_continuation,
  [4431] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(239), 1,
      sym_line_continuation,
  [4441] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(715), 1,
      aux_sym_mount_param_param_token1,
    STATE(240), 1,
      sym_line_continuation,
  [4451] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(717), 1,
      anon_sym_LF,
    STATE(241), 1,
      sym_line_continuation,
  [4461] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      aux_sym_param_token1,
    STATE(242), 1,
      sym_line_continuation,
  [4471] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(721), 1,
      anon_sym_LF,
    STATE(243), 1,
      sym_line_continuation,
  [4481] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_EQ,
    STATE(244), 1,
      sym_line_continuation,
  [4491] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(245), 1,
      sym_line_continuation,
  [4501] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(727), 1,
      anon_sym_LF,
    STATE(246), 1,
      sym_line_continuation,
  [4511] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(247), 1,
      sym_line_continuation,
  [4521] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(731), 1,
      anon_sym_EQ,
    STATE(248), 1,
      sym_line_continuation,
  [4531] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      anon_sym_LF,
    STATE(249), 1,
      sym_line_continuation,
  [4541] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(735), 1,
      anon_sym_LF,
    STATE(250), 1,
      sym_line_continuation,
  [4551] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      anon_sym_LF,
    STATE(251), 1,
      sym_line_continuation,
  [4561] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(737), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(252), 1,
      sym_line_continuation,
  [4571] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(253), 1,
      sym_line_continuation,
  [4581] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym_line_continuation,
  [4591] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(743), 1,
      aux_sym_param_token2,
    STATE(255), 1,
      sym_line_continuation,
  [4601] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(745), 1,
      anon_sym_LF,
    STATE(256), 1,
      sym_line_continuation,
  [4611] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(747), 1,
      anon_sym_LF,
    STATE(257), 1,
      sym_line_continuation,
  [4621] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      anon_sym_LF,
    STATE(258), 1,
      sym_line_continuation,
  [4631] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(751), 1,
      anon_sym_LF,
    STATE(259), 1,
      sym_line_continuation,
  [4641] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_line_continuation,
  [4651] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      aux_sym_param_token2,
    STATE(261), 1,
      sym_line_continuation,
  [4661] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(757), 1,
      anon_sym_LF,
    STATE(262), 1,
      sym_line_continuation,
  [4671] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(759), 1,
      anon_sym_LF,
    STATE(263), 1,
      sym_line_continuation,
  [4681] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym_line_continuation,
  [4691] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      sym_line_continuation,
  [4701] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      aux_sym_param_token2,
    STATE(266), 1,
      sym_line_continuation,
  [4711] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(767), 1,
      aux_sym_param_token1,
    STATE(267), 1,
      sym_line_continuation,
  [4721] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      anon_sym_LF,
    STATE(268), 1,
      sym_line_continuation,
  [4731] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(771), 1,
      sym__non_newline_whitespace,
    STATE(269), 1,
      sym_line_continuation,
  [4741] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(773), 1,
      aux_sym_param_token2,
    STATE(270), 1,
      sym_line_continuation,
  [4751] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      sym_line_continuation,
  [4761] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_line_continuation,
  [4771] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(779), 1,
      anon_sym_LF,
    STATE(273), 1,
      sym_line_continuation,
  [4781] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_EQ,
    STATE(274), 1,
      sym_line_continuation,
  [4791] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      sym_line_continuation,
  [4801] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(783), 1,
      anon_sym_LF,
    STATE(276), 1,
      sym_line_continuation,
  [4811] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(783), 1,
      anon_sym_LF,
    STATE(277), 1,
      sym_line_continuation,
  [4821] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      sym_line_continuation,
  [4831] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(787), 1,
      anon_sym_LF,
    STATE(279), 1,
      sym_line_continuation,
  [4841] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_line_continuation,
  [4851] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(791), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym_line_continuation,
  [4861] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_line_continuation,
  [4871] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(795), 1,
      anon_sym_EQ,
    STATE(283), 1,
      sym_line_continuation,
  [4881] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_line_continuation,
  [4891] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(799), 1,
      aux_sym__expansion_body_token1,
    STATE(285), 1,
      sym_line_continuation,
  [4901] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_line_continuation,
  [4911] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_line_continuation,
  [4921] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(805), 1,
      aux_sym__expansion_body_token1,
    STATE(288), 1,
      sym_line_continuation,
  [4931] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(807), 1,
      anon_sym_EQ,
    STATE(289), 1,
      sym_line_continuation,
  [4941] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(809), 1,
      aux_sym__expansion_body_token1,
    STATE(290), 1,
      sym_line_continuation,
  [4951] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      anon_sym_EQ,
    STATE(291), 1,
      sym_line_continuation,
  [4961] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(813), 1,
      aux_sym__expansion_body_token1,
    STATE(292), 1,
      sym_line_continuation,
  [4971] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(815), 1,
      anon_sym_EQ,
    STATE(293), 1,
      sym_line_continuation,
  [4981] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(817), 1,
      aux_sym__expansion_body_token1,
    STATE(294), 1,
      sym_line_continuation,
  [4991] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(819), 1,
      aux_sym__expansion_body_token1,
    STATE(295), 1,
      sym_line_continuation,
  [5001] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(821), 1,
      aux_sym__expansion_body_token1,
    STATE(296), 1,
      sym_line_continuation,
  [5011] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(823), 1,
      aux_sym__expansion_body_token1,
    STATE(297), 1,
      sym_line_continuation,
  [5021] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(825), 1,
      aux_sym__expansion_body_token1,
    STATE(298), 1,
      sym_line_continuation,
  [5031] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(827), 1,
      aux_sym__expansion_body_token1,
    STATE(299), 1,
      sym_line_continuation,
  [5041] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(829), 1,
      aux_sym__expansion_body_token1,
    STATE(300), 1,
      sym_line_continuation,
  [5051] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      aux_sym__expansion_body_token1,
    STATE(301), 1,
      sym_line_continuation,
  [5061] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(833), 1,
      aux_sym__expansion_body_token1,
    STATE(302), 1,
      sym_line_continuation,
  [5071] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(835), 1,
      aux_sym_param_token1,
    STATE(303), 1,
      sym_line_continuation,
  [5081] = 1,
    ACTIONS(837), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 280,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 346,
  [SMALL_STATE(8)] = 374,
  [SMALL_STATE(9)] = 404,
  [SMALL_STATE(10)] = 434,
  [SMALL_STATE(11)] = 464,
  [SMALL_STATE(12)] = 494,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 638,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 696,
  [SMALL_STATE(20)] = 723,
  [SMALL_STATE(21)] = 750,
  [SMALL_STATE(22)] = 777,
  [SMALL_STATE(23)] = 805,
  [SMALL_STATE(24)] = 833,
  [SMALL_STATE(25)] = 861,
  [SMALL_STATE(26)] = 889,
  [SMALL_STATE(27)] = 917,
  [SMALL_STATE(28)] = 943,
  [SMALL_STATE(29)] = 969,
  [SMALL_STATE(30)] = 995,
  [SMALL_STATE(31)] = 1023,
  [SMALL_STATE(32)] = 1049,
  [SMALL_STATE(33)] = 1075,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1127,
  [SMALL_STATE(36)] = 1155,
  [SMALL_STATE(37)] = 1183,
  [SMALL_STATE(38)] = 1209,
  [SMALL_STATE(39)] = 1237,
  [SMALL_STATE(40)] = 1263,
  [SMALL_STATE(41)] = 1291,
  [SMALL_STATE(42)] = 1308,
  [SMALL_STATE(43)] = 1325,
  [SMALL_STATE(44)] = 1348,
  [SMALL_STATE(45)] = 1373,
  [SMALL_STATE(46)] = 1398,
  [SMALL_STATE(47)] = 1423,
  [SMALL_STATE(48)] = 1440,
  [SMALL_STATE(49)] = 1457,
  [SMALL_STATE(50)] = 1474,
  [SMALL_STATE(51)] = 1495,
  [SMALL_STATE(52)] = 1520,
  [SMALL_STATE(53)] = 1545,
  [SMALL_STATE(54)] = 1564,
  [SMALL_STATE(55)] = 1587,
  [SMALL_STATE(56)] = 1604,
  [SMALL_STATE(57)] = 1629,
  [SMALL_STATE(58)] = 1652,
  [SMALL_STATE(59)] = 1677,
  [SMALL_STATE(60)] = 1702,
  [SMALL_STATE(61)] = 1725,
  [SMALL_STATE(62)] = 1748,
  [SMALL_STATE(63)] = 1773,
  [SMALL_STATE(64)] = 1798,
  [SMALL_STATE(65)] = 1823,
  [SMALL_STATE(66)] = 1848,
  [SMALL_STATE(67)] = 1870,
  [SMALL_STATE(68)] = 1892,
  [SMALL_STATE(69)] = 1914,
  [SMALL_STATE(70)] = 1936,
  [SMALL_STATE(71)] = 1958,
  [SMALL_STATE(72)] = 1974,
  [SMALL_STATE(73)] = 1990,
  [SMALL_STATE(74)] = 2008,
  [SMALL_STATE(75)] = 2024,
  [SMALL_STATE(76)] = 2040,
  [SMALL_STATE(77)] = 2056,
  [SMALL_STATE(78)] = 2074,
  [SMALL_STATE(79)] = 2090,
  [SMALL_STATE(80)] = 2108,
  [SMALL_STATE(81)] = 2130,
  [SMALL_STATE(82)] = 2146,
  [SMALL_STATE(83)] = 2162,
  [SMALL_STATE(84)] = 2178,
  [SMALL_STATE(85)] = 2194,
  [SMALL_STATE(86)] = 2210,
  [SMALL_STATE(87)] = 2226,
  [SMALL_STATE(88)] = 2242,
  [SMALL_STATE(89)] = 2258,
  [SMALL_STATE(90)] = 2274,
  [SMALL_STATE(91)] = 2294,
  [SMALL_STATE(92)] = 2316,
  [SMALL_STATE(93)] = 2338,
  [SMALL_STATE(94)] = 2354,
  [SMALL_STATE(95)] = 2376,
  [SMALL_STATE(96)] = 2398,
  [SMALL_STATE(97)] = 2420,
  [SMALL_STATE(98)] = 2440,
  [SMALL_STATE(99)] = 2460,
  [SMALL_STATE(100)] = 2482,
  [SMALL_STATE(101)] = 2501,
  [SMALL_STATE(102)] = 2520,
  [SMALL_STATE(103)] = 2535,
  [SMALL_STATE(104)] = 2550,
  [SMALL_STATE(105)] = 2563,
  [SMALL_STATE(106)] = 2576,
  [SMALL_STATE(107)] = 2595,
  [SMALL_STATE(108)] = 2614,
  [SMALL_STATE(109)] = 2627,
  [SMALL_STATE(110)] = 2642,
  [SMALL_STATE(111)] = 2655,
  [SMALL_STATE(112)] = 2668,
  [SMALL_STATE(113)] = 2683,
  [SMALL_STATE(114)] = 2698,
  [SMALL_STATE(115)] = 2713,
  [SMALL_STATE(116)] = 2730,
  [SMALL_STATE(117)] = 2745,
  [SMALL_STATE(118)] = 2760,
  [SMALL_STATE(119)] = 2779,
  [SMALL_STATE(120)] = 2798,
  [SMALL_STATE(121)] = 2813,
  [SMALL_STATE(122)] = 2828,
  [SMALL_STATE(123)] = 2847,
  [SMALL_STATE(124)] = 2862,
  [SMALL_STATE(125)] = 2875,
  [SMALL_STATE(126)] = 2888,
  [SMALL_STATE(127)] = 2903,
  [SMALL_STATE(128)] = 2918,
  [SMALL_STATE(129)] = 2935,
  [SMALL_STATE(130)] = 2954,
  [SMALL_STATE(131)] = 2969,
  [SMALL_STATE(132)] = 2984,
  [SMALL_STATE(133)] = 2999,
  [SMALL_STATE(134)] = 3014,
  [SMALL_STATE(135)] = 3029,
  [SMALL_STATE(136)] = 3043,
  [SMALL_STATE(137)] = 3059,
  [SMALL_STATE(138)] = 3071,
  [SMALL_STATE(139)] = 3087,
  [SMALL_STATE(140)] = 3103,
  [SMALL_STATE(141)] = 3119,
  [SMALL_STATE(142)] = 3131,
  [SMALL_STATE(143)] = 3147,
  [SMALL_STATE(144)] = 3163,
  [SMALL_STATE(145)] = 3175,
  [SMALL_STATE(146)] = 3191,
  [SMALL_STATE(147)] = 3203,
  [SMALL_STATE(148)] = 3219,
  [SMALL_STATE(149)] = 3231,
  [SMALL_STATE(150)] = 3243,
  [SMALL_STATE(151)] = 3257,
  [SMALL_STATE(152)] = 3271,
  [SMALL_STATE(153)] = 3287,
  [SMALL_STATE(154)] = 3303,
  [SMALL_STATE(155)] = 3315,
  [SMALL_STATE(156)] = 3327,
  [SMALL_STATE(157)] = 3339,
  [SMALL_STATE(158)] = 3355,
  [SMALL_STATE(159)] = 3371,
  [SMALL_STATE(160)] = 3383,
  [SMALL_STATE(161)] = 3397,
  [SMALL_STATE(162)] = 3413,
  [SMALL_STATE(163)] = 3425,
  [SMALL_STATE(164)] = 3437,
  [SMALL_STATE(165)] = 3449,
  [SMALL_STATE(166)] = 3463,
  [SMALL_STATE(167)] = 3479,
  [SMALL_STATE(168)] = 3493,
  [SMALL_STATE(169)] = 3507,
  [SMALL_STATE(170)] = 3521,
  [SMALL_STATE(171)] = 3537,
  [SMALL_STATE(172)] = 3553,
  [SMALL_STATE(173)] = 3569,
  [SMALL_STATE(174)] = 3583,
  [SMALL_STATE(175)] = 3599,
  [SMALL_STATE(176)] = 3615,
  [SMALL_STATE(177)] = 3631,
  [SMALL_STATE(178)] = 3647,
  [SMALL_STATE(179)] = 3659,
  [SMALL_STATE(180)] = 3675,
  [SMALL_STATE(181)] = 3691,
  [SMALL_STATE(182)] = 3705,
  [SMALL_STATE(183)] = 3719,
  [SMALL_STATE(184)] = 3735,
  [SMALL_STATE(185)] = 3749,
  [SMALL_STATE(186)] = 3763,
  [SMALL_STATE(187)] = 3777,
  [SMALL_STATE(188)] = 3791,
  [SMALL_STATE(189)] = 3803,
  [SMALL_STATE(190)] = 3819,
  [SMALL_STATE(191)] = 3835,
  [SMALL_STATE(192)] = 3849,
  [SMALL_STATE(193)] = 3865,
  [SMALL_STATE(194)] = 3879,
  [SMALL_STATE(195)] = 3893,
  [SMALL_STATE(196)] = 3907,
  [SMALL_STATE(197)] = 3923,
  [SMALL_STATE(198)] = 3936,
  [SMALL_STATE(199)] = 3949,
  [SMALL_STATE(200)] = 3962,
  [SMALL_STATE(201)] = 3975,
  [SMALL_STATE(202)] = 3988,
  [SMALL_STATE(203)] = 4001,
  [SMALL_STATE(204)] = 4014,
  [SMALL_STATE(205)] = 4027,
  [SMALL_STATE(206)] = 4040,
  [SMALL_STATE(207)] = 4053,
  [SMALL_STATE(208)] = 4066,
  [SMALL_STATE(209)] = 4079,
  [SMALL_STATE(210)] = 4090,
  [SMALL_STATE(211)] = 4103,
  [SMALL_STATE(212)] = 4114,
  [SMALL_STATE(213)] = 4127,
  [SMALL_STATE(214)] = 4140,
  [SMALL_STATE(215)] = 4153,
  [SMALL_STATE(216)] = 4166,
  [SMALL_STATE(217)] = 4177,
  [SMALL_STATE(218)] = 4190,
  [SMALL_STATE(219)] = 4201,
  [SMALL_STATE(220)] = 4212,
  [SMALL_STATE(221)] = 4225,
  [SMALL_STATE(222)] = 4238,
  [SMALL_STATE(223)] = 4249,
  [SMALL_STATE(224)] = 4262,
  [SMALL_STATE(225)] = 4275,
  [SMALL_STATE(226)] = 4288,
  [SMALL_STATE(227)] = 4301,
  [SMALL_STATE(228)] = 4314,
  [SMALL_STATE(229)] = 4327,
  [SMALL_STATE(230)] = 4338,
  [SMALL_STATE(231)] = 4351,
  [SMALL_STATE(232)] = 4361,
  [SMALL_STATE(233)] = 4371,
  [SMALL_STATE(234)] = 4381,
  [SMALL_STATE(235)] = 4391,
  [SMALL_STATE(236)] = 4401,
  [SMALL_STATE(237)] = 4411,
  [SMALL_STATE(238)] = 4421,
  [SMALL_STATE(239)] = 4431,
  [SMALL_STATE(240)] = 4441,
  [SMALL_STATE(241)] = 4451,
  [SMALL_STATE(242)] = 4461,
  [SMALL_STATE(243)] = 4471,
  [SMALL_STATE(244)] = 4481,
  [SMALL_STATE(245)] = 4491,
  [SMALL_STATE(246)] = 4501,
  [SMALL_STATE(247)] = 4511,
  [SMALL_STATE(248)] = 4521,
  [SMALL_STATE(249)] = 4531,
  [SMALL_STATE(250)] = 4541,
  [SMALL_STATE(251)] = 4551,
  [SMALL_STATE(252)] = 4561,
  [SMALL_STATE(253)] = 4571,
  [SMALL_STATE(254)] = 4581,
  [SMALL_STATE(255)] = 4591,
  [SMALL_STATE(256)] = 4601,
  [SMALL_STATE(257)] = 4611,
  [SMALL_STATE(258)] = 4621,
  [SMALL_STATE(259)] = 4631,
  [SMALL_STATE(260)] = 4641,
  [SMALL_STATE(261)] = 4651,
  [SMALL_STATE(262)] = 4661,
  [SMALL_STATE(263)] = 4671,
  [SMALL_STATE(264)] = 4681,
  [SMALL_STATE(265)] = 4691,
  [SMALL_STATE(266)] = 4701,
  [SMALL_STATE(267)] = 4711,
  [SMALL_STATE(268)] = 4721,
  [SMALL_STATE(269)] = 4731,
  [SMALL_STATE(270)] = 4741,
  [SMALL_STATE(271)] = 4751,
  [SMALL_STATE(272)] = 4761,
  [SMALL_STATE(273)] = 4771,
  [SMALL_STATE(274)] = 4781,
  [SMALL_STATE(275)] = 4791,
  [SMALL_STATE(276)] = 4801,
  [SMALL_STATE(277)] = 4811,
  [SMALL_STATE(278)] = 4821,
  [SMALL_STATE(279)] = 4831,
  [SMALL_STATE(280)] = 4841,
  [SMALL_STATE(281)] = 4851,
  [SMALL_STATE(282)] = 4861,
  [SMALL_STATE(283)] = 4871,
  [SMALL_STATE(284)] = 4881,
  [SMALL_STATE(285)] = 4891,
  [SMALL_STATE(286)] = 4901,
  [SMALL_STATE(287)] = 4911,
  [SMALL_STATE(288)] = 4921,
  [SMALL_STATE(289)] = 4931,
  [SMALL_STATE(290)] = 4941,
  [SMALL_STATE(291)] = 4951,
  [SMALL_STATE(292)] = 4961,
  [SMALL_STATE(293)] = 4971,
  [SMALL_STATE(294)] = 4981,
  [SMALL_STATE(295)] = 4991,
  [SMALL_STATE(296)] = 5001,
  [SMALL_STATE(297)] = 5011,
  [SMALL_STATE(298)] = 5021,
  [SMALL_STATE(299)] = 5031,
  [SMALL_STATE(300)] = 5041,
  [SMALL_STATE(301)] = 5051,
  [SMALL_STATE(302)] = 5061,
  [SMALL_STATE(303)] = 5071,
  [SMALL_STATE(304)] = 5081,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(139),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(49),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(138),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(71),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(136),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(84),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(192),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(89),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(124),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(142),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(166),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(132),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(174),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(133),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(133),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(124),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(142),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(120),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(153),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(186),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(183),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(161),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(79),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(221),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(178),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(176),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(170),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(159),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(193),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(171),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(214),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(238),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(63),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(152),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(244),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(267),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(122),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(228),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [699] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
