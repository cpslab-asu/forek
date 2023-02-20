#ifndef PYFOREL_SPECIFICATION_PL_BUILDER_HPP
#define PYFOREL_SPECIFICATION_PL_BUILDER_HPP

#include <pyforel/ir/atom/proposition.hpp>
#include <pyforel/ir/formula.hpp>
#include <pyforel/ir/operation/pl/and.hpp>
#include <pyforel/ir/operation/pl/false.hpp>
#include <pyforel/ir/operation/pl/iff.hpp>
#include <pyforel/ir/operation/pl/implies.hpp>
#include <pyforel/ir/operation/pl/not.hpp>
#include <pyforel/ir/operation/pl/or.hpp>
#include <pyforel/ir/operation/pl/true.hpp>

#include "gen/PropositionalLogicParser.h"
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
        auto formula = visit(ctx->plFormula());
        return pyforel::ir::Formula(formula);
    };

    auto visitPlNegation(PropositionalLogicParser::PlNegationContext *ctx)
        -> std::any override {
        auto child = visit(ctx->plFormula());
        return pyforel::ir::operation::pl::Not(child);
    }

    auto visitPlIff(PropositionalLogicParser::PlIffContext *ctx)
        -> std::any override {
        auto left = visit(ctx->plFormula(0));
        auto right = visit(ctx->plFormula(1));

        return pyforel::ir::operation::pl::Iff(left, right);
    }

    auto visitPlTrue(PropositionalLogicParser::PlTrueContext *ctx)
        -> std::any override {
        return pyforel::ir::operation::pl::True();
    }

    auto visitPlParenthesis(PropositionalLogicParser::PlParenthesisContext *ctx)
        -> std::any override {
        return visit(ctx->plFormula());
    }

    auto visitPlDisjunction(PropositionalLogicParser::PlDisjunctionContext *ctx)
        -> std::any override {
        auto left = visit(ctx->plFormula(0));
        auto right = visit(ctx->plFormula(1));

        return pyforel::ir::operation::pl::Or(left, right);
    }

    auto visitPlImplication(PropositionalLogicParser::PlImplicationContext *ctx)
        -> std::any override {
        auto left = visit(ctx->plFormula(0));
        auto right = visit(ctx->plFormula(1));

        return pyforel::ir::operation::pl::Implies(left, right);
    }

    auto visitPlConjunction(PropositionalLogicParser::PlConjunctionContext *ctx)
        -> std::any override {
        auto left = visit(ctx->plFormula(0));
        auto right = visit(ctx->plFormula(1));

        return pyforel::ir::operation::pl::And(left, right);
    }

    auto visitPlFalse(PropositionalLogicParser::PlFalseContext *ctx)
        -> std::any override {
        return pyforel::ir::operation::pl::False();
    }

    auto visitProposition(PropositionalLogicParser::PropositionContext *ctx)
        -> std::any override {
        return pyforel::ir::atom::Proposition();
    }
};

#endif
