#ifndef FOREK_FORMULA_VISITOR_TQTL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_TQTL_VISITOR_HPP

#include <forek/formula/visitor/tptl/visitor.hpp>

namespace forek::formula {
namespace core::operation::tqtl {
template <typename T>
class ExistsQualifier;

template <typename T>
class ForallQualifier;

}  // namespace core::operation::tqtl

namespace visitor::tqtl {
template <typename T>
class Visitor : public forek::formula::visitor::tptl::Visitor<T> {
   public:
    explicit Visitor(visitor::arithmetic::Visitor<T>& solver)
        : forek::formula::visitor::tptl::Visitor<T>(solver) {}

    virtual auto setup(core::operation::tqtl::ExistsQualifier<T>& ctx) -> void {}
    virtual auto setup(core::operation::tqtl::ForallQualifier<T>& ctx) -> void {}

    virtual auto visit(core::operation::tqtl::ExistsQualifier<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::tqtl::ForallQualifier<T>& ctx) -> T = 0;
};
}  // namespace visitor::tqtl
}  // namespace forek::formula

#endif
