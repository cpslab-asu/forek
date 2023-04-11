lexer grammar SpatioTemporalPerceptionLogicLexer;

import TimedQualityTemporalLogicLexer, MetricTemporalLogicLexer, ArithmeticLexer;

/// The S4u unary connective, Spatial Exists.
///
/// Examples: `SE`, `nonempty`.
SpatialExists : 'SE'
    | 'nonempty'
    ;

/// The s4u unary connective, Spatial Forall.
///
/// Examples: `SA`, `universe`.
SpatialForall : 'SA'
    | 'universe'
    ;

/// The S4 unary operator, Interior.
///
/// Examples: `I`, `interior`.
InteriorOperator : 'I'
    | 'interior'
    ;

/// The S4 unary operator, Closure.
///
/// Examples: `C`, `closure`.
ClosureOperator : 'C'
    | 'closure'
    ;

/// Function for spatial term access.
///
/// Examples: `BB`.
BoundingBoxFunction : 'BBOX' ;

/// Function for area access.
///
/// Examples: `AREA`.
AreaFunction : 'AREA' ;
