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

class PropositionalLogicSemantics : public Visitor {
   public:
    auto visit(const Not& ctx) -> void override {
        std::cout << "visited pl::Not\n";

        ctx.expr().accept(*this);
    }

    auto visit(const And& ctx) -> void override {
        std::cout << "visited pl::And\n";

        ctx.lexpr().accept(*this);
        ctx.rexpr().accept(*this);
    };

    auto visit(const Or& ctx) -> void override {
        std::cout << "visited pl::Or\n";

        ctx.lexpr().accept(*this);
        ctx.rexpr().accept(*this);
    }

    auto visit(const Implies& ctx) -> void override {
        std::cout << "visited pl::Implies\n";

        ctx.lexpr().accept(*this);
        ctx.rexpr().accept(*this);
    }

    auto visit(const Iff& ctx) -> void override {
        std::cout << "visited pl::Iff\n";

        ctx.lexpr().accept(*this);
        ctx.rexpr().accept(*this);
    };

    auto visit(const Proposition& ctx) -> void override {
        std::cout << "visited pl::Proposition: " << ctx.name() << "\n";
    }

    auto visit(const True& ctx) -> void override {
        std::cout << "visited pl::True\n";
    }

    auto visit(const False& ctx) -> void override {
        std::cout << "visited pl::False\n";
    }
};

}  // namespace forek::examples::pl::ex01
#endif
