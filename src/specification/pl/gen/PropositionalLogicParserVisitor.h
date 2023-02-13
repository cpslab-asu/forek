
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PropositionalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "PropositionalLogicParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PropositionalLogicParser.
 */
class  PropositionalLogicParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PropositionalLogicParser.
   */
    virtual std::any visitPlFormula(PropositionalLogicParser::PlFormulaContext *context) = 0;

    virtual std::any visitProposition(PropositionalLogicParser::PropositionContext *context) = 0;


};

