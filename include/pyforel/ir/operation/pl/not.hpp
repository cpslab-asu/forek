#ifndef PYFOREL_IR_OPERATION_PL_NOT_HPP
#define PYFOREL_IR_OPERATION_PL_NOT_HPP

#include <any>
#include <pyforel/ir/operation/operation.hpp>
#include <utility>

namespace pyforel::ir::operation::pl {
class Not : public Operation {
   private:
    std::any child_;

   public:
    Not() = delete;
    explicit Not(std::any child) : child_(std::move(child)) {}
};
}  // namespace pyforel::ir::operation::pl

#endif
