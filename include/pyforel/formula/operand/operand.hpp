#ifndef PYFOREL_FORMULA_OPERAND_OPERAND_HPP
#define PYFOREL_FORMULA_OPERAND_OPERAND_HPP

#include <memory>

#include <pyforel/formula/core/node.hpp>

namespace pyforel::formula::operand {
class Operand : public core::Node {
   public:
    Operand() = delete;
    explicit Operand(int kind) : core::Node(kind) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Operand>(this->kind());
    }
};
}  // namespace pyforel::formula::operand

#endif
