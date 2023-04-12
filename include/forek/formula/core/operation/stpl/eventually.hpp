#ifndef FOREK_FORMULA_CORE_OPERATION_STPL_EVENTUALLY_HPP
#define FOREK_FORMULA_CORE_OPERATION_STPL_EVENTUALLY_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/mtl/types/interval.hpp>
#include <forek/formula/core/operation/unary.hpp>
#include <forek/formula/visitor/stpl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::stpl {
template <typename T>
class EventuallySpatial : public Unary<T> {
   public:
    EventuallySpatial() = delete;
    explicit EventuallySpatial(std::unique_ptr<Node<T>> expr) : Unary<T>(std::move(expr)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).setup(*this);

            this->expr_->accept(visitor);
            this->data_ = dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit EventuallySpatial with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<EventuallySpatial>(std::move(this->expr_->clone()));
    }
};

template <typename T>
class EventuallySpatialBounded : public Unary<T> {
   public:
    const mtl::types::Interval interval_;

   public:
    EventuallySpatialBounded() = delete;
    EventuallySpatialBounded(std::unique_ptr<core::Node<T>> expr, mtl::types::Interval interval)
        : Unary<T>(std::move(expr)), interval_(std::move(interval)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).setup(*this);

            this->expr_->accept(visitor);
            this->data_ = dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit EventuallySpatialBounded with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<EventuallySpatialBounded>(std::move(this->expr_->clone()),
                                                          this->interval_);
    }
};
}  // namespace forek::formula::core::operation::stpl
#endif
