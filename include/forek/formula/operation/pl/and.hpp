#ifndef FOREK_FORMULA_OPERATION_PL_AND_HPP
#define FOREK_FORMULA_OPERATION_PL_AND_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/operation/binary.hpp>

namespace forek::formula::operation::pl {
namespace kind {
enum { And = 1 };
}

class And : public Binary {
   public:
    And() = delete;
    And(std::unique_ptr<core::Node> lop, std::unique_ptr<core::Node> rop)
        : Binary(kind::And, std::move(lop), std::move(rop)) {}

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<Node> override {
        return std::make_unique<And>(std::move(this->lop()->clone()),
                                     std::move(this->rop()->clone()));
    }
};
}  // namespace forek::formula::operation::pl
#endif
