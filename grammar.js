module.exports = grammar({
    name: 'DIMACS',

    rules: {
        source_file: $ => repeat(choice($.comment,
                                        $.problem,
                                        $.clause,
                                       )),

        negation: $ => '-',

        variable: $ => /[1-9][0-9]*/,

        literal: $ => seq(optional($.negation), $.variable),

        comment: $ => seq('c', /[^\n]*/),

        problem: $ => seq('p', 'cnf', $.variable, $.variable),

        clause: $ => seq(repeat($.literal), '0'),

  }
});
