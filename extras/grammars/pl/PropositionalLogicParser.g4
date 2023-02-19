parser grammar PropositionalLogicParser;

start : plFormula EOF ;

plFormula : LeftParenthesis plFormula RightParenthesis  #plParenthesis
    | NegationOperator plFormula                        #plNegation
    | plFormula ConjunctionOperator plFormula           #plConjunction
    | plFormula DisjunctionOperator plFormula           #plDisjunction
    | plFormula ImplicationOperator plFormula           #plImplication
    | plFormula IffOperator plFormula                   #plIff

    | True                                              #plTrue
    | False                                             #plFalse
    | proposition                                       #plAtom
    ;

proposition : Identifier ;
