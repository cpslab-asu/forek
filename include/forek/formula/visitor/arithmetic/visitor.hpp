#ifndef FOREK_FORMULA_VISITOR_ARITHMETIC_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_ARITHMETIC_VISITOR_HPP

#include <map>

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
using AssignmentTable = std::map<std::string, T>;

template <typename T>
class Visitor : public forek::formula::visitor::Visitor<T> {
   protected:
    AssignmentTable<T> assignments_;

   public:
    virtual auto setup(core::operand::arithmetic::Integer<T>& ctx) -> void {}
    virtual auto setup(core::operand::arithmetic::Real<T>& ctx) -> void {}
    virtual auto setup(core::operand::arithmetic::Variable<T>& ctx) -> void {}
    virtual auto setup(core::operation::arithmetic::Divide<T>& ctx) -> void {}
    virtual auto setup(core::operation::arithmetic::Minus<T>& ctx) -> void {}
    virtual auto setup(core::operation::arithmetic::Plus<T>& ctx) -> void {}
    virtual auto setup(core::operation::arithmetic::Times<T>& ctx) -> void {}

    virtual auto visit(core::operand::arithmetic::Integer<T>& ctx) -> T = 0;
    virtual auto visit(core::operand::arithmetic::Real<T>& ctx) -> T = 0;
    virtual auto visit(core::operand::arithmetic::Variable<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::arithmetic::Divide<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::arithmetic::Minus<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::arithmetic::Plus<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::arithmetic::Times<T>& ctx) -> T = 0;

    [[nodiscard]] inline auto assignments() -> AssignmentTable<T>& { return assignments_; }
};
}  // namespace visitor::arithmetic
}  // namespace forek::formula

#endif
