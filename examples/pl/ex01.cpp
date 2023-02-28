#include <pyforel/pyforel.hpp>

using pyforel::specification::pl::PropositionalLogic;

auto main() -> int {
    auto spec = PropositionalLogic("(not p) implies (q and r)");
    auto formula = spec.parse();

    return 0;
}
