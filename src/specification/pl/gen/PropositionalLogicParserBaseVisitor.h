
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/PropositionalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "PropositionalLogicParserVisitor.h"


namespace gen {

/**
 * This class provides an empty implementation of PropositionalLogicParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PropositionalLogicParserBaseVisitor : public PropositionalLogicParserVisitor {
public:

  virtual std::any visitStart(PropositionalLogicParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlNegation(PropositionalLogicParser::PlNegationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParentheses(PropositionalLogicParser::ParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlIff(PropositionalLogicParser::PlIffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlAtom(PropositionalLogicParser::PlAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlDisjunction(PropositionalLogicParser::PlDisjunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlImplication(PropositionalLogicParser::PlImplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlConstantTrue(PropositionalLogicParser::PlConstantTrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlConjunction(PropositionalLogicParser::PlConjunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlConstantFalse(PropositionalLogicParser::PlConstantFalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProposition(PropositionalLogicParser::PropositionContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace gen
