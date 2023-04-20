// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of <b>"Message"</b> interface class.

#pragma once

#include "cc_x509/MsgId.h"
#include "comms/Message.h"
#include "comms/options.h"

namespace cc_x509
{

/// @brief Definition of <b>"Message"</b> common interface class.
/// @tparam TOpt Interface definition options
/// @headerfile cc_x509/Message.h
template <typename... TOpt>
using Message =
    comms::Message<
        TOpt...,
        comms::option::def::BigEndian,
        comms::option::def::MsgIdType<cc_x509::MsgId>
    >;

} // namespace cc_x509
