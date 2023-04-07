#ifndef FOREK_SPECIFICATION_MTL_BUILDER_HPP
#define FOREK_SPECIFICATION_MTL_BUILDER_HPP

#include <any>
#include <iostream>
#include <limits>
#include <memory>
#include <string>
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
#include <forek/formula/core/operation/mtl/always.hpp>
#include <forek/formula/core/operation/mtl/eventually.hpp>
#include <forek/formula/core/operation/mtl/next.hpp>
#include <forek/formula/core/operation/mtl/release.hpp>
#include <forek/formula/core/operation/mtl/types/interval.hpp>
#include <forek/formula/core/operation/mtl/until.hpp>
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/iff.hpp>
#include <forek/formula/core/operation/pl/implies.hpp>
#include <forek/formula/core/operation/pl/not.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/formula.hpp>

#include "gen/MetricTemporalLogicParser.h"
#include "gen/MetricTemporalLogicParserVisitor.h"

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
using forek::formula::core::operation::mtl::AlwaysBounded;
using forek::formula::core::operation::mtl::EventuallyBounded;
using forek::formula::core::operation::mtl::NextBounded;
using forek::formula::core::operation::mtl::ReleaseBounded;
using forek::formula::core::operation::mtl::UntilBounded;

using forek::formula::core::operation::mtl::types::BoundaryKind;
using forek::formula::core::operation::mtl::types::Closed;
using forek::formula::core::operation::mtl::types::Interval;
using forek::formula::core::operation::mtl::types::Open;

template <typename T>
class MetricTemporalLogicBuilder : public gen::MetricTemporalLogicParserVisitor {
   public:
    auto visitStart(gen::MetricTemporalLogicParser::StartContext* ctx) -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlNegation(gen::MetricTemporalLogicParser::PlNegationContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());
        auto expr = std::make_unique<Not<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitParentheses(gen::MetricTemporalLogicParser::ParenthesesContext* ctx)
        -> std::any override {
        return visit(ctx->formula());
    }

    auto visitPlIff(gen::MetricTemporalLogicParser::PlIffContext* ctx) -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Iff<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlProposition(gen::MetricTemporalLogicParser::PlPropositionContext* ctx)
        -> std::any override {
        return visit(ctx->proposition());
    }

    auto visitPlDisjunction(gen::MetricTemporalLogicParser::PlDisjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<Or<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                            std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlImplication(gen::MetricTemporalLogicParser::PlImplicationContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr =
            std::make_unique<Implies<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                         std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlConjunction(gen::MetricTemporalLogicParser::PlConjunctionContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        auto expr = std::make_unique<And<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

        return Formula<T>(std::move(expr));
    }

    auto visitPlTrue(gen::MetricTemporalLogicParser::PlTrueContext* ctx) -> std::any override {
        auto expr = std::make_unique<True<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitPlFalse(gen::MetricTemporalLogicParser::PlFalseContext* ctx) -> std::any override {
        auto expr = std::make_unique<False<T>>();
        return Formula<T>(std::move(expr));
    }

    auto visitProposition(gen::MetricTemporalLogicParser::PropositionContext* ctx)
        -> std::any override {
        auto name = ctx->Identifier()->getText();
        auto expr = std::make_unique<Proposition<T>>(std::move(name));

        return Formula<T>(std::move(expr));
    }

    auto visitLtlAlways(gen::MetricTemporalLogicParser::LtlAlwaysContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());

        if (ctx->interval()) {
            // bounded variant
            auto interval = visit(ctx->interval());
            auto expr = std::make_unique<AlwaysBounded<T>>(
                std::move(std::any_cast<Formula<T>>(formula).expr()),
                std::move(std::any_cast<Interval>(interval)));

            return Formula<T>(std::move(expr));
        } else {
            auto expr =
                std::make_unique<Always<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));
            return Formula<T>(std::move(expr));
        }
    }

    auto visitLtlEventually(gen::MetricTemporalLogicParser::LtlEventuallyContext* ctx)
        -> std::any override {
        auto formula = visit(ctx->formula());

        if (ctx->interval()) {
            // bounded variant
            auto interval = visit(ctx->interval());
            auto expr = std::make_unique<EventuallyBounded<T>>(
                std::move(std::any_cast<Formula<T>>(formula).expr()),
                std::move(std::any_cast<Interval>(interval)));

            return Formula<T>(std::move(expr));
        } else {
            auto expr = std::make_unique<Eventually<T>>(
                std::move(std::any_cast<Formula<T>>(formula).expr()));
            return Formula<T>(std::move(expr));
        }
    }

    auto visitLtlNext(gen::MetricTemporalLogicParser::LtlNextContext* ctx) -> std::any override {
        auto formula = visit(ctx->formula());

        if (ctx->interval()) {
            // bounded variant
            auto interval = visit(ctx->interval());
            auto expr = std::make_unique<NextBounded<T>>(
                std::move(std::any_cast<Formula<T>>(formula).expr()),
                std::move(std::any_cast<Interval>(interval)));

            return Formula<T>(std::move(expr));
        } else {
            auto expr =
                std::make_unique<Next<T>>(std::move(std::any_cast<Formula<T>>(formula).expr()));
            return Formula<T>(std::move(expr));
        }
    }

    auto visitLtlRelease(gen::MetricTemporalLogicParser::LtlReleaseContext* ctx)
        -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        if (ctx->interval()) {
            // bounded variant
            auto interval = visit(ctx->interval());
            auto expr = std::make_unique<ReleaseBounded<T>>(
                std::move(std::any_cast<Formula<T>>(lformula).expr()),
                std::move(std::any_cast<Formula<T>>(rformula).expr()),
                std::move(std::any_cast<Interval>(interval)));

            return Formula<T>(std::move(expr));
        } else {
            auto expr =
                std::make_unique<Release<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                             std::move(std::any_cast<Formula<T>>(rformula).expr()));

            return Formula<T>(std::move(expr));
        }
    }

    auto visitLtlUntil(gen::MetricTemporalLogicParser::LtlUntilContext* ctx) -> std::any override {
        auto lformula = visit(ctx->formula(0));
        auto rformula = visit(ctx->formula(1));

        if (ctx->interval()) {
            // bounded variant
            auto interval = visit(ctx->interval());
            auto expr = std::make_unique<UntilBounded<T>>(
                std::move(std::any_cast<Formula<T>>(lformula).expr()),
                std::move(std::any_cast<Formula<T>>(rformula).expr()),
                std::move(std::any_cast<Interval>(interval)));

            return Formula<T>(std::move(expr));
        } else {
            auto expr =
                std::make_unique<Until<T>>(std::move(std::any_cast<Formula<T>>(lformula).expr()),
                                           std::move(std::any_cast<Formula<T>>(rformula).expr()));

            return Formula<T>(std::move(expr));
        }
    }

    auto visitInterval(gen::MetricTemporalLogicParser::IntervalContext* ctx) -> std::any override {
        double lower;
        if (ctx->Infinity(0)) {
            lower = std::numeric_limits<double>::infinity();
        } else {
            lower = std::stod(ctx->Scalar(0)->getText());
        }

        double upper;
        if (ctx->Infinity(0)) {
            upper = std::numeric_limits<double>::infinity();
        } else {
            upper = std::stod(ctx->Scalar(0)->getText());
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
};
}  // namespace builder
#endif
