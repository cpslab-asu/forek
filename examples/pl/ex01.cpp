#include "ex01.hpp"

#include <iostream>
#include <memory>

#include <forek/formula/formula.hpp>
#include <forek/specification/pl/pl.hpp>

using forek::examples::pl::ex01::PropositionalLogicSemantics;
using forek::specification::pl::PropositionalLogic;

auto main() -> int {
    auto spec = PropositionalLogic("p or (q and r)");
    auto formula = spec.parse();

    auto visitor = PropositionalLogicSemantics();
    formula.evaluate(visitor);

    std::cout << "Valuation: " << visitor.res << "\n";
    return 0;
}
