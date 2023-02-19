#ifndef PYFOREL_SPECIFICATION_SPECIFICATION_HPP
#define PYFOREL_SPECIFICATION_SPECIFICATION_HPP

#include <pyforel/ir/formula.hpp>

namespace pyforel::specification {
class Specification {
   public:
    virtual auto parse() -> ir::Formula = 0;
};
}  // namespace pyforel::specification

#endif
