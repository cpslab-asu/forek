#ifndef FOREK_FORMULA_CORE_OPERATION_BINARY_HPP
#define FOREK_FORMULA_CORE_OPERATION_BINARY_HPP

#include <memory>

#include <forek/formula/core/operation/operation.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation {
class Binary : public Operation {
   protected:
    std::unique_ptr<Node> lexpr_;
    std::unique_ptr<Node> rexpr_;

   public:
    Binary() = delete;
    Binary(std::unique_ptr<Node> lexpr, std::unique_ptr<Node> rexpr)
        : lexpr_(std::move(lexpr)), rexpr_(std::move(rexpr)) {}

    auto accept(visitor::Visitor& visitor) const -> void override = 0;

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override = 0;

    [[nodiscard]] inline auto lexpr() const -> const Node& {
        return *lexpr_.get();
    }

    [[nodiscard]] inline auto rexpr() const -> const Node& {
        return *rexpr_.get();
    }
};
}  // namespace forek::formula::core::operation

#endif
