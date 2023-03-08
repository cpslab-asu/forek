#ifndef FOREK_FORMULA_OPERATION_LTL_EVENTUALLY_HPP
#define FOREK_FORMULA_OPERATION_LTL_EVENTUALLY_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/operation/unary.hpp>

namespace forek::formula::operation::ltl {
namespace kind {
enum { Eventually = 7 };
}

class Eventually : public Unary {
   public:
    Eventually() = delete;
    explicit Eventually(std::unique_ptr<core::Node> op)
        : Unary(kind::Eventually, std::move(op)) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Eventually>(std::move(this->op()->clone()));
    }
};
}  // namespace forek::formula::operation::ltl

#endif
