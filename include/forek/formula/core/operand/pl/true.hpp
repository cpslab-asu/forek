#ifndef FOREK_FORMULA_CORE_OPERAND_PL_TRUE_HPP
#define FOREK_FORMULA_CORE_OPERAND_PL_TRUE_HPP

#include <typeinfo>

#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/visitor/pl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operand::pl {
template <typename T>
class True : public Operand<T> {
   public:
    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::pl::Visitor<T>&>(visitor).setup(*this);
            this->data_ = dynamic_cast<visitor::pl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit True with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<True>();
    }
};
}  // namespace forek::formula::core::operand::pl

#endif
