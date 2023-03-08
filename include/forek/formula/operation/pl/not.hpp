#ifndef FOREK_FORMULA_OPERATION_PL_NOT_HPP
#define FOREK_FORMULA_OPERATION_PL_NOT_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/operation/unary.hpp>

namespace forek::formula::operation::pl {
namespace kind {
enum { Not = 4 };
}

class Not : public Unary {
   public:
    Not() = delete;
    explicit Not(std::unique_ptr<core::Node> op)
        : Unary(kind::Not, std::move(op)) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Not>(std::move(this->op()->clone()));
    }
};
}  // namespace forek::formula::operation::pl

#endif
