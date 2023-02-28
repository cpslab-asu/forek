#ifndef PYFOREL_FORMULA_OPERATION_UNARY_HPP
#define PYFOREL_FORMULA_OPERATION_UNARY_HPP

#include <memory>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operation/operation.hpp>

namespace pyforel::formula::operation {
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
}  // namespace pyforel::formula::operation

#endif
