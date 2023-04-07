
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedQualityTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "TimedQualityTemporalLogicParser.h"


namespace gen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TimedQualityTemporalLogicParser.
 */
class  TimedQualityTemporalLogicParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TimedQualityTemporalLogicParser.
   */
    virtual std::any visitStart(TimedQualityTemporalLogicParser::StartContext *context) = 0;

    virtual std::any visitPlNegation(TimedQualityTemporalLogicParser::PlNegationContext *context) = 0;

    virtual std::any visitParentheses(TimedQualityTemporalLogicParser::ParenthesesContext *context) = 0;

    virtual std::any visitTqtlObjectQualifier(TimedQualityTemporalLogicParser::TqtlObjectQualifierContext *context) = 0;

    virtual std::any visitPtltlOnce(TimedQualityTemporalLogicParser::PtltlOnceContext *context) = 0;

    virtual std::any visitLtlUntil(TimedQualityTemporalLogicParser::LtlUntilContext *context) = 0;

    virtual std::any visitPlImplication(TimedQualityTemporalLogicParser::PlImplicationContext *context) = 0;

    virtual std::any visitPlConjunction(TimedQualityTemporalLogicParser::PlConjunctionContext *context) = 0;

    virtual std::any visitPlFalse(TimedQualityTemporalLogicParser::PlFalseContext *context) = 0;

    virtual std::any visitPtltlHistorically(TimedQualityTemporalLogicParser::PtltlHistoricallyContext *context) = 0;

    virtual std::any visitLtlAlways(TimedQualityTemporalLogicParser::LtlAlwaysContext *context) = 0;

    virtual std::any visitTptlTimeConstraint(TimedQualityTemporalLogicParser::TptlTimeConstraintContext *context) = 0;

    virtual std::any visitPlIff(TimedQualityTemporalLogicParser::PlIffContext *context) = 0;

    virtual std::any visitPlTrue(TimedQualityTemporalLogicParser::PlTrueContext *context) = 0;

    virtual std::any visitPlDisjunction(TimedQualityTemporalLogicParser::PlDisjunctionContext *context) = 0;

    virtual std::any visitTptlFreezeTime(TimedQualityTemporalLogicParser::TptlFreezeTimeContext *context) = 0;

    virtual std::any visitPlProposition(TimedQualityTemporalLogicParser::PlPropositionContext *context) = 0;

    virtual std::any visitLtlRelease(TimedQualityTemporalLogicParser::LtlReleaseContext *context) = 0;

    virtual std::any visitPtltlPrevious(TimedQualityTemporalLogicParser::PtltlPreviousContext *context) = 0;

    virtual std::any visitPtltlSince(TimedQualityTemporalLogicParser::PtltlSinceContext *context) = 0;

    virtual std::any visitPtltlTrigger(TimedQualityTemporalLogicParser::PtltlTriggerContext *context) = 0;

    virtual std::any visitLtlEventually(TimedQualityTemporalLogicParser::LtlEventuallyContext *context) = 0;

    virtual std::any visitLtlNext(TimedQualityTemporalLogicParser::LtlNextContext *context) = 0;

    virtual std::any visitTqtlExistsQualifier(TimedQualityTemporalLogicParser::TqtlExistsQualifierContext *context) = 0;

    virtual std::any visitTqtlForallQualifier(TimedQualityTemporalLogicParser::TqtlForallQualifierContext *context) = 0;

    virtual std::any visitArgumentList(TimedQualityTemporalLogicParser::ArgumentListContext *context) = 0;

    virtual std::any visitTimeConstraint(TimedQualityTemporalLogicParser::TimeConstraintContext *context) = 0;

    virtual std::any visitRelationalOperator(TimedQualityTemporalLogicParser::RelationalOperatorContext *context) = 0;

    virtual std::any visitProposition(TimedQualityTemporalLogicParser::PropositionContext *context) = 0;

    virtual std::any visitArithmeticMinus(TimedQualityTemporalLogicParser::ArithmeticMinusContext *context) = 0;

    virtual std::any visitArithmeticTimes(TimedQualityTemporalLogicParser::ArithmeticTimesContext *context) = 0;

    virtual std::any visitArithmeticParentheses(TimedQualityTemporalLogicParser::ArithmeticParenthesesContext *context) = 0;

    virtual std::any visitArithmeticDivide(TimedQualityTemporalLogicParser::ArithmeticDivideContext *context) = 0;

    virtual std::any visitArithmeticTerm(TimedQualityTemporalLogicParser::ArithmeticTermContext *context) = 0;

    virtual std::any visitArithmeticPlus(TimedQualityTemporalLogicParser::ArithmeticPlusContext *context) = 0;

    virtual std::any visitArithmeticModulo(TimedQualityTemporalLogicParser::ArithmeticModuloContext *context) = 0;

    virtual std::any visitArithmeticVariable(TimedQualityTemporalLogicParser::ArithmeticVariableContext *context) = 0;

    virtual std::any visitArithmeticConstant(TimedQualityTemporalLogicParser::ArithmeticConstantContext *context) = 0;


};

}  // namespace gen
