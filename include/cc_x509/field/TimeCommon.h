// Generated by commsdsl2comms v7.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::Time field.

#pragma once

#include <type_traits>
#include <utility>
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
    /// @brief Single member name info entry
    using MemberNameInfo = const char*;

    /// @brief Type returned from @ref memberNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using MemberNamesMapInfo = std::pair<const MemberNameInfo*, std::size_t>;

    /// @brief Name of the @ref cc_x509::field::Time field.
    static const char* name()
    {
        return "Time";
    }

    /// @brief Retrieve name of the member
    static const char* memberName(std::size_t idx)
    {
        auto namesMapInfo = memberNamesMap();
        if (namesMapInfo.second <= idx) {
            return nullptr;
        }

        return namesMapInfo.first[idx];
    }

    /// @brief Retrieve map of members names
    static MemberNamesMapInfo memberNamesMap()
    {
        static const MemberNameInfo Map[] = {
            TimeMembersCommon::UtcTimeCommon::name(),
            TimeMembersCommon::GeneralTimeCommon::name()
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }
};

} // namespace field

} // namespace cc_x509
