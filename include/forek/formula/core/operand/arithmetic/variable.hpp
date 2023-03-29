#ifndef FOREK_FORMULA_CORE_OPERAND_ARITHMETIC_VARIABLE_HPP
#define FOREK_FORMULA_CORE_OPERAND_ARITHMETIC_VARIABLE_HPP

#include <string>
#include <typeinfo>

#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/visitor/arithmetic/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operand::arithmetic {
template <typename T>
class Variable : public Operand<T> {
   private:
    std::string name_;

   public:
    Variable() = delete;
    explicit Variable(std::string name) : name_(std::move(name)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            this->data_ =
                dynamic_cast<visitor::arithmetic::Visitor<T>&>(visitor).visit(
                    *this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit Variable with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<Variable>(name_);
    }

    [[nodiscard]] inline auto name() const -> const std::string& {
        return name_;
    }
};
}  // namespace forek::formula::core::operand::arithmetic

#endif
