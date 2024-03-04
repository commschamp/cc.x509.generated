// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains definition of protocol all messages dynamic memory allocation message factory options.

#pragma once

#include "cc_x509/factory/AllMessagesDynMemMsgFactory.h"
#include "cc_x509/options/DefaultOptions.h"

namespace cc_x509
{

namespace options
{

/// @brief Provided all messages dynamic memory allocation message factory options of the protocol.
/// @details Must be used as the outermost wrapper of the protocol options.
template <typename TBase = cc_x509::options::DefaultOptions>
struct AllMessagesDynMemMsgFactoryDefaultOptionsT : public TBase
{
    /// @brief Alias to @ref cc_x509::factory::AllMessagesDynMemMsgFactory message factory.
    /// @details Exposes the same template parameters as @b comms::MsgFactory.
    template <typename TInterface, typename TAllMessages, typename... TOptions>
    using MsgFactory = cc_x509::factory::AllMessagesDynMemMsgFactory<TInterface, AllMessagesDynMemMsgFactoryDefaultOptionsT<TBase> >;

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

/// @brief Alias to @ref AllMessagesDynMemMsgFactoryDefaultOptionsT with default template parameter.
using AllMessagesDynMemMsgFactoryDefaultOptions = AllMessagesDynMemMsgFactoryDefaultOptionsT<>;

} // namespace options

} // namespace cc_x509
