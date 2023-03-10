#ifndef FOREK_FORMULA_CORE_OPERAND_PL_FALSE_HPP
#define FOREK_FORMULA_CORE_OPERAND_PL_FALSE_HPP

#include <typeinfo>

#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/visitor/pl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operand::pl {
class False : public Operand {
   public:
    auto accept(visitor::Visitor& visitor) const -> void override {
        try {
            dynamic_cast<visitor::pl::Visitor&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit False with provided visitor");
        }
    }
};
}  // namespace forek::formula::core::operand::pl

#endif
