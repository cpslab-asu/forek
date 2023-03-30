#ifndef FOREK_SPECIFICATION_TPTL_IMPL_HPP
#define FOREK_SPECIFICATION_TPTL_IMPL_HPP

#include <stdexcept>
#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::tptl {
template <typename T>
class TimedPropositionalTemporalLogic : public Specification<T> {
   private:
    std::string formula_;

   public:
    TimedPropositionalTemporalLogic() = delete;
    explicit TimedPropositionalTemporalLogic(std::string formula) : formula_(std::move(formula)) {}

    /// Parse a TPTL formula into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula<T> override;
};

class TimedPropositionalTemporalLogicParseError : public std::runtime_error {
   public:
    explicit TimedPropositionalTemporalLogicParseError(const std::string& msg)
        : std::runtime_error(msg) {}
};
}  // namespace forek::specification::tptl

#endif
