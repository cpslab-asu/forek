#include "ex01.hpp"

#include <iostream>
#include <memory>
#include <vector>

#include <forek/formula/formula.hpp>
#include <forek/specification/ltl/ltl.hpp>

using forek::examples::ltl::ex01::LinearTemporalLogicInterpretation;
using forek::specification::ltl::LinearTemporalLogic;

auto main() -> int {
    auto spec = LinearTemporalLogic("G (p -> X q) X");
    auto formula = spec.parse();

    const std::vector<double> trace = {1.0, 2.0, 3.0, 3.0, 3.1};

    auto visitor = LinearTemporalLogicInterpretation{trace};
    formula.evaluate(visitor);

    for (auto x : visitor.res) {
        std::cout << x << "\n";
    }

    std::cout << "Valuation: " << visitor.res.front() << "\n";
    return 0;
}
