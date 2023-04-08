
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SignalTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SignalTemporalLogicParser.h"


namespace gen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SignalTemporalLogicParser.
 */
class  SignalTemporalLogicParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SignalTemporalLogicParser.
   */
    virtual std::any visitStart(SignalTemporalLogicParser::StartContext *context) = 0;

    virtual std::any visitPlNegation(SignalTemporalLogicParser::PlNegationContext *context) = 0;

    virtual std::any visitParentheses(SignalTemporalLogicParser::ParenthesesContext *context) = 0;

    virtual std::any visitLtlUntil(SignalTemporalLogicParser::LtlUntilContext *context) = 0;

    virtual std::any visitPlImplication(SignalTemporalLogicParser::PlImplicationContext *context) = 0;

    virtual std::any visitPlConjunction(SignalTemporalLogicParser::PlConjunctionContext *context) = 0;

    virtual std::any visitPlFalse(SignalTemporalLogicParser::PlFalseContext *context) = 0;

    virtual std::any visitStlPredicate(SignalTemporalLogicParser::StlPredicateContext *context) = 0;

    virtual std::any visitLtlAlways(SignalTemporalLogicParser::LtlAlwaysContext *context) = 0;

    virtual std::any visitPlIff(SignalTemporalLogicParser::PlIffContext *context) = 0;

    virtual std::any visitPlTrue(SignalTemporalLogicParser::PlTrueContext *context) = 0;

    virtual std::any visitPlDisjunction(SignalTemporalLogicParser::PlDisjunctionContext *context) = 0;

    virtual std::any visitPlProposition(SignalTemporalLogicParser::PlPropositionContext *context) = 0;

    virtual std::any visitLtlRelease(SignalTemporalLogicParser::LtlReleaseContext *context) = 0;

    virtual std::any visitLtlEventually(SignalTemporalLogicParser::LtlEventuallyContext *context) = 0;

    virtual std::any visitLtlNext(SignalTemporalLogicParser::LtlNextContext *context) = 0;

    virtual std::any visitPredicate(SignalTemporalLogicParser::PredicateContext *context) = 0;

    virtual std::any visitRelationalOperator(SignalTemporalLogicParser::RelationalOperatorContext *context) = 0;

    virtual std::any visitInterval(SignalTemporalLogicParser::IntervalContext *context) = 0;

    virtual std::any visitProposition(SignalTemporalLogicParser::PropositionContext *context) = 0;

    virtual std::any visitArithmeticMinus(SignalTemporalLogicParser::ArithmeticMinusContext *context) = 0;

    virtual std::any visitArithmeticTimes(SignalTemporalLogicParser::ArithmeticTimesContext *context) = 0;

    virtual std::any visitArithmeticParentheses(SignalTemporalLogicParser::ArithmeticParenthesesContext *context) = 0;

    virtual std::any visitArithmeticDivide(SignalTemporalLogicParser::ArithmeticDivideContext *context) = 0;

    virtual std::any visitArithmeticModulus(SignalTemporalLogicParser::ArithmeticModulusContext *context) = 0;

    virtual std::any visitArithmeticTerm(SignalTemporalLogicParser::ArithmeticTermContext *context) = 0;

    virtual std::any visitArithmeticPlus(SignalTemporalLogicParser::ArithmeticPlusContext *context) = 0;

    virtual std::any visitArithmeticVariable(SignalTemporalLogicParser::ArithmeticVariableContext *context) = 0;

    virtual std::any visitArithmeticConstant(SignalTemporalLogicParser::ArithmeticConstantContext *context) = 0;


};

}  // namespace gen
