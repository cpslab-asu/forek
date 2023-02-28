#ifndef PYFOREL_FORMULA_OPERATION_PL_OR_HPP
#define PYFOREL_FORMULA_OPERATION_PL_OR_HPP

#include <pyforel/formula/operation/binary.hpp>

namespace pyforel::formula::operation::pl {
namespace kind {
enum { Or = 5 };
}

class Or : public Binary {
   public:
    Or() = delete;
    Or(const core::Node& lexpr, const core::Node& rexpr)
        : Binary(kind::Or, lexpr, rexpr) {}
};
}  // namespace pyforel::formula::operation::pl

#endif
