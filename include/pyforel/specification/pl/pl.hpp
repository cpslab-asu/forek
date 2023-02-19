#ifndef PYFOREL_SPECIFICATION_PL_PL_HPP
#define PYFOREL_SPECIFICATION_PL_PL_HPP

#include <pyforel/ir/formula.hpp>
#include <pyforel/specification/specification.hpp>
#include <string>

namespace pyforel::specification::pl {
class PropositionalLogic : public Specification {
   private:
    std::string formula_;

   public:
    PropositionalLogic() = delete;

    /// Initialize a specification with a PL formula.
    template <typename T>
    explicit PropositionalLogic(T formula) : formula_(formula){};

    /// Parse the PL formula initialized to this specification.
    auto parse() -> ir::Formula override;
};
}  // namespace pyforel::specification::pl

#endif
