#ifndef FOREK_FORMULA_CORE_OPERATION_MTL_ALWAYS_HPP
#define FOREK_FORMULA_CORE_OPERATION_MTL_ALWAYS_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/mtl/types/interval.hpp>
#include <forek/formula/core/operation/unary.hpp>
#include <forek/formula/visitor/mtl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::mtl {
template <typename T>
class AlwaysBounded : public Unary<T> {
   public:
    const types::Interval interval_;

   public:
    AlwaysBounded() = delete;
    AlwaysBounded(std::unique_ptr<core::Node<T>> expr, types::Interval interval)
        : Unary<T>(std::move(expr)), interval_(std::move(interval)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::mtl::Visitor<T>&>(visitor).setup(*this);

            this->expr_->accept(visitor);
            this->data_ = dynamic_cast<visitor::mtl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit AlwaysBounded with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<AlwaysBounded>(std::move(this->expr_->clone()), this->interval_);
    }
};
}  // namespace forek::formula::core::operation::mtl
#endif
