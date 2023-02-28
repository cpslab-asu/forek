#ifndef PYFOREL_FORMULA_CORE_NODE_HPP
#define PYFOREL_FORMULA_CORE_NODE_HPP

#include <memory>

namespace pyforel::formula::core {
/// The base data structure of the IR.
///
/// All structures "to-be" in the IR must derive from this interface to be
/// effectively used.
class Node {
   private:
    /// The kind of Node created.
    int kind_;

   public:
    /// Create a clone of this object dynamically allocated.
    ///
    /// The resource created by this method is managed through the the standard
    /// library smart pointer, so destructing it explicitly does not need to be
    /// managed explicitly.
    ///
    /// Note: For any class deriving this class, it is required to re-define
    /// this interface to support direct interfacing.
    [[nodiscard]] virtual inline auto clone() const -> std::unique_ptr<Node> {
        return std::make_unique<Node>(*this);
    }

    Node() = delete;
    explicit Node(int kind) : kind_(kind) {}

    Node(const Node& other) { kind_ = other.kind_; }
    Node(Node&& other) { kind_ = std::move(other.kind_); }

    [[nodiscard]] inline auto kind() const -> int { return kind_; }
};
}  // namespace pyforel::formula::core

#endif
