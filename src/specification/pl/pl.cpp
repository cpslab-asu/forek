#include <pyforel/formula/formula.hpp>
#include <pyforel/specification/pl/pl.hpp>

#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "gen/PropositionalLogicLexer.h"
#include "gen/PropositionalLogicParser.h"
#include "gen/PropositionalLogicParserBaseVisitor.h"

namespace pyforel::specification::pl {
/// Build a formula::Formula from the PL formulae. This procedure is responsible
/// for several steps: (1) input streaming, (2) lexical analysis, (3) token
/// streaming, (4) parsing, and (5) IR construction.
///
/// This procedure utilizes a "lazy evaluation" of the requirement as parsing
/// the formula directly after construction is non-obvious. Furthermore, the
/// procedure is implemented here and not in the header counterpart as the
/// generated files from ANTLR and the ANTLR-related API must not be visible to
/// library users.
auto PropositionalLogic::parse() const -> formula::Formula {
    // Convert formula to valid ANTLR-accepted input format.
    auto input = antlr4::ANTLRInputStream(formula_);

    // Perform lexical analysis on the input.
    //
    // This includes creating a custom lexer and generating the set of tokens
    // from the target lexer.
    auto lexer = gen::PropositionalLogicLexer(&input);
    auto tokens = antlr4::CommonTokenStream(&lexer);

    // Parse the stream of tokens.
    //
    // The stream of tokens is passed to initialize the custom parser. From
    // this, the start rule is invoked. This call returns the context rule
    // to use in the visitor and walk.
    auto parser = gen::PropositionalLogicParser(&tokens);
    gen::PropositionalLogicParser::StartContext* root = parser.start();

    // Visit the parse tree.
    //
    // This last step traverses the parse tree to build the intermediate
    // representation using a custom visitor derived from the ANTLR-generated
    // visitor interface.
    auto visitor = gen::PropositionalLogicParserBaseVisitor();
    auto formula = visitor.visitStart(root);

    return formula::Formula{};
}
}  // namespace pyforel::specification::pl
