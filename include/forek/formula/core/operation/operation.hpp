#ifndef FOREK_FORMULA_CORE_OPERATION_OPERATION_HPP
#define FOREK_FORMULA_CORE_OPERATION_OPERATION_HPP

#include <forek/formula/core/node.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation {
template <typename T>
class Operation : public Node<T> {
   public:
    auto accept(visitor::Visitor<T>& visitor) -> void override = 0;

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node<T>> override = 0;
};
}  // namespace forek::formula::core::operation

#endif
