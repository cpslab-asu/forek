#ifndef FOREK_SPECIFICATION_TPTL_ERROR_HANDLER_HPP
#define FOREK_SPECIFICATION_TPTL_ERROR_HANDLER_HPP

#include <exception>
#include <stdexcept>

#include <forek/specification/tptl/impl.hpp>

#include "BailErrorStrategy.h"
#include "Parser.h"
#include "Token.h"

namespace error {
using forek::specification::tptl::TimedPropositionalTemporalLogicParseError;

class TimedPropositionalTemporalLogicErrorHandler : public antlr4::BailErrorStrategy {
    auto recover(antlr4::Parser *recognizer, std::exception_ptr eptr) -> void override {
        try {
            if (eptr) {
                std::rethrow_exception(eptr);
            }
        } catch (const std::exception &e) {
            throw TimedPropositionalTemporalLogicParseError(e.what());
        }
    }

    auto recoverInline(antlr4::Parser *recognizer) -> antlr4::Token * override {
        throw TimedPropositionalTemporalLogicParseError("syntax error");
    }

    auto sync(antlr4::Parser *recognizer) -> void override {}
};
}  // namespace error

#endif
