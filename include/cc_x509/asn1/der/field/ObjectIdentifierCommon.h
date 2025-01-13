// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::asn1::der::field::ObjectIdentifier field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/LengthCommon.h"
#include "cc_x509/asn1/field/ObjectIdentifierValCommon.h"

namespace cc_x509
{

namespace asn1
{

namespace der
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::asn1::der::field::ObjectIdentifier field.
struct ObjectIdentifierMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::ObjectIdentifierMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::asn1::der::field::ObjectIdentifierMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::asn1::der::field::ObjectIdentifierMembers::Tag field.
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
    ///     @ref cc_x509::asn1::der::field::ObjectIdentifierMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::ObjectIdentifierMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref cc_x509::asn1::der::field::ObjectIdentifierMembers::Value field.
    using ValueMembersCommon = cc_x509::asn1::field::ObjectIdentifierValMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::ObjectIdentifierMembers::Value field.
    struct ValueCommon : public cc_x509::asn1::field::ObjectIdentifierValCommon
    {
        /// @brief Name of the @ref cc_x509::asn1::der::field::ObjectIdentifierMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::asn1::der::field::ObjectIdentifier field.
struct ObjectIdentifierCommon
{
    /// @brief Name of the @ref cc_x509::asn1::der::field::ObjectIdentifier field.
    static const char* name()
    {
        return "ObjectIdentifier";
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
