#ifndef FOREK_FORMULA_CORE_NODE_HPP
#define FOREK_FORMULA_CORE_NODE_HPP

#include <memory>

#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core {
class Node {
   public:
    virtual ~Node() = default;
    virtual auto accept(visitor::Visitor& visitor) const -> void = 0;

    [[nodiscard]] virtual inline auto clone() const
        -> std::unique_ptr<Node> = 0;
};
}  // namespace forek::formula::core

#endif
