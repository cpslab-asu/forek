#include "forek/formula/core/operation/stl/predicate.hpp"
#include <forek/formula/core/operand/arithmetic/arithmetic.hpp>
#include <forek/formula/core/operand/pl/pl.hpp>
#include <forek/formula/core/operation/arithmetic/arithmetic.hpp>
#include <forek/formula/core/operation/ltl/ltl.hpp>
#include <forek/formula/core/operation/mtl/mtl.hpp>
#include <forek/formula/core/operation/pl/pl.hpp>
#include <forek/formula/core/operation/stl/stl.hpp>
#include <forek/formula/visitor/arithmetic/visitor.hpp>
#include <forek/formula/visitor/stl/visitor.hpp>

using namespace forek::formula;

template <typename T>
using Solver = forek::formula::visitor::arithmetic::Visitor<T>;

template <typename T>
class SolverCounter : public Solver<T> {
   public:
    int memory = 0;

   public:
    auto visit(core::operand::arithmetic::Integer<T>& ctx) -> T {
        memory += sizeof(ctx);
        return 1;
    }

    auto visit(core::operand::arithmetic::Real<T>& ctx) -> T {
        memory += sizeof(ctx);
        return 1;
    }

    auto visit(core::operand::arithmetic::Variable<T>& ctx) -> T {
        memory += sizeof(ctx);
        return 1;
    }

    auto visit(core::operation::arithmetic::Divide<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::arithmetic::Modulus<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::arithmetic::Minus<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::arithmetic::Plus<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::arithmetic::Times<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }
};

template <typename T>
class SignalTemporalLogicCounter : public forek::formula::visitor::stl::Visitor<T> {
   public:
    int memory = 0;

   public:
    explicit SignalTemporalLogicCounter(Solver<T>& solver)
        : forek::formula::visitor::stl::Visitor<T>(solver) {}

    auto visit(core::operand::pl::True<T>& ctx) -> T {
        memory += sizeof(ctx);
        return 1;
    }

    auto visit(core::operand::pl::False<T>& ctx) -> T {
        memory += sizeof(ctx);
        return 1;
    }

    auto visit(core::operand::pl::Proposition<T>& ctx) -> T {
        memory += sizeof(ctx);
        return 1;
    }

    auto visit(core::operation::pl::Not<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::pl::And<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::pl::Or<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::pl::Implies<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::pl::Iff<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::ltl::Always<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::ltl::Eventually<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::ltl::Next<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::ltl::Release<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::ltl::Until<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::mtl::AlwaysBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::mtl::EventuallyBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::mtl::NextBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::mtl::ReleaseBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::mtl::UntilBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::stl::Predicate<T>& ctx) -> T {
        memory += (sizeof(ctx) + dynamic_cast<SolverCounter<T>&>(this->solver()).memory);
        dynamic_cast<SolverCounter<T>&>(this->solver()).memory = 0;

        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }
};
