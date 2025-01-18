// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::AttributeTypeAndValue field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/LengthCommon.h"
#include "cc_x509/asn1/der/field/ObjectIdentifierCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::AttributeTypeAndValue field.
struct AttributeTypeAndValueMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::field::AttributeTypeAndValueMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::field::AttributeTypeAndValueMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::field::AttributeTypeAndValueMembers::Tag field.
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
    ///     @ref cc_x509::field::AttributeTypeAndValueMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::AttributeTypeAndValueMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_x509::field::AttributeTypeAndValueMembers::Value field.
    struct ValueMembersCommon
    {
        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Type field.
        using TypeMembersCommon = cc_x509::asn1::der::field::ObjectIdentifierMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Type field.
        struct TypeCommon : public cc_x509::asn1::der::field::ObjectIdentifierCommon
        {
            /// @brief Name of the @ref cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Type field.
            static const char* name()
            {
                return "type";
            }
        };

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Value field.
        struct ValueCommon
        {
            /// @brief Name of the @ref cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Value field.
            static const char* name()
            {
                return "value";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::AttributeTypeAndValueMembers::Value field.
    struct ValueCommon
    {
        /// @brief Name of the @ref cc_x509::field::AttributeTypeAndValueMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::AttributeTypeAndValue field.
struct AttributeTypeAndValueCommon
{
    /// @brief Name of the @ref cc_x509::field::AttributeTypeAndValue field.
    static const char* name()
    {
        return "AttributeTypeAndValue";
    }
};

} // namespace field

} // namespace cc_x509
