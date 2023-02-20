#ifndef PYFOREL_IR_FORMULA_HPP
#define PYFOREL_IR_FORMULA_HPP

#include <any>
namespace pyforel::ir {
class Formula {
   private:
    std::any expr_;

   public:
    explicit Formula(std::any expr) : expr_(std::move(expr)) {}
};
}  // namespace pyforel::ir

#endif
