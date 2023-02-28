#ifndef PYFOREL_FORMULA_OPERAND_PROPOSITION_HPP
#define PYFOREL_FORMULA_OPERAND_PROPOSITION_HPP

#include <memory>
#include <string>
#include <utility>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operand/operand.hpp>

namespace pyforel::formula::operand {
namespace kind {
enum { Proposition = 0 };
}

class Proposition : public Operand {
   private:
    std::string name_;

   public:
    Proposition() = delete;
    explicit Proposition(std::string name)
        : Operand(kind::Proposition), name_(std::move(name)) {}

    [[nodiscard]] inline auto clone() const
        -> std::unique_ptr<core::Node> override {
        return std::make_unique<Proposition>(name_);
    }
};
}  // namespace pyforel::formula::operand

#endif
