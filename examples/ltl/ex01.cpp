#include <pyforel/pyforel.hpp>

using pyforel::specification::ltl::LinearTemporalLogic;

auto main() -> int {
    auto spec =
        LinearTemporalLogic("(always eventually (p and q)) and (always r)");
    auto formula = spec.parse();

    return 0;
}
