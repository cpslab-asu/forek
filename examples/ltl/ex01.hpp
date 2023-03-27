#ifndef FOREK_EXAMPLES_PL_EX01_HPP
#define FOREK_EXAMPLES_PL_EX01_HPP

#include <vector>

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
#include <forek/formula/visitor/ltl/visitor.hpp>

namespace forek::examples::ltl::ex01 {
using forek::formula::core::operation::ltl::Always;
using forek::formula::core::operation::ltl::Eventually;
using forek::formula::core::operation::ltl::Next;
using forek::formula::core::operation::ltl::Release;
using forek::formula::core::operation::ltl::Until;

using forek::formula::core::operation::pl::And;
using forek::formula::core::operation::pl::Iff;
using forek::formula::core::operation::pl::Implies;
using forek::formula::core::operation::pl::Not;
using forek::formula::core::operation::pl::Or;

using forek::formula::core::operand::pl::False;
using forek::formula::core::operand::pl::Proposition;
using forek::formula::core::operand::pl::True;

using forek::formula::visitor::ltl::Visitor;

auto map_proposition(const Proposition& p, double x) -> bool {
    if (p.name().compare("p") == 0) return x >= 1.0;
    if (p.name().compare("q") == 0) return x <= 1.0;
    return false;
}

class LinearTemporalLogicInterpretation : public Visitor {
   private:
    const std::vector<double>& trace_;
    int current = 0;

   public:
    std::vector<bool> res;

    explicit LinearTemporalLogicInterpretation(const std::vector<double>& trace)
        : trace_(trace) {
        for (auto x : trace) {
            res.push_back(false);
        }
    }

    auto visit(const Not& ctx) -> void override {
        ctx.expr().accept(*this);
        res[current] = !res[current];
    }

    auto visit(const And& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res[current];

        ctx.rexpr().accept(*this);
        auto rhs = res[current];

        res[current] = lhs && rhs;
    };

    auto visit(const Or& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res[current];

        ctx.rexpr().accept(*this);
        auto rhs = res[current];

        res[current] = lhs || rhs;
    }

    auto visit(const Implies& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res[current];

        ctx.rexpr().accept(*this);
        auto rhs = res[current];

        res[current] = (!lhs) || rhs;
    }

    auto visit(const Iff& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res[current];

        ctx.rexpr().accept(*this);
        auto rhs = res[current];

        res[current] = (!(lhs) || rhs) && (!(rhs) || lhs);
    };

    auto visit(const Proposition& ctx) -> void override {
        res[current] = map_proposition(ctx, trace_[current]);
    }

    auto visit(const True& ctx) -> void override { res[current] = true; }
    auto visit(const False& ctx) -> void override { res[current] = false; }

    auto visit(const Eventually& ctx) -> void override {
        for (int i = current; i < trace_.size(); ++i) {
            ctx.expr().accept(*this);
            res[i] = res[current];
        }
    }

    auto visit(const Always& ctx) -> void override {
        for (int i = current; i < trace_.size(); ++i) {
            current = i;
            ctx.expr().accept(*this);
        }
    }

    auto visit(const Next& ctx) -> void override {
        ctx.expr().accept(*this);
        current += 1;
        res[current] = !res[current];
    }

    auto visit(const Until& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res[current];

        ctx.rexpr().accept(*this);
        auto rhs = res[current];

        res[current] = (!(lhs) || rhs) && (!(rhs) || lhs);
    };

    auto visit(const Release& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res[current];

        ctx.rexpr().accept(*this);
        auto rhs = res[current];

        res[current] = (!(lhs) || rhs) && (!(rhs) || lhs);
    }
};

}  // namespace forek::examples::ltl::ex01
#endif
