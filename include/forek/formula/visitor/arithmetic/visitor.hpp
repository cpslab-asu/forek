#ifndef FOREK_FORMULA_VISITOR_ARITHMETIC_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_ARITHMETIC_VISITOR_HPP

#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula {
namespace core {
namespace operand::arithmetic {
template <typename T>
class Integer;

template <typename T>
class Real;

template <typename T>
class Variable;
}  // namespace operand::arithmetic

namespace operation::arithmetic {
template <typename T>
class Divide;

template <typename T>
class Minus;

template <typename T>
class Plus;

template <typename T>
class Times;
}  // namespace operation::arithmetic
}  // namespace core

namespace visitor::arithmetic {
template <typename T>
class Visitor : public forek::formula::visitor::Visitor<T> {
   public:
    virtual auto visit(const core::operand::arithmetic::Integer<T>& ctx) -> T = 0;
    virtual auto visit(const core::operand::arithmetic::Real<T>& ctx) -> T = 0;
    virtual auto visit(const core::operand::arithmetic::Variable<T>& ctx) -> T = 0;

    virtual auto visit(const core::operation::arithmetic::Divide<T>& ctx) -> T = 0;
    virtual auto visit(const core::operation::arithmetic::Minus<T>& ctx) -> T = 0;
    virtual auto visit(const core::operation::arithmetic::Plus<T>& ctx) -> T = 0;
    virtual auto visit(const core::operation::arithmetic::Times<T>& ctx) -> T = 0;
};
}  // namespace visitor::arithmetic
}  // namespace forek::formula

#endif
