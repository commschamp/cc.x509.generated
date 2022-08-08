// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Frame"</b> frame class.

#pragma once

#include <cstdint>
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/frame/FrameCommon.h"
#include "cc_x509/input/AllMessages.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "comms/protocol/MsgDataLayer.h"
#include "comms/protocol/MsgIdLayer.h"

namespace cc_x509
{

namespace frame
{

/// @brief Layers definition of @ref Frame frame class.
/// @tparam TOpt Protocol options.
/// @see @ref Frame
/// @headerfile cc_x509/frame/Frame.h
template <typename TOpt = cc_x509::options::DefaultOptions>
struct FrameLayers
{
    /// @brief Definition of layer "Data".
    using Data =
        comms::protocol::MsgDataLayer<
            typename TOpt::cc_x509::frame::FrameLayers::Data
        >;

    /// @brief Scope for field(s) of @ref Id layer.
    struct IdMembers
    {
        /// @brief Definition of <b>"IdField"</b> field.
        class IdField : public
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::EmptySerialization
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_x509::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::EmptySerialization
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_x509::frame::FrameLayersCommon::IdMembersCommon::IdFieldCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::frame::FrameLayersCommon::IdMembersCommon::IdFieldCommon::name();
            }
        };
    };

    /// @brief Definition of layer "Id".
    template <typename TMessage, typename TAllMessages>
    using Id =
        comms::protocol::MsgIdLayer<
            typename IdMembers::IdField,
            TMessage,
            TAllMessages,
            Data,
            typename TOpt::cc_x509::frame::FrameLayers::Id
        >;

    /// @brief Final protocol stack definition.
    template<typename TMessage, typename TAllMessages>
    using Stack = Id<TMessage, TAllMessages>;
};

/// @brief Definition of <b>"Frame"</b> frame class.
/// @tparam TMessage Common interface class of all the messages
/// @tparam TAllMessages All supported input messages.
/// @tparam TOpt Frame definition options
/// @headerfile cc_x509/frame/Frame.h
template <
   typename TMessage,
   typename TAllMessages = cc_x509::input::AllMessages<TMessage>,
   typename TOpt = cc_x509::options::DefaultOptions
>
class Frame : public
    FrameLayers<TOpt>::template Stack<TMessage, TAllMessages>
{
    using Base = typename
        FrameLayers<TOpt>::template Stack<TMessage, TAllMessages>;
public:
    /// @brief Allow access to frame definition layers.
    /// @details See definition of @b COMMS_PROTOCOL_LAYERS_ACCESS macro
    ///     from COMMS library for details.
    ///
    ///     The generated functions are:
    ///     @li layer_data() for @ref FrameLayers::Data layer.
    ///     @li layer_id() for @ref FrameLayers::Id layer.
    COMMS_PROTOCOL_LAYERS_ACCESS(
        data,
        id
    );
};

} // namespace frame

} // namespace cc_x509
