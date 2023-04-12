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
/// Examples: `BBOX(obj1)`, `BBOX(obj1) && BBOX(obj2)`.
spatialFormula : LeftParenthesis spatialFormula RightParenthesis #spatialParentheses
    | EventuallyOperator (interval)? spatialFormula   #stplSpatialEventually
    | AlwaysOperator (interval)? spatialFormula                  #stplSpatialAlways
    | NextOperator (interval)? spatialFormula                    #stplSpatialNext
    | spatialFormula UntilOperator (interval)? spatialFormula    #stplSpatialUntil
    | spatialFormula ReleaseOperator (interval)? spatialFormula  #stplSpatialRelease

    | NegationOperator spatialFormula                            #stplComplement
    | spatialFormula ConjunctionOperator spatialFormula          #stplIntersection
    | spatialFormula DisjunctionOperator spatialFormula          #stplUnion

    | InteriorOperator spatialFormula                            #stplInterior
    | ClosureOperator spatialFormula                             #stplClosure

    | spatialTerm                                                #stplSpatialTerm
    ;

/// A bounding box function.
///
/// Examples: `BB(obj)`, `BB(x)`.
spatialTerm : BoundingBoxFunction LeftParenthesis Identifier RightParenthesis ;

/// Function comparisons.
///
/// Examples: `PROB(x) >= (PROB(x) - 0.5)`.
fnComparison : expression relationalOperator expression ;

/// An arithmetic-based expression with inline functionc call support.
///
/// Examples: `PROB(x) % 2.0`, `AREA(y) * 2.0 + AREA(x)`, `LAT(x)`
expression : LeftParenthesis expression RightParenthesis  #arithmeticParentheses

    | functionCall                                        #stplFunctionCall
    | (SubtractionOperator)? term                         #arithmeticTerm

    | expression MultiplicationOperator expression        #arithmeticTimes
    | expression DivisionOperator expression              #arithmeticDivide
    | expression ModulusOperator expression               #arithmeticModulus
    | expression AdditionOperator expression              #arithmeticPlus
    | expression SubtractionOperator expression           #arithmeticMinus

    ;

/// An invocated function (i.e., function call).
///
/// Note: A special function call is created here that takes as an argument a
/// recursive definition of an S4 formula whereas all other functions simply take
/// a list of arguments. To use the existing expression-based syntax, this
/// function is placed here to reduce the need to define relational operations
/// and arithmetic operators, accordingly.
///
/// Examples: `PROB(x)`, `DIST(x, BM, y, TM)`, `CLASS(x)`.
functionCall : AreaFunction LeftParenthesis spatialFormula RightParenthesis
    | Identifier LeftParenthesis argumentList RightParenthesis ;
