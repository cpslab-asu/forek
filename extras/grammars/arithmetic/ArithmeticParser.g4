parser grammar ArithmeticParser;

start : expression EOF ;

expression : LeftParenthesis expression RightParenthesis  #arithmeticParentheses

    | term                                                #arithmeticTerm

    | expression MultiplicationOperator expression        #arithmeticTimes
    | expression DivisionOperator expression              #arithmeticDivide
    | expression ModuloOperator expression                #arithmeticModulo
    | expression AdditionOperator expression              #arithmeticPlus
    | expression SubtractionOperator expression           #arithmeticMinus

    ;

term : Identifier                                         #arithmeticVariable
    | (SubtractionOperator)? Scalar                       #arithmeticConstant
    ;
