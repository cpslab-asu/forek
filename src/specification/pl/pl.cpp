#include <any>
#include <iostream>
#include <pyforel/ir/formula.hpp>
#include <pyforel/specification/pl/pl.hpp>

#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "Exceptions.h"
#include "builder.hpp"
#include "gen/PropositionalLogicLexer.h"
#include "gen/PropositionalLogicParser.h"
#include "gen/PropositionalLogicParserBaseVisitor.h"
#include "tree/ParseTree.h"

using antlr4::ANTLRInputStream;
using antlr4::CommonTokenStream;
using antlr4::tree::ParseTree;

namespace pyforel::specification::pl {
/// Convert the PL formula into a proper ir::Formula. This procedure is
/// responsible for several steps that loosely fall under the "parse" interface
/// including: (1) input streaming, (2) lexical analysis, (3) token streaming,
/// (4) parsing, and (5) visiting.
///
/// This procedure is done here as a psuedo "lazy evaluation" of the requirement
/// as it is not naturally expected to parse the formula implicitly upon
/// initialization. Furthermore, as the generated parser/lexer files from ANTLR
/// are private to external library users, they and the ANTLR-related API must
/// be used at the implementation-level.
auto PropositionalLogic::parse() -> ir::Formula {
    // Convert formula to valid ANTLR-accepted input format.
    auto input = ANTLRInputStream(this->formula_);

    // Perform lexical analysis on the input.
    //
    // This includes creating a lexer and generating the set of tokens from the
    // target lexer.
    auto lexer = PropositionalLogicLexer(&input);
    auto tokens = CommonTokenStream(&lexer);

    // Parse the stream of tokens.
    //
    // The stream of tokens is passed to initialize the target parser. From
    // this, the rule to begin parsing (typically and highly suggested the
    // start rule) the token stream from is called. This call returns the
    // context rule associated with call to be used in the visitor.
    auto parser = PropositionalLogicParser(&tokens);
    PropositionalLogicParser::StartContext* root = parser.start();

    // Visit the parse tree.
    //
    // This last step traverses the parse tree to build the intermediate
    // representation using a custom visitor derived from the generated ANTLR
    // visitor class.
    auto builder = IntermediateRepresentationBuilder();
    auto ir = builder.visitStart(root);

    return std::any_cast<ir::Formula>(ir);
}
}  // namespace pyforel::specification::pl
