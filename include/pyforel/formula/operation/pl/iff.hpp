#ifndef PYFOREL_FORMULA_OPERATION_PL_IFF_HPP
#define PYFOREL_FORMULA_OPERATION_PL_IFF_HPP

#include "pyforel/formula/core/node.hpp"
#include <pyforel/formula/operation/binary.hpp>

namespace pyforel::formula::operation::pl {
namespace kind {
enum { Iff = 2 };
}

class Iff : public Binary {
   public:
    Iff() = delete;
    Iff(const core::Node& lexpr, const core::Node& rexpr)
        : Binary(kind::Iff, lexpr, rexpr) {}
};
}  // namespace pyforel::formula::operation::pl

#endif
