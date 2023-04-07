
// Generated from /home/andersonjwan/Projects/forek/build/antlr/grammars/LinearTemporalLogicParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "LinearTemporalLogicParser.h"


namespace gen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by LinearTemporalLogicParser.
 */
class  LinearTemporalLogicParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LinearTemporalLogicParser.
   */
    virtual std::any visitStart(LinearTemporalLogicParser::StartContext *context) = 0;

    virtual std::any visitPlNegation(LinearTemporalLogicParser::PlNegationContext *context) = 0;

    virtual std::any visitPlAtom(LinearTemporalLogicParser::PlAtomContext *context) = 0;

    virtual std::any visitLtlUntil(LinearTemporalLogicParser::LtlUntilContext *context) = 0;

    virtual std::any visitPlImplication(LinearTemporalLogicParser::PlImplicationContext *context) = 0;

    virtual std::any visitPlConjunction(LinearTemporalLogicParser::PlConjunctionContext *context) = 0;

    virtual std::any visitPlFalse(LinearTemporalLogicParser::PlFalseContext *context) = 0;

    virtual std::any visitLtlAlways(LinearTemporalLogicParser::LtlAlwaysContext *context) = 0;

    virtual std::any visitLtlParentheses(LinearTemporalLogicParser::LtlParenthesesContext *context) = 0;

    virtual std::any visitPlIff(LinearTemporalLogicParser::PlIffContext *context) = 0;

    virtual std::any visitPlTrue(LinearTemporalLogicParser::PlTrueContext *context) = 0;

    virtual std::any visitPlDisjunction(LinearTemporalLogicParser::PlDisjunctionContext *context) = 0;

    virtual std::any visitLtlRelease(LinearTemporalLogicParser::LtlReleaseContext *context) = 0;

    virtual std::any visitLtlEventually(LinearTemporalLogicParser::LtlEventuallyContext *context) = 0;

    virtual std::any visitLtlNext(LinearTemporalLogicParser::LtlNextContext *context) = 0;

    virtual std::any visitProposition(LinearTemporalLogicParser::PropositionContext *context) = 0;


};

}  // namespace gen
