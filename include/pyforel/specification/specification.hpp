#ifndef PYFOREL_SPECIFICATION_SPECIFICATION_HPP
#define PYFOREL_SPECIFICATION_SPECIFICATION_HPP

#include <pyforel/formula/formula.hpp>

namespace pyforel::specification {
class Specification {
   public:
    /// Parse a specification.
    [[nodiscard]] virtual auto parse() const -> formula::Formula = 0;
};
}  // namespace pyforel::specification

#endif
