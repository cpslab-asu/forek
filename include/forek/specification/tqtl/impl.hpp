#ifndef FOREK_SPECIFICATION_TQTL_IMPL_HPP
#define FOREK_SPECIFICATION_TQTL_IMPL_HPP

#include <stdexcept>
#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::tqtl {
template <typename T>
class TimedQualityTemporalLogic : public Specification<T> {
   private:
    std::string formula_;

   public:
    TimedQualityTemporalLogic() = delete;
    explicit TimedQualityTemporalLogic(std::string formula) : formula_(std::move(formula)) {}

    /// Parse a TQTL formula into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula<T> override;
};

class TimedQualityTemporalLogicParseError : public std::runtime_error {
   public:
    explicit TimedQualityTemporalLogicParseError(const std::string& msg)
        : std::runtime_error(msg) {}
};
}  // namespace forek::specification::tqtl

#endif
