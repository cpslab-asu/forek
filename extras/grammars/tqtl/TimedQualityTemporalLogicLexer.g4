lexer grammar TimedQualityTemporalLogicLexer;

import TimedPropositionalTemporalLogicLexer;

/// The quantifier, Exists.
///
/// Examples: `exists`, `E`.
ExistsQuantifier : 'E'
    | 'exists'
    ;

/// The quantifier, Forall.
///
/// Examples: `forall`, `A`.
ForallQuantifier : 'A'
    | 'forall'
    ;
