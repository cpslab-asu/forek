#ifndef PYFOREL_SPECIFICATION_LTL_LTL_HPP
#define PYFOREL_SPECIFICATION_LTL_LTL_HPP

#include <string>

#include <pyforel/formula/formula.hpp>
#include <pyforel/specification/specification.hpp>

namespace pyforel::specification::ltl {
class LinearTemporalLogic : public Specification {
   private:
    std::string formula_;

   public:
    LinearTemporalLogic() = delete;
    explicit LinearTemporalLogic(std::string formula)
        : formula_(std::move(formula)) {}

    /// Parse a LTL formulae into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula override;
};
}  // namespace pyforel::specification::ltl

#endif
