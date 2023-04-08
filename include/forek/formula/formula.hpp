#ifndef FOREK_FORMULA_FORMULA_HPP
#define FOREK_FORMULA_FORMULA_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula {
template <typename T>
class Formula {
   private:
    std::unique_ptr<core::Node<T>> expr_;

   public:
    Formula() = delete;
    explicit Formula(std::unique_ptr<core::Node<T>> expr) : expr_(std::move(expr)) {}

    Formula(const Formula& other) : expr_(std::move(other.expr_->clone())){};
    Formula(Formula&& other) : expr_(std::move(other.expr_)) {}

    inline auto expr() -> std::unique_ptr<core::Node<T>> { return std::move(expr_); }

    auto evaluate(visitor::Visitor<T>& visitor) -> void { expr_->accept(visitor); }
};
}  // namespace forek::formula

#endif
