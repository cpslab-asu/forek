parser grammar LinearTemporalLogicParser;

options {
    tokenVocab=LinearTemporalLogicLexer;
}

ltlFormula : logicFormula
    | LeftParenthesis ltlFormula RightParenthesis
    | GloballyOperator ltlFormula
    | EventuallyOperator ltlFormula
    ;
