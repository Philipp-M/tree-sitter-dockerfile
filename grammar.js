module.exports = grammar({
  name: "dockerfile",

  extras: ($) => [/\s+/, $.line_continuation],

  rules: {
    source_file: ($) => repeat(seq(choice($._instruction, $.comment), "\n")),

    _instruction: ($) => $.run_instruction,

    run_instruction: ($) =>
      seq(
        alias(/[rR][uU][nN]/, "RUN"),
        repeat(choice($.param, $.mount_param)),
        choice($.string_array, $.shell_command)
      ),

    expansion: ($) => seq("$", $._expansion_body),

    // we have 2 rules b/c aliases don't work as expected on seq() directly
    _immediate_expansion: ($) => alias($._imm_expansion, $.expansion),
    _imm_expansion: ($) => seq(token.immediate("$"), $._expansion_body),

    _expansion_body: ($) =>
      choice(
        $.variable,
        seq(
          token.immediate("{"),
          alias(token.immediate(/[^\}]+/), $.variable),
          token.immediate("}")
        )
      ),

    variable: ($) => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),

    // Generic parsing of options passed right after an instruction name.
    param: ($) =>
      seq(
        "--",
        field("name", token.immediate(/[a-z][-a-z]*/)),
        token.immediate("="),
        field("value", token.immediate(/[^\s]+/))
      ),

    // Specific parsing of the --mount option e.g.
    //
    //   --mount=type=cache,target=/root/.cache/go-build
    //
    mount_param: ($) =>
      seq(
        "--",
        field("name", token.immediate("mount")),
        token.immediate("="),
        field(
          "value",
          seq(
            $.mount_param_param,
            repeat(seq(token.immediate(","), $.mount_param_param))
          )
        )
      ),

    mount_param_param: ($) =>
      seq(
        token.immediate(/[^\s=,]+/),
        token.immediate("="),
        token.immediate(/[^\s=,]+/)
      ),

    image_alias: ($) =>
      seq(
        choice(/[-a-zA-Z0-9_]+/, $.expansion),
        repeat(
          choice(token.immediate(/[-a-zA-Z0-9_]+/), $._immediate_expansion)
        )
      ),

    string_array: ($) =>
      seq(
        token(prec(1,"[")),
        optional(
          seq($.double_quoted_string, repeat(seq(",", $.double_quoted_string)))
        ),
        "]"
      ),

    // shell_command: ($) => token(prec.dynamic(-1,/(?:\\\n|[^\n])+/)),
    shell_command: ($) => token(prec(-1, /(?:\\\n|[^\n])+/)),
    // shell_command: ($) => token(/.*/),
    // shell_command_dup: ($) => prec.dynamic(0, token(/(?:\\\n|[^\n])+/)),
    //   seq(
    //     repeat($._comment_line),
    //     $.shell_fragment,
    //     repeat(
    //       seq(
    //         alias($.required_line_continuation, $.line_continuation),
    //         repeat($._comment_line),
    //         $.shell_fragment
    //       )
    //     )
    //   ),

    // shell_fragment: ($) => repeat1(
    //   choice(
    //     // A shell fragment is broken into the same tokens as other
    //     // constructs because the lexer prefers the longer tokens
    //     // when it has a choice. The example below shows the tokenization
    //     // of the --mount parameter.
    //     //
    //     //   RUN --mount=foo=bar,baz=42 ls --all
    //     //       ^^     ^   ^   ^   ^
    //     //         ^^^^^ ^^^ ^^^ ^^^ ^^
    //     //       |--------param-------|
    //     //                              |--shell_command--|
    //     //
    //     /[,=-]/,
    //     /[^\\\[\n#\s,=-][^\\\n]*/,
    //     /\\[^\n,=-]/
    //   )
    // ),

    line_continuation: ($) => "\\\n",
    required_line_continuation: ($) => "\\\n",

    _comment_line: ($) => seq(alias($._anon_comment, $.comment), "\n"),

    _anon_comment: ($) => seq("#", /.*/),

    double_quoted_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            token.immediate(/[^"\n\\\$]+/),
            $.escape_sequence,
            $._immediate_expansion
          )
        ),
        '"'
      ),

    unquoted_string: ($) =>
      repeat1(
        choice(
          token.immediate(/[^\s\n\"\\\$]+/),
          token.immediate("\\ "),
          $._immediate_expansion
        )
      ),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/
          )
        )
      ),

    _non_newline_whitespace: ($) => /[\t ]+/,

    comment: ($) => /#.*/,
  },
});
