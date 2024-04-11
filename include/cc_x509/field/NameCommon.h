// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::Name field.

#pragma once

#include "cc_x509/field/RDNSequenceCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::Name field.
struct NameMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref cc_x509::field::NameMembers::RdnSequence field.
    using RdnSequenceMembersCommon = cc_x509::field::RDNSequenceMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::NameMembers::RdnSequence field.
    struct RdnSequenceCommon : public cc_x509::field::RDNSequenceCommon
    {
        /// @brief Name of the @ref cc_x509::field::NameMembers::RdnSequence field.
        static const char* name()
        {
            return "rdnSequence";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::Name field.
struct NameCommon
{
    /// @brief Name of the @ref cc_x509::field::Name field.
    static const char* name()
    {
        return "Name";
    }
};

} // namespace field

} // namespace cc_x509
