#ifndef FOREK_SPECIFICATION_PL_BUILDER_HPP
#define FOREK_SPECIFICATION_PL_BUILDER_HPP

#include <any>
#include <memory>
#include <utility>

#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/core/operand/pl/false.hpp>
#include <forek/formula/core/operand/pl/proposition.hpp>
#include <forek/formula/core/operand/pl/true.hpp>
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/iff.hpp>
#include <forek/formula/core/operation/pl/implies.hpp>
#include <forek/formula/core/operation/pl/not.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/formula.hpp>

#include "gen/PropositionalLogicParser.h"
#include "gen/PropositionalLogicParserVisitor.h"

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

    auto visitPlConstantTrue(
        gen::PropositionalLogicParser::PlConstantTrueContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<True>();
        return Formula(std::move(expr));
    }

    auto visitPlConstantFalse(
        gen::PropositionalLogicParser::PlConstantFalseContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<False>();
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
