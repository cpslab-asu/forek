lexer grammar PropositionalLogicLexer;

import CommonLexer;

/// The unary connective, Negation.
///
/// Examples: `!`, `not`.
NegationOperator : EXCLAMATIONMARK
    | 'not'
    ;

/// The binary connective, Conjunction.
///
/// Examples: `&`, `and`.
ConjunctionOperator : '&&'
    | 'and'
    ;

/// The binary connective, Disjunction.
///
/// Examples: `|`, `or`.
DisjunctionOperator : '||'
    | 'or'
    ;

/// The binary connective, Material Implication.
///
/// Examples: `->`, `implies`.
ImplicationOperator : '->'
    | 'implies'
    ;

/// The binary connective, Biconditional.
///
/// Examples: `<->`, `ifff`.
IffOperator : '<->'
    | 'iff'
    ;

/// The nullary connective, True.
///
/// Examples: `true`.
True : 'true' ;

/// The nullary connective, False.
///
/// Examples: `false`.
False : 'false' ;
