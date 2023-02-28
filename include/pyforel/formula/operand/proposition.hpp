#ifndef PYFOREL_FORMULA_OPERAND_PROPOSITION_HPP
#define PYFOREL_FORMULA_OPERAND_PROPOSITION_HPP

#include <iostream>
#include <memory>
#include <string>
#include <utility>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operand/operand.hpp>

namespace pyforel::formula::operand {
namespace kind {
enum { Proposition = 0 };
}

class Proposition : public Operand {
   private:
    std::string name_;

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
        return std::make_unique<Proposition>(*this);
    }

    Proposition() = delete;
    explicit Proposition(std::string name)
        : Operand(kind::Proposition), name_(std::move(name)) {}

    Proposition(const Proposition& other)
        : Operand(other.kind()), name_(other.name_) {}

    Proposition(Proposition&& other)
        : Operand(other.kind()), name_(std::move(other.name_)) {}
};
}  // namespace pyforel::formula::operand

#endif
