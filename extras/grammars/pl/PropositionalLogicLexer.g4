lexer grammar PropositionalLogicLexer;

import CommonLexer;

/// The unary connective, Negation.
///
/// Examples: `!`, `not`.
NegationOperator : ExclamationMark
    | 'not'
    ;

/// The binary connective, Conjunction.
///
/// Examples: `&&`, `and`.
ConjunctionOperator : Ampersand
    | 'and'
    ;

/// The binary connective, Disjunction.
///
/// Examples: `|`, `or`.
DisjunctionOperator : Bar
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
/// Examples: `True`.
True : 'True' ;

/// The nullary connective, False.
///
/// Examples: `False`.
False : 'False' ;
