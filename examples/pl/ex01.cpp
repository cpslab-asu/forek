#include <forek/forek.hpp>
#include <forek/formula/operand/proposition.hpp>
#include <forek/formula/operation/pl/and.hpp>

using forek::formula::operand::Proposition;
using forek::formula::operation::pl::And;

using forek::specification::pl::PropositionalLogic;

auto main() -> int {
    auto spec = PropositionalLogic("(not p) implies (q and r)");
    auto formula = spec.parse();

    // visiting
    auto result = formula.visit(new Visitor);

    return 0;
}
