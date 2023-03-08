#ifndef FOREK_FORMULA_FORMULA_HPP
#define FOREK_FORMULA_FORMULA_HPP

#include <memory>

#include <forek/formula/core/node.hpp>

namespace forek::formula {
class Formula {
   private:
    std::unique_ptr<core::Node> expr_;

   public:
    Formula() = delete;
    explicit Formula(std::unique_ptr<core::Node> expr)
        : expr_(std::move(expr)) {}

    Formula(const Formula& other) : expr_(std::move(other.expr_->clone())) {}
    Formula(Formula&& other) : expr_(std::move(other.expr_)) {}

    inline auto expr() -> std::unique_ptr<core::Node> {
        return std::move(expr_);
    }
};
}  // namespace forek::formula

#endif
