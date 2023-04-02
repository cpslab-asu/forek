parser grammar SpatioTemporalPerceptionLogicParser;

import TimedQualityTemporalLogicParser, MetricTemporalLogicParser, ArithmeticParser;

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

    | objectQualifier formula                       #tqtlObjectQualifier

    | FreezeTime Identifier formula                 #tptlFreezeTime

    | SpatialExists spatialFormula                  #stplSpatialExists
    | SpatialForall spatialFormula                  #stplSpatialForall

    | NegationOperator formula                      #plNegation
    | formula ConjunctionOperator formula           #plConjunction
    | formula DisjunctionOperator formula           #plDisjunction
    | formula ImplicationOperator formula           #plImplication
    | formula IffOperator formula                   #plIff

    | fnComparison                                  #stplFunctionComparison

    | timeConstraint                                #tptlTimeConstraint
    | proposition                                   #plProposition
    ;

/// A spatial (S4) formula.
///
/// Examples: `...`
spatialFormula : EventuallyOperator (interval)? spatialFormula   #stplSpatialEventually
    | AlwaysOperator (interval)? spatialFormula                  #stplSpatialAlways
    | NextOperator (interval)? spatialFormula                    #stplSpatialNext
    | spatialFormula UntilOperator (interval)? spatialFormula    #stplSpatialUntil
    | spatialFormula ReleaseOperator (interval)? spatialFormula  #stplSpatialRelease

    | NegationOperator spatialFormula                            #stplSpatialNegation
    | spatialFormula ConjunctionOperator spatialFormula          #stplSpatialConjunction
    | spatialFormula DisjunctionOperator spatialFormula          #stplSpatialDisjunction

    | InteriorOperator spatialFormula                            #stplSpatialInterior
    | ClosureOperator spatialFormula                             #stplSpatialClosure

    | spatialTerm                                                #stplSpatialTerm
    ;

/// A bounding box function.
///
/// Examples: `BB(obj)`, `BB(x)`.
spatialTerm : BoundingBoxFunction LeftParenthesis Identifier RightParenthesis ;

/// Function comparisons.
///
/// Examples: `PROB(x) >= (PROB(x) - 0.5)`.
fnComparison : fnExpression relationalOperator fnExpression ;

fnExpression : LeftParenthesis fnExpression RightParenthesis #stplFnExpressionParentheses

    | fnInvocation                                           #stplFnExpressionFnInvocation
    | term                                                   #stplFnExpressionTerm

    | fnExpression MultiplicationOperator fnExpression       #stplFnExpressionTimes
    | fnExpression DivisionOperator fnExpression             #stplFnExpressionDivision
    | fnExpression ModuloOperator fnExpression               #stplFnExpressionModulo
    | fnExpression AdditionOperator fnExpression             #stplFnExpressionPlus
    | fnExpression SubtractionOperator fnExpression          #stplFnExpressionMinus
    ;


/// An invocated function (i.e., function call).
///
/// Examples: `PROB(x)`, `DIST(x, BM, y, TM)`, `CLASS(x)`.
fnInvocation : Identifier LeftParenthesis argumentList RightParenthesis ;
