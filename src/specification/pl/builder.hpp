#ifndef PYFOREL_SPECIFICATION_PL_BUILDER_HPP
#define PYFOREL_SPECIFICATION_PL_BUILDER_HPP

#include <any>
#include <memory>
#include <utility>

#include <pyforel/formula/formula.hpp>
#include <pyforel/formula/operand/operand.hpp>
#include <pyforel/formula/operand/proposition.hpp>
#include <pyforel/formula/operation/pl/and.hpp>
#include <pyforel/formula/operation/pl/iff.hpp>
#include <pyforel/formula/operation/pl/implies.hpp>
#include <pyforel/formula/operation/pl/not.hpp>
#include <pyforel/formula/operation/pl/or.hpp>

#include "gen/PropositionalLogicParser.h"
#include "gen/PropositionalLogicParserVisitor.h"

namespace builder {
using pyforel::formula::Formula;
using pyforel::formula::operand::Operand;
using pyforel::formula::operand::Proposition;
using pyforel::formula::operation::pl::And;
using pyforel::formula::operation::pl::Iff;
using pyforel::formula::operation::pl::Implies;
using pyforel::formula::operation::pl::Not;
using pyforel::formula::operation::pl::Or;

class PropositionalLogicBuilder : public gen::PropositionalLogicParserVisitor {
   public:
    auto visitStart(gen::PropositionalLogicParser::StartContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlNegation(gen::PropositionalLogicParser::PlNegationContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Not>(
            std::move(std::any_cast<Formula>(formula).expr()));

        return Formula(std::move(expr));
    }

    auto visitParentheses(
        gen::PropositionalLogicParser::ParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlIff(gen::PropositionalLogicParser::PlIffContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Iff>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitPlAtom(gen::PropositionalLogicParser::PlAtomContext* ctx)
        -> std::any override {
        return visit(ctx->proposition());
    }

    auto visitPlDisjunction(
        gen::PropositionalLogicParser::PlDisjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Or>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitPlImplication(
        gen::PropositionalLogicParser::PlImplicationContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Implies>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitPlConjunction(
        gen::PropositionalLogicParser::PlConjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<And>(
            std::move(std::any_cast<Formula>(lformula).expr()),
            std::move(std::any_cast<Formula>(rformula).expr()));

        return Formula(std::move(expr));
    }

    auto visitProposition(
        gen::PropositionalLogicParser::PropositionContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Proposition>(std::move(name));
        return Formula(std::move(expr));
    }
};
}  // namespace builder
#endif
