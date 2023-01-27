// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::asn1::field::Tag field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace cc_x509
{

namespace asn1
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_x509::asn1::field::Tag field.
struct TagCommon
{
    /// @brief Values enumerator for
    ///     @ref cc_x509::asn1::field::Tag field.
    enum class ValueType : std::uint8_t
    {
        Boolean = 0x01U, ///< value @b Boolean. 
        Integer = 0x02U, ///< value @b Integer. 
        BitString = 0x03U, ///< value @b BitString. 
        OctetString = 0x04U, ///< value @b OctetString. 
        Null = 0x05U, ///< value @b Null. 
        ObjectIdentifier = 0x06U, ///< value @b ObjectIdentifier. 
        Utf8String = 0x0CU, ///< value @b Utf8String. 
        PrintableString = 0x13U, ///< value @b PrintableString. 
        Ia5String = 0x16U, ///< value @b Ia5String. 
        UtcTime = 0x17U, ///< value @b UtcTime. 
        GeneralizedTime = 0x18U, ///< value @b GeneralizedTime. 
        Sequence = 0x30U, ///< value @b Sequence. 
        Set = 0x31U, ///< value @b Set. 
        App0 = 0x40U, ///< value @b App0. 
        App1 = 0x41U, ///< value @b App1. 
        App2 = 0x42U, ///< value @b App2. 
        App3 = 0x43U, ///< value @b App3. 
        App4 = 0x44U, ///< value @b App4. 
        App5 = 0x45U, ///< value @b App5. 
        App6 = 0x46U, ///< value @b App6. 
        App7 = 0x47U, ///< value @b App7. 
        App8 = 0x48U, ///< value @b App8. 
        App9 = 0x49U, ///< value @b App9. 
        App10 = 0x4AU, ///< value @b App10. 
        App11 = 0x4BU, ///< value @b App11. 
        App12 = 0x4CU, ///< value @b App12. 
        App13 = 0x4DU, ///< value @b App13. 
        App14 = 0x4EU, ///< value @b App14. 
        App15 = 0x4FU, ///< value @b App15. 
        Context0 = 0x80U, ///< value @b Context0. 
        Context1 = 0x81U, ///< value @b Context1. 
        Context2 = 0x82U, ///< value @b Context2. 
        Context3 = 0x83U, ///< value @b Context3. 
        Context4 = 0x84U, ///< value @b Context4. 
        Context5 = 0x85U, ///< value @b Context5. 
        Context6 = 0x86U, ///< value @b Context6. 
        Context7 = 0x87U, ///< value @b Context7. 
        Context8 = 0x88U, ///< value @b Context8. 
        Context9 = 0x89U, ///< value @b Context9. 
        Context10 = 0x8AU, ///< value @b Context10. 
        Context11 = 0x8BU, ///< value @b Context11. 
        Context12 = 0x8CU, ///< value @b Context12. 
        Context13 = 0x8DU, ///< value @b Context13. 
        Context14 = 0x8EU, ///< value @b Context14. 
        Context15 = 0x8FU, ///< value @b Context15. 
        ExplicitContext0 = 0xA0U, ///< value @b ExplicitContext0. 
        ExplicitContext1 = 0xA1U, ///< value @b ExplicitContext1. 
        ExplicitContext2 = 0xA2U, ///< value @b ExplicitContext2. 
        ExplicitContext3 = 0xA3U, ///< value @b ExplicitContext3. 
        ExplicitContext4 = 0xA4U, ///< value @b ExplicitContext4. 
        ExplicitContext5 = 0xA5U, ///< value @b ExplicitContext5. 
        ExplicitContext6 = 0xA6U, ///< value @b ExplicitContext6. 
        ExplicitContext7 = 0xA7U, ///< value @b ExplicitContext7. 
        ExplicitContext8 = 0xA8U, ///< value @b ExplicitContext8. 
        ExplicitContext9 = 0xA9U, ///< value @b ExplicitContext9. 
        ExplicitContext10 = 0xAAU, ///< value @b ExplicitContext10. 
        ExplicitContext11 = 0xABU, ///< value @b ExplicitContext11. 
        ExplicitContext12 = 0xACU, ///< value @b ExplicitContext12. 
        ExplicitContext13 = 0xADU, ///< value @b ExplicitContext13. 
        ExplicitContext14 = 0xAEU, ///< value @b ExplicitContext14. 
        ExplicitContext15 = 0xAFU, ///< value @b ExplicitContext15. 

        // --- Extra values generated for convenience ---
        FirstValue = 0x01U, ///< First defined value.
        LastValue = 0xAFU, ///< Last defined value.
        ValuesLimit = 0xB0U, ///< Upper limit for defined values.
    };

    /// @brief Single value name info entry
    using ValueNameInfo = std::pair<ValueType, const char*>;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

    /// @brief Name of the @ref cc_x509::asn1::field::Tag field.
    static const char* name()
    {
        return "Tag";
    }

    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        auto namesMapInfo = valueNamesMap();
        auto begIter = namesMapInfo.first;
        auto endIter = begIter + namesMapInfo.second;
        auto iter = std::lower_bound(
            begIter, endIter, val,
            [](const ValueNameInfo& info, ValueType v) -> bool
            {
                return info.first < v;
            });

        if ((iter == endIter) || (iter->first != val)) {
            return nullptr;
        }

        return iter->second;
    }

    /// @brief Retrieve map of enum value names
    static ValueNamesMapInfo valueNamesMap()
    {
        static const ValueNameInfo Map[] = {
            std::make_pair(ValueType::Boolean, "Boolean"),
            std::make_pair(ValueType::Integer, "Integer"),
            std::make_pair(ValueType::BitString, "BitString"),
            std::make_pair(ValueType::OctetString, "OctetString"),
            std::make_pair(ValueType::Null, "Null"),
            std::make_pair(ValueType::ObjectIdentifier, "ObjectIdentifier"),
            std::make_pair(ValueType::Utf8String, "Utf8String"),
            std::make_pair(ValueType::PrintableString, "PrintableString"),
            std::make_pair(ValueType::Ia5String, "Ia5String"),
            std::make_pair(ValueType::UtcTime, "UtcTime"),
            std::make_pair(ValueType::GeneralizedTime, "GeneralizedTime"),
            std::make_pair(ValueType::Sequence, "Sequence"),
            std::make_pair(ValueType::Set, "Set"),
            std::make_pair(ValueType::App0, "App0"),
            std::make_pair(ValueType::App1, "App1"),
            std::make_pair(ValueType::App2, "App2"),
            std::make_pair(ValueType::App3, "App3"),
            std::make_pair(ValueType::App4, "App4"),
            std::make_pair(ValueType::App5, "App5"),
            std::make_pair(ValueType::App6, "App6"),
            std::make_pair(ValueType::App7, "App7"),
            std::make_pair(ValueType::App8, "App8"),
            std::make_pair(ValueType::App9, "App9"),
            std::make_pair(ValueType::App10, "App10"),
            std::make_pair(ValueType::App11, "App11"),
            std::make_pair(ValueType::App12, "App12"),
            std::make_pair(ValueType::App13, "App13"),
            std::make_pair(ValueType::App14, "App14"),
            std::make_pair(ValueType::App15, "App15"),
            std::make_pair(ValueType::Context0, "Context0"),
            std::make_pair(ValueType::Context1, "Context1"),
            std::make_pair(ValueType::Context2, "Context2"),
            std::make_pair(ValueType::Context3, "Context3"),
            std::make_pair(ValueType::Context4, "Context4"),
            std::make_pair(ValueType::Context5, "Context5"),
            std::make_pair(ValueType::Context6, "Context6"),
            std::make_pair(ValueType::Context7, "Context7"),
            std::make_pair(ValueType::Context8, "Context8"),
            std::make_pair(ValueType::Context9, "Context9"),
            std::make_pair(ValueType::Context10, "Context10"),
            std::make_pair(ValueType::Context11, "Context11"),
            std::make_pair(ValueType::Context12, "Context12"),
            std::make_pair(ValueType::Context13, "Context13"),
            std::make_pair(ValueType::Context14, "Context14"),
            std::make_pair(ValueType::Context15, "Context15"),
            std::make_pair(ValueType::ExplicitContext0, "ExplicitContext0"),
            std::make_pair(ValueType::ExplicitContext1, "ExplicitContext1"),
            std::make_pair(ValueType::ExplicitContext2, "ExplicitContext2"),
            std::make_pair(ValueType::ExplicitContext3, "ExplicitContext3"),
            std::make_pair(ValueType::ExplicitContext4, "ExplicitContext4"),
            std::make_pair(ValueType::ExplicitContext5, "ExplicitContext5"),
            std::make_pair(ValueType::ExplicitContext6, "ExplicitContext6"),
            std::make_pair(ValueType::ExplicitContext7, "ExplicitContext7"),
            std::make_pair(ValueType::ExplicitContext8, "ExplicitContext8"),
            std::make_pair(ValueType::ExplicitContext9, "ExplicitContext9"),
            std::make_pair(ValueType::ExplicitContext10, "ExplicitContext10"),
            std::make_pair(ValueType::ExplicitContext11, "ExplicitContext11"),
            std::make_pair(ValueType::ExplicitContext12, "ExplicitContext12"),
            std::make_pair(ValueType::ExplicitContext13, "ExplicitContext13"),
            std::make_pair(ValueType::ExplicitContext14, "ExplicitContext14"),
            std::make_pair(ValueType::ExplicitContext15, "ExplicitContext15")
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }
};

/// @brief Values enumerator for
///     @ref cc_x509::asn1::field::Tag field.
using TagVal = TagCommon::ValueType;

} // namespace field

} // namespace asn1

} // namespace cc_x509
