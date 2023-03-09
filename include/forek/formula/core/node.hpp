#ifndef FOREK_FORMULA_CORE_NODE_HPP
#define FOREK_FORMULA_CORE_NODE_HPP

#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core {
class Node {
   public:
    virtual ~Node() = default;
    virtual auto accept(visitor::Visitor& visitor) -> void const = 0;
};
}  // namespace forek::formula::core

#endif
