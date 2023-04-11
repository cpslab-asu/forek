parser grammar ArithmeticParser;

start : expression EOF ;

expression : LeftParenthesis expression RightParenthesis  #arithmeticParentheses

    | (SubtractionOperator)? term                         #arithmeticTerm

    | expression MultiplicationOperator expression        #arithmeticTimes
    | expression DivisionOperator expression              #arithmeticDivide
    | expression ModulusOperator expression               #arithmeticModulus
    | expression AdditionOperator expression              #arithmeticPlus
    | expression SubtractionOperator expression           #arithmeticMinus

    ;

term : Identifier                                         #arithmeticVariable
    |  Scalar                                             #arithmeticConstant
    ;
