#ifndef FOREK_EXAMPLES_PL_EX01_HPP
#define FOREK_EXAMPLES_PL_EX01_HPP

#include <forek/formula/core/operand/pl/pl.hpp>
#include <forek/formula/core/operation/pl/pl.hpp>
#include <forek/formula/visitor/pl/visitor.hpp>

namespace examples::ex01 {
using forek::formula::core::operand::pl::False;
using forek::formula::core::operand::pl::Proposition;
using forek::formula::core::operand::pl::True;
using forek::formula::core::operation::pl::And;
using forek::formula::core::operation::pl::Iff;
using forek::formula::core::operation::pl::Implies;
using forek::formula::core::operation::pl::Not;
using forek::formula::core::operation::pl::Or;

using forek::formula::visitor::pl::Visitor;

template <typename T>
class PropositionalLogicInterpretation : public Visitor<T> {
   public:
    auto visit(Proposition<T>& ctx) -> T override { return lookup(ctx.name()); }

    auto visit(True<T>& ctx) -> T override { return true; }
    auto visit(False<T>& ctx) -> T override { return false; }
    auto visit(Not<T>& ctx) -> T override { return !ctx.expr().data(); }

    auto visit(And<T>& ctx) -> T override { return ctx.lexpr().data() && ctx.rexpr().data(); };

    auto visit(Or<T>& ctx) -> T override { return ctx.lexpr().data() || ctx.rexpr().data(); }

    auto visit(Implies<T>& ctx) -> T override {
        return (!ctx.lexpr().data()) || ctx.rexpr().data();
    }

    auto visit(Iff<T>& ctx) -> T override {
        return (!(ctx.lexpr().data()) || ctx.rexpr().data()) &&
               (!(ctx.rexpr().data()) || ctx.lexpr().data());
    };

   private:
    inline auto lookup(const std::string& name) -> bool {
        if (name.compare("p") == 0) return true;
        if (name.compare("q") == 0) return true;
        if (name.compare("r") == 0) return false;
        if (name.compare("s") == 0) return true;
        return false;
    }
};

}  // namespace examples::ex01
#endif
