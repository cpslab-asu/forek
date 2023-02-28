#include <iostream>
#include <utility>

#include <pyforel/formula/operand/proposition.hpp>
#include <pyforel/formula/operation/pl/and.hpp>
#include <pyforel/formula/operation/pl/iff.hpp>
#include <pyforel/formula/operation/pl/implies.hpp>
#include <pyforel/formula/operation/pl/not.hpp>
#include <pyforel/formula/operation/pl/or.hpp>

using pyforel::formula::operand::Proposition;
using pyforel::formula::operation::pl::And;
using pyforel::formula::operation::pl::Iff;
using pyforel::formula::operation::pl::Implies;
using pyforel::formula::operation::pl::Not;
using pyforel::formula::operation::pl::Or;

auto main() -> int {
    auto expr = Not(And(Proposition("p"),
                        Iff(Proposition("q"),
                            Implies(Proposition("r"),
                                    Or(Proposition("s"), Proposition("t"))))));

    return 0;
}
