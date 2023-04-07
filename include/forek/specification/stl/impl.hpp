#ifndef FOREK_SPECIFICATION_STL_IMPL_HPP
#define FOREK_SPECIFICATION_STL_IMPL_HPP

#include <stdexcept>
#include <string>

#include <forek/formula/formula.hpp>
#include <forek/specification/specification.hpp>

namespace forek::specification::stl {
template <typename T>
class SignalTemporalLogic : public Specification<T> {
   private:
    std::string formula_;

   public:
    SignalTemporalLogic() = delete;
    explicit SignalTemporalLogic(std::string formula) : formula_(std::move(formula)) {}

    /// Parse an STL formula into a Formula.
    [[nodiscard]] auto parse() const -> formula::Formula<T> override;
};

class SignalTemporalLogicParseError : public std::runtime_error {
   public:
    explicit SignalTemporalLogicParseError(const std::string& msg) : std::runtime_error(msg) {}
};
}  // namespace forek::specification::stl

#endif
