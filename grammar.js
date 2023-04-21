module.exports = grammar({
  name: 'prolog',

  // conflicts: $ => [
  //   [$._expr, $.call]
  // ],

  rules: {
    program: $ => repeat1(choice(
      $.comment,
      $.fact,
      $.statement,
      $.predicate,
    )),
    comment: $ => choice(
      $._line_comment,
      $._block_comment,
    ),
    _line_comment: $ => /%.*/,
    _block_comment: $ => /\/\*([^*]*\*+[^*/])*([^*]*\*+|[^*])*\*\//,
    fact: $ => seq(
      $._expr,
      optional($.statement),
      '.'),
    statement: $ => seq(
      ':-', $._exprs,
    ),
    predicate: $ => seq(
      '?-',
      $._exprs, '.'),
    _exprs: $ => seq(
      repeat(seq($._expr, ',')),
      $._expr
    ),
    _expr: $ => choice(
      $.atom,
      $.variable,
      $._lit,
      $.call,
      $._binop,
      $._cut,
      $._list,
      $._group,
    ),
    _group: $ => seq('(', $._exprs, ')'),
    atom: $ => /[a-z_][\w_]*/,
    variable: $ => /[A-Z_]\w*/,
    call: $ => prec(1, seq(
      $.atom,
      $._group,
    )),
    _lit: $ => choice(
      $.num,
      $.str,
    ),
    num: $ => /[0-9]+(\.[0-9]*)?/,
    str: $ => choice(
      /"[^"]*"/,
      /'[^']*'/,
      /`[^`]*`/
    ),
    _binop: $ => prec.left(seq($._expr, $.op, $._expr)),
    op: $ => choice(
      'is',
      /[+\-*/\\~`!@#$%^&*=|,.<>?;]+/
    ),
    _cut: $ => '!',
    _list: $ => seq('[', $._exprs, ']'),
  }
})
