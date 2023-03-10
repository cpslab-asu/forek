#ifndef FOREK_FORMULA_CORE_OPERATION_UNARY_HPP
#define FOREK_FORMULA_CORE_OPERATION_UNARY_HPP

#include <memory>

#include <forek/formula/core/operation/operation.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation {
class Unary : public Operation {
   protected:
    std::unique_ptr<Node> expr_;

   public:
    Unary() = delete;
    explicit Unary(std::unique_ptr<Node> expr) : expr_(std::move(expr)) {}

    auto accept(visitor::Visitor& visitor) const -> void override = 0;

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override = 0;

    [[nodiscard]] inline auto expr() const -> const Node& {
        return *expr_.get();
    }
};
}  // namespace forek::formula::core::operation

#endif
