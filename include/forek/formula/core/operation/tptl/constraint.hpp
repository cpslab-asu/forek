#ifndef FOREK_FORMULA_CORE_OPERATION_TPTL_UNTIL_HPP
#define FOREK_FORMULA_CORE_OPERATION_TPTL_UNTIL_HPP

#include <functional>
#include <memory>
#include <stdexcept>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/binary.hpp>
#include <forek/formula/visitor/arithmetic/visitor.hpp>
#include <forek/formula/visitor/tptl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::tptl {
class TimeConstraintUnknownRelationOperator : public std::runtime_error {
   public:
    explicit TimeConstraintUnknownRelationOperator(const std::string& msg)
        : std::runtime_error(msg) {}
};

template <typename T>
class TimeConstraint : public Binary<T> {
   private:
    std::string relop_;

   public:
    TimeConstraint() = delete;
    TimeConstraint(std::unique_ptr<Node<T>> lexpr, std::unique_ptr<Node<T>> rexpr,
                   std::string relop)
        : Binary<T>(std::move(lexpr), std::move(rexpr)), relop_(std::move(relop)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::tptl::Visitor<T>&>(visitor).setup(*this);

            this->lexpr_->accept(dynamic_cast<visitor::tptl::Visitor<T>&>(visitor).solver());
            this->rexpr_->accept(dynamic_cast<visitor::tptl::Visitor<T>&>(visitor).solver());

            this->data_ = dynamic_cast<visitor::tptl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit TimeConstraint with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<TimeConstraint>(std::move(this->lexpr_->clone()),
                                                std::move(this->rexpr_->clone()), this->relop_);
    }

    inline auto resolve() const -> T {
        if (this->relop_.compare("<") == 0) {
            return this->lexpr().data() < this->rexpr().data();
        } else if (this->relop_.compare(">") == 0) {
            return this->lexpr().data() > this->rexpr().data();
        } else if (this->relop_.compare("<=") == 0) {
            return this->lexpr().data() <= this->rexpr().data();
        } else if (this->relop_.compare(">=") == 0) {
            return this->lexpr().data() >= this->rexpr().data();
        } else if (this->relop_.compare("==") == 0) {
            return this->lexpr().data() == this->rexpr().data();
        } else if (this->relop_.compare("!=") == 0) {
            return this->lexpr().data() != this->rexpr().data();
        } else {
            throw TimeConstraintUnknownRelationOperator(this->relop_);
        }
    }
};
}  // namespace forek::formula::core::operation::tptl
#endif
