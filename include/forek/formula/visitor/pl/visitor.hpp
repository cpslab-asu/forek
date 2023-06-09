#ifndef FOREK_FORMULA_VISITOR_PL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_PL_VISITOR_HPP

#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula {
namespace core {
namespace operand::pl {
template <typename T>
class True;

template <typename T>
class False;

template <typename T>
class Proposition;
}  // namespace operand::pl

namespace operation::pl {
template <typename T>
class Not;

template <typename T>
class And;

template <typename T>
class Or;

template <typename T>
class Implies;

template <typename T>
class Iff;
}  // namespace operation::pl
}  // namespace core

namespace visitor::pl {
template <typename T>
class Visitor : public forek::formula::visitor::Visitor<T> {
   public:
    virtual auto setup(core::operand::pl::True<T>& ctx) -> void {}
    virtual auto setup(core::operand::pl::False<T>& ctx) -> void {}
    virtual auto setup(core::operand::pl::Proposition<T>& ctx) -> void {}
    virtual auto setup(core::operation::pl::Not<T>& ctx) -> void {}
    virtual auto setup(core::operation::pl::And<T>& ctx) -> void {}
    virtual auto setup(core::operation::pl::Or<T>& ctx) -> void {}
    virtual auto setup(core::operation::pl::Implies<T>& ctx) -> void {}
    virtual auto setup(core::operation::pl::Iff<T>& ctx) -> void {}

    virtual auto visit(core::operand::pl::True<T>& ctx) -> T = 0;
    virtual auto visit(core::operand::pl::False<T>& ctx) -> T = 0;
    virtual auto visit(core::operand::pl::Proposition<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::pl::Not<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::pl::And<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::pl::Or<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::pl::Implies<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::pl::Iff<T>& ctx) -> T = 0;
};
}  // namespace visitor::pl
}  // namespace forek::formula

#endif
