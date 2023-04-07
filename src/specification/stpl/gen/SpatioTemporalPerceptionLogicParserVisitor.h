
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/SpatioTemporalPerceptionLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "SpatioTemporalPerceptionLogicParser.h"


namespace gen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SpatioTemporalPerceptionLogicParser.
 */
class  SpatioTemporalPerceptionLogicParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SpatioTemporalPerceptionLogicParser.
   */
    virtual std::any visitStart(SpatioTemporalPerceptionLogicParser::StartContext *context) = 0;

    virtual std::any visitPlNegation(SpatioTemporalPerceptionLogicParser::PlNegationContext *context) = 0;

    virtual std::any visitPlImplication(SpatioTemporalPerceptionLogicParser::PlImplicationContext *context) = 0;

    virtual std::any visitPlConjunction(SpatioTemporalPerceptionLogicParser::PlConjunctionContext *context) = 0;

    virtual std::any visitPlFalse(SpatioTemporalPerceptionLogicParser::PlFalseContext *context) = 0;

    virtual std::any visitStplSpatialExists(SpatioTemporalPerceptionLogicParser::StplSpatialExistsContext *context) = 0;

    virtual std::any visitLtlAlways(SpatioTemporalPerceptionLogicParser::LtlAlwaysContext *context) = 0;

    virtual std::any visitPlIff(SpatioTemporalPerceptionLogicParser::PlIffContext *context) = 0;

    virtual std::any visitPlTrue(SpatioTemporalPerceptionLogicParser::PlTrueContext *context) = 0;

    virtual std::any visitPlProposition(SpatioTemporalPerceptionLogicParser::PlPropositionContext *context) = 0;

    virtual std::any visitPtltlPrevious(SpatioTemporalPerceptionLogicParser::PtltlPreviousContext *context) = 0;

    virtual std::any visitStplFunctionComparison(SpatioTemporalPerceptionLogicParser::StplFunctionComparisonContext *context) = 0;

    virtual std::any visitPtltlTrigger(SpatioTemporalPerceptionLogicParser::PtltlTriggerContext *context) = 0;

    virtual std::any visitLtlNext(SpatioTemporalPerceptionLogicParser::LtlNextContext *context) = 0;

    virtual std::any visitStplSpatialForall(SpatioTemporalPerceptionLogicParser::StplSpatialForallContext *context) = 0;

    virtual std::any visitParentheses(SpatioTemporalPerceptionLogicParser::ParenthesesContext *context) = 0;

    virtual std::any visitTqtlObjectQualifier(SpatioTemporalPerceptionLogicParser::TqtlObjectQualifierContext *context) = 0;

    virtual std::any visitPtltlOnce(SpatioTemporalPerceptionLogicParser::PtltlOnceContext *context) = 0;

    virtual std::any visitLtlUntil(SpatioTemporalPerceptionLogicParser::LtlUntilContext *context) = 0;

    virtual std::any visitPtltlHistorically(SpatioTemporalPerceptionLogicParser::PtltlHistoricallyContext *context) = 0;

    virtual std::any visitTptlTimeConstraint(SpatioTemporalPerceptionLogicParser::TptlTimeConstraintContext *context) = 0;

    virtual std::any visitPlDisjunction(SpatioTemporalPerceptionLogicParser::PlDisjunctionContext *context) = 0;

    virtual std::any visitTptlFreezeTime(SpatioTemporalPerceptionLogicParser::TptlFreezeTimeContext *context) = 0;

    virtual std::any visitLtlRelease(SpatioTemporalPerceptionLogicParser::LtlReleaseContext *context) = 0;

    virtual std::any visitPtltlSince(SpatioTemporalPerceptionLogicParser::PtltlSinceContext *context) = 0;

    virtual std::any visitLtlEventually(SpatioTemporalPerceptionLogicParser::LtlEventuallyContext *context) = 0;

    virtual std::any visitStplSpatialConjunction(SpatioTemporalPerceptionLogicParser::StplSpatialConjunctionContext *context) = 0;

    virtual std::any visitStplSpatialTerm(SpatioTemporalPerceptionLogicParser::StplSpatialTermContext *context) = 0;

    virtual std::any visitStplSpatialAlways(SpatioTemporalPerceptionLogicParser::StplSpatialAlwaysContext *context) = 0;

    virtual std::any visitStplSpatialUntil(SpatioTemporalPerceptionLogicParser::StplSpatialUntilContext *context) = 0;

    virtual std::any visitStplSpatialDisjunction(SpatioTemporalPerceptionLogicParser::StplSpatialDisjunctionContext *context) = 0;

    virtual std::any visitStplSpatialRelease(SpatioTemporalPerceptionLogicParser::StplSpatialReleaseContext *context) = 0;

    virtual std::any visitStplSpatialEventually(SpatioTemporalPerceptionLogicParser::StplSpatialEventuallyContext *context) = 0;

    virtual std::any visitStplSpatialNext(SpatioTemporalPerceptionLogicParser::StplSpatialNextContext *context) = 0;

    virtual std::any visitStplSpatialNegation(SpatioTemporalPerceptionLogicParser::StplSpatialNegationContext *context) = 0;

    virtual std::any visitStplSpatialInterior(SpatioTemporalPerceptionLogicParser::StplSpatialInteriorContext *context) = 0;

    virtual std::any visitStplSpatialClosure(SpatioTemporalPerceptionLogicParser::StplSpatialClosureContext *context) = 0;

    virtual std::any visitSpatialTerm(SpatioTemporalPerceptionLogicParser::SpatialTermContext *context) = 0;

    virtual std::any visitFnComparison(SpatioTemporalPerceptionLogicParser::FnComparisonContext *context) = 0;

    virtual std::any visitStplFnExpressionFnInvocation(SpatioTemporalPerceptionLogicParser::StplFnExpressionFnInvocationContext *context) = 0;

    virtual std::any visitStplFnExpressionMinus(SpatioTemporalPerceptionLogicParser::StplFnExpressionMinusContext *context) = 0;

    virtual std::any visitStplFnExpressionModulo(SpatioTemporalPerceptionLogicParser::StplFnExpressionModuloContext *context) = 0;

    virtual std::any visitStplFnExpressionParentheses(SpatioTemporalPerceptionLogicParser::StplFnExpressionParenthesesContext *context) = 0;

    virtual std::any visitStplFnExpressionTerm(SpatioTemporalPerceptionLogicParser::StplFnExpressionTermContext *context) = 0;

    virtual std::any visitStplFnExpressionDivision(SpatioTemporalPerceptionLogicParser::StplFnExpressionDivisionContext *context) = 0;

    virtual std::any visitStplFnExpressionTimes(SpatioTemporalPerceptionLogicParser::StplFnExpressionTimesContext *context) = 0;

    virtual std::any visitStplFnExpressionPlus(SpatioTemporalPerceptionLogicParser::StplFnExpressionPlusContext *context) = 0;

    virtual std::any visitFnInvocation(SpatioTemporalPerceptionLogicParser::FnInvocationContext *context) = 0;

    virtual std::any visitTqtlExistsQualifier(SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext *context) = 0;

    virtual std::any visitTqtlForallQualifier(SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext *context) = 0;

    virtual std::any visitArgumentList(SpatioTemporalPerceptionLogicParser::ArgumentListContext *context) = 0;

    virtual std::any visitTimeConstraint(SpatioTemporalPerceptionLogicParser::TimeConstraintContext *context) = 0;

    virtual std::any visitRelationalOperator(SpatioTemporalPerceptionLogicParser::RelationalOperatorContext *context) = 0;

    virtual std::any visitProposition(SpatioTemporalPerceptionLogicParser::PropositionContext *context) = 0;

    virtual std::any visitArithmeticMinus(SpatioTemporalPerceptionLogicParser::ArithmeticMinusContext *context) = 0;

    virtual std::any visitArithmeticTimes(SpatioTemporalPerceptionLogicParser::ArithmeticTimesContext *context) = 0;

    virtual std::any visitArithmeticParentheses(SpatioTemporalPerceptionLogicParser::ArithmeticParenthesesContext *context) = 0;

    virtual std::any visitArithmeticDivide(SpatioTemporalPerceptionLogicParser::ArithmeticDivideContext *context) = 0;

    virtual std::any visitArithmeticTerm(SpatioTemporalPerceptionLogicParser::ArithmeticTermContext *context) = 0;

    virtual std::any visitArithmeticPlus(SpatioTemporalPerceptionLogicParser::ArithmeticPlusContext *context) = 0;

    virtual std::any visitArithmeticModulo(SpatioTemporalPerceptionLogicParser::ArithmeticModuloContext *context) = 0;

    virtual std::any visitArithmeticVariable(SpatioTemporalPerceptionLogicParser::ArithmeticVariableContext *context) = 0;

    virtual std::any visitArithmeticConstant(SpatioTemporalPerceptionLogicParser::ArithmeticConstantContext *context) = 0;

    virtual std::any visitInterval(SpatioTemporalPerceptionLogicParser::IntervalContext *context) = 0;


};

}  // namespace gen
