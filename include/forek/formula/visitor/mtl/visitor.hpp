#ifndef FOREK_FORMULA_VISITOR_MTL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_MTL_VISITOR_HPP

#include <forek/formula/visitor/ltl/visitor.hpp>

namespace forek::formula {
namespace core::operation::mtl {
template <typename T>
class AlwaysBounded;

template <typename T>
class EventuallyBounded;

template <typename T>
class NextBounded;

template <typename T>
class ReleaseBounded;

template <typename T>
class UntilBounded;
}  // namespace core::operation::mtl

namespace visitor::mtl {
template <typename T>
class Visitor : public forek::formula::visitor::ltl::Visitor<T> {
   public:
    virtual auto setup(core::operation::mtl::AlwaysBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::mtl::EventuallyBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::mtl::NextBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::mtl::ReleaseBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::mtl::UntilBounded<T>& ctx) -> void {}

    virtual auto visit(core::operation::mtl::AlwaysBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::mtl::EventuallyBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::mtl::NextBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::mtl::ReleaseBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::mtl::UntilBounded<T>& ctx) -> T = 0;
};
}  // namespace visitor::mtl
}  // namespace forek::formula

#endif
