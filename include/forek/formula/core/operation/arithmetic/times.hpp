#ifndef FOREK_FORMULA_CORE_OPERATION_ARITHMETIC_TIMES_HPP
#define FOREK_FORMULA_CORE_OPERATION_ARITHMETIC_TIMES_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/binary.hpp>
#include <forek/formula/visitor/arithmetic/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::arithmetic {
template <typename T>
class Times : public Binary<T> {
   public:
    Times() = delete;
    Times(std::unique_ptr<Node<T>> lexpr, std::unique_ptr<Node<T>> rexpr)
        : Binary<T>(std::move(lexpr), std::move(rexpr)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            this->lexpr_->accept(visitor);
            this->rexpr_->accept(visitor);

            this->data_ =
                dynamic_cast<visitor::arithmetic::Visitor<T>&>(visitor).visit(
                    *this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit Times with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<Times>(std::move(this->lexpr_->clone()),
                                       std::move(this->rexpr_->clone()));
    }
};
}  // namespace forek::formula::core::operation::arithmetic
#endif
