
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/LinearTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "LinearTemporalLogicParserVisitor.h"


namespace gen {

/**
 * This class provides an empty implementation of LinearTemporalLogicParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LinearTemporalLogicParserBaseVisitor : public LinearTemporalLogicParserVisitor {
public:

  virtual std::any visitStart(LinearTemporalLogicParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlNegation(LinearTemporalLogicParser::PlNegationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlAtom(LinearTemporalLogicParser::PlAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlUntil(LinearTemporalLogicParser::LtlUntilContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlImplication(LinearTemporalLogicParser::PlImplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlConjunction(LinearTemporalLogicParser::PlConjunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlFalse(LinearTemporalLogicParser::PlFalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlAlways(LinearTemporalLogicParser::LtlAlwaysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlParentheses(LinearTemporalLogicParser::LtlParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlIff(LinearTemporalLogicParser::PlIffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlTrue(LinearTemporalLogicParser::PlTrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlDisjunction(LinearTemporalLogicParser::PlDisjunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlRelease(LinearTemporalLogicParser::LtlReleaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlEventually(LinearTemporalLogicParser::LtlEventuallyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLtlNext(LinearTemporalLogicParser::LtlNextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProposition(LinearTemporalLogicParser::PropositionContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace gen
