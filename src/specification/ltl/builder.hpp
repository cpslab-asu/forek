#ifndef PYFOREL_SPECIFICATION_LTL_BUILDER_HPP
#define PYFOREL_SPECIFICATION_LTL_BUILDER_HPP

#include <any>
#include <memory>
#include <utility>

#include <pyforel/formula/formula.hpp>
#include <pyforel/formula/operand/operand.hpp>
#include <pyforel/formula/operand/proposition.hpp>
#include <pyforel/formula/operation/ltl/always.hpp>
#include <pyforel/formula/operation/ltl/eventually.hpp>
#include <pyforel/formula/operation/ltl/next.hpp>
#include <pyforel/formula/operation/ltl/release.hpp>
#include <pyforel/formula/operation/ltl/until.hpp>
#include <pyforel/formula/operation/pl/and.hpp>
#include <pyforel/formula/operation/pl/iff.hpp>
#include <pyforel/formula/operation/pl/implies.hpp>
#include <pyforel/formula/operation/pl/not.hpp>
#include <pyforel/formula/operation/pl/or.hpp>

#include "gen/LinearTemporalLogicParser.h"
#include "gen/LinearTemporalLogicParserVisitor.h"

namespace builder {
using pyforel::formula::Formula;
using pyforel::formula::operand::Operand;
using pyforel::formula::operand::Proposition;
using pyforel::formula::operation::ltl::Always;
using pyforel::formula::operation::ltl::Eventually;
using pyforel::formula::operation::ltl::Next;
using pyforel::formula::operation::ltl::Release;
using pyforel::formula::operation::ltl::Until;
using pyforel::formula::operation::pl::And;
using pyforel::formula::operation::pl::Iff;
using pyforel::formula::operation::pl::Implies;
using pyforel::formula::operation::pl::Not;
using pyforel::formula::operation::pl::Or;

class LinearTemporalLogicBuilder
    : public gen::LinearTemporalLogicParserVisitor {
   public:
    auto visitStart(gen::LinearTemporalLogicParser::StartContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlNegation(gen::LinearTemporalLogicParser::PlNegationContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Not>(
            std::move(std::any_cast<Formula>(formula).expr()));

        return Formula(std::move(expr));
    }

    auto visitParentheses(
        gen::LinearTemporalLogicParser::ParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlIff(gen::LinearTemporalLogicParser::PlIffContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Iff>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitPlAtom(gen::LinearTemporalLogicParser::PlAtomContext* ctx)
        -> std::any override {
        return visit(ctx->proposition());
    }

    auto visitPlDisjunction(
        gen::LinearTemporalLogicParser::PlDisjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Or>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitPlImplication(
        gen::LinearTemporalLogicParser::PlImplicationContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Implies>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitPlConjunction(
        gen::LinearTemporalLogicParser::PlConjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<And>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitProposition(
        gen::LinearTemporalLogicParser::PropositionContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Proposition>(std::move(name));
        return Formula(std::move(expr));
    }

    auto visitLtlEventually(
        gen::LinearTemporalLogicParser::LtlEventuallyContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Eventually>(
            std::move(std::any_cast<Formula>(formula).expr()));

        return Formula(std::move(expr));
    }

    auto visitLtlAlways(gen::LinearTemporalLogicParser::LtlAlwaysContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Always>(
            std::move(std::any_cast<Formula>(formula).expr()));

        return Formula(std::move(expr));
    }

    auto visitLtlNext(gen::LinearTemporalLogicParser::LtlNextContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Next>(
            std::move(std::any_cast<Formula>(formula).expr()));

        return Formula(std::move(expr));
    }

    auto visitLtlUntil(gen::LinearTemporalLogicParser::LtlUntilContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Until>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitLtlRelease(gen::LinearTemporalLogicParser::LtlReleaseContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Release>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }
};
}  // namespace builder
#endif
