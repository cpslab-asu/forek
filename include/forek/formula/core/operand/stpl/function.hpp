#ifndef FOREK_FORMULA_CORE_OPERAND_STPL_FUNCTION_HPP
#define FOREK_FORMULA_CORE_OPERAND_STPL_FUNCTION_HPP

#include <memory>
#include <utility>
#include <vector>

#include <forek/formula/core/node.hpp>
#include <forek/formula/core/operand/operand.hpp>
#include <forek/formula/visitor/stpl/visitor.hpp>
#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core::operand::stpl {
template <typename T>
class Function : public Operand<T> {
   private:
    std::string name_;
    std::vector<std::string> arguments_;

   public:
    Function() = delete;
    Function(std::string name, std::vector<std::string> arguments)
        : name_(std::move(name)), arguments_(std::move(arguments)) {}

    auto accept(visitor::Visitor<T>& visitor) -> void override {
        try {
            dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).setup(*this);
            this->data_ = dynamic_cast<visitor::stpl::Visitor<T>&>(visitor).visit(*this);
        } catch (const std::bad_cast&) {
            // A user error is thrown if a visitor (of a lower acceptance) is
            // attempted to be used (i.e., it is undefined behavior to downcast
            // an object that is not truly its casted type).
            throw visitor::VisitorException("unable to visit Function with provided visitor");
        }
    }

    [[nodiscard]] inline auto clone() const -> std::unique_ptr<core::Node<T>> override {
        return std::make_unique<Function>(this->name_, this->arguments_);
    }

    [[nodiscard]] inline auto name() const -> const std::string& { return name_; }
    [[nodiscard]] inline auto arguments() const -> const std::vector<std::string>& {
        return arguments_;
    }
};
}  // namespace forek::formula::core::operand::stpl
#endif
