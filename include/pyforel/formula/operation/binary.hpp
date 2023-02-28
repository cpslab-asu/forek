#ifndef PYFOREL_FORMULA_OPERATION_BINARY_HPP
#define PYFOREL_FORMULA_OPERATION_BINARY_HPP

#include <iostream>
#include <memory>
#include <utility>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operation/operation.hpp>

namespace pyforel::formula::operation {
class Binary : public Operation {
   private:
    std::unique_ptr<Node> lexpr_;
    std::unique_ptr<Node> rexpr_;

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
        return std::make_unique<Binary>(*this);
    }

    Binary() = delete;
    // Binary(int kind, core::Node&& lexpr, core::Node&& rexpr)
    //     : Operation(kind), lexpr_(lexpr.clone()), rexpr_(rexpr.clone()) {}

    Binary(int kind, const core::Node& lexpr, const core::Node& rexpr)
        : Operation(kind), lexpr_(lexpr.clone()), rexpr_(rexpr.clone()) {}

    Binary(const Binary& other)
        : Operation(other.kind()),
          lexpr_(other.lexpr_.get()->clone()),
          rexpr_(other.rexpr_.get()->clone()) {}

    Binary(Binary&& other)
        : Operation(other.kind()),
          lexpr_(std::move(other.lexpr_)),
          rexpr_(std::move(other.rexpr_)) {}

    auto operator=(const Binary& other) -> Binary& {
        if (this == &other) {
            return *this;
        }

        lexpr_ = other.lexpr_.get()->clone();
        rexpr_ = other.rexpr_.get()->clone();

        return *this;
    }

    auto operator=(Binary&& other) -> Binary& {
        if (this == &other) {
            return *this;
        }

        lexpr_ = std::move(other.lexpr_);
        rexpr_ = std::move(other.rexpr_);

        return *this;
    }
};
}  // namespace pyforel::formula::operation

#endif
