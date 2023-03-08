#ifndef FOREK_FORMULA_OPERATION_BINARY_HPP
#define FOREK_FORMULA_OPERATION_BINARY_HPP

#include <iostream>
#include <memory>
#include <utility>

#include <forek/formula/core/node.hpp>
#include <forek/formula/operation/operation.hpp>

namespace forek::formula::operation {
class Binary : public Operation {
   private:
    std::unique_ptr<core::Node> lop_;
    std::unique_ptr<core::Node> rop_;

   public:
    Binary() = delete;
    Binary(int kind, std::unique_ptr<core::Node> lop,
           std::unique_ptr<core::Node> rop)
        : Operation(kind), lop_(std::move(lop)), rop_(std::move(rop)) {}

    [[nodiscard]] inline auto lop() const
        -> const std::unique_ptr<core::Node>& {
        return lop_;
    }

    [[nodiscard]] inline auto rop() const
        -> const std::unique_ptr<core::Node>& {
        return rop_;
    }

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Binary>(this->kind(), std::move(lop_->clone()),
                                        std::move(rop_->clone()));
    }
};
}  // namespace forek::formula::operation

#endif
