// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::asn1::field::ObjectIdentifierVal field.

#pragma once

#include <cstdint>

namespace cc_x509
{

namespace asn1
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::asn1::field::ObjectIdentifierVal field.
struct ObjectIdentifierValMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::field::ObjectIdentifierValMembers::Element field.
    struct ElementCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::asn1::field::ObjectIdentifierValMembers::Element field.
        using ValueType = std::uint64_t;

        /// @brief Name of the @ref cc_x509::asn1::field::ObjectIdentifierValMembers::Element field.
        static const char* name()
        {
            return "Element";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::asn1::field::ObjectIdentifierVal field.
struct ObjectIdentifierValCommon
{
    /// @brief Name of the @ref cc_x509::asn1::field::ObjectIdentifierVal field.
    static const char* name()
    {
        return "ObjectIdentifierVal";
    }
};

} // namespace field

} // namespace asn1

} // namespace cc_x509
