// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of message ids enumeration.

#pragma once

#include <cstdint>
#include "cc_x509/Version.h"

namespace cc_x509
{
/// @brief Message ids enumeration.
enum MsgId : std::uint8_t
{
    MsgId_M0 = 0, ///< message id of <b>Message</b> message. ,

    // --- Extra values generated for convenience ---,
    MsgId_FirstValue = 0, ///< First defined value.,
    MsgId_LastValue = 0, ///< Last defined value.,
    MsgId_ValuesLimit = 1, ///< Upper limit for defined values.
};

} // namespace cc_x509
