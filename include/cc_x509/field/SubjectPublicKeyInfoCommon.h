// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::SubjectPublicKeyInfo field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/LengthCommon.h"
#include "cc_x509/asn1/der/field/RawBitStringCommon.h"
#include "cc_x509/field/AlgorithmIdentifierCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::SubjectPublicKeyInfo field.
struct SubjectPublicKeyInfoMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::field::SubjectPublicKeyInfoMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::field::SubjectPublicKeyInfoMembers::Tag field.
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
    ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::Value field.
    struct ValueMembersCommon
    {
        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::ValueMembers::Algorithm field.
        using AlgorithmMembersCommon = cc_x509::field::AlgorithmIdentifierMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::ValueMembers::Algorithm field.
        struct AlgorithmCommon : public cc_x509::field::AlgorithmIdentifierCommon
        {
            /// @brief Name of the @ref cc_x509::field::SubjectPublicKeyInfoMembers::ValueMembers::Algorithm field.
            static const char* name()
            {
                return "algorithm";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::ValueMembers::SubjectPublicKey field.
        using SubjectPublicKeyMembersCommon = cc_x509::asn1::der::field::RawBitStringMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::ValueMembers::SubjectPublicKey field.
        struct SubjectPublicKeyCommon : public cc_x509::asn1::der::field::RawBitStringCommon
        {
            /// @brief Name of the @ref cc_x509::field::SubjectPublicKeyInfoMembers::ValueMembers::SubjectPublicKey field.
            static const char* name()
            {
                return "subjectPublicKey";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::SubjectPublicKeyInfoMembers::Value field.
    struct ValueCommon
    {
        /// @brief Name of the @ref cc_x509::field::SubjectPublicKeyInfoMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::SubjectPublicKeyInfo field.
struct SubjectPublicKeyInfoCommon
{
    /// @brief Name of the @ref cc_x509::field::SubjectPublicKeyInfo field.
    static const char* name()
    {
        return "SubjectPublicKeyInfo";
    }
};

} // namespace field

} // namespace cc_x509
