#ifndef PYFOREL_FORMULA_OPERAND_PROPOSITION_HPP
#define PYFOREL_FORMULA_OPERAND_PROPOSITION_HPP

#include <string>
#include <utility>

#include <pyforel/formula/operand/operand.hpp>

namespace pyforel::formula::operand {
class Proposition : public Operand {
   private:
    std::string name_;

   public:
    Proposition() = delete;
    explicit Proposition(std::string name) : name_(std::move(name)){};
};
}  // namespace pyforel::formula::operand

#endif
