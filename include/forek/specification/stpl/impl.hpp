#ifndef FOREK_SPECIFICATION_STPL_IMPL_HPP
#define FOREK_SPECIFICATION_STPL_IMPL_HPP

#include <stdexcept>
#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::stpl {
template <typename T>
class SpatioTemporalPerceptionLogic : public Specification<T> {
   private:
    std::string formula_;

   public:
    SpatioTemporalPerceptionLogic() = delete;
    explicit SpatioTemporalPerceptionLogic(std::string formula) : formula_(std::move(formula)) {}

    /// Parse a STPL formula into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula<T> override;
};

class SpatioTemporalPerceptionLogicParseError : public std::runtime_error {
   public:
    explicit SpatioTemporalPerceptionLogicParseError(const std::string& msg)
        : std::runtime_error(msg) {}
};
}  // namespace forek::specification::stpl

#endif
