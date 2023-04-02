parser grammar MetricTemporalLogicParser;

import PastTimeLinearTemporalLogicParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #parentheses

    | True                                          #plTrue
    | False                                         #plFalse

    | EventuallyOperator (interval)? formula        #ltlEventually
    | AlwaysOperator (interval)? formula            #ltlAlways
    | NextOperator (interval)? formula              #ltlNext
    | formula UntilOperator (interval)? formula     #ltlUntil
    | formula ReleaseOperator (interval)? formula   #ltlRelease

    | OnceOperator (interval)? formula              #ptltlOnce
    | HistoricallyOperator (interval)? formula      #ptltlHistorically
    | PreviousOperator (interval)? formula          #ptltlPrevious
    | formula SinceOperator (interval)? formula     #ptltlSince
    | formula TriggerOperator (interval)? formula   #ptltlTrigger

    | NegationOperator formula                      #plNegation
    | formula ConjunctionOperator formula           #plConjunction
    | formula DisjunctionOperator formula           #plDisjunction
    | formula ImplicationOperator formula           #plImplication
    | formula IffOperator formula                   #plIff

    | proposition                                   #plProposition
    ;

/// An interval.
///
/// Examples: `(1.0, 2.0)`, `[1, 10)`, `[100.2, 20)`
interval : (LeftParenthesis | LeftBracket) (Scalar | Infinity) Comma (Scalar | Infinity) (RightParenthesis | RightBracket) ;
