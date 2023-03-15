// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::asn1::der::field::BooleanDefaultFalse field.

#pragma once

#include "cc_x509/asn1/der/field/BooleanCommon.h"

namespace cc_x509
{

namespace asn1
{

namespace der
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::asn1::der::field::BooleanDefaultFalse field.
struct BooleanDefaultFalseMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref cc_x509::asn1::der::field::BooleanDefaultFalseMembers::Boolean field.
    using BooleanMembersCommon = cc_x509::asn1::der::field::BooleanMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::BooleanDefaultFalseMembers::Boolean field.
    using BooleanCommon = cc_x509::asn1::der::field::BooleanCommon;
};

/// @brief Common types and functions for
///     @ref cc_x509::asn1::der::field::BooleanDefaultFalse field.
struct BooleanDefaultFalseCommon
{
    /// @brief Name of the @ref cc_x509::asn1::der::field::BooleanDefaultFalse field.
    static const char* name()
    {
        return "BooleanDefaultFalse";
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
