#ifndef FOREK_SPECIFICATION_TQTL_BUILDER_HPP
#define FOREK_SPECIFICATION_TQTL_BUILDER_HPP

#include <any>
#include <iterator>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include <forek/formula/core/operand/arithmetic/real.hpp>
#include <forek/formula/core/operand/arithmetic/variable.hpp>
#include <forek/formula/core/operand/operand.hpp>
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
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/iff.hpp>
#include <forek/formula/core/operation/pl/implies.hpp>
#include <forek/formula/core/operation/pl/not.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/core/operation/tptl/constraint.hpp>
#include <forek/formula/core/operation/tptl/freeze.hpp>
#include <forek/formula/core/operation/tqtl/qualifier.hpp>
#include <forek/formula/formula.hpp>

#include "gen/TimedQualityTemporalLogicParser.h"
#include "gen/TimedQualityTemporalLogicParserVisitor.h"

namespace builder {
using forek::formula::Formula;

using forek::formula::core::operand::arithmetic::Real;
using forek::formula::core::operand::arithmetic::Variable;
using forek::formula::core::operation::arithmetic::Divide;
using forek::formula::core::operation::arithmetic::Minus;
using forek::formula::core::operation::arithmetic::Modulus;
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

using forek::formula::core::operation::tqtl::ExistsQualifier;
using forek::formula::core::operation::tqtl::ForallQualifier;

template <typename T>
class TimedQualityTemporalLogicBuilder : public gen::TimedQualityTemporalLogicParserVisitor {
   public:
    auto visitStart(gen::TimedQualityTemporalLogicParser::StartContext* ctx) -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlNegation(gen::TimedQualityTemporalLogicParser::PlNegationContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Not<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitParentheses(gen::TimedQualityTemporalLogicParser::ParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlIff(gen::TimedQualityTemporalLogicParser::PlIffContext* ctx) -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Iff<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlProposition(gen::TimedQualityTemporalLogicParser::PlPropositionContext* ctx)
        -> std::any override {
        return visit(ctx->proposition());
    }

    auto visitPlDisjunction(gen::TimedQualityTemporalLogicParser::PlDisjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Or<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                            std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlImplication(gen::TimedQualityTemporalLogicParser::PlImplicationContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Implies<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlConjunction(gen::TimedQualityTemporalLogicParser::PlConjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<And<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlTrue(gen::TimedQualityTemporalLogicParser::PlTrueContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<True<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitPlFalse(gen::TimedQualityTemporalLogicParser::PlFalseContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<False<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitProposition(gen::TimedQualityTemporalLogicParser::PropositionContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Proposition<T>>(std::move(name));
        return Formula<T>(std::move(expr));
    }

    auto visitLtlAlways(gen::TimedQualityTemporalLogicParser::LtlAlwaysContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr =
            std::make_unique<Always<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlEventually(gen::TimedQualityTemporalLogicParser::LtlEventuallyContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr =
            std::make_unique<Eventually<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlNext(gen::TimedQualityTemporalLogicParser::LtlNextContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Next<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlRelease(gen::TimedQualityTemporalLogicParser::LtlReleaseContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Release<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlUntil(gen::TimedQualityTemporalLogicParser::LtlUntilContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Until<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitTptlFreezeTime(gen::TimedQualityTemporalLogicParser::TptlFreezeTimeContext* ctx)
        -> std::any override {
        auto variable = ctx->Identifier()->getText();
        auto formula = visit(ctx->formula());

        auto expr = std::make_unique<FreezeTime<T>>(
            std::move(std::any_cast<Formula<T>>(formula).expr()), variable);

        return Formula<T>(std::move(expr));
    }

    auto visitTptlTimeConstraint(
        gen::TimedQualityTemporalLogicParser::TptlTimeConstraintContext* ctx) -> std::any override {
        return visit(ctx->timeConstraint());
    }

    auto visitTimeConstraint(gen::TimedQualityTemporalLogicParser::TimeConstraintContext* ctx)
        -> std::any override {
        auto relop = ctx->relationalOperator()->getText();

        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr = std::make_unique<TimeConstraint<T>>(
            std::move(std::any_cast<Formula<T>>(lformula).expr()),
            std::move(std::any_cast<Formula<T>>(rformula).expr()),
            std::any_cast<std::string>(relop));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticMinus(gen::TimedQualityTemporalLogicParser::ArithmeticMinusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Minus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticTimes(gen::TimedQualityTemporalLogicParser::ArithmeticTimesContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Times<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticParentheses(
        gen::TimedQualityTemporalLogicParser::ArithmeticParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->expression());
    }

    auto visitArithmeticDivide(gen::TimedQualityTemporalLogicParser::ArithmeticDivideContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Divide<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                        std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticModulus(gen::TimedQualityTemporalLogicParser::ArithmeticModulusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Modulus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticTerm(gen::TimedQualityTemporalLogicParser::ArithmeticTermContext* ctx)
        -> std::any override {
        return visit(ctx->term());
    }

    auto visitArithmeticPlus(gen::TimedQualityTemporalLogicParser::ArithmeticPlusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Plus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                      std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticVariable(
        gen::TimedQualityTemporalLogicParser::ArithmeticVariableContext* ctx) -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Variable<T>>(std::move(name));
        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticConstant(
        gen::TimedQualityTemporalLogicParser::ArithmeticConstantContext* ctx) -> std::any override {
        double value = std::stod(ctx->Scalar()->getText());

        auto expr = std::make_unique<Real<T>>(value);
        return Formula<T>(std::move(expr));
    }

    auto visitRelationalOperator(
        gen::TimedQualityTemporalLogicParser::RelationalOperatorContext* ctx) -> std::any override {
        return ctx->getText();
    }

    auto visitTqtlObjectQualifier(
        gen::TimedQualityTemporalLogicParser::TqtlObjectQualifierContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());

        // In order to create a Qualifier node, the formula must be known before the node is
        // created. Therefore, visiting the main elements of a qualifier are performed first
        // followed by the formula to created the appropriate qualifier without having to pass
        // information between contexts.
        //
        // This includes visiting the type of qualifier, the arguments lists, and the frozen
        // variable contexts.
        auto kind = ctx->objectQualifier()->children.at(0)->getText();
        auto variables = visit(ctx->objectQualifier()->children.at(2));
        auto frozen = ctx->objectQualifier()->children.at(5)->getText();

        if (kind.compare("E") == 0 || kind.compare("exists") == 0) {
            auto expr = std::make_unique<ExistsQualifier<T>>(
                std::move(std::any_cast<Formula<T>>(formula).expr()),
                std::move(std::any_cast<std::vector<std::string>>(variables)),
                std::move(std::any_cast<std::string>(frozen)));

            return Formula<T>(std::move(expr));
        } else {
            auto expr = std::make_unique<ForallQualifier<T>>(
                std::move(std::any_cast<Formula<T>>(formula).expr()),
                std::move(std::any_cast<std::vector<std::string>>(variables)),
                std::move(std::any_cast<std::string>(frozen)));

            return Formula<T>(std::move(expr));
        }
    }

    auto visitTqtlExistsQualifier(
        gen::TimedQualityTemporalLogicParser::TqtlExistsQualifierContext* ctx)
        -> std::any override {
        // This context is never explicitly visited. However, to suppress the warning, a visit to
        // the children is used but never called here.
        return visitChildren(ctx);
    }

    auto visitTqtlForallQualifier(
        gen::TimedQualityTemporalLogicParser::TqtlForallQualifierContext* ctx)
        -> std::any override {
        // This context is never explicitly visited. However, to suppress the warning, a visit to
        // the children is used but never called here.
        return visitChildren(ctx);
    }

    auto visitArgumentList(gen::TimedQualityTemporalLogicParser::ArgumentListContext* ctx)
        -> std::any override {
        std::vector<std::string> variables;
        variables.push_back(ctx->Identifier()->getText());

        if (ctx->argumentList()) {
            auto others = std::any_cast<std::vector<std::string>>(visit(ctx->argumentList()));

            variables.reserve(variables.size() + others.size());
            variables.insert(variables.end(), std::make_move_iterator(others.begin()),
                             std::make_move_iterator(others.end()));
        }

        return variables;
    }
};
}  // namespace builder
#endif
