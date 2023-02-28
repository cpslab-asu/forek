#ifndef PYFOREL_FORMULA_OPERATION_PL_NOT_HPP
#define PYFOREL_FORMULA_OPERATION_PL_NOT_HPP

#include <pyforel/formula/operation/unary.hpp>

namespace pyforel::formula::operation::pl {
namespace kind {
enum { Not = 4 };
}

class Not : public Unary {
   public:
    Not() = delete;
    explicit Not(const core::Node& expr) : Unary(kind::Not, expr) {}
};
}  // namespace pyforel::formula::operation::pl

#endif
