#ifndef FOREK_FORMULA_CORE_OPERATION_TPTL_FREEZE_TIME_HPP
#define FOREK_FORMULA_CORE_OPERATION_TPTL_FREEZE_TIME_HPP

#include <memory>
#include <utility>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/unary.hpp>
#include <forek/formula/visitor/tptl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::tptl {
template <typename T>
class FreezeTime : public Unary<T> {
   private:
    std::string variable_;

   public:
    FreezeTime() = delete;
    explicit FreezeTime(std::unique_ptr<Node<T>> expr, std::string variable)
        : Unary<T>(std::move(expr)), variable_(std::move(variable)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::tptl::Visitor<T>&>(visitor).setup(*this);
            this->expr_->accept(visitor);

            this->data_ = dynamic_cast<visitor::tptl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit FreezeTime with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<FreezeTime>(std::move(this->expr_->clone()), this->variable_);
    }

    [[nodiscard]] inline auto variable() const -> const std::string& { return variable_; }
};
}  // namespace forek::formula::core::operation::tptl
#endif
