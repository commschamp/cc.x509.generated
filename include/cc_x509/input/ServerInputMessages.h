// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains definition of the ServerInputMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_x509/message/Msg.h"
#include "cc_x509/options/DefaultOptions.h"

namespace cc_x509
{

namespace input
{

/// @brief Server input messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_x509::options::DefaultOptions>
using ServerInputMessages =
    std::tuple<
        cc_x509::message::Msg<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_x509

/// @brief Create type aliases for the server input messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_X509_ALIASES_FOR_SERVER_INPUT_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## Msg ## suffix_ = cc_x509::message::Msg<interface_, opts_>;

/// @brief Create type aliases for the server input messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_X509_ALIASES_FOR_SERVER_INPUT_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_X509_ALIASES_FOR_SERVER_INPUT_MESSAGES(prefix_, suffix_, interface_, cc_x509::options::DefaultOptions)
