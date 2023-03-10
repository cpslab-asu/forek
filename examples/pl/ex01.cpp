#include "ex01.hpp"

#include <iostream>
#include <memory>

#include <forek/forek.hpp>
#include <forek/formula/core/operand/pl/false.hpp>
#include <forek/formula/core/operand/pl/proposition.hpp>
#include <forek/formula/core/operand/pl/true.hpp>
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/formula.hpp>
#include <forek/specification/pl/pl.hpp>

using forek::examples::pl::ex01::PropositionalLogicSemantics;
using forek::specification::pl::PropositionalLogic;

auto main() -> int {
    auto spec = PropositionalLogic("True & False -> (True | (False & True))");
    auto formula = spec.parse();

    auto visitor = PropositionalLogicSemantics();
    formula.evaluate(visitor);

    return 0;
}
