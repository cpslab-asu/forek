#ifndef FOREK_SPECIFICATION_LTL_BUILDER_HPP
#define FOREK_SPECIFICATION_LTL_BUILDER_HPP

#include <any>
#include <memory>
#include <utility>

#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/core/operand/pl/false.hpp>
#include <forek/formula/core/operand/pl/proposition.hpp>
#include <forek/formula/core/operand/pl/true.hpp>
#include <forek/formula/core/operation/ltl/always.hpp>
#include <forek/formula/core/operation/ltl/eventually.hpp>
#include <forek/formula/core/operation/ltl/next.hpp>
#include <forek/formula/core/operation/ltl/release.hpp>
#include <forek/formula/core/operation/ltl/until.hpp>
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/iff.hpp>
#include <forek/formula/core/operation/pl/implies.hpp>
#include <forek/formula/core/operation/pl/not.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/formula.hpp>

#include "gen/LinearTemporalLogicParser.h"
#include "gen/LinearTemporalLogicParserVisitor.h"

namespace builder {
using forek::formula::Formula;
using forek::formula::core::operand::Operand;
using forek::formula::core::operand::pl::False;
using forek::formula::core::operand::pl::Proposition;
using forek::formula::core::operand::pl::True;
using forek::formula::core::operation::pl::And;
using forek::formula::core::operation::pl::Iff;
using forek::formula::core::operation::pl::Implies;
using forek::formula::core::operation::pl::Not;
using forek::formula::core::operation::pl::Or;

using forek::formula::core::operation::ltl::Always;
using forek::formula::core::operation::ltl::Eventually;
using forek::formula::core::operation::ltl::Next;
using forek::formula::core::operation::ltl::Release;
using forek::formula::core::operation::ltl::Until;

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

    auto visitPlTrue(gen::LinearTemporalLogicParser::PlTrueContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<True>();
        return Formula(std::move(expr));
    }

    auto visitPlFalse(gen::LinearTemporalLogicParser::PlFalseContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<False>();
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
        auto expr = std::make_unique<Always>(
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
