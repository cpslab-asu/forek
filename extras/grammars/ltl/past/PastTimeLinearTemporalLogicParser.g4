parser grammar PastTimeLinearTemporalLogicParser;

import LinearTemporalLogicParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #ptltlParentheses

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

    | NegationOperator formula                      #plNegation
    | formula ConjunctionOperator formula           #plConjunction
    | formula DisjunctionOperator formula           #plDisjunction
    | formula ImplicationOperator formula           #plImplication
    | formula IffOperator formula                   #plIff

    | proposition                                   #plAtom
    ;

proposition : Identifier ;
