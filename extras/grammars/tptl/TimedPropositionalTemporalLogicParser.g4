parser grammar TimedPropositionalTemporalLogicParser;

import PastTimeLinearTemporalLogicParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #parentheses

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

expression : Identifier                             #tptlVariable
    | (Minus)? Scalar                               #tptlConstant

    | expression Plus expression                    #tptlPlus
    | expression Minus expression                   #tptlMinus
    | expression Times expression                   #tptlTimes
    | expression Divide expression                  #tptlDivide
    ;

proposition : Identifier ;
