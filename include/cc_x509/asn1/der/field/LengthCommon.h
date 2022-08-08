// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::asn1::der::field::Length field.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

namespace cc_x509
{

namespace asn1
{

namespace der
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::asn1::der::field::Length field.
struct LengthMembersCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_x509::asn1::der::field::LengthMembers::Short field.
    struct ShortMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_x509::asn1::der::field::LengthMembers::ShortMembers::LenValue field.
        struct LenValueCommon
        {
            /// @brief Re-definition of the value type used by
            ///     cc_x509::asn1::der::field::LengthMembers::ShortMembers::LenValue field.
            using ValueType = std::uint8_t;

            /// @brief Single special value name info entry.
            using SpecialNameInfo = std::pair<ValueType, const char*>;

            /// @brief Type returned from @ref specialNamesMap() member function.
            /// @details The @b first value of the pair is pointer to the map array,
            ///     The @b second value of the pair is the size of the array.
            using SpecialNamesMapInfo = std::pair<const SpecialNameInfo*, std::size_t>;

            /// @brief Name of the @ref cc_x509::asn1::der::field::LengthMembers::ShortMembers::LenValue field.
            static const char* name()
            {
                return "LenValue";
            }

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return true;
            }

            /// @brief Special value <b>"MaxValue"</b>.
            static constexpr ValueType valueMaxValue()
            {
                return static_cast<ValueType>(127);
            }

            /// @brief Retrieve map of special value names
            static SpecialNamesMapInfo specialNamesMap()
            {
                static const SpecialNameInfo Map[] = {
                    std::make_pair(valueMaxValue(), "MaxValue")
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;

                return std::make_pair(&Map[0], MapSize);
            }
        };

        /// @brief Common types and functions for
        ///     @ref cc_x509::asn1::der::field::LengthMembers::ShortMembers::Flag field.
        struct FlagCommon
        {
            /// @brief Name of the @ref cc_x509::asn1::der::field::LengthMembers::ShortMembers::Flag field.
            static const char* name()
            {
                return "Flag";
            }

            /// @brief Retrieve name of the bit of
            ///     @ref cc_x509::asn1::der::field::LengthMembers::ShortMembers::Flag field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "longForm"
                };

                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }

                return Map[idx];
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::LengthMembers::Short field.
    struct ShortCommon
    {
        /// @brief Name of the @ref cc_x509::asn1::der::field::LengthMembers::Short field.
        static const char* name()
        {
            return "Short";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_x509::asn1::der::field::LengthMembers::Long field.
    struct LongMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_x509::asn1::der::field::LengthMembers::LongMembers::LenValue field.
        struct LenValueCommon
        {
            /// @brief Re-definition of the value type used by
            ///     cc_x509::asn1::der::field::LengthMembers::LongMembers::LenValue field.
            using ValueType = std::uint64_t;

            /// @brief Name of the @ref cc_x509::asn1::der::field::LengthMembers::LongMembers::LenValue field.
            static const char* name()
            {
                return "LenValue";
            }

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return false;
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_x509::asn1::der::field::LengthMembers::Long field.
    struct LongCommon
    {
        /// @brief Name of the @ref cc_x509::asn1::der::field::LengthMembers::Long field.
        static const char* name()
        {
            return "Long";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::asn1::der::field::Length field.
struct LengthCommon
{
    /// @brief Name of the @ref cc_x509::asn1::der::field::Length field.
    static const char* name()
    {
        return "Length";
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
