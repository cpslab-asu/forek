parser grammar SignalTemporalLogicParser;

import MetricTemporalLogicParser;

start : formula EOF ;

formula : LeftParenthesis formula RightParenthesis  #stlParentheses

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
    | predicate                                     #stlPredicate
    ;

/// An interval.
///
/// Examples: `(1.0, 2.0)`, `[1, 10)`, `[100.2, 20)`
interval : (LeftParenthesis | LeftBracket) (Scalar | Infinity) Comma (Scalar | Infinity) (RightParenthesis | RightBracket) ;

/// An arithmetic expression.
///
/// Examples: `1 + 2 < 1`, `x + 2 >= 1`, `x == y`, `p != q`
predicate : expression relation expression ;

relation : LessThan                                 #stlLessThan
    | GreaterThan                                   #stlGreaterThan
    | LessThanOrEqualTo                             #stlLessThanOrEqualTo
    | GreaterThanOrEqualTo                          #stlGreaterThanOrEqualTo

    | EqualTo                                       #stlEqualTo
    | NotEqualTo                                    #stlNotEqualTo
    ;

expression : Identifier                             #stlVariable
    | (Minus)? Scalar                               #stlConstant

    | expression Plus expression                    #stlPlus
    | expression Minus expression                   #stlMinus
    | expression Times expression                   #stlTimes
    | expression Divide expression                  #stlDivide
    ;

proposition : Identifier ;
