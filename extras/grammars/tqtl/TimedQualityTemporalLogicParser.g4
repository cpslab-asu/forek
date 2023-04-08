parser grammar TimedQualityTemporalLogicParser;

import TimedPropositionalTemporalLogicParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #parentheses

    | True                                          #plTrue
    | False                                         #plFalse

    | EventuallyOperator formula                    #ltlEventually
    | AlwaysOperator formula                        #ltlAlways
    | NextOperator formula                          #ltlNext
    | formula UntilOperator formula                 #ltlUntil
    | formula ReleaseOperator formula               #ltlRelease

    | objectQualifier formula                       #tqtlObjectQualifier
    | FreezeTime Identifier formula                 #tptlFreezeTime

    | NegationOperator formula                      #plNegation
    | formula ConjunctionOperator formula           #plConjunction
    | formula DisjunctionOperator formula           #plDisjunction
    | formula ImplicationOperator formula           #plImplication
    | formula IffOperator formula                   #plIff

    | timeConstraint                                #tptlTimeConstraint
    | proposition                                   #plProposition
    ;

/// Object qualification.
///
/// Examples: `E(obj)@t`, `A(obj1, obj2)@x`.
objectQualifier : ExistsQuantifier LeftParenthesis argumentList RightParenthesis FreezeTime Identifier  #tqtlExistsQualifier
    | ForallQuantifier LeftParenthesis argumentList RightParenthesis FreezeTime Identifier              #tqtlForallQualifier
    ;

/// An argument list
///
/// Examples: `x, y, z`, `p1, p2, _o2`.
argumentList : Identifier Comma argumentList
    | Identifier
    ;
