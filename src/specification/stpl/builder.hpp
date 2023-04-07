#ifndef FOREK_SPECIFICATION_TPTL_BUILDER_HPP
#define FOREK_SPECIFICATION_TPTL_BUILDER_HPP

#include <any>
#include <memory>
#include <string>
#include <utility>

#include <forek/formula/core/operand/arithmetic/real.hpp>
#include <forek/formula/core/operand/arithmetic/variable.hpp>
#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/core/operand/pl/false.hpp>
#include <forek/formula/core/operand/pl/proposition.hpp>
#include <forek/formula/core/operand/pl/true.hpp>
#include <forek/formula/core/operation/arithmetic/divide.hpp>
#include <forek/formula/core/operation/arithmetic/minus.hpp>
#include <forek/formula/core/operation/arithmetic/plus.hpp>
#include <forek/formula/core/operation/arithmetic/times.hpp>
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
#include <forek/formula/core/operation/tptl/constraint.hpp>
#include <forek/formula/core/operation/tptl/freeze.hpp>
#include <forek/formula/formula.hpp>

#include "gen/TimedPropositionalTemporalLogicParser.h"
#include "gen/TimedPropositionalTemporalLogicParserVisitor.h"

namespace builder {
using forek::formula::Formula;

using forek::formula::core::operand::arithmetic::Real;
using forek::formula::core::operand::arithmetic::Variable;
using forek::formula::core::operation::arithmetic::Divide;
using forek::formula::core::operation::arithmetic::Minus;
using forek::formula::core::operation::arithmetic::Plus;
using forek::formula::core::operation::arithmetic::Times;

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

using forek::formula::core::operation::tptl::FreezeTime;
using forek::formula::core::operation::tptl::TimeConstraint;

template <typename T>
class TimedPropositionalTemporalLogicBuilder
    : public gen::TimedPropositionalTemporalLogicParserVisitor {
   public:
    auto visitStart(gen::TimedPropositionalTemporalLogicParser::StartContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlNegation(gen::TimedPropositionalTemporalLogicParser::PlNegationContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Not<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitTptlParentheses(
        gen::TimedPropositionalTemporalLogicParser::TptlParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlIff(gen::TimedPropositionalTemporalLogicParser::PlIffContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Iff<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlAtom(gen::TimedPropositionalTemporalLogicParser::PlAtomContext* ctx)
        -> std::any override {
        return visit(ctx->proposition());
    }

    auto visitPlDisjunction(gen::TimedPropositionalTemporalLogicParser::PlDisjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Or<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                            std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlImplication(gen::TimedPropositionalTemporalLogicParser::PlImplicationContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Implies<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlConjunction(gen::TimedPropositionalTemporalLogicParser::PlConjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<And<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlTrue(gen::TimedPropositionalTemporalLogicParser::PlTrueContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<True<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitPlFalse(gen::TimedPropositionalTemporalLogicParser::PlFalseContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<False<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitProposition(gen::TimedPropositionalTemporalLogicParser::PropositionContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Proposition<T>>(std::move(name));
        return Formula<T>(std::move(expr));
    }

    auto visitLtlAlways(gen::TimedPropositionalTemporalLogicParser::LtlAlwaysContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr =
            std::make_unique<Always<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlEventually(gen::TimedPropositionalTemporalLogicParser::LtlEventuallyContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr =
            std::make_unique<Eventually<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlNext(gen::TimedPropositionalTemporalLogicParser::LtlNextContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Next<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlRelease(gen::TimedPropositionalTemporalLogicParser::LtlReleaseContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Release<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlUntil(gen::TimedPropositionalTemporalLogicParser::LtlUntilContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Until<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitTptlFreezeTime(gen::TimedPropositionalTemporalLogicParser::TptlFreezeTimeContext* ctx)
        -> std::any override {
        auto variable = ctx->Identifier()->getText();
        auto formula = visit(ctx->formula());

        auto expr = std::make_unique<FreezeTime<T>>(
            std::move(std::any_cast<Formula<T>>(formula).expr()), variable);

        return Formula<T>(std::move(expr));
    }

    auto visitTptlTimeConstraint(
        gen::TimedPropositionalTemporalLogicParser::TptlTimeConstraintContext* ctx)
        -> std::any override {
        return visit(ctx->timeConstraint());
    }

    auto visitTimeConstraint(gen::TimedPropositionalTemporalLogicParser::TimeConstraintContext* ctx)
        -> std::any override {
        auto relop = visit(ctx->relationalOperator());

        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr = std::make_unique<TimeConstraint<T>>(
            std::move(std::any_cast<Formula<T>>(lformula).expr()),
            std::move(std::any_cast<Formula<T>>(rformula).expr()),
            std::any_cast<std::string>(relop));

        return Formula<T>(std::move(expr));
    }

    auto visitTptlLessThan(gen::TimedPropositionalTemporalLogicParser::TptlLessThanContext* ctx)
        -> std::any override {
        return ctx->LessThan()->getText();
    }

    auto visitTptlGreaterThan(
        gen::TimedPropositionalTemporalLogicParser::TptlGreaterThanContext* ctx)
        -> std::any override {
        return ctx->GreaterThan()->getText();
    }

    auto visitTptlLessThanOrEqualTo(
        gen::TimedPropositionalTemporalLogicParser::TptlLessThanOrEqualToContext* ctx)
        -> std::any override {
        return ctx->LessThanOrEqualTo()->getText();
    }

    auto visitTptlGreaterThanOrEqualTo(
        gen::TimedPropositionalTemporalLogicParser::TptlGreaterThanOrEqualToContext* ctx)
        -> std::any override {
        return ctx->GreaterThanOrEqualTo()->getText();
    }

    auto visitTptlEqualTo(gen::TimedPropositionalTemporalLogicParser::TptlEqualToContext* ctx)
        -> std::any override {
        return ctx->EqualTo()->getText();
    }

    auto visitTptlNotEqualTo(gen::TimedPropositionalTemporalLogicParser::TptlNotEqualToContext* ctx)
        -> std::any override {
        return ctx->NotEqualTo()->getText();
    }

    auto visitArithmeticMinus(
        gen::TimedPropositionalTemporalLogicParser::ArithmeticMinusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Minus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticTimes(
        gen::TimedPropositionalTemporalLogicParser::ArithmeticTimesContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Times<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticParentheses(
        gen::TimedPropositionalTemporalLogicParser::ArithmeticParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->expression());
    }

    auto visitArithmeticDivide(
        gen::TimedPropositionalTemporalLogicParser::ArithmeticDivideContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Divide<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                        std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticTerm(gen::TimedPropositionalTemporalLogicParser::ArithmeticTermContext* ctx)
        -> std::any override {
        return visit(ctx->term());
    }

    auto visitArithmeticPlus(gen::TimedPropositionalTemporalLogicParser::ArithmeticPlusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Plus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                      std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticVariable(
        gen::TimedPropositionalTemporalLogicParser::ArithmeticVariableContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Variable<T>>(std::move(name));
        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticConstant(
        gen::TimedPropositionalTemporalLogicParser::ArithmeticConstantContext* ctx)
        -> std::any override {
        double value = std::stod(ctx->Scalar()->getText());

        auto expr = std::make_unique<Real<T>>(value);
        return Formula<T>(std::move(expr));
    }
};
}  // namespace builder
#endif
