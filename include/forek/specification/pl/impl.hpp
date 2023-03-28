#ifndef FOREK_SPECIFICATION_PL_IMPL_HPP
#define FOREK_SPECIFICATION_PL_IMPL_HPP

#include <stdexcept>
#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::pl {
template <typename T>
class PropositionalLogic : public Specification<T> {
   private:
    std::string formula_;

   public:
    PropositionalLogic() = delete;
    explicit PropositionalLogic(std::string formula)
        : formula_(std::move(formula)) {}

    /// Parse a PL formulae into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula<T> override;
};

class PropositionalLogicParseError : public std::runtime_error {
   public:
    explicit PropositionalLogicParseError(const std::string& msg)
        : std::runtime_error(msg) {}
};
}  // namespace forek::specification::pl

#endif
