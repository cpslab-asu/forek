lexer grammar LinearTemporalLogicLexer;

import LogicLexer;

GloballyOperator : '[]'
    | 'always'
    | 'globally'
    ;

EventuallyOperator : '<>'
    | 'eventually'
    | 'finally'
    ;

