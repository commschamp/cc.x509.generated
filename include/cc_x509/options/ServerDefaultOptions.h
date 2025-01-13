// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains definition of protocol server default options.

#pragma once

#include "cc_x509/options/DefaultOptions.h"

namespace cc_x509
{

namespace options
{

/// @brief Default server options of the protocol.
template <typename TBase = cc_x509::options::DefaultOptions>
struct ServerDefaultOptionsT : public TBase
{
};

/// @brief Alias to @ref ServerDefaultOptionsT with default template parameter.
using ServerDefaultOptions = ServerDefaultOptionsT<>;

} // namespace options

} // namespace cc_x509
