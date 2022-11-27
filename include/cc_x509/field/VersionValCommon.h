// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::VersionVal field.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

namespace cc_x509
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_x509::field::VersionVal field.
struct VersionValCommon
{
    /// @brief Values enumerator for
    ///     @ref cc_x509::field::VersionVal field.
    enum class ValueType : std::uint64_t
    {
        v1 = 0U, ///< value @b v1. 
        v2 = 1U, ///< value @b v2. 
        v3 = 2U, ///< value @b v3. 

        // --- Extra values generated for convenience ---
        firstValue = 0U, ///< First defined value.
        lastValue = 2U, ///< Last defined value.
        valuesLimit = 3U, ///< Upper limit for defined values.
    };

    /// @brief Single value name info entry
    using ValueNameInfo = const char*;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

    /// @brief Name of the @ref cc_x509::field::VersionVal field.
    static const char* name()
    {
        return "VersionVal";
    }

    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        auto namesMapInfo = valueNamesMap();
        if (namesMapInfo.second <= static_cast<std::size_t>(val)) {
            return nullptr;
        }

        return namesMapInfo.first[static_cast<std::size_t>(val)];
    }

    /// @brief Retrieve map of enum value names
    static ValueNamesMapInfo valueNamesMap()
    {
        static const char* Map[] = {
            "v1",
            "v2",
            "v3"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }
};

/// @brief Values enumerator for
///     @ref cc_x509::field::VersionVal field.
using VersionValVal = VersionValCommon::ValueType;

} // namespace field

} // namespace cc_x509
