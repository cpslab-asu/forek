#ifndef FOREK_FORMULA_VISITOR_PL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_PL_VISITOR_HPP

#include <forek/formula/visitor/visitor.hpp>

using VisitorInterface = forek::formula::visitor::Visitor;

namespace forek::formula {
namespace core {
namespace operand::pl {
// forward declarations
class True;
class False;
class Proposition;
}  // namespace operand::pl

namespace operation::pl {
class Not;
class And;
class Or;
class Implies;
class Iff;
}  // namespace operation::pl
}  // namespace core

namespace visitor::pl {
class Visitor : public VisitorInterface {
   public:
    virtual auto visit(const core::operation::pl::Not& ctx) -> void = 0;
    virtual auto visit(const core::operation::pl::And& ctx) -> void = 0;
    virtual auto visit(const core::operation::pl::Or& ctx) -> void = 0;
    virtual auto visit(const core::operation::pl::Implies& ctx) -> void = 0;
    virtual auto visit(const core::operation::pl::Iff& ctx) -> void = 0;

    virtual auto visit(const core::operand::pl::True& ctx) -> void = 0;
    virtual auto visit(const core::operand::pl::False& ctx) -> void = 0;
    virtual auto visit(const core::operand::pl::Proposition& ctx) -> void = 0;
};
}  // namespace visitor::pl
}  // namespace forek::formula

#endif
