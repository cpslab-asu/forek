#ifndef PYFOREL_FORMULA_OPERATION_UNARY_HPP
#define PYFOREL_FORMULA_OPERATION_UNARY_HPP

#include <memory>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operation/operation.hpp>

namespace pyforel::formula::operation {
class Unary : public Operation {
   private:
    std::unique_ptr<Node> expr_;

   public:
    /// Create a clone of this object dynamically allocated.
    ///
    /// The resource created by this method is managed through the the standard
    /// library smart pointer, so destructing it explicitly does not need to be
    /// managed explicitly.
    ///
    /// Note: For any class deriving this class, it is required to re-define
    /// this interface to support direct interfacing.
    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Unary>(*this);
    }

    Unary() = delete;
    // Unary(int kind, core::Node&& expr) : Operation(kind), expr_(expr.clone())
    // {}

    Unary(int kind, const core::Node& expr)
        : Operation(kind), expr_(expr.clone()) {}

    Unary(const Unary& other)
        : Operation(other.kind()), expr_(other.expr_.get()->clone()) {}

    Unary(Unary&& other)
        : Operation(other.kind()), expr_(std::move(other.expr_)) {}

    auto operator=(const Unary& other) -> Unary& {
        if (this == &other) {
            return *this;
        }

        expr_ = other.expr_.get()->clone();
        return *this;
    }

    auto operator=(Unary&& other) -> Unary& {
        if (this == &other) {
            return *this;
        }

        expr_ = std::move(other.expr_);
        return *this;
    }
};
}  // namespace pyforel::formula::operation

#endif
