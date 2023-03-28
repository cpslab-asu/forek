parser grammar TimedPropositionalTemporalLogicParser;

import ArithmeticParser, PastTimeLinearTemporalLogicParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #tptlParentheses

    | True                                          #plTrue
    | False                                         #plFalse

    | EventuallyOperator formula                    #ltlEventually
    | AlwaysOperator formula                        #ltlAlways
    | NextOperator formula                          #ltlNext
    | formula UntilOperator formula                 #ltlUntil
    | formula ReleaseOperator formula               #ltlRelease

    | NegationOperator formula                      #plNegation
    | formula ConjunctionOperator formula           #plConjunction
    | formula DisjunctionOperator formula           #plDisjunction
    | formula ImplicationOperator formula           #plImplication
    | formula IffOperator formula                   #plIff

    | FreezeTime Identifier formula                 #tptlFreezeTime
    | timeConstraint                                #tptlTimeConstraint
        
    | proposition                                   #plAtom
    ;

timeConstraint : expression relation expression ;

relation : LessThan                                 #tptlLessThan
    | GreaterThan                                   #tptlGreaterThan
    | LessThanOrEqualTo                             #tptlLessThanOrEqualTo
    | GreaterThanOrEqualTo                          #tptlGreaterThanOrEqualTo

    | EqualTo                                       #tptlEqualTo
    | NotEqualTo                                    #tptlNotEqualTo
    ;
