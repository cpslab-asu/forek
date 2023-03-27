#include "ex01.hpp"

#include <exception>
#include <iostream>
#include <memory>

#include <forek/formula/formula.hpp>
#include <forek/specification/pl/pl.hpp>

using forek::examples::pl::ex01::PropositionalLogicSemantics;
using forek::specification::pl::PropositionalLogic;

auto main() -> int {
    auto spec = PropositionalLogic("p or (q && r) && (m -> n)");
    auto interpretor = PropositionalLogicSemantics();

    try {
        auto formula = spec.parse();
        formula.evaluate(interpretor);

        std::cout << "Result: " << interpretor.res << "\n";
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n";
    }

    return 0;
}
