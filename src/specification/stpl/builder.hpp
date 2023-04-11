#ifndef FOREK_SPECIFICATION_STPL_BUILDER_HPP
#define FOREK_SPECIFICATION_STPL_BUILDER_HPP

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
#include <forek/formula/core/operation/mtl/types/interval.hpp>
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/iff.hpp>
#include <forek/formula/core/operation/pl/implies.hpp>
#include <forek/formula/core/operation/pl/not.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/core/operation/tptl/constraint.hpp>
#include <forek/formula/core/operation/tptl/freeze.hpp>
#include <forek/formula/core/operation/tqtl/qualifier.hpp>
#include <forek/formula/formula.hpp>

#include "gen/SpatioTemporalPerceptionLogicParser.h"
#include "gen/SpatioTemporalPerceptionLogicParserVisitor.h"

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

using forek::formula::core::operation::mtl::types::BoundaryKind;
using forek::formula::core::operation::mtl::types::Closed;
using forek::formula::core::operation::mtl::types::Interval;
using forek::formula::core::operation::mtl::types::Open;

using forek::formula::core::operation::tptl::FreezeTime;
using forek::formula::core::operation::tptl::TimeConstraint;

using forek::formula::core::operation::tqtl::ExistsQualifier;
using forek::formula::core::operation::tqtl::ForallQualifier;

template <typename T>
class SpatioTemporalPerceptionLogicBuilder
    : public gen::SpatioTemporalPerceptionLogicParserVisitor {
   public:
    auto visitStart(gen::SpatioTemporalPerceptionLogicParser::StartContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlNegation(gen::SpatioTemporalPerceptionLogicParser::PlNegationContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Not<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitParentheses(gen::SpatioTemporalPerceptionLogicParser::ParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlIff(gen::SpatioTemporalPerceptionLogicParser::PlIffContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Iff<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlProposition(gen::SpatioTemporalPerceptionLogicParser::PlPropositionContext* ctx)
        -> std::any override {
        return visit(ctx->proposition());
    }

    auto visitPlDisjunction(gen::SpatioTemporalPerceptionLogicParser::PlDisjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Or<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                            std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlImplication(gen::SpatioTemporalPerceptionLogicParser::PlImplicationContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Implies<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlConjunction(gen::SpatioTemporalPerceptionLogicParser::PlConjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<And<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlTrue(gen::SpatioTemporalPerceptionLogicParser::PlTrueContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<True<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitPlFalse(gen::SpatioTemporalPerceptionLogicParser::PlFalseContext* ctx)
        -> std::any override {
        auto expr = std::make_unique<False<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitProposition(gen::SpatioTemporalPerceptionLogicParser::PropositionContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Proposition<T>>(std::move(name));
        return Formula<T>(std::move(expr));
    }

    auto visitLtlAlways(gen::SpatioTemporalPerceptionLogicParser::LtlAlwaysContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr =
            std::make_unique<Always<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlEventually(gen::SpatioTemporalPerceptionLogicParser::LtlEventuallyContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr =
            std::make_unique<Eventually<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlNext(gen::SpatioTemporalPerceptionLogicParser::LtlNextContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Next<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlRelease(gen::SpatioTemporalPerceptionLogicParser::LtlReleaseContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Release<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlUntil(gen::SpatioTemporalPerceptionLogicParser::LtlUntilContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Until<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitTptlFreezeTime(gen::SpatioTemporalPerceptionLogicParser::TptlFreezeTimeContext* ctx)
        -> std::any override {
        auto variable = ctx->Identifier()->getText();
        auto formula = visit(ctx->formula());

        auto expr = std::make_unique<FreezeTime<T>>(
            std::move(std::any_cast<Formula<T>>(formula).expr()), variable);

        return Formula<T>(std::move(expr));
    }

    auto visitTptlTimeConstraint(
        gen::SpatioTemporalPerceptionLogicParser::TptlTimeConstraintContext* ctx)
        -> std::any override {
        return visit(ctx->timeConstraint());
    }

    auto visitTimeConstraint(gen::SpatioTemporalPerceptionLogicParser::TimeConstraintContext* ctx)
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

    auto visitArithmeticMinus(gen::SpatioTemporalPerceptionLogicParser::ArithmeticMinusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Minus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticTimes(gen::SpatioTemporalPerceptionLogicParser::ArithmeticTimesContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Times<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                       std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticParentheses(
        gen::SpatioTemporalPerceptionLogicParser::ArithmeticParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->expression());
    }

    auto visitArithmeticDivide(
        gen::SpatioTemporalPerceptionLogicParser::ArithmeticDivideContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Divide<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                        std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticModulus(
        gen::SpatioTemporalPerceptionLogicParser::ArithmeticModulusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Modulus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticTerm(gen::SpatioTemporalPerceptionLogicParser::ArithmeticTermContext* ctx)
        -> std::any override {
        return visit(ctx->term());
    }

    auto visitArithmeticPlus(gen::SpatioTemporalPerceptionLogicParser::ArithmeticPlusContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->expression(0));
        auto rformula = visit(ctx->expression(1));

        auto expr =
            std::make_unique<Plus<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                      std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticVariable(
        gen::SpatioTemporalPerceptionLogicParser::ArithmeticVariableContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();

        auto expr = std::make_unique<Variable<T>>(std::move(name));
        return Formula<T>(std::move(expr));
    }

    auto visitArithmeticConstant(
        gen::SpatioTemporalPerceptionLogicParser::ArithmeticConstantContext* ctx)
        -> std::any override {
        double value = std::stod(ctx->Scalar()->getText());

        auto expr = std::make_unique<Real<T>>(value);
        return Formula<T>(std::move(expr));
    }

    auto visitRelationalOperator(
        gen::SpatioTemporalPerceptionLogicParser::RelationalOperatorContext* ctx)
        -> std::any override {
        return ctx->getText();
    }

    auto visitTqtlObjectQualifier(
        gen::SpatioTemporalPerceptionLogicParser::TqtlObjectQualifierContext* ctx)
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
        gen::SpatioTemporalPerceptionLogicParser::TqtlExistsQualifierContext* ctx)
        -> std::any override {
        // This context is never explicitly visited. However, to suppress the warning, a visit to
        // the children is used but never called here.
        return visitChildren(ctx);
    }

    auto visitTqtlForallQualifier(
        gen::SpatioTemporalPerceptionLogicParser::TqtlForallQualifierContext* ctx)
        -> std::any override {
        // This context is never explicitly visited. However, to suppress the warning, a visit to
        // the children is used but never called here.
        return visitChildren(ctx);
    }

    auto visitArgumentList(gen::SpatioTemporalPerceptionLogicParser::ArgumentListContext* ctx)
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

    auto visitInterval(gen::SpatioTemporalPerceptionLogicParser::IntervalContext* ctx)
        -> std::any override {
        double lower;
        double upper;

        if (ctx->Infinity(0)) {
            lower = std::numeric_limits<double>::infinity();

            if (ctx->Infinity(1)) {
                upper = std::numeric_limits<double>::infinity();
            } else {
                upper = std::stod(ctx->Scalar(0)->getText());
            }
        } else {
            lower = std::stod(ctx->Scalar(0)->getText());

            if (ctx->Infinity(0)) {
                upper = std::numeric_limits<double>::infinity();
            } else {
                upper = std::stod(ctx->Scalar(1)->getText());
            }
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

    auto visitStplFunctionCall(
        gen::SpatioTemporalPerceptionLogicParser::StplFunctionCallContext* ctx)
        -> std::any override {
        return visit(ctx->functionCall());
    }

    auto visitStplFunctionComparison(
        gen::SpatioTemporalPerceptionLogicParser::StplFunctionComparisonContext* ctx)
        -> std::any override {
        return visit(ctx->fnComparison());
    }

    auto visitStplSpatialTerm(gen::SpatioTemporalPerceptionLogicParser::StplSpatialTermContext* ctx)
        -> std::any override {
        return visit(ctx->spatialTerm());
    }

    auto visitSpatialTerm(gen::SpatioTemporalPerceptionLogicParser::SpatialTermContext* ctx)
        -> std::any override {}

    auto visitFnComparison(gen::SpatioTemporalPerceptionLogicParser::FnComparisonContext* ctx)
        -> std::any override {}

    auto visitFunctionCall(gen::SpatioTemporalPerceptionLogicParser::FunctionCallContext* ctx)
        -> std::any override {}

    auto visitStplSpatialForall(
        gen::SpatioTemporalPerceptionLogicParser::StplSpatialForallContext* ctx)
        -> std::any override {}

    auto visitStplSpatialExists(
        gen::SpatioTemporalPerceptionLogicParser::StplSpatialExistsContext* ctx)
        -> std::any override {}

    auto visitStplSpatialAlways(
        gen::SpatioTemporalPerceptionLogicParser::StplSpatialAlwaysContext* ctx)
        -> std::any override {}

    auto visitStplSpatialUntil(
        gen::SpatioTemporalPerceptionLogicParser::StplSpatialUntilContext* ctx)
        -> std::any override {}

    auto visitStplSpatialRelease(
        gen::SpatioTemporalPerceptionLogicParser::StplSpatialReleaseContext* ctx)
        -> std::any override {}

    auto visitStplSpatialEventually(
        gen::SpatioTemporalPerceptionLogicParser::StplSpatialEventuallyContext* ctx)
        -> std::any override {}

    auto visitStplSpatialNext(gen::SpatioTemporalPerceptionLogicParser::StplSpatialNextContext* ctx)
        -> std::any override {}

    auto visitStplComplement(gen::SpatioTemporalPerceptionLogicParser::StplComplementContext* ctx)
        -> std::any override {}

    auto visitStplInterior(gen::SpatioTemporalPerceptionLogicParser::StplInteriorContext* ctx)
        -> std::any override {}

    auto visitStplClosure(gen::SpatioTemporalPerceptionLogicParser::StplClosureContext* ctx)
        -> std::any override {}

    auto visitStplIntersection(
        gen::SpatioTemporalPerceptionLogicParser::StplIntersectionContext* ctx)
        -> std::any override {}

    auto visitStplUnion(gen::SpatioTemporalPerceptionLogicParser::StplUnionContext* ctx)
        -> std::any override {}
};
}  // namespace builder
#endif
