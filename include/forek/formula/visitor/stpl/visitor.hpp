#ifndef FOREK_FORMULA_VISITOR_STPL_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_STPL_VISITOR_HPP

#include <forek/formula/visitor/arithmetic/visitor.hpp>
#include <forek/formula/visitor/tqtl/visitor.hpp>

namespace forek::formula {
namespace core {
namespace operand::stpl {
template <typename T>
class SpatialTerm;

template <typename T>
class Function;
}  // namespace operand::stpl

namespace operation::stpl {
template <typename T>
class AlwaysSpatial;

template <typename T>
class AlwaysSpatialBounded;

template <typename T>
class EventuallySpatial;

template <typename T>
class EventuallySpatialBounded;

template <typename T>
class NextSpatial;

template <typename T>
class NextSpatialBounded;

template <typename T>
class UntilSpatial;

template <typename T>
class UntilSpatialBounded;

template <typename T>
class ReleaseSpatial;

template <typename T>
class ReleaseSpatialBounded;

template <typename T>
class Complement;

template <typename T>
class Intersection;

template <typename T>
class Union;

template <typename T>
class Interior;

template <typename T>
class Closure;

template <typename T>
class Universe;

template <typename T>
class NonEmpty;

template <typename T>
class Area;

template <typename T>
class FunctionCompare;

}  // namespace operation::stpl
}  // namespace core

namespace visitor::stpl {
template <typename T>
class Visitor : public forek::formula::visitor::tqtl::Visitor<T> {
   public:
    explicit Visitor(visitor::arithmetic::Visitor<T>& solver)
        : forek::formula::visitor::tqtl::Visitor<T>(solver) {}

    virtual auto setup(core::operand::stpl::SpatialTerm<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::AlwaysSpatial<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::AlwaysSpatialBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::EventuallySpatial<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::EventuallySpatialBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::NextSpatial<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::NextSpatialBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::UntilSpatial<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::UntilSpatialBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::ReleaseSpatial<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::ReleaseSpatialBounded<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::Complement<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::Intersection<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::Union<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::Interior<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::Closure<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::Area<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::Universe<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::NonEmpty<T>& ctx) -> void {}
    virtual auto setup(core::operand::stpl::Function<T>& ctx) -> void {}
    virtual auto setup(core::operation::stpl::FunctionCompare<T>& ctx) -> void {}

    virtual auto visit(core::operand::stpl::SpatialTerm<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::AlwaysSpatial<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::AlwaysSpatialBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::EventuallySpatial<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::EventuallySpatialBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::NextSpatial<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::NextSpatialBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::UntilSpatial<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::UntilSpatialBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::ReleaseSpatial<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::ReleaseSpatialBounded<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::Complement<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::Intersection<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::Union<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::Interior<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::Closure<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::Area<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::Universe<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::NonEmpty<T>& ctx) -> T = 0;
    virtual auto visit(core::operand::stpl::Function<T>& ctx) -> T = 0;
    virtual auto visit(core::operation::stpl::FunctionCompare<T>& ctx) -> T = 0;
};
}  // namespace visitor::stpl
}  // namespace forek::formula

#endif
