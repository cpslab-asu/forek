#ifndef FOREK_FORMULA_VISITOR_LTL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_LTL_VISITOR_HPP

#include <forek/formula/visitor/pl/visitor.hpp>

namespace forek::formula {
namespace core {
namespace operand::pl {
// forward declarations
class True;
class False;
class Proposition;
}  // namespace operand::pl

namespace operation {
namespace pl {
class Not;
class And;
class Or;
class Implies;
class Iff;
}  // namespace pl

namespace ltl {
class Eventually;
class Always;
class Next;
class Until;
class Release;
}  // namespace ltl
}  // namespace operation
}  // namespace core

namespace visitor::ltl {
using VisitorInterface = forek::formula::visitor::pl::Visitor;

class Visitor : public VisitorInterface {
   public:
    virtual auto visit(const core::operation::ltl::Eventually& ctx) -> void = 0;
    virtual auto visit(const core::operation::ltl::Always& ctx) -> void = 0;
    virtual auto visit(const core::operation::ltl::Next& ctx) -> void = 0;
    virtual auto visit(const core::operation::ltl::Until& ctx) -> void = 0;
    virtual auto visit(const core::operation::ltl::Release& ctx) -> void = 0;
};
}  // namespace visitor::ltl
}  // namespace forek::formula

#endif
