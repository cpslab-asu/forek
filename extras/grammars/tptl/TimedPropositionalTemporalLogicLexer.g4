lexer grammar TimedPropositionalTemporalLogicLexer;

import LinearTemporalLogicLexer, ArithmeticLexer;

/// The freeze quantifier, FreezeTime.
///
/// Examples: `@`, `at`
FreezeTime : AT
    | 'at'
    ;

/// The relational operator, Less Than Or Equal To.
///
/// Examples: `<=`.
LessThanOrEqualTo : '<=' ;

/// The relational operator, Greater Than Or Equal To.
///
/// Examples: `<=`.
GreaterThanOrEqualTo : '>=' ;

/// The relational operator, Equal To.
///
/// Examples: `==`.
EqualTo : '==' ;

/// The relational operator, Not Equal To.
///
/// Examples: `!=`.
NotEqualTo : '!=' ;
