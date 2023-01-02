parser grammar LinearTemporalLogicParser;

import LogicParser;

ltlFormula : logicFormula                          #ltlLogicExpr
    | LeftParenthesis ltlFormula RightParenthesis  #ltlParenthesisExpr

    | NextOperator ltlFormula                      #ltlNextExpr
    | FutureOperator ltlFormula                    #ltlFutureExpr
    | GloballyOperator ltlFormula                  #ltlGloballyExpr

    | ltlFormula UntilOperator ltlFormula          #ltlUntilExpr
    | ltlFormula ReleaseOperator ltlFormula        #ltlReleaseExpr
    ;
