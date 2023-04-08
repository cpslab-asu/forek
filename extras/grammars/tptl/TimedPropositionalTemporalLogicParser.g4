parser grammar TimedPropositionalTemporalLogicParser;

import LinearTemporalLogicParser, ArithmeticParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #parentheses

    | True                                          #plTrue
    | False                                         #plFalse

    | EventuallyOperator formula                    #ltlEventually
    | AlwaysOperator formula                        #ltlAlways
    | NextOperator formula                          #ltlNext
    | formula UntilOperator formula                 #ltlUntil
    | formula ReleaseOperator formula               #ltlRelease

    | OnceOperator formula                          #ptltlOnce
    | HistoricallyOperator formula                  #ptltlHistorically
    | PreviousOperator formula                      #ptltlPrevious
    | formula SinceOperator formula                 #ptltlSince
    | formula TriggerOperator formula               #ptltlTrigger

    | FreezeTime Identifier formula                 #tptlFreezeTime

    | NegationOperator formula                      #plNegation
    | formula ConjunctionOperator formula           #plConjunction
    | formula DisjunctionOperator formula           #plDisjunction
    | formula ImplicationOperator formula           #plImplication
    | formula IffOperator formula                   #plIff

    | timeConstraint                                #tptlTimeConstraint
    | proposition                                   #plProposition
    ;

/// A time constraint.
///
/// Examples: `x <= 1`, `y >= 2.0`, `x + 1 < 2.0`.
timeConstraint : expression relationalOperator expression ;

/// The set of relation operators.
///
/// Examples: `<=`, `>=`, `<`, `>`, `==`, `!=`.
relationalOperator : LessThanOrEqualTo
    | GreaterThanOrEqualTo
    | LeftChevron
    | RightChevron
    | EqualTo
    | NotEqualTo
    ;
