#ifndef FOREK_SPECIFICATION_PL_PL_HPP
#define FOREK_SPECIFICATION_PL_PL_HPP

#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::pl {
class PropositionalLogic : public Specification {
   private:
    std::string formula_;

   public:
    PropositionalLogic() = delete;
    explicit PropositionalLogic(std::string formula)
        : formula_(std::move(formula)) {}

    /// Parse a PL formulae into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula override;
};
}  // namespace forek::specification::pl

#endif
