#ifndef PYFOREL_SPECIFICATION_PL_PL_HPP
#define PYFOREL_SPECIFICATION_PL_PL_HPP

#include <string>

#include <pyforel/formula/formula.hpp>
#include <pyforel/specification/specification.hpp>

namespace pyforel::specification::pl {
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
}  // namespace pyforel::specification::pl

#endif
