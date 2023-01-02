lexer grammar LinearTemporalLogicLexer;

import LogicLexer;

/// The core unary temporal operator, next.
NextOperator : 'X'
    | 'next'
    ;

/// The core binary temporal operator, until.
UntilOperator : 'U'
    | 'until'
    ;

/// The unary temporal operator, future.
///
/// This is a derived operator that is logically equivalent to the following
/// expression: `<> (...) === True U (...)`.
FutureOperator : 'F'
    | 'eventually'
    | 'finally'

    // supported for backwards compatibility
    | '<>'
    ;

/// The unary temporal operator, globally.
///
/// This is a derived operator that is logically equivalent to the following
/// expression: `[] (...) == ~<> ~(...)`.
GloballyOperator : 'G'
    | 'always'
    | 'globally'

    // supported for backwards compatibility
    | '[]'
    ;

/// The binary temporal operator, release.
///
/// This is a derived operator that is logically equivalent to the following
/// expression: `psi=(...) R phi=(...) == (phi U (phi && psi) || G phi)`.
ReleaseOperator : 'R'
    | 'release'
    ;
