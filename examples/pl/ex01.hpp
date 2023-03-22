#ifndef FOREK_EXAMPLES_PL_EX01_HPP
#define FOREK_EXAMPLES_PL_EX01_HPP

#include <forek/formula/core/operand/pl/false.hpp>
#include <forek/formula/core/operand/pl/proposition.hpp>
#include <forek/formula/core/operand/pl/true.hpp>
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/iff.hpp>
#include <forek/formula/core/operation/pl/implies.hpp>
#include <forek/formula/core/operation/pl/not.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/visitor/pl/visitor.hpp>

namespace forek::examples::pl::ex01 {
using forek::formula::core::operation::pl::And;
using forek::formula::core::operation::pl::Iff;
using forek::formula::core::operation::pl::Implies;
using forek::formula::core::operation::pl::Not;
using forek::formula::core::operation::pl::Or;

using forek::formula::core::operand::pl::False;
using forek::formula::core::operand::pl::Proposition;
using forek::formula::core::operand::pl::True;

using forek::formula::visitor::pl::Visitor;

auto map_proposition(const Proposition& p) -> bool {
    if (p.name().compare("p") == 0) return true;
    if (p.name().compare("q") == 0) return true;
    return false;
}

class PropositionalLogicSemantics : public Visitor {
   public:
    bool res = false;

   public:
    auto visit(const Not& ctx) -> void override {
        ctx.expr().accept(*this);
        res = !res;
    }

    auto visit(const And& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res;

        ctx.rexpr().accept(*this);
        auto rhs = res;

        res = lhs && rhs;
    };

    auto visit(const Or& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res;

        ctx.rexpr().accept(*this);
        auto rhs = res;

        res = lhs || rhs;
    }

    auto visit(const Implies& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res;

        ctx.rexpr().accept(*this);
        auto rhs = res;

        res = (!lhs) || rhs;
    }

    auto visit(const Iff& ctx) -> void override {
        ctx.lexpr().accept(*this);
        auto lhs = res;

        ctx.rexpr().accept(*this);
        auto rhs = res;

        res = (!(lhs) || rhs) && (!(rhs) || lhs);
    };

    auto visit(const Proposition& ctx) -> void override {
        res = map_proposition(ctx);
    }

    auto visit(const True& ctx) -> void override { res = true; }
    auto visit(const False& ctx) -> void override { res = false; }
};

}  // namespace forek::examples::pl::ex01
#endif
