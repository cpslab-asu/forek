
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/MetricTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "MetricTemporalLogicParser.h"


namespace gen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MetricTemporalLogicParser.
 */
class  MetricTemporalLogicParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MetricTemporalLogicParser.
   */
    virtual std::any visitStart(MetricTemporalLogicParser::StartContext *context) = 0;

    virtual std::any visitPlNegation(MetricTemporalLogicParser::PlNegationContext *context) = 0;

    virtual std::any visitParentheses(MetricTemporalLogicParser::ParenthesesContext *context) = 0;

    virtual std::any visitLtlUntil(MetricTemporalLogicParser::LtlUntilContext *context) = 0;

    virtual std::any visitPlImplication(MetricTemporalLogicParser::PlImplicationContext *context) = 0;

    virtual std::any visitPlConjunction(MetricTemporalLogicParser::PlConjunctionContext *context) = 0;

    virtual std::any visitPlFalse(MetricTemporalLogicParser::PlFalseContext *context) = 0;

    virtual std::any visitLtlAlways(MetricTemporalLogicParser::LtlAlwaysContext *context) = 0;

    virtual std::any visitPlIff(MetricTemporalLogicParser::PlIffContext *context) = 0;

    virtual std::any visitPlTrue(MetricTemporalLogicParser::PlTrueContext *context) = 0;

    virtual std::any visitPlDisjunction(MetricTemporalLogicParser::PlDisjunctionContext *context) = 0;

    virtual std::any visitPlProposition(MetricTemporalLogicParser::PlPropositionContext *context) = 0;

    virtual std::any visitLtlRelease(MetricTemporalLogicParser::LtlReleaseContext *context) = 0;

    virtual std::any visitLtlEventually(MetricTemporalLogicParser::LtlEventuallyContext *context) = 0;

    virtual std::any visitLtlNext(MetricTemporalLogicParser::LtlNextContext *context) = 0;

    virtual std::any visitInterval(MetricTemporalLogicParser::IntervalContext *context) = 0;

    virtual std::any visitProposition(MetricTemporalLogicParser::PropositionContext *context) = 0;


};

}  // namespace gen
