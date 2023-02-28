#ifndef PYFOREL_FORMULA_OPERATION_LTL_ALWAYS_HPP
#define PYFOREL_FORMULA_OPERATION_LTL_ALWAYS_HPP

#include <memory>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operation/unary.hpp>

namespace pyforel::formula::operation::ltl {
namespace kind {
enum { Always = 6 };
}

class Always : public Unary {
   public:
    Always() = delete;
    explicit Always(std::unique_ptr<core::Node> op)
        : Unary(kind::Always, std::move(op)) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Always>(std::move(this->op()->clone()));
    }
};
}  // namespace pyforel::formula::operation::ltl

#endif
