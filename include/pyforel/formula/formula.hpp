#ifndef PYFOREL_FORMULA_FORMULA_HPP
#define PYFOREL_FORMULA_FORMULA_HPP

#include <memory>

#include "pyforel/formula/core/node.hpp"
namespace pyforel::formula {
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
}  // namespace pyforel::formula

#endif
