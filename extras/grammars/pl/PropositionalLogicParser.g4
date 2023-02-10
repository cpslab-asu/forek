parser grammar PropositionalLogicParser;

plFormula : LeftParenthesis plFormula RightParenthesis
    | NegationOperator plFormula
    | plFormula ConjunctionOperator plFormula
    | plFormula DisjunctionOperator plFormula
    | plFormula ImplicationOperator plFormula
    | plFormula IffOperator plFormula

    | True
    | False
    | proposition
    ;

proposition : Identifier ;
