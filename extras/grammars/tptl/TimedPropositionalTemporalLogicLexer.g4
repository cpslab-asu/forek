lexer grammar TimedPropositionalTemporalLogicLexer;

import ArithmeticLexer, PastTimeLinearTemporalLogicLexer;

/// The quantifier, FreezeTime.
FreezeTime : At
    | 'at'
    ;

/// The relational operator, Less Than.
///
/// Examples: `<`
LessThan : LeftChevron ;

/// The relational operator, Greater Than.
///
/// Examples: `>`
GreaterThan : RightChevron ;

/// The relational operator, Less Than Or Equal To.
///
/// Examples: `<=`
LessThanOrEqualTo : '<=' ;

/// The relational operator, Greater Than Or Equal To.
///
/// Examples: `>=`
GreaterThanOrEqualTo : '>=' ;

/// The relational operator, Equal To.
///
/// Examples: `==`
EqualTo : '==' ;

/// The relational operator, Inequal.
///
/// Examples: `!=`
NotEqualTo : '!=' ;
