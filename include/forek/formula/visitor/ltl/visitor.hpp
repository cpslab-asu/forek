#ifndef FOREK_FORMULA_VISITOR_LTL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_LTL_VISITOR_HPP

#include <forek/formula/visitor/pl/visitor.hpp>

namespace forek::formula {
namespace core::operation::ltl {
template <typename T>
class Always;

template <typename T>
class Eventually;

template <typename T>
class Next;

template <typename T>
class Release;

template <typename T>
class Until;
}  // namespace core::operation::ltl

namespace visitor::ltl {
template <typename T>
class Visitor : public forek::formula::visitor::pl::Visitor<T> {
   public:
    virtual auto setup(core::operation::ltl::Always<T>& ctx) -> void {}
    virtual auto setup(core::operation::ltl::Eventually<T>& ctx) -> void {}
    virtual auto setup(core::operation::ltl::Next<T>& ctx) -> void {}
    virtual auto setup(core::operation::ltl::Release<T>& ctx) -> void {}
    virtual auto setup(core::operation::ltl::Until<T>& ctx) -> void {}

    virtual auto visit(core::operation::ltl::Always<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::ltl::Eventually<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::ltl::Next<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::ltl::Release<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::ltl::Until<T>& ctx) -> T = 0;
};
}  // namespace visitor::ltl
}  // namespace forek::formula

#endif
