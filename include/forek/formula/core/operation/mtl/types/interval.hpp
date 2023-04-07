#ifndef FOREK_FORMULA_CORE_OPERATION_MTL_CORE_INTERVAL_HPP
#define FOREK_FORMULA_CORE_OPERATION_MTL_CORE_INTERVAL_HPP

#include <variant>

namespace forek::formula::core::operation::mtl::types {
class Closed {
   public:
    const double value;

   public:
    explicit Closed(double v) : value(v) {}
};

class Open {
   public:
    const double value;

   public:
    explicit Open(double v) : value(v) {}
};

using BoundaryKind = std::variant<Open, Closed>;

class Interval {
   public:
    const BoundaryKind lower;
    const BoundaryKind upper;

   public:
    Interval(BoundaryKind l, BoundaryKind u) : lower(std::move(l)), upper(std::move(u)) {}
};

}  // namespace forek::formula::core::operation::mtl::types

#endif
