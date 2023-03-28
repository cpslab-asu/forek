#ifndef FOREK_SPECIFICATION_SPECIFICATION_HPP
#define FOREK_SPECIFICATION_SPECIFICATION_HPP

#include <forek/formula/formula.hpp>

namespace forek::specification {
template <typename T>
class Specification {
   public:
    /// Parse a specification.
    [[nodiscard]] virtual auto parse() const -> formula::Formula<T> = 0;
};
}  // namespace forek::specification

#endif
