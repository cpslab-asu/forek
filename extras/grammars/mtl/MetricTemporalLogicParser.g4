parser grammar MetricTemporalLogicParser;

import PastTimeLinearTemporalLogicParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #mtlParentheses

    | True                                          #plTrue
    | False                                         #plFalse

    | EventuallyOperator (interval)? formula        #mtlEventually
    | AlwaysOperator (interval)? formula            #mtlAlways
    | NextOperator (interval)? formula              #mtlNext
    | formula UntilOperator (interval)? formula     #mtlUntil
    | formula ReleaseOperator (interval)? formula   #mtlRelease

    | OnceOperator (interval)? formula              #ptmtlOnce
    | HistoricallyOperator (interval)? formula      #ptmtlHistorically
    | PreviousOperator (interval)? formula          #ptmtlPrevious
    | formula SinceOperator (interval)? formula     #ptmtlSince
    | formula TriggerOperator (interval)? formula   #ptmtlTrigger

    | NegationOperator formula                      #plNegation
    | formula ConjunctionOperator formula           #plConjunction
    | formula DisjunctionOperator formula           #plDisjunction
    | formula ImplicationOperator formula           #plImplication
    | formula IffOperator formula                   #plIff

    | proposition                                   #plAtom
    ;

/// An interval.
///
/// Examples: `(1.0, 2.0)`, `[1, 10)`, `[100.2, 20)`
interval : (LeftParenthesis | LeftBracket) (Scalar | Infinity) Comma (Scalar | Infinity) (RightParenthesis | RightBracket) ;

proposition : Identifier ;
