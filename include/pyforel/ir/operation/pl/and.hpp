#ifndef PYFOREL_IR_OPERATION_PL_AND_HPP
#define PYFOREL_IR_OPERATION_PL_AND_HPP

#include <any>
#include <pyforel/ir/operation/operation.hpp>
#include <utility>

namespace pyforel::ir::operation::pl {
class And : public Operation {
   private:
    std::any left_;
    std::any right_;

   public:
    And() = delete;
    And(std::any left, std::any right)
        : left_(std::move(left)), right_(std::move(right)) {}
};
}  // namespace pyforel::ir::operation::pl

#endif
