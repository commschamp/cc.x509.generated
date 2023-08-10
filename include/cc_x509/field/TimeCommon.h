// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::Time field.

#pragma once

#include "cc_x509/asn1/der/field/GeneralizedTimeCommon.h"
#include "cc_x509/asn1/der/field/UtcTimeCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::Time field.
struct TimeMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref cc_x509::field::TimeMembers::UtcTime field.
    using UtcTimeMembersCommon = cc_x509::asn1::der::field::UtcTimeMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::TimeMembers::UtcTime field.
    struct UtcTimeCommon : public cc_x509::asn1::der::field::UtcTimeCommon
    {
        /// @brief Name of the @ref cc_x509::field::TimeMembers::UtcTime field.
        static const char* name()
        {
            return "utcTime";
        }
    };

    /// @brief Common definitions of the member fields of
    ///     @ref cc_x509::field::TimeMembers::GeneralTime field.
    using GeneralTimeMembersCommon = cc_x509::asn1::der::field::GeneralizedTimeMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::TimeMembers::GeneralTime field.
    struct GeneralTimeCommon : public cc_x509::asn1::der::field::GeneralizedTimeCommon
    {
        /// @brief Name of the @ref cc_x509::field::TimeMembers::GeneralTime field.
        static const char* name()
        {
            return "generalTime";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::Time field.
struct TimeCommon
{
    /// @brief Name of the @ref cc_x509::field::Time field.
    static const char* name()
    {
        return "Time";
    }
};

} // namespace field

} // namespace cc_x509
