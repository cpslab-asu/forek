#ifndef FOREK_FORMULA_CORE_NODE_HPP
#define FOREK_FORMULA_CORE_NODE_HPP

#include <memory>

#include <forek/formula/visitor/visitor.hpp>

namespace forek::formula::core {
template <typename T>
class Node {
   protected:
    T data_;

   public:
    virtual ~Node() = default;
    virtual auto accept(visitor::Visitor<T>& visitor) -> void = 0;

    [[nodiscard]] virtual inline auto clone() const -> std::unique_ptr<Node> = 0;

    [[nodiscard]] virtual inline auto data() const -> const T& { return data_; }
    virtual inline auto data(T data) -> void { data_ = data; }
};
}  // namespace forek::formula::core

#endif
