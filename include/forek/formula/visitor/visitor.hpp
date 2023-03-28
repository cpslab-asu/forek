#ifndef FOREK_FORMULA_VISITOR_VISITOR_HPP
#define FOREK_FORMULA_VISITOR_VISITOR_HPP

#include <iostream>
#include <stdexcept>

namespace forek::formula::visitor {
class Visitor {
   public:
    virtual ~Visitor() = default;
};

class VisitorException : public std::runtime_error {
   public:
    explicit VisitorException(const std::string& msg)
        : std::runtime_error(msg) {}
};
}  // namespace forek::formula::visitor

#endif
