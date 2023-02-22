parser grammar LinearTemporalLogicParser;

import PropositionalLogicParser;

start : ltlFormula EOF ;

ltlFormula : plFormula                             #ltlPl
    | LeftParenthesis ltlFormula RightParenthesis  #ltlParenthesis
    | EventuallyOperator ltlFormula                #ltlEventually
    | AlwaysOperator ltlFormula                    #ltlAlways
    | NextOperator ltlFormula                      #ltlNext
    | ltlFormula UntilOperator ltlFormula          #ltlUntil
    ;
