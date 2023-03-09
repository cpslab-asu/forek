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
    auto accept(visitor::Visitor& visitor) -> void const override = 0;
};
}  // namespace forek::formula::core::operation

#endif
