
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/MetricTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "MetricTemporalLogicParserVisitor.h"


namespace gen {

/**
 * This class provides an empty implementation of MetricTemporalLogicParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MetricTemporalLogicParserBaseVisitor : public MetricTemporalLogicParserVisitor {
public:

  virtual std::any visitStart(MetricTemporalLogicParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlNegation(MetricTemporalLogicParser::PlNegationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParentheses(MetricTemporalLogicParser::ParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlUntil(MetricTemporalLogicParser::LtlUntilContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlImplication(MetricTemporalLogicParser::PlImplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlConjunction(MetricTemporalLogicParser::PlConjunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlFalse(MetricTemporalLogicParser::PlFalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlAlways(MetricTemporalLogicParser::LtlAlwaysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlIff(MetricTemporalLogicParser::PlIffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlTrue(MetricTemporalLogicParser::PlTrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlDisjunction(MetricTemporalLogicParser::PlDisjunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlProposition(MetricTemporalLogicParser::PlPropositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlRelease(MetricTemporalLogicParser::LtlReleaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlEventually(MetricTemporalLogicParser::LtlEventuallyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlNext(MetricTemporalLogicParser::LtlNextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval(MetricTemporalLogicParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProposition(MetricTemporalLogicParser::PropositionContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace gen
