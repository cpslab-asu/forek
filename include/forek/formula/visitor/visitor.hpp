#ifndef FOREK_FORMULA_VISITOR_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_VISITOR_HPP

#include <iostream>
#include <stdexcept>

namespace forek::formula {
// forward declarations
namespace core {
class Node;

namespace operand {
class Operand;
}

namespace operation {
class Operation;
class Binary;
class Unary;
}  // namespace operation
}  // namespace core

namespace visitor {
class Visitor {
   public:
    virtual ~Visitor() = default;

    auto visit(const core::Node& ctx) -> void {}
    auto visit(const core::operand::Operand& ctx) -> void {}
    auto visit(const core::operation::Operation& ctx) -> void {}
    auto visit(const core::operation::Binary& ctx) -> void {}
    auto visit(const core::operation::Unary& ctx) -> void {}
};

class VisitorException : public std::runtime_error {
   public:
    explicit VisitorException(const std::string& msg)
        : std::runtime_error(msg) {}
};
}  // namespace visitor
}  // namespace forek::formula

#endif
