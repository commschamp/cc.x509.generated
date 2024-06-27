// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::asn1::der::field::GeneralizedTime field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/LengthCommon.h"

namespace cc_x509
{

namespace asn1
{

namespace der
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::asn1::der::field::GeneralizedTime field.
struct GeneralizedTimeMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::GeneralizedTimeMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::asn1::der::field::GeneralizedTimeMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::asn1::der::field::GeneralizedTimeMembers::Tag field.
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
    ///     @ref cc_x509::asn1::der::field::GeneralizedTimeMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::GeneralizedTimeMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::GeneralizedTimeMembers::Value field.
    struct ValueCommon
    {
        /// @brief Name of the @ref cc_x509::asn1::der::field::GeneralizedTimeMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::asn1::der::field::GeneralizedTime field.
struct GeneralizedTimeCommon
{
    /// @brief Name of the @ref cc_x509::asn1::der::field::GeneralizedTime field.
    static const char* name()
    {
        return "GeneralizedTime";
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
