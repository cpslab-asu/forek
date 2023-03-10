#ifndef FOREK_FORMULA_CORE_OPERATION_OPERATION_HPP
#define FOREK_FORMULA_CORE_OPERATION_OPERATION_HPP

#include <forek/formula/core/node.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation {
class Operation : public Node {
   public:
    auto accept(visitor::Visitor& visitor) const -> void override = 0;
};
}  // namespace forek::formula::core::operation

#endif
