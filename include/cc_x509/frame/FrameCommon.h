// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    fields used in definition of @ref cc_x509::frame::Frame frame.

#pragma once

#include <cstdint>

namespace cc_x509
{

namespace frame
{

/// @brief Common types and functions of fields using in definition of
///     @ref cc_x509::frame::Frame frame.
/// @see cc_x509::frame::FrameLayers
struct FrameLayersCommon
{
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref cc_x509::frame::FrameLayers::IdMembers struct.
    struct IdMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_x509::frame::FrameLayers::IdMembers::IdField field.
        struct IdFieldCommon
        {
            /// @brief Re-definition of the value type used by
            ///     cc_x509::frame::FrameLayers::IdMembers::IdField field.
            using ValueType = std::uint8_t;

            /// @brief Name of the @ref cc_x509::frame::FrameLayers::IdMembers::IdField field.
            static const char* name()
            {
                return "IdField";
            }

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return false;
            }
        };
    };
};

} // namespace frame

} // namespace cc_x509
