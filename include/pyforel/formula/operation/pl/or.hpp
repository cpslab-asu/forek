#ifndef PYFOREL_FORMULA_OPERATION_PL_OR_HPP
#define PYFOREL_FORMULA_OPERATION_PL_OR_HPP

#include <utility>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operation/binary.hpp>

namespace pyforel::formula::operation::pl {
namespace kind {
enum { Or = 5 };
}

class Or : public Binary {
   public:
    Or() = delete;
    Or(std::unique_ptr<core::Node> lop, std::unique_ptr<core::Node> rop)
        : Binary(kind::Or, std::move(lop), std::move(rop)) {}

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<Node> override {
        return std::make_unique<Or>(std::move(this->lop()->clone()),
                                    std::move(this->rop()->clone()));
    }
};
}  // namespace pyforel::formula::operation::pl

#endif
