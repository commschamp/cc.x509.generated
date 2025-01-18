// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of protocol server input messages dynamic memory allocation message factory options.

#pragma once

#include "cc_x509/factory/ServerInputMessagesDynMemMsgFactory.h"
#include "cc_x509/options/DefaultOptions.h"

namespace cc_x509
{

namespace options
{

/// @brief Provided server input messages dynamic memory allocation message factory options of the protocol.
/// @details Must be used as the outermost wrapper of the protocol options.
template <typename TBase = cc_x509::options::DefaultOptions>
struct ServerInputMessagesDynMemMsgFactoryDefaultOptionsT : public TBase
{
    /// @brief Alias to @ref cc_x509::factory::ServerInputMessagesDynMemMsgFactory message factory.
    /// @details Exposes the same template parameters as @b comms::MsgFactory.
    template <typename TInterface, typename TAllMessages, typename... TOptions>
    using MsgFactory = cc_x509::factory::ServerInputMessagesDynMemMsgFactory<TInterface, ServerInputMessagesDynMemMsgFactoryDefaultOptionsT<TBase> >;

    struct cc_x509 : public TBase::cc_x509
    {
        /// @brief Extra options for frames.
        struct frame : public TBase::cc_x509::frame
        {
            /// @brief Extra options for layers of
            ///     @ref cc_x509::frame::Frame frame.
            struct FrameLayers : public TBase::cc_x509::frame::FrameLayers
            {
                /// @brief Extra options for @ref
                ///     cc_x509::frame::FrameLayers::Id layer.
                using Id =
                    std::tuple<
                        comms::option::app::MsgFactoryTempl<MsgFactory>,
                        typename TBase::cc_x509::frame::FrameLayers::Id
                    >;
            }; // struct FrameLayers
        }; // struct frame
    }; // struct cc_x509
};

/// @brief Alias to @ref ServerInputMessagesDynMemMsgFactoryDefaultOptionsT with default template parameter.
using ServerInputMessagesDynMemMsgFactoryDefaultOptions = ServerInputMessagesDynMemMsgFactoryDefaultOptionsT<>;

} // namespace options

} // namespace cc_x509
