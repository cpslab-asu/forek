#ifndef PYFOREL_IR_OPERATION_PL_IMPLIES_HPP
#define PYFOREL_IR_OPERATION_PL_IMPLIES_HPP

#include <any>
#include <pyforel/ir/operation/operation.hpp>
#include <utility>

namespace pyforel::ir::operation::pl {
class Implies : public Operation {
   private:
    std::any left_;
    std::any right_;

   public:
    Implies() = delete;
    Implies(std::any left, std::any right)
        : left_(std::move(left)), right_(std::move(right)) {}
};
}  // namespace pyforel::ir::operation::pl

#endif
