#ifndef FOREK_FORMULA_OPERAND_OPERAND_HPP
#define FOREK_FORMULA_OPERAND_OPERAND_HPP

#include <memory>

#include <forek/formula/core/node.hpp>

namespace forek::formula::operand {
class Operand : public core::Node {
   public:
    Operand() = delete;
    explicit Operand(int kind) : core::Node(kind) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Operand>(this->kind());
    }
};
}  // namespace forek::formula::operand

#endif
