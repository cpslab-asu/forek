parser grammar LinearTemporalLogicParser;

import LogicParser;

ltlFormula : logicFormula
    | LeftParenthesis ltlFormula RightParenthesis
    | GloballyOperator ltlFormula
    | EventuallyOperator ltlFormula
    ;
