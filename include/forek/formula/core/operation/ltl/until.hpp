#ifndef FOREK_FORMULA_CORE_OPERATION_PL_UNTIL_HPP
#define FOREK_FORMULA_CORE_OPERATION_PL_UNTIL_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/binary.hpp>
#include <forek/formula/visitor/ltl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::ltl {
class Until : public Binary {
   public:
    Until() = delete;
    Until(std::unique_ptr<Node> lexpr, std::unique_ptr<Node> rexpr)
        : Binary(std::move(lexpr), std::move(rexpr)) {}

    auto accept(visitor::Visitor& visitor) const -> void override {
        try {
            dynamic_cast<visitor::ltl::Visitor&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit Until with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Until>(std::move(lexpr_->clone()),
                                       std::move(rexpr_->clone()));
    }
};
}  // namespace forek::formula::core::operation::ltl
#endif
