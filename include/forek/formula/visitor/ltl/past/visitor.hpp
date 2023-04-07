#ifndef FOREK_FORMULA_VISITOR_LTL_PAST_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_LTL_PAST_VISITOR_HPP

#include <forek/formula/visitor/ltl/visitor.hpp>

namespace forek::formula {
namespace core::operation::ltl::past {
template <typename T>
class Historically;

template <typename T>
class Once;

template <typename T>
class Previous;

template <typename T>
class Trigger;

template <typename T>
class Since;
}  // namespace core::operation::ltl::past

namespace visitor::ltl::past {
template <typename T>
class Visitor : public forek::formula::visitor::ltl::Visitor<T> {
   public:
    virtual auto setup(core::operation::ltl::past::Historically<T>& ctx) -> void {}
    virtual auto setup(core::operation::ltl::past::Once<T>& ctx) -> void {}
    virtual auto setup(core::operation::ltl::past::Previous<T>& ctx) -> void {}
    virtual auto setup(core::operation::ltl::past::Trigger<T>& ctx) -> void {}
    virtual auto setup(core::operation::ltl::past::Since<T>& ctx) -> void {}

    virtual auto visit(core::operation::ltl::past::Historically<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::ltl::past::Once<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::ltl::past::Previous<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::ltl::past::Trigger<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::ltl::past::Since<T>& ctx) -> T = 0;
};
}  // namespace visitor::ltl::past
}  // namespace forek::formula

#endif
