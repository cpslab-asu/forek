#ifndef FOREK_FORMULA_CORE_OPERATION_MTL_RELEASE_HPP
#define FOREK_FORMULA_CORE_OPERATION_MTL_RELEASE_HPP

#include <memory>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/binary.hpp>
#include <forek/formula/core/operation/mtl/types/interval.hpp>
#include <forek/formula/visitor/mtl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::mtl {
template <typename T>
class ReleaseBounded : public Binary<T> {
   public:
    const types::Interval interval_;

   public:
    ReleaseBounded() = delete;
    ReleaseBounded(std::unique_ptr<core::Node<T>> lexpr, std::unique_ptr<core::Node<T>> rexpr,
                   types::Interval interval)
        : Binary<T>(std::move(lexpr), std::move(rexpr)), interval_(std::move(interval)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::mtl::Visitor<T>&>(visitor).setup(*this);

            this->lexpr_->accept(visitor);
            this->rexpr_->accept(visitor);

            this->data_ = dynamic_cast<visitor::mtl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit ReleaseBounded with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<ReleaseBounded>(std::move(this->lexpr_->clone()),
                                                std::move(this->rexpr_->clone()), this->interval_);
    }
};
}  // namespace forek::formula::core::operation::mtl
#endif
