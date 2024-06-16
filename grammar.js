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

        clause: $ => seq(repeat($.literal), '0'),

        variables: $ => /[1-9][0-9]*/,

        clauses: $ => /[1-9][0-9]*/,

        problem: $ => seq('p', 'cnf', $.variables, $.clauses),

  }
});
