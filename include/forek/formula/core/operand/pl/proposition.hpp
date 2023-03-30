#ifndef FOREK_FORMULA_CORE_OPERAND_PL_PROPOSITION_HPP
#define FOREK_FORMULA_CORE_OPERAND_PL_PROPOSITION_HPP

#include <string>
#include <typeinfo>

#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/visitor/pl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operand::pl {
template <typename T>
class Proposition : public Operand<T> {
   private:
    /// The variable name associated with an atomic proposition.
    std::string name_;

   public:
    Proposition() = delete;
    explicit Proposition(std::string name) : name_(std::move(name)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::pl::Visitor<T>&>(visitor).setup(*this);
            this->data_ = dynamic_cast<visitor::pl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit Proposition with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<Proposition>(name_);
    }

    [[nodiscard]] inline auto name() const -> const std::string& { return name_; }
};
}  // namespace forek::formula::core::operand::pl

#endif
