#ifndef FOREK_FORMULA_OPERATION_OPERATION_HPP
#define FOREK_FORMULA_OPERATION_OPERATION_HPP

#include <memory>

#include <forek/formula/core/node.hpp>

namespace forek::formula::operation {
class Operation : public core::Node {
   public:
    Operation() = delete;
    explicit Operation(int kind) : core::Node(kind) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Operation>(this->kind());
    }
};
}  // namespace forek::formula::operation

#endif
