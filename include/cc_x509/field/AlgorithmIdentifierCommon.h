// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::AlgorithmIdentifier field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/LengthCommon.h"
#include "cc_x509/asn1/der/field/ObjectIdentifierCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::AlgorithmIdentifier field.
struct AlgorithmIdentifierMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::field::AlgorithmIdentifierMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::field::AlgorithmIdentifierMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::field::AlgorithmIdentifierMembers::Tag field.
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
    ///     @ref cc_x509::field::AlgorithmIdentifierMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::AlgorithmIdentifierMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_x509::field::AlgorithmIdentifierMembers::Value field.
    struct ValueMembersCommon
    {
        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Algorithm field.
        using AlgorithmMembersCommon = cc_x509::asn1::der::field::ObjectIdentifierMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Algorithm field.
        struct AlgorithmCommon : public cc_x509::asn1::der::field::ObjectIdentifierCommon
        {
            /// @brief Name of the @ref cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Algorithm field.
            static const char* name()
            {
                return "algorithm";
            }
        };

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Parameters field.
        struct ParametersCommon
        {
            /// @brief Name of the @ref cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Parameters field.
            static const char* name()
            {
                return "parameters";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::AlgorithmIdentifierMembers::Value field.
    struct ValueCommon
    {
        /// @brief Name of the @ref cc_x509::field::AlgorithmIdentifierMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::AlgorithmIdentifier field.
struct AlgorithmIdentifierCommon
{
    /// @brief Name of the @ref cc_x509::field::AlgorithmIdentifier field.
    static const char* name()
    {
        return "AlgorithmIdentifier";
    }
};

} // namespace field

} // namespace cc_x509
