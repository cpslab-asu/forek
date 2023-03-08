#ifndef FOREK_FORMULA_OPERATION_UNARY_HPP
#define FOREK_FORMULA_OPERATION_UNARY_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/operation/operation.hpp>

namespace forek::formula::operation {
class Unary : public Operation {
   private:
    std::unique_ptr<core::Node> op_;

   public:
    Unary() = delete;
    explicit Unary(int kind, std::unique_ptr<core::Node> op)
        : Operation(kind), op_(std::move(op)) {}

    [[nodiscard]] inline auto op() const -> const std::unique_ptr<core::Node>& {
        return op_;
    }

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Unary>(this->kind(), std::move(op_->clone()));
    }
};
}  // namespace forek::formula::operation

#endif
