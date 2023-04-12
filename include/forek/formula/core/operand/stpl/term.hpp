#ifndef FOREK_FORMULA_CORE_OPERAND_STPL_TERM_HPP
#define FOREK_FORMULA_CORE_OPERAND_STPL_TERM_HPP

#include <string>
#include <typeinfo>

#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/visitor/stpl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operand::stpl {
template <typename T>
class SpatialTerm : public Operand<T> {
   private:
    /// The variable name associated with an atomic proposition.
    std::string name_;

   public:
    SpatialTerm() = delete;
    explicit SpatialTerm(std::string name) : name_(std::move(name)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).setup(*this);
            this->data_ = dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit SpatialTerm with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<SpatialTerm>(name_);
    }

    [[nodiscard]] inline auto name() const -> const std::string& { return name_; }
};
}  // namespace forek::formula::core::operand::stpl

#endif
