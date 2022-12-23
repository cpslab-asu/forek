lexer grammar LogicLexer;

import CommonLexer;

/// The logical connective, negation.
///
/// Examples: `!`, `~`, `not`.
NegationOperator : ExclamationMark
    | Tilde
    ;

/// The logical connective, conjunction.
///
/// Examples: `&`, `&&`, `/\`, `and`.
ConjunctionOperator : Ampersand
    | '&&'
    | '/\\'
    | 'and'
    ;

/// The logical connective, disjunction.
///
/// Examples: `|`, `||`, `\/`, `or`.
DisjunctionOperator : Bar
    | '||'
    | '\\/'
    | 'or'
    ;

/// The logical connective, implication.
///
/// Examples: `->`, `implies`.
ImplicationOperator : '->'
    | 'implies'
    ;

/// The logical connective, biconditional.
///
/// Examples: `<->`, `iff`.
IffOperator : '<->'
    | 'iff'
    ;

/// The truth value, True.
///
/// Examples: `true`.
True : 'true' ;

/// The truth value, False.
///
/// Examples: `false`.
False : 'false' ;
