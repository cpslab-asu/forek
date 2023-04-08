lexer grammar ArithmeticLexer;

import CommonLexer;

/// The binary operation, Addition.
///
/// Examples: `+`
AdditionOperator : PLUS ;

/// The binary operation, Subtraction.
///
/// Examples: `-`.
SubtractionOperator : MINUS ;

/// The binary operation, Multiplication.
///
/// Examples: `*`.
MultiplicationOperator : ASTERICK ;

/// The binary operation, Division.
///
/// Examples: `/`.
DivisionOperator : SLASH ;

/// The binary operation, Modulus.
///
/// Examples: `%`.
ModulusOperator : PERCENTSIGN ;
