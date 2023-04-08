#ifndef FOREK_FORMULA_CORE_OPERATION_UNARY_HPP
#define FOREK_FORMULA_CORE_OPERATION_UNARY_HPP

#include <memory>

#include <forek/formula/core/operation/operation.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation {
template <typename T>
class Unary : public Operation<T> {
   protected:
    std::unique_ptr<Node<T>> expr_;

   public:
    Unary() = delete;
    explicit Unary(std::unique_ptr<Node<T>> expr) : expr_(std::move(expr)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override = 0;

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override = 0;

    [[nodiscard]] inline auto expr() const -> const Node<T>& { return *expr_.get(); }
};
}  // namespace forek::formula::core::operation

#endif
