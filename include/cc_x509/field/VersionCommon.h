// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::Version field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/LengthCommon.h"
#include "cc_x509/field/VersionValCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::Version field.
struct VersionMembersCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_x509::field::VersionMembers::ActVersion field.
    struct ActVersionMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::Tag field.
        struct TagCommon
        {
            /// @brief Re-definition of the value type used by
            ///     cc_x509::field::VersionMembers::ActVersionMembers::Tag field.
            using ValueType = std::uint8_t;

            /// @brief Name of the @ref cc_x509::field::VersionMembers::ActVersionMembers::Tag field.
            static const char* name()
            {
                return "Tag";
            }

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return false;
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::Length field.
        using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::Length field.
        using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::Value field.
        struct ValueMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Tag field.
            struct TagCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Tag field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Tag field.
                static const char* name()
                {
                    return "Tag";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common definitions of the member fields of
            ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Length field.
            using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

            /// @brief Common types and functions for
            ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Length field.
            using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

            /// @brief Common types and functions for
            ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Value field.
            struct ValueCommon : public cc_x509::field::VersionValCommon
            {
                /// @brief Name of the @ref cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Value field.
                static const char* name()
                {
                    return "Value";
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::VersionMembers::ActVersionMembers::Value field.
        struct ValueCommon
        {
            /// @brief Name of the @ref cc_x509::field::VersionMembers::ActVersionMembers::Value field.
            static const char* name()
            {
                return "Value";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::VersionMembers::ActVersion field.
    struct ActVersionCommon
    {
        /// @brief Name of the @ref cc_x509::field::VersionMembers::ActVersion field.
        static const char* name()
        {
            return "ActVersion";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::Version field.
struct VersionCommon
{
    /// @brief Name of the @ref cc_x509::field::Version field.
    static const char* name()
    {
        return "Version";
    }
};

} // namespace field

} // namespace cc_x509
