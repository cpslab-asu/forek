#ifndef PYFOREL_FORMULA_OPERATION_PL_IMPLIES_HPP
#define PYFOREL_FORMULA_OPERATION_PL_IMPLIES_HPP

#include <memory>
#include <utility>

#include <forek/formula/core/node.hpp>
#include <forek/formula/operation/binary.hpp>

namespace forek::formula::operation::pl {
namespace kind {
enum { Implies = 3 };
}

class Implies : public Binary {
   public:
    Implies() = delete;
    Implies(std::unique_ptr<core::Node> lop, std::unique_ptr<core::Node> rop)
        : Binary(kind::Implies, std::move(lop), std::move(rop)) {}

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<Node> override {
        return std::make_unique<Implies>(std::move(this->lop()->clone()),
                                         std::move(this->rop()->clone()));
    }
};
}  // namespace forek::formula::operation::pl

#endif
