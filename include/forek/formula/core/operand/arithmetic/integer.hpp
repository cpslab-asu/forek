#ifndef FOREK_FORMULA_CORE_OPERAND_ARITHMETIC_INTEGER_HPP
#define FOREK_FORMULA_CORE_OPERAND_ARITHMETIC_INTEGER_HPP

#include <typeinfo>

#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/visitor/arithmetic/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operand::arithmetic {
template <typename T>
class Integer : public Operand<T> {
   private:
    double value_;

   public:
    Integer() = delete;
    explicit Integer(double value) : value_(value) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::arithmetic::Visitor<T>&>(visitor).setup(*this);
            this->data_ = dynamic_cast<visitor::arithmetic::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit Integer with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<Integer>(value_);
    }

    [[nodiscard]] inline auto value() const -> double { return value_; }
};
}  // namespace forek::formula::core::operand::arithmetic

#endif
