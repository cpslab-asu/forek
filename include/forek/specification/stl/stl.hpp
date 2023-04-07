#ifndef FOREK_SPECIFICATION_STL_STL_HPP
#define FOREK_SPECIFICATION_STL_STL_HPP

// clang-format off
#include "impl.hpp"

// This is a private header. Therefore, the private headers must be made
// "publicly available" in order to access this information.
//
// The template implementation is separated into the public headers as it
// depends on external libraries that should not be directly supported in the
// set of public headers.
#include "stl/impl.tpp.hpp"

// clang-format on
#endif
