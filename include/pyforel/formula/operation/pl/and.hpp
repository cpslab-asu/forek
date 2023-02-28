#ifndef PYFOREL_FORMULA_OPERATION_PL_AND_HPP
#define PYFOREL_FORMULA_OPERATION_PL_AND_HPP

#include <iostream>
#include <memory>
#include <utility>

#include <pyforel/formula/core/node.hpp>
#include <pyforel/formula/operation/binary.hpp>

namespace pyforel::formula::operation::pl {
namespace kind {
enum { And = 1 };
}

class And : public Binary {
   public:
    And() = delete;
    And(const core::Node& lexpr, const core::Node& rexpr)
        : Binary(kind::And, lexpr, rexpr) {}
};
}  // namespace pyforel::formula::operation::pl
#endif
