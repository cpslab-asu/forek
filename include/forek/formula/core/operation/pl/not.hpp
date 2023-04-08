#ifndef FOREK_FORMULA_CORE_OPERATION_PL_NOT_HPP
#define FOREK_FORMULA_CORE_OPERATION_PL_NOT_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/unary.hpp>
#include <forek/formula/visitor/pl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::pl {
template <typename T>
class Not : public Unary<T> {
   public:
    Not() = delete;
    explicit Not(std::unique_ptr<Node<T>> expr) : Unary<T>(std::move(expr)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            this->expr_->accept(visitor);
            this->data_ = dynamic_cast<visitor::pl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit Not with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<Not>(std::move(this->expr_->clone()));
    }
};
}  // namespace forek::formula::core::operation::pl
#endif
