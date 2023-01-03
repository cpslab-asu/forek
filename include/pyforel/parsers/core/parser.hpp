#ifndef PYFOREL_PARSERS_PARSER_HPP
#define PYFOREL_PARSERS_PARSER_HPP

#include <pyforel/parsers/core/formula.hpp>

namespace pyforel {
namespace parsers {

/// An interface for developing new parser interfaces.
template <typename T>
class Parser {
   public:
    virtual auto parse() -> core::Formula = 0;
};

}  // namespace parsers
}  // namespace pyforel

#endif
