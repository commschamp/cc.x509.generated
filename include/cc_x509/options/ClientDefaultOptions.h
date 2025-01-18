// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of protocol client default options.

#pragma once

#include "cc_x509/options/DefaultOptions.h"

namespace cc_x509
{

namespace options
{

/// @brief Default client options of the protocol.
template <typename TBase = cc_x509::options::DefaultOptions>
struct ClientDefaultOptionsT : public TBase
{
};

/// @brief Alias to @ref ClientDefaultOptionsT with default template parameter.
using ClientDefaultOptions = ClientDefaultOptionsT<>;

} // namespace options

} // namespace cc_x509
