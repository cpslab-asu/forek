#include <any>
#include <iostream>
#include <memory>
#include <string>

#include <forek/formula/core/node.hpp>
#include <forek/formula/formula.hpp>
#include <forek/specification/tqtl/impl.hpp>

#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "builder.hpp"
#include "error/handler.hpp"
#include "gen/TimedQualityTemporalLogicLexer.h"
#include "gen/TimedQualityTemporalLogicParser.h"

namespace forek::specification::tqtl {
/// Build a formula::Formula from the TQTL formula. This procedure is responsible
/// for several steps: (1) input streaming, (2) lexical analysis, (3) token
/// streaming, (4) parsing, and (5) IR construction.
///
/// This procedure utilizes a "lazy evaluation" of the requirement as parsing
/// the formula directly after construction is non-obvious. Furthermore, the
/// procedure is implemented here and not in the header counterpart as the
/// generated files from ANTLR and the ANTLR-related API must not be visible to
/// library users.
template <typename T>
auto TimedQualityTemporalLogic<T>::parse() const -> formula::Formula<T> {
    // Convert formula to valid ANTLR-accepted input format.
    auto input = antlr4::ANTLRInputStream(this->formula_);

    // Perform lexical analysis on the input.
    //
    // This includes creating a custom lexer and generating the set of tokens
    // from the target lexer.
    auto lexer = gen::TimedQualityTemporalLogicLexer(&input);
    auto tokens = antlr4::CommonTokenStream(&lexer);

    // Parse the stream of tokens.
    //
    // The stream of tokens is passed to initialize the custom parser. From
    // this, the start rule is invoked. This call returns the context rule
    // to use in the visitor and walk.
    auto parser = gen::TimedQualityTemporalLogicParser(&tokens);

    // Remove the default set of error listeners.
    //
    // The current behavior when an error is encountered should be to fail
    // completely as a formula that is not well-formed results in undefined
    // behavior during evaluation and should not be considered reliable.
    parser.removeErrorListeners();

    // The custom default error reporting/recovery strategy is used that throws
    // specification-specific errors upon lexical- or parse-based errors.
    auto const handler = std::make_shared<error::TimedQualityTemporalLogicErrorHandler>();
    parser.setErrorHandler(handler);

    // Begin parsing from the `start` grammar rule.
    gen::TimedQualityTemporalLogicParser::StartContext* root = parser.start();

    // Visit the parse tree.
    //
    // This last step traverses the parse tree to build the intermediate
    // representation using a custom visitor derived from the
    // ANTLR-generated visitor interface.
    auto builder = builder::TimedQualityTemporalLogicBuilder<T>();
    auto formula = builder.visitStart(root);

    return std::any_cast<formula::Formula<T>>(formula);
}
}  // namespace forek::specification::tqtl
