#ifndef FOREK_SPECIFICATION_LTL_IMPL_HPP
#define FOREK_SPECIFICATION_LTL_IMPL_HPP

#include <stdexcept>
#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::ltl {
template <typename T>
class LinearTemporalLogic : public Specification<T> {
   private:
    std::string formula_;

   public:
    LinearTemporalLogic() = delete;
    explicit LinearTemporalLogic(std::string formula) : formula_(std::move(formula)) {}

    /// Parse an LTL formula into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula<T> override;
};

class LinearTemporalLogicParseError : public std::runtime_error {
   public:
    explicit LinearTemporalLogicParseError(const std::string& msg) : std::runtime_error(msg) {}
};
}  // namespace forek::specification::ltl

#endif
