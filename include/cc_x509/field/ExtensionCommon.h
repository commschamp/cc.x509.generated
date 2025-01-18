// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::Extension field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/BooleanDefaultFalseCommon.h"
#include "cc_x509/asn1/der/field/LengthCommon.h"
#include "cc_x509/asn1/der/field/ObjectIdentifierCommon.h"
#include "cc_x509/asn1/der/field/OctetStringCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::Extension field.
struct ExtensionMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::field::ExtensionMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::field::ExtensionMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::field::ExtensionMembers::Tag field.
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
    ///     @ref cc_x509::field::ExtensionMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::ExtensionMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_x509::field::ExtensionMembers::Value field.
    struct ValueMembersCommon
    {
        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::ExtensionMembers::ValueMembers::ExtnID field.
        using ExtnIDMembersCommon = cc_x509::asn1::der::field::ObjectIdentifierMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::ExtensionMembers::ValueMembers::ExtnID field.
        struct ExtnIDCommon : public cc_x509::asn1::der::field::ObjectIdentifierCommon
        {
            /// @brief Name of the @ref cc_x509::field::ExtensionMembers::ValueMembers::ExtnID field.
            static const char* name()
            {
                return "extnID";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::ExtensionMembers::ValueMembers::Critical field.
        using CriticalMembersCommon = cc_x509::asn1::der::field::BooleanDefaultFalseMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::ExtensionMembers::ValueMembers::Critical field.
        struct CriticalCommon : public cc_x509::asn1::der::field::BooleanDefaultFalseCommon
        {
            /// @brief Name of the @ref cc_x509::field::ExtensionMembers::ValueMembers::Critical field.
            static const char* name()
            {
                return "critical";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::ExtensionMembers::ValueMembers::ExtnValue field.
        using ExtnValueMembersCommon = cc_x509::asn1::der::field::OctetStringMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::ExtensionMembers::ValueMembers::ExtnValue field.
        struct ExtnValueCommon : public cc_x509::asn1::der::field::OctetStringCommon
        {
            /// @brief Name of the @ref cc_x509::field::ExtensionMembers::ValueMembers::ExtnValue field.
            static const char* name()
            {
                return "extnValue";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::ExtensionMembers::Value field.
    struct ValueCommon
    {
        /// @brief Name of the @ref cc_x509::field::ExtensionMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::Extension field.
struct ExtensionCommon
{
    /// @brief Name of the @ref cc_x509::field::Extension field.
    static const char* name()
    {
        return "Extension";
    }
};

} // namespace field

} // namespace cc_x509
