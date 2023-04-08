parser grammar SignalTemporalLogicParser;

import MetricTemporalLogicParser, ArithmeticParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #parentheses

    | True                                          #plTrue
    | False                                         #plFalse

    | EventuallyOperator (interval)? formula        #ltlEventually
    | AlwaysOperator (interval)? formula            #ltlAlways
    | NextOperator (interval)? formula              #ltlNext
    | formula UntilOperator (interval)? formula     #ltlUntil
    | formula ReleaseOperator (interval)? formula   #ltlRelease

    | NegationOperator formula                      #plNegation
    | formula ConjunctionOperator formula           #plConjunction
    | formula DisjunctionOperator formula           #plDisjunction
    | formula ImplicationOperator formula           #plImplication
    | formula IffOperator formula                   #plIff

    | predicate                                     #stlPredicate
    | proposition                                   #plProposition
    ;

/// An arithmetic expression.
///
/// Examples: `1 + 2 < 1`, `x + 2 >= 1`, `x == y`, `p != q`.
predicate : expression relationalOperator expression ;

/// The set of relational operators.
///
/// Examples: `<=`, `>=`, `<`, `>`, `==`, `!=`.
relationalOperator : LessThanOrEqualTo
    | GreaterThanOrEqualTo
    | LeftChevron
    | RightChevron
    | EqualTo
    | NotEqualTo
    ;
