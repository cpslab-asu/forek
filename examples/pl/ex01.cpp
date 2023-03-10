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

using forek::formula::core::operation::pl::And;
using forek::formula::core::operation::pl::Or;

using forek::formula::core::operand::pl::False;
using forek::formula::core::operand::pl::Proposition;
using forek::formula::core::operand::pl::True;

using forek::specification::pl::PropositionalLogic;

auto main() -> int {
    auto p = Proposition("x");
    auto req = And(
        std::make_unique<Proposition>("p"),
        std::make_unique<And>(std::make_unique<Proposition>("q"),
                              std::make_unique<Or>(std::make_unique<True>(),
                                                   std::make_unique<False>())));

    auto spec = PropositionalLogic("True & False -> (True | (False & True))");
    auto formula = spec.parse();

    auto visitor = PropositionalLogicSemantics();

    std::cout << "Automated Visit:\n";
    formula.evaluate(visitor);

    std::cout << "\nManual Visit:\n";
    req.accept(visitor);
    return 0;
}
