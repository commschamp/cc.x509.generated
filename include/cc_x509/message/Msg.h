// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of <b>"Message"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_x509/MsgId.h"
#include "cc_x509/field/Certificate.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/message/MsgCommon.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_x509
{

namespace message
{

/// @brief Fields of @ref Msg.
/// @tparam TOpt Extra options
/// @see @ref Msg
/// @headerfile cc_x509/message/Msg.h
template <typename TOpt = cc_x509::options::DefaultOptions>
struct MsgFields
{
    /// @brief Definition of <b>"Certificate"</b> field.
    using Certificate =
        cc_x509::field::Certificate<
            TOpt
        >;

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Certificate
    >;
};

/// @brief Definition of <b>"Message"</b> message class.
/// @details
///     See @ref MsgFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_x509/message/Msg.h
template <typename TMsgBase, typename TOpt = cc_x509::options::DefaultOptions>
class Msg : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<cc_x509::MsgId_M0>,
        comms::option::def::FieldsImpl<typename MsgFields<TOpt>::All>,
        comms::option::def::MsgType<Msg<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<cc_x509::MsgId_M0>,
            comms::option::def::FieldsImpl<typename MsgFields<TOpt>::All>,
            comms::option::def::MsgType<Msg<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_certificate index, @b Field_certificate type and @b field_certificate() access fuction
    ///         for @ref MsgFields::Certificate field.
    COMMS_MSG_FIELDS_NAMES(
        certificate
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_x509::message::MsgCommon::name();
    }
};

} // namespace message

} // namespace cc_x509
