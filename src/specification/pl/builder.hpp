#ifndef PYFOREL_SPECIFICATION_PL_BUILDER_HPP
#define PYFOREL_SPECIFICATION_PL_BUILDER_HPP

#include <pyforel/ir/formula.hpp>

#include "gen/PropositionalLogicParserBaseVisitor.h"

/// A custom PL visitor.
///
/// This class derives from the base visitor implementation. The reason to use
/// the base visitor over the abstract visitor is to alleviate some of the work
/// required in providing definitions for rules that we may not care about. For
/// example, parenthesis rules do not have any inherent value in the IR
/// structure, so providing explicit definitions is unneeded work.
///
/// The algorithm inherent to this class involves a Depth-First Search (DFS)
/// strategy to visit each rule and build an IR of the formula.
class IntermediateRepresentationBuilder
    : public PropositionalLogicParserBaseVisitor {
   public:
    auto visitStart(PropositionalLogicParser::StartContext *ctx)
        -> std::any override {
        visitChildren(ctx);
        return pyforel::ir::Formula{};
    };
};

#endif
