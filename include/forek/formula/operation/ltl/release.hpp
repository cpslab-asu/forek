#ifndef FOREK_FORMULA_OPERATION_LTL_RELEASE_HPP
#define FOREK_FORMULA_OPERATION_LTL_RELEASE_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/operation/binary.hpp>

namespace forek::formula::operation::ltl {
namespace kind {
enum { Release = 9 };
}

class Release : public Binary {
   public:
    Release() = delete;
    Release(std::unique_ptr<core::Node> lop, std::unique_ptr<core::Node> rop)
        : Binary(kind::Release, std::move(lop), std::move(rop)) {}

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<Node> override {
        return std::make_unique<Release>(std::move(this->lop()->clone()),
                                         std::move(this->rop()->clone()));
    }
};
}  // namespace forek::formula::operation::ltl
#endif
