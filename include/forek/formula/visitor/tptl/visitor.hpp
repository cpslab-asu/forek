#ifndef FOREK_FORMULA_VISITOR_TPTL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_TPTL_VISITOR_HPP

#include "forek/formula/visitor/arithmetic/visitor.hpp"
#include <forek/formula/visitor/ltl/visitor.hpp>

namespace forek::formula {
namespace core::operation::tptl {
template <typename T>
class FreezeTime;

template <typename T>
class TimeConstraint;
}  // namespace core::operation::tptl

namespace visitor::tptl {
template <typename T>
class Visitor : public forek::formula::visitor::ltl::Visitor<T> {
   protected:
    visitor::arithmetic::Visitor<T>& solver_;

   public:
    explicit Visitor(visitor::arithmetic::Visitor<T>& solver) : solver_(solver) {}

    virtual auto setup(core::operation::tptl::FreezeTime<T>& ctx) -> void {}
    virtual auto setup(core::operation::tptl::TimeConstraint<T>& ctx) -> void {}

    virtual auto visit(core::operation::tptl::FreezeTime<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::tptl::TimeConstraint<T>& ctx) -> T = 0;

    [[nodiscard]] inline auto solver() -> visitor::arithmetic::Visitor<T>& { return solver_; }
};
}  // namespace visitor::tptl
}  // namespace forek::formula

#endif
