#ifndef FOREK_FORMULA_CORE_OPERATION_PL_IMPLIES_HPP
#define FOREK_FORMULA_CORE_OPERATION_PL_IMPLIES_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/binary.hpp>
#include <forek/formula/visitor/pl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::pl {
class Implies : public Binary {
   public:
    Implies() = delete;
    Implies(std::unique_ptr<Node> lexpr, std::unique_ptr<Node> rexpr)
        : Binary(std::move(lexpr), std::move(rexpr)) {}

    auto accept(visitor::Visitor& visitor) const -> void override {
        try {
            dynamic_cast<visitor::pl::Visitor&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit Implies with provided visitor");
        }
    }
};
}  // namespace forek::formula::core::operation::pl
#endif
