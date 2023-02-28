
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PropositionalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "PropositionalLogicParser.h"


namespace gen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by PropositionalLogicParser.
 */
class  PropositionalLogicParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PropositionalLogicParser.
   */
    virtual std::any visitStart(PropositionalLogicParser::StartContext *context) = 0;

    virtual std::any visitPlNegation(PropositionalLogicParser::PlNegationContext *context) = 0;

    virtual std::any visitPlIff(PropositionalLogicParser::PlIffContext *context) = 0;

    virtual std::any visitPlTrue(PropositionalLogicParser::PlTrueContext *context) = 0;

    virtual std::any visitPlAtom(PropositionalLogicParser::PlAtomContext *context) = 0;

    virtual std::any visitPlParenthesis(PropositionalLogicParser::PlParenthesisContext *context) = 0;

    virtual std::any visitPlDisjunction(PropositionalLogicParser::PlDisjunctionContext *context) = 0;

    virtual std::any visitPlImplication(PropositionalLogicParser::PlImplicationContext *context) = 0;

    virtual std::any visitPlConjunction(PropositionalLogicParser::PlConjunctionContext *context) = 0;

    virtual std::any visitPlFalse(PropositionalLogicParser::PlFalseContext *context) = 0;

    virtual std::any visitProposition(PropositionalLogicParser::PropositionContext *context) = 0;


};

}  // namespace gen
