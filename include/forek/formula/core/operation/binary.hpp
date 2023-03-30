#ifndef FOREK_FORMULA_CORE_OPERATION_BINARY_HPP
#define FOREK_FORMULA_CORE_OPERATION_BINARY_HPP

#include <memory>

#include <forek/formula/core/operation/operation.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation {
template <typename T>
class Binary : public Operation<T> {
   protected:
    std::unique_ptr<Node<T>> lexpr_;
    std::unique_ptr<Node<T>> rexpr_;

   public:
    Binary() = delete;
    Binary(std::unique_ptr<Node<T>> lexpr, std::unique_ptr<Node<T>> rexpr)
        : lexpr_(std::move(lexpr)), rexpr_(std::move(rexpr)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override = 0;

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override = 0;
    [[nodiscard]] inline auto lexpr() const -> const Node<T>& { return *lexpr_.get(); }
    [[nodiscard]] inline auto rexpr() const -> const Node<T>& { return *rexpr_.get(); }
    [[nodiscard]] inline auto lexpr() -> Node<T>& { return *lexpr_.get(); }
    [[nodiscard]] inline auto rexpr() -> Node<T>& { return *rexpr_.get(); }
};
}  // namespace forek::formula::core::operation

#endif
