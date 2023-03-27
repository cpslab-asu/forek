#ifndef FOREK_SPECIFICATION_LTL_LTL_HPP
#define FOREK_SPECIFICATION_LTL_LTL_HPP

#include <stdexcept>
#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::ltl {
class LinearTemporalLogic : public Specification {
   private:
    std::string formula_;

   public:
    LinearTemporalLogic() = delete;
    explicit LinearTemporalLogic(std::string formula)
        : formula_(std::move(formula)) {}

    /// Parse an LTL formulae into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula override;
};

class LinearTemporalLogicParseError : public std::runtime_error {
   public:
    explicit LinearTemporalLogicParseError(const std::string& msg)
        : std::runtime_error(msg) {}
};
}  // namespace forek::specification::ltl

#endif
