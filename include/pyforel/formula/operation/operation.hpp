#ifndef PYFOREL_FORMULA_OPERATION_OPERATION_HPP
#define PYFOREL_FORMULA_OPERATION_OPERATION_HPP

#include <memory>

#include <pyforel/formula/core/node.hpp>

namespace pyforel::formula::operation {
class Operation : public core::Node {
   public:
    Operation() = delete;
    explicit Operation(int kind) : core::Node(kind) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Operation>(this->kind());
    }
};
}  // namespace pyforel::formula::operation

#endif
