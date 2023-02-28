#include <iostream>
#include <utility>

#include <pyforel/formula/operand/proposition.hpp>
#include <pyforel/formula/operation/pl/not.hpp>

using pyforel::formula::operand::Proposition;
using pyforel::formula::operation::pl::Not;

auto main() -> int {
    auto expr = Not(Not(Not(Not(Not(Proposition("p"))))));
    return 0;
}
