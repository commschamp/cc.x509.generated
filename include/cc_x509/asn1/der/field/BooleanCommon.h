// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::asn1::der::field::Boolean field.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>
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
///     @ref cc_x509::asn1::der::field::Boolean field.
struct BooleanMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::BooleanMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::asn1::der::field::BooleanMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::asn1::der::field::BooleanMembers::Tag field.
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
    ///     @ref cc_x509::asn1::der::field::BooleanMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::BooleanMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::BooleanMembers::Value field.
    struct ValueCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::asn1::der::field::BooleanMembers::Value field.
        using ValueType = std::uint8_t;

        /// @brief Single special value name info entry.
        using SpecialNameInfo = std::pair<ValueType, const char*>;

        /// @brief Type returned from @ref specialNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using SpecialNamesMapInfo = std::pair<const SpecialNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_x509::asn1::der::field::BooleanMembers::Value field.
        static const char* name()
        {
            return "Value";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return true;
        }

        /// @brief Special value <b>"False"</b>.
        static constexpr ValueType valueFalse()
        {
            return static_cast<ValueType>(0);
        }

        /// @brief Special value <b>"True"</b>.
        static constexpr ValueType valueTrue()
        {
            return static_cast<ValueType>(255);
        }

        /// @brief Retrieve map of special value names
        static SpecialNamesMapInfo specialNamesMap()
        {
            static const SpecialNameInfo Map[] = {
                std::make_pair(valueFalse(), "False"),
                std::make_pair(valueTrue(), "True")
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::asn1::der::field::Boolean field.
struct BooleanCommon
{
    /// @brief Name of the @ref cc_x509::asn1::der::field::Boolean field.
    static const char* name()
    {
        return "Boolean";
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
