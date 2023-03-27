#ifndef FOREK_FORMULA_CORE_OPERATION_LTL_EVENTUALLY_HPP
#define FOREK_FORMULA_CORE_OPERATION_LTL_EVENTUALLY_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/unary.hpp>
#include <forek/formula/visitor/ltl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::ltl {
class Eventually : public Unary {
   public:
    Eventually() = delete;
    explicit Eventually(std::unique_ptr<Node> expr) : Unary(std::move(expr)) {}

    auto accept(visitor::Visitor& visitor) const -> void override {
        try {
            dynamic_cast<visitor::ltl::Visitor&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit Eventually with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Eventually>(std::move(expr_->clone()));
    }
};
}  // namespace forek::formula::core::operation::ltl
#endif
