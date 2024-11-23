/// <reference types="tree-sitter-cli/dsl" />

let PREC = {
  Comma: -1,
  Function: 1,
  Default: 1,
  Priority: 2,

  Or: 3,
  And: 4,
  Cmp: 5,
  Bor: 6,
  Bxor: 7,
  Band: 8,
  Bshift: 9,
  Concat: 10,
  Arith: 11,
  ArithDiv: 12,
  Unary: 13,
  Power: 14,
  In: 15,
  Pipe: 16,

  Statement: 17,
  Program: 18
};

module.exports = grammar({
  name: "pluto",

  extras: (_) => [
    /[\n]/,
    /\s/
  ],

  externals: $ => [
    $._string_start,
    $._string_end,
    $._string_content,
  ],

  rules: {
    chunk: ($) => $._expression,

    _var: ($) => prec(PREC.Priority, choice(
      $.identifier,
      seq($._prefix_expression, "[", $._expression, "]"),
      seq($._prefix_expression, ".", $.identifier),
    )),

    _expression: ($) => prec.left(choice(
      $.nil,
      $.boolean,
      $.number,
      $.table,
      $.string,
      $._prefix_expression,
      $.binary_operation,
      $.unary_operation,
      $.new_expression,
      alias($._increment, $.increment_expression),
      alias($._pipe, $.pipe_expression)
    )),

    _prefix_expression: ($) => choice(
      seq("(", $._expression, ")"),
      $.function_call,
      $._var
    ),

    _explist: ($) => seq($._expression, any_amount_of(",", $._expression)),

    function_call: ($) => choice(
      seq($._prefix_expression, $._args),
      seq($._prefix_expression, ":", $.identifier, $._args)
    ),

    _args: ($) => choice(
      seq("(", (optional($._explist)), ")"),
      $.table
    ),

    nil: (_) => "nil",

    boolean: (_) => choice("true", "false"),

    /* from tree-sitter-lua, adjusted a lil bit */
    number: (_) => {
      const decimal_digits = /[_0-9]+/
      const signed_integer = seq((optional(choice("-", "+"))), decimal_digits)
      const decimal_exponent_part = seq((choice("e", "E")), signed_integer)

      const decimal_integer_literal = choice("0", seq(optional("0"), /[1-9]/, optional(decimal_digits)))

      const hex_digits = /[_a-fA-F0-9]+/
      const hex_exponent_part = seq(choice("p", "P"), signed_integer)

      const bin_literal = seq(choice("0b", "0B"), /[_01]+/)

      const decimal_literal = choice(
        seq(
          decimal_integer_literal,
          ".",
          optional(decimal_digits),
          optional(decimal_exponent_part)
        ),
        seq(
          ".",
          decimal_digits,
          optional(decimal_exponent_part)
        ),
        seq(
          decimal_integer_literal,
          optional(decimal_exponent_part)
        )
      )

      const hex_literal = seq(
        choice("0x", "0X"),
        hex_digits,
        optional(seq(".", hex_digits)),
        optional(hex_exponent_part)
      )

      return token(choice(decimal_literal, hex_literal, bin_literal))
    },

    table: ($) => seq("{", optional($._fieldlist), "}"),

    string: $ => seq(
      field("start", alias($._string_start, "string_start")),
      field("content", alias(optional($._string_content), "string_content")),
      field("end", alias($._string_end, "string_end")),
    ),

    _fieldlist: ($) => seq($.field, any_amount_of($._fieldsep, $.field), optional($._fieldsep)),

    field: ($) => choice(
      seq("[", field("key", $._expression), "]", "=", field("value", $._expression)),
      seq(field("key", $.identifier), "=", field("value", $._expression)),
      $._expression
    ),

    _fieldsep: (_) => choice(",", ";"),

    new_expression: ($) => seq(pluto_keyword("new"), $._prefix_expression, $._args),

    _increment: ($) => seq("++", $._var),

    _pipe: ($) => prec.left(
      PREC.Pipe,
      seq($._prefix_expression, "|>", $.pipe_function_call, any_amount_of("|>", $.pipe_function_call))),

    pipe_function_call: ($) => prec.left(PREC.Pipe, choice(
      $._prefix_expression,
      $._expression,
      seq($._prefix_expression, optional($._pipe_args)),
      seq($._prefix_expression, ":", $.identifier, optional($._pipe_args))
    )),

    _pipe_args: ($) => seq("|", $._expression, any_amount_of(",", $._expression), "|"),

    binary_operation: ($) => choice(
      ...[
        ["or", PREC.Or],
        ["??", PREC.Or],
        ["and", PREC.And],
        ["==", PREC.Cmp],
        ["~=", PREC.Cmp],
        ["!=", PREC.Cmp],
        ["<", PREC.Cmp],
        [">", PREC.Cmp],
        ["<=", PREC.Cmp],
        [">=", PREC.Cmp],
        ["<=>", PREC.Cmp],
        ["instanceof", PREC.Cmp],
        ["|", PREC.Bor],
        ["~", PREC.Bxor],
        ["&", PREC.Band],
        ["<<", PREC.Bshift],
        [">>", PREC.Bshift],
        ["+", PREC.Arith],
        ["-", PREC.Arith],
        ["*", PREC.ArithDiv],
        ["/", PREC.ArithDiv],
        ["//", PREC.ArithDiv],
        ["%", PREC.ArithDiv],
        ["in", PREC.In]
      ].map(precedence($, "left")),
      ...[
        ["..", PREC.Concat],
        ["^", PREC.Power]
      ].map(precedence($, "right"))),

    unary_operation: ($) => prec.left(PREC.Unary, seq((choice(
      "not",
      "!",
      "#",
      "+",
      "-",
      "~")
    ), $._expression)),

    _identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    identifier: ($) => $._identifier,
  },
})

function precedence($, x) {
  return ([op, preced]) => prec[x](preced, seq($._expression, op, $._expression))
}

function pluto_keyword(x) {
  return choice(...[x, `pluto_${x}`])
}

function any_amount_of() {
  return repeat(seq(...arguments))
}
