#include <forek/formula/core/operand/pl/pl.hpp>
#include <forek/formula/core/operation/ltl/ltl.hpp>
#include <forek/formula/core/operation/pl/pl.hpp>
#include <forek/formula/visitor/pl/visitor.hpp>

using namespace forek::formula;

template <typename T>
class LinearTemporalLogicCounter : public forek::formula::visitor::ltl::Visitor<T> {
   public:
    int memory = 0;

   public:
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
};
