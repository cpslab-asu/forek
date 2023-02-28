#ifndef PYFOREL_FORMULA_OPERATION_OPERATION_HPP
#define PYFOREL_FORMULA_OPERATION_OPERATION_HPP

#include <memory>

#include <pyforel/formula/core/node.hpp>

namespace pyforel::formula::operation {
class Operation : public core::Node {
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
        return std::make_unique<Operation>(*this);
    }

    Operation() = delete;
    explicit Operation(int kind) : core::Node(kind) {}

    Operation(const Operation& other) = default;
    Operation(Operation&& other) = default;
};
}  // namespace pyforel::formula::operation

#endif
