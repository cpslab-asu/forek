#ifndef FOREK_SPECIFICATION_MTL_IMPL_HPP
#define FOREK_SPECIFICATION_MTL_IMPL_HPP

#include <stdexcept>
#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::mtl {
template <typename T>
class MetricTemporalLogic : public Specification<T> {
   private:
    std::string formula_;

   public:
    MetricTemporalLogic() = delete;
    explicit MetricTemporalLogic(std::string formula) : formula_(std::move(formula)) {}

    /// Parse an MTL formula into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula<T> override;
};

class MetricTemporalLogicParseError : public std::runtime_error {
   public:
    explicit MetricTemporalLogicParseError(const std::string& msg) : std::runtime_error(msg) {}
};
}  // namespace forek::specification::mtl

#endif
