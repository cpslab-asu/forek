#include <pyforel/pyforel.hpp>
#include <string>

using pyforel::specification::pl::PropositionalLogic;

auto main() -> int {
    auto spec = PropositionalLogic("(p & q) -> r");
    auto formula = spec.parse();

    return 0;
}
