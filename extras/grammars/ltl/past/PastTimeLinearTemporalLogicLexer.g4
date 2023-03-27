lexer grammar PastTimeLinearTemporalLogicLexer;

import LinearTemporalLogicLexer;

/// The unary temporal connective, Once.
///
/// Examples: `O`, `once`.
OnceOperator : 'O'
    | 'once'
    ;

/// The unary temporal connective, Historically.
///
/// Examples: `H`, `historically`.
HistoricallyOperator : 'H'
    | 'historically'
    ;

/// The unary temporal connective, Previous (Yesterday).
///
/// Examples: `P`, `previous`.
PreviousOperator : 'P'
    | 'previous'
    ;

/// The binary temporal connective, Since.
///
/// Examples: `S`, `since`.
SinceOperator : 'S'
    | 'since'
    ;

/// The binary temporal connective, Trigger.
///
/// Examples: `T`, `trigger`.
TriggerOperator : 'T'
    | 'trigger'
    ;
