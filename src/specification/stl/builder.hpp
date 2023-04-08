#ifndef FOREK_SPECIFICATION_STL_BUILDER_HPP
#define FOREK_SPECIFICATION_STL_BUILDER_HPP

#include <any>
#include <memory>
#include <utility>

#include <forek/formula/core/operand/arithmetic/real.hpp>
#include <forek/formula/core/operand/arithmetic/variable.hpp>
#include <forek/formula/core/operand/pl/false.hpp>
#include <forek/formula/core/operand/pl/proposition.hpp>
#include <forek/formula/core/operand/pl/true.hpp>
#include <forek/formula/core/operation/arithmetic/divide.hpp>
#include <forek/formula/core/operation/arithmetic/minus.hpp>
#include <forek/formula/core/operation/arithmetic/modulus.hpp>
#include <forek/formula/core/operation/arithmetic/plus.hpp>
#include <forek/formula/core/operation/arithmetic/times.hpp>
#include <forek/formula/core/operation/ltl/always.hpp>
#include <forek/formula/core/operation/ltl/eventually.hpp>
#include <forek/formula/core/operation/ltl/next.hpp>
#include <forek/formula/core/operation/ltl/release.hpp>
#include <forek/formula/core/operation/ltl/until.hpp>
#include <forek/formula/core/operation/mtl/types/interval.hpp>
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/iff.hpp>
#include <forek/formula/core/operation/pl/implies.hpp>
#include <forek/formula/core/operation/pl/not.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/core/operation/stl/predicate.hpp>
#include <forek/formula/formula.hpp>

#include "gen/SignalTemporalLogicParser.h"
#include "gen/SignalTemporalLogicParserVisitor.h"

namespace builder {
using forek::formula::Formula;

using forek::formula::core::operand::arithmetic::Real;
using forek::formula::core::operand::arithmetic::Variable;
using forek::formula::core::operation::arithmetic::Divide;
using forek::formula::core::operation::arithmetic::Minus;
using forek::formula::core::operation::arithmetic::Modulus;
using forek::formula::core::operation::arithmetic::Plus;
using forek::formula::core::operation::arithmetic::Times;

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

using forek::formula::core::operation::mtl::types::BoundaryKind;
using forek::formula::core::operation::mtl::types::Closed;
using forek::formula::core::operation::mtl::types::Interval;
using forek::formula::core::operation::mtl::types::Open;

using forek::formula::core::operation::stl::Predicate;

template <typename T>
class SignalTemporalLogicBuilder : public gen::SignalTemporalLogicParserVisitor {
   public:
    auto visitStart(gen::SignalTemporalLogicParser::StartContext* ctx) -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlNegation(gen::SignalTemporalLogicParser::PlNegationContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Not<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitParentheses(gen::SignalTemporalLogicParser::ParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlIff(gen::SignalTemporalLogicParser::PlIffContext* ctx) -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Iff<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlProposition(gen::SignalTemporalLogicParser::PlPropositionContext* ctx)
        -> std::any override {
        return visit(ctx->proposition());
    }

    auto visitPlDisjunction(gen::SignalTemporalLogicParser::PlDisjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Or<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                            std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlImplication(gen::SignalTemporalLogicParser::PlImplicationContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Implies<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlConjunction(gen::SignalTemporalLogicParser::PlConjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<And<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlTrue(gen::SignalTemporalLogicParser::PlTrueContext* ctx) -> std::any override {
        auto expr = std::make_unique<True<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitPlFalse(gen::SignalTemporalLogicParser::PlFalseContext* ctx) -> std::any override {
        auto expr = std::make_unique<False<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitProposition(gen::SignalTemporalLogicParser::PropositionContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Proposition<T>>(std::move(name));
        return Formula<T>(std::move(expr));
    }

    auto visitLtlAlways(gen::SignalTemporalLogicParser::LtlAlwaysContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr =
            std::make_unique<Always<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlEventually(gen::SignalTemporalLogicParser::LtlEventuallyContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr =
            std::make_unique<Eventually<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlNext(gen::SignalTemporalLogicParser::LtlNextContext* ctx) -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Next<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlRelease(gen::SignalTemporalLogicParser::LtlReleaseContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Release<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlUntil(gen::SignalTemporalLogicParser::LtlUntilContext* ctx) -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Until<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticMinus(gen::SignalTemporalLogicParser::ArithmeticMinusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Minus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticTimes(gen::SignalTemporalLogicParser::ArithmeticTimesContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Times<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticParentheses(
        gen::SignalTemporalLogicParser::ArithmeticParenthesesContext* ctx) -> std::any override {
        return visit(ctx->expression());
    }

    auto visitArithmeticDivide(gen::SignalTemporalLogicParser::ArithmeticDivideContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Divide<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                        std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticTerm(gen::SignalTemporalLogicParser::ArithmeticTermContext* ctx)
        -> std::any override {
        return visit(ctx->term());
    }

    auto visitArithmeticPlus(gen::SignalTemporalLogicParser::ArithmeticPlusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Plus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                      std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticVariable(gen::SignalTemporalLogicParser::ArithmeticVariableContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Variable<T>>(std::move(name));
        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticConstant(gen::SignalTemporalLogicParser::ArithmeticConstantContext* ctx)
        -> std::any override {
        double value = std::stod(ctx->Scalar()->getText());

        auto expr = std::make_unique<Real<T>>(value);
        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticModulus(gen::SignalTemporalLogicParser::ArithmeticModulusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Modulus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitInterval(gen::SignalTemporalLogicParser::IntervalContext* ctx) -> std::any override {
        double lower;
        if (ctx->Infinity(0)) {
            lower = std::numeric_limits<double>::infinity();
        } else {
            lower = std::stod(ctx->Scalar(0)->getText());
        }

        double upper;
        if (ctx->Infinity(1)) {
            upper = std::numeric_limits<double>::infinity();
        } else {
            upper = std::stod(ctx->Scalar(1)->getText());
        }

        if (ctx->LeftParenthesis()) {
            auto lbound = Open(lower);

            if (ctx->RightParenthesis()) {
                auto rbound = Open(upper);
                return Interval(lbound, rbound);
            } else {
                auto rbound = Closed(upper);
                return Interval(lbound, rbound);
            }
        } else {
            auto lbound = Closed(lower);

            if (ctx->RightParenthesis()) {
                auto rbound = Open(upper);
                return Interval(lbound, rbound);
            } else {
                auto rbound = Closed(upper);
                return Interval(lbound, rbound);
            }
        }
    }

    auto visitStlPredicate(gen::SignalTemporalLogicParser::StlPredicateContext* ctx)
        -> std::any override {
        return visit(ctx->predicate());
    }

    auto visitPredicate(gen::SignalTemporalLogicParser::PredicateContext* ctx)
        -> std::any override {
        auto relop = visit(ctx->relationalOperator());

        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Predicate<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                           std::move(std::any_cast<Formula<T>>(rformula).expr()),
                                           std::any_cast<std::string>(relop));

        return Formula<T>(std::move(expr));
    }

    auto visitRelationalOperator(gen::SignalTemporalLogicParser::RelationalOperatorContext* ctx)
        -> std::any override {
        return ctx->getText();
    }
};
}  // namespace builder
#endif
