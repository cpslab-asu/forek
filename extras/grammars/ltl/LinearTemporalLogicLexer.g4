lexer grammar LinearTemporalLogicLexer;

import PropositionalLogicLexer;

/// The unary temporal connective, Eventually.
///
/// Examples: `F`, `eventually`.
EventuallyOperator : 'F'
    | 'eventually'
    ;

/// The unary temporal connective, Always.
///
/// Examples: `G`, `always`.
AlwaysOperator : 'G'
    | 'always'
    ;

/// The unary temporal connective, Next.
///
/// Examples: `X`, `next`.
NextOperator : 'X'
    | 'next'
    ;

/// The binary temporal connective, Until.
///
/// Examples: `U`, `until`.
UntilOperator : 'U'
    | 'until'
    ;

/// The binary temporal connective, Release.
///
/// Examples: `R`, `release`.
ReleaseOperator : 'R'
    | 'release'
    ;
