#include <pyforel/pyforel.hpp>
#include <string>

#include "pyforel/specification/pl/pl.hpp"

using pyforel::specification::pl::PropositionalLogic;

auto main() -> int {
    auto spec = PropositionalLogic("(p & q) -> r");
    auto formula = spec.parse();

    return 0;
}
