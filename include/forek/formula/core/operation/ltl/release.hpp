#ifndef FOREK_FORMULA_CORE_OPERATION_LTL_RELEASE_HPP
#define FOREK_FORMULA_CORE_OPERATION_LTL_RELEASE_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/binary.hpp>
#include <forek/formula/visitor/ltl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::ltl {
template <typename T>
class Release : public Binary<T> {
   public:
    Release() = delete;
    Release(std::unique_ptr<Node<T>> lexpr, std::unique_ptr<Node<T>> rexpr)
        : Binary<T>(std::move(lexpr), std::move(rexpr)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::ltl::Visitor<T>&>(visitor).setup(*this);

            this->lexpr_->accept(visitor);
            this->rexpr_->accept(visitor);

            this->data_ = dynamic_cast<visitor::ltl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit Release with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<Release>(std::move(this->lexpr_->clone()),
                                         std::move(this->rexpr_->clone()));
    }
};
}  // namespace forek::formula::core::operation::ltl
#endif
