#ifndef FOREK_FORMULA_VISITOR_STL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_STL_VISITOR_HPP

#include <forek/formula/visitor/arithmetic/visitor.hpp>
#include <forek/formula/visitor/mtl/visitor.hpp>

namespace forek::formula {
namespace core::operation::stl {
template <typename T>
class Predicate;
}  // namespace core::operation::stl

namespace visitor::stl {
template <typename T>
class Visitor : public forek::formula::visitor::mtl::Visitor<T> {
   protected:
    visitor::arithmetic::Visitor<T>& solver_;

   public:
    explicit Visitor(visitor::arithmetic::Visitor<T>& solver) : solver_(solver) {}

    virtual auto setup(core::operation::stl::Predicate<T>& ctx) -> void {}
    virtual auto visit(core::operation::stl::Predicate<T>& ctx) -> T = 0;

    [[nodiscard]] inline auto solver() -> visitor::arithmetic::Visitor<T>& { return solver_; }
};
}  // namespace visitor::stl
}  // namespace forek::formula

#endif
