
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PropositionalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "PropositionalLogicParserVisitor.h"


/**
 * This class provides an empty implementation of PropositionalLogicParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PropositionalLogicParserBaseVisitor : public PropositionalLogicParserVisitor {
public:

  virtual std::any visitPlFormula(PropositionalLogicParser::PlFormulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProposition(PropositionalLogicParser::PropositionContext *ctx) override {
    return visitChildren(ctx);
  }


};

