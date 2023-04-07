
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/TimedPropositionalTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "TimedPropositionalTemporalLogicParser.h"


namespace gen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TimedPropositionalTemporalLogicParser.
 */
class  TimedPropositionalTemporalLogicParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TimedPropositionalTemporalLogicParser.
   */
    virtual std::any visitStart(TimedPropositionalTemporalLogicParser::StartContext *context) = 0;

    virtual std::any visitPlNegation(TimedPropositionalTemporalLogicParser::PlNegationContext *context) = 0;

    virtual std::any visitPlAtom(TimedPropositionalTemporalLogicParser::PlAtomContext *context) = 0;

    virtual std::any visitLtlUntil(TimedPropositionalTemporalLogicParser::LtlUntilContext *context) = 0;

    virtual std::any visitPlImplication(TimedPropositionalTemporalLogicParser::PlImplicationContext *context) = 0;

    virtual std::any visitPlConjunction(TimedPropositionalTemporalLogicParser::PlConjunctionContext *context) = 0;

    virtual std::any visitPlFalse(TimedPropositionalTemporalLogicParser::PlFalseContext *context) = 0;

    virtual std::any visitTptlParentheses(TimedPropositionalTemporalLogicParser::TptlParenthesesContext *context) = 0;

    virtual std::any visitLtlAlways(TimedPropositionalTemporalLogicParser::LtlAlwaysContext *context) = 0;

    virtual std::any visitTptlTimeConstraint(TimedPropositionalTemporalLogicParser::TptlTimeConstraintContext *context) = 0;

    virtual std::any visitPlIff(TimedPropositionalTemporalLogicParser::PlIffContext *context) = 0;

    virtual std::any visitPlTrue(TimedPropositionalTemporalLogicParser::PlTrueContext *context) = 0;

    virtual std::any visitPlDisjunction(TimedPropositionalTemporalLogicParser::PlDisjunctionContext *context) = 0;

    virtual std::any visitTptlFreezeTime(TimedPropositionalTemporalLogicParser::TptlFreezeTimeContext *context) = 0;

    virtual std::any visitLtlRelease(TimedPropositionalTemporalLogicParser::LtlReleaseContext *context) = 0;

    virtual std::any visitLtlEventually(TimedPropositionalTemporalLogicParser::LtlEventuallyContext *context) = 0;

    virtual std::any visitLtlNext(TimedPropositionalTemporalLogicParser::LtlNextContext *context) = 0;

    virtual std::any visitTimeConstraint(TimedPropositionalTemporalLogicParser::TimeConstraintContext *context) = 0;

    virtual std::any visitTptlLessThanOrEqualTo(TimedPropositionalTemporalLogicParser::TptlLessThanOrEqualToContext *context) = 0;

    virtual std::any visitTptlLessThan(TimedPropositionalTemporalLogicParser::TptlLessThanContext *context) = 0;

    virtual std::any visitTptlGreaterThanOrEqualTo(TimedPropositionalTemporalLogicParser::TptlGreaterThanOrEqualToContext *context) = 0;

    virtual std::any visitTptlGreaterThan(TimedPropositionalTemporalLogicParser::TptlGreaterThanContext *context) = 0;

    virtual std::any visitTptlEqualTo(TimedPropositionalTemporalLogicParser::TptlEqualToContext *context) = 0;

    virtual std::any visitTptlNotEqualTo(TimedPropositionalTemporalLogicParser::TptlNotEqualToContext *context) = 0;

    virtual std::any visitProposition(TimedPropositionalTemporalLogicParser::PropositionContext *context) = 0;

    virtual std::any visitArithmeticMinus(TimedPropositionalTemporalLogicParser::ArithmeticMinusContext *context) = 0;

    virtual std::any visitArithmeticTimes(TimedPropositionalTemporalLogicParser::ArithmeticTimesContext *context) = 0;

    virtual std::any visitArithmeticParentheses(TimedPropositionalTemporalLogicParser::ArithmeticParenthesesContext *context) = 0;

    virtual std::any visitArithmeticDivide(TimedPropositionalTemporalLogicParser::ArithmeticDivideContext *context) = 0;

    virtual std::any visitArithmeticTerm(TimedPropositionalTemporalLogicParser::ArithmeticTermContext *context) = 0;

    virtual std::any visitArithmeticPlus(TimedPropositionalTemporalLogicParser::ArithmeticPlusContext *context) = 0;

    virtual std::any visitArithmeticVariable(TimedPropositionalTemporalLogicParser::ArithmeticVariableContext *context) = 0;

    virtual std::any visitArithmeticConstant(TimedPropositionalTemporalLogicParser::ArithmeticConstantContext *context) = 0;


};

}  // namespace gen
