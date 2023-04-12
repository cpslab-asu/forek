#ifndef FOREK_FORMULA_CORE_OPERATION_STPL_UNTIL_HPP
#define FOREK_FORMULA_CORE_OPERATION_STPL_UNTIL_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/binary.hpp>
#include <forek/formula/core/operation/mtl/types/interval.hpp>
#include <forek/formula/visitor/stpl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::stpl {
template <typename T>
class UntilSpatial : public Binary<T> {
   public:
    UntilSpatial() = delete;
    UntilSpatial(std::unique_ptr<Node<T>> lexpr, std::unique_ptr<Node<T>> rexpr)
        : Binary<T>(std::move(lexpr), std::move(rexpr)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).setup(*this);

            this->lexpr_->accept(visitor);
            this->rexpr_->accept(visitor);

            this->data_ = dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit UntilSpatial with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<UntilSpatial>(std::move(this->lexpr_->clone()),
                                              std::move(this->rexpr_->clone()));
    }
};

template <typename T>
class UntilSpatialBounded : public Binary<T> {
   public:
    const mtl::types::Interval interval_;

   public:
    UntilSpatialBounded() = delete;
    UntilSpatialBounded(std::unique_ptr<core::Node<T>> lexpr, std::unique_ptr<core::Node<T>> rexpr,
                        mtl::types::Interval interval)
        : Binary<T>(std::move(lexpr), std::move(rexpr)), interval_(std::move(interval)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).setup(*this);

            this->lexpr_->accept(visitor);
            this->rexpr_->accept(visitor);

            this->data_ = dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit UntilSpatialBounded with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<UntilSpatialBounded>(
            std::move(this->lexpr_->clone()), std::move(this->rexpr_->clone()), this->interval_);
    }
};
}  // namespace forek::formula::core::operation::stpl
#endif
