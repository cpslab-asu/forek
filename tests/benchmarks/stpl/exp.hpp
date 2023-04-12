#include "forek/formula/core/operation/tqtl/qualifier.hpp"
#include <forek/formula/core/operand/arithmetic/arithmetic.hpp>
#include <forek/formula/core/operand/pl/pl.hpp>
#include <forek/formula/core/operand/stpl/stpl.hpp>
#include <forek/formula/core/operation/arithmetic/arithmetic.hpp>
#include <forek/formula/core/operation/ltl/ltl.hpp>
#include <forek/formula/core/operation/pl/pl.hpp>
#include <forek/formula/core/operation/stpl/stpl.hpp>
#include <forek/formula/core/operation/tptl/tptl.hpp>
#include <forek/formula/core/operation/tqtl/tqtl.hpp>
#include <forek/formula/visitor/arithmetic/visitor.hpp>
#include <forek/formula/visitor/stpl/visitor.hpp>

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
class SpatioTemporalPerceptionLogicCounter : public forek::formula::visitor::stpl::Visitor<T> {
   public:
    int memory = 0;

   public:
    explicit SpatioTemporalPerceptionLogicCounter(Solver<T>& solver)
        : forek::formula::visitor::stpl::Visitor<T>(solver) {}

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

    auto visit(core::operation::tptl::FreezeTime<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::tptl::TimeConstraint<T>& ctx) -> T {
        memory += (sizeof(ctx) + dynamic_cast<SolverCounter<T>&>(this->solver()).memory);
        dynamic_cast<SolverCounter<T>&>(this->solver()).memory = 0;

        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::tqtl::ExistsQualifier<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::tqtl::ForallQualifier<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operand::stpl::SpatialTerm<T>& ctx) -> T {
        memory += sizeof(ctx);
        return 1;
    }

    auto visit(core::operation::stpl::AlwaysSpatial<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::AlwaysSpatialBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::EventuallySpatial<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::EventuallySpatialBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::NextSpatial<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::NextSpatialBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::UntilSpatial<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::stpl::UntilSpatialBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::stpl::ReleaseSpatial<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::stpl::ReleaseSpatialBounded<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::stpl::Complement<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::Intersection<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }
    auto visit(core::operation::stpl::Union<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }

    auto visit(core::operation::stpl::Interior<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::Closure<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::Area<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::Universe<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operation::stpl::NonEmpty<T>& ctx) -> T {
        memory += sizeof(ctx);
        return ctx.expr().data() + 1;
    }

    auto visit(core::operand::stpl::Function<T>& ctx) -> T {
        memory += sizeof(ctx);
        return 1;
    }

    auto visit(core::operation::stpl::FunctionCompare<T>& ctx) -> T {
        memory += (sizeof(ctx) + dynamic_cast<SolverCounter<T>&>(this->solver()).memory);
        dynamic_cast<SolverCounter<T>&>(this->solver()).memory = 0;

        return ctx.lexpr().data() + ctx.rexpr().data() + 1;
    }
};
