#ifndef FOREK_FORMULA_CORE_OPERATION_TQTL_QUALIFIER_HPP
#define FOREK_FORMULA_CORE_OPERATION_TQTL_QUALIFIER_HPP

#include <memory>
#include <utility>
#include <vector>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operation/unary.hpp>
#include <forek/formula/visitor/tqtl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operation::tqtl {
template <typename T>
class ExistsQualifier : public Unary<T> {
   private:
    std::vector<std::string> variables_;
    std::string frozen_;

   public:
    ExistsQualifier() = delete;
    explicit ExistsQualifier(std::unique_ptr<Node<T>> expr, std::vector<std::string> variables,
                             std::string frozen)
        : Unary<T>(std::move(expr)), variables_(std::move(variables)), frozen_(std::move(frozen)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::tqtl::Visitor<T>&>(visitor).setup(*this);
            this->expr_->accept(visitor);

            this->data_ = dynamic_cast<visitor::tqtl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit ExistsQualifier with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<ExistsQualifier>(std::move(this->expr_->clone()), this->variables_,
                                                 this->frozen_);
    }

    [[nodiscard]] inline auto frozen() const -> const std::string& { return frozen_; }
    [[nodiscard]] inline auto variables() const -> const std::vector<std::string>& {
        return variables_;
    }
};

template <typename T>
class ForallQualifier : public Unary<T> {
   private:
    std::vector<std::string> variables_;
    std::string frozen_;

   public:
    ForallQualifier() = delete;
    explicit ForallQualifier(std::unique_ptr<Node<T>> expr, std::vector<std::string> variables,
                             std::string frozen)
        : Unary<T>(std::move(expr)), variables_(std::move(variables)), frozen_(std::move(frozen)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::tqtl::Visitor<T>&>(visitor).setup(*this);
            this->expr_->accept(visitor);

            this->data_ = dynamic_cast<visitor::tqtl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException(
                "unable to visit ForallQualifier with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<ForallQualifier>(std::move(this->expr_->clone()), this->variables_,
                                                 this->frozen_);
    }

    [[nodiscard]] inline auto frozen() const -> const std::string& { return frozen_; }
    [[nodiscard]] inline auto variables() const -> const std::vector<std::string>& {
        return variables_;
    }
};
}  // namespace forek::formula::core::operation::tqtl
#endif
