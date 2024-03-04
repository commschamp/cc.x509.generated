// Generated by commsdsl2comms v6.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::RelativeDistinguishedName field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/LengthCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::RelativeDistinguishedName field.
struct RelativeDistinguishedNameMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::field::RelativeDistinguishedNameMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::field::RelativeDistinguishedNameMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::field::RelativeDistinguishedNameMembers::Tag field.
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
    ///     @ref cc_x509::field::RelativeDistinguishedNameMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::RelativeDistinguishedNameMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::RelativeDistinguishedNameMembers::Value field.
    struct ValueCommon
    {
        /// @brief Name of the @ref cc_x509::field::RelativeDistinguishedNameMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::RelativeDistinguishedName field.
struct RelativeDistinguishedNameCommon
{
    /// @brief Name of the @ref cc_x509::field::RelativeDistinguishedName field.
    static const char* name()
    {
        return "RelativeDistinguishedName";
    }
};

} // namespace field

} // namespace cc_x509
