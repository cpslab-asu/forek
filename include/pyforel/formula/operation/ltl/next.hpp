#ifndef PYFOREL_FORMULA_OPERATION_LTL_NEXT_HPP
#define PYFOREL_FORMULA_OPERATION_LTL_NEXT_HPP

#include <memory>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operation/unary.hpp>

namespace pyforel::formula::operation::ltl {
namespace kind {
enum { Next = 8 };
}

class Next : public Unary {
   public:
    Next() = delete;
    explicit Next(std::unique_ptr<core::Node> op)
        : Unary(kind::Next, std::move(op)) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Next>(std::move(this->op()->clone()));
    }
};
}  // namespace pyforel::formula::operation::ltl

#endif
