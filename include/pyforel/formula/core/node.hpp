#ifndef PYFOREL_FORMULA_CORE_NODE_HPP
#define PYFOREL_FORMULA_CORE_NODE_HPP

#include <memory>

namespace forek::formula::core {
/// The base data structure of the IR.
///
/// All structures "to-be" in the IR must derive from this interface to be
/// effectively used.
class Node {
   private:
    /// The kind of Node created.
    int kind_;

   public:
    Node() = delete;
    explicit Node(int kind) : kind_(kind) {}

    [[nodiscard]] inline auto kind() const -> int { return kind_; }
    inline auto kind(int kind) { kind_ = kind; }

    [[nodiscard]] virtual inline auto clone() const
        -> std::unique_ptr<Node> = 0;
};
}  // namespace forek::formula::core

#endif
