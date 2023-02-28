#ifndef PYFOREL_FORMULA_OPERATION_PL_IMPLIES_HPP
#define PYFOREL_FORMULA_OPERATION_PL_IMPLIES_HPP

#include <pyforel/formula/operation/binary.hpp>

namespace pyforel::formula::operation::pl {
namespace kind {
enum { Implies = 3 };
}

class Implies : public Binary {
   public:
    Implies() = delete;
    Implies(const core::Node& lexpr, const core::Node& rexpr)
        : Binary(kind::Implies, lexpr, rexpr) {}
};
}  // namespace pyforel::formula::operation::pl

#endif
