#ifndef PYFOREL_FORMULA_OPERAND_OPERAND_HPP
#define PYFOREL_FORMULA_OPERAND_OPERAND_HPP

#include <memory>

#include <pyforel/formula/core/node.hpp>

namespace pyforel::formula::operand {
class Operand : public core::Node {
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
        return std::make_unique<Operand>(*this);
    }

    Operand() = delete;
    explicit Operand(int kind) : core::Node(kind) {}
};
}  // namespace pyforel::formula::operand

#endif
