#ifndef FOREK_FORMULA_VISITOR_ARITHMETIC_DEFAULT_HPP
#define FOREK_FORMULA_VISITOR_ARITHMETIC_DEFAULT_HPP

#include <iostream>
#include <stdexcept>

#include <forek/formula/core/operand/arithmetic/integer.hpp>
#include <forek/formula/core/operand/arithmetic/real.hpp>
#include <forek/formula/core/operand/arithmetic/variable.hpp>
#include <forek/formula/core/operation/arithmetic/divide.hpp>
#include <forek/formula/core/operation/arithmetic/minus.hpp>
#include <forek/formula/core/operation/arithmetic/plus.hpp>
#include <forek/formula/core/operation/arithmetic/times.hpp>
#include <forek/formula/visitor/arithmetic/visitor.hpp>

namespace forek::formula::visitor::arithmetic {
class DefaultArithmeticVisitorDivideByZeroException : public std::runtime_error {
   public:
    explicit DefaultArithmeticVisitorDivideByZeroException(const std::string& msg)
        : std::runtime_error(msg) {}
};

class DefaultArithmeticVisitorUnknownVariable : public std::runtime_error {
   public:
    explicit DefaultArithmeticVisitorUnknownVariable(const std::string& msg)
        : std::runtime_error(msg) {}
};

template <typename T>
class DefaultVisitor : public forek::formula::visitor::arithmetic::Visitor<T> {
   public:
    auto visit(core::operand::arithmetic::Integer<T>& ctx) -> T { return ctx.value(); }
    auto visit(core::operand::arithmetic::Real<T>& ctx) -> T { return ctx.value(); }

    auto visit(core::operand::arithmetic::Variable<T>& ctx) -> T {
        try {
            return this->assignments_.at(ctx.name());
        } catch (const std::out_of_range& e) {
            throw DefaultArithmeticVisitorUnknownVariable(ctx.name());
        }
    }

    auto visit(core::operation::arithmetic::Divide<T>& ctx) -> T {
        if (ctx.rexpr().data() == 0) {
            throw DefaultArithmeticVisitorDivideByZeroException("division by zero");
        } else {
            return ctx.lexpr().data() / ctx.rexpr().data();
        }
    }

    auto visit(core::operation::arithmetic::Minus<T>& ctx) -> T {
        return ctx.lexpr().data() - ctx.rexpr().data();
    }

    auto visit(core::operation::arithmetic::Plus<T>& ctx) -> T {
        return ctx.lexpr().data() + ctx.rexpr().data();
    }

    auto visit(core::operation::arithmetic::Times<T>& ctx) -> T {
        return ctx.lexpr().data() * ctx.rexpr().data();
    }
};
}  // namespace forek::formula::visitor::arithmetic

#endif
