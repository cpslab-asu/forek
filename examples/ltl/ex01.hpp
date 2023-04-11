#ifndef FOREK_EXAMPLES_LTL_EX01_HPP
#define FOREK_EXAMPLES_LTL_EX01_HPP

#include <cassert>
#include <string>
#include <vector>

#include "forek/formula/formula.hpp"
#include <forek/formula/core/operand/pl/false.hpp>
#include <forek/formula/core/operand/pl/proposition.hpp>
#include <forek/formula/core/operand/pl/true.hpp>
#include <forek/formula/core/operation/ltl/always.hpp>
#include <forek/formula/core/operation/ltl/eventually.hpp>
#include <forek/formula/core/operation/ltl/next.hpp>
#include <forek/formula/core/operation/ltl/release.hpp>
#include <forek/formula/core/operation/ltl/until.hpp>
#include <forek/formula/core/operation/pl/and.hpp>
#include <forek/formula/core/operation/pl/iff.hpp>
#include <forek/formula/core/operation/pl/implies.hpp>
#include <forek/formula/core/operation/pl/not.hpp>
#include <forek/formula/core/operation/pl/or.hpp>
#include <forek/formula/visitor/ltl/visitor.hpp>

namespace examples::ex01 {
using forek::formula::core::operation::pl::And;
using forek::formula::core::operation::pl::Iff;
using forek::formula::core::operation::pl::Implies;
using forek::formula::core::operation::pl::Not;
using forek::formula::core::operation::pl::Or;

using forek::formula::core::operand::pl::False;
using forek::formula::core::operand::pl::Proposition;
using forek::formula::core::operand::pl::True;

using forek::formula::core::operation::ltl::Always;
using forek::formula::core::operation::ltl::Eventually;
using forek::formula::core::operation::ltl::Next;
using forek::formula::core::operation::ltl::Release;
using forek::formula::core::operation::ltl::Until;

using forek::formula::visitor::ltl::Visitor;

using Model = std::vector<std::vector<std::string>>;

template <typename T>
class LinearTemporalLogicInterpretation : public Visitor<T> {
   public:
    auto visit(Proposition<T>& ctx) -> T override { return true; }
    auto visit(True<T>& ctx) -> T override { return true; }
    auto visit(False<T>& ctx) -> T override { return false; }

    auto visit(Not<T>& ctx) -> T override { return true; }
    auto visit(And<T>& ctx) -> T override { return true; };
    auto visit(Or<T>& ctx) -> T override { return true; }
    auto visit(Implies<T>& ctx) -> T override { return true; }
    auto visit(Iff<T>& ctx) -> T override { return true; };
    auto visit(Always<T>& ctx) -> T override { return true; }
    auto visit(Eventually<T>& ctx) -> T override { return true; }
    auto visit(Next<T>& ctx) -> T override { return true; }
    auto visit(Release<T>& ctx) -> T override { return true; }
    auto visit(Until<T>& ctx) -> T override { return true; }
};

}  // namespace examples::ex01
#endif
