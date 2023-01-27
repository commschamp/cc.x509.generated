// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"RawBitString"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/Length.h"
#include "cc_x509/asn1/der/field/RawBitStringCommon.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_x509
{

namespace asn1
{

namespace der
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref RawBitString field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct RawBitStringMembers
{
    /// @brief Definition of <b>"Tag"</b> field.
    class Tag : public
        comms::field::IntValue<
            cc_x509::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<3>,
            comms::option::def::ValidNumValue<3>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::DefaultNumValue<3>,
                comms::option::def::ValidNumValue<3>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_x509::asn1::der::field::RawBitStringMembersCommon::TagCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::RawBitStringMembersCommon::TagCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(3);
            return true;
        }
    };

    /// @brief Definition of <b>"Length"</b> field.
    using Length =
        cc_x509::asn1::der::field::Length<
            TOpt
        >;

    /// @brief Definition of <b>"Shift"</b> field.
    class Shift : public
        comms::field::IntValue<
            cc_x509::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValueRange<0, 7>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::ValidNumValueRange<0, 7>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_x509::asn1::der::field::RawBitStringMembersCommon::ShiftCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::RawBitStringMembersCommon::ShiftCommon::name();
        }
    };

    /// @brief Definition of <b>"Value"</b> field.
    class Value : public
        comms::field::ArrayList<
            cc_x509::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::cc_x509::asn1::der::field::RawBitStringMembers::Value
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                typename TOpt::cc_x509::asn1::der::field::RawBitStringMembers::Value
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::RawBitStringMembersCommon::ValueCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Tag,
           Length,
           Shift,
           Value
        >;
};

/// @brief Definition of <b>"RawBitString"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class RawBitString : public
    comms::field::Bundle<
        cc_x509::field::FieldBase<>,
        typename RawBitStringMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasCustomRead,
        comms::option::def::HasCustomRefresh,
        comms::option::def::HasCustomWrite,
        comms::option::def::RemLengthMemberField<1U>
    >
{
    using Base =
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename RawBitStringMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasCustomRead,
            comms::option::def::HasCustomRefresh,
            comms::option::def::HasCustomWrite,
            comms::option::def::RemLengthMemberField<1U>
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_tag index, @b Field_tag type and @b field_tag() access function -
    ///         for cc_x509::asn1::der::field::RawBitStringMembers::Tag member field.
    ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
    ///         for cc_x509::asn1::der::field::RawBitStringMembers::Length member field.
    ///     @li @b FieldIdx_shift index, @b Field_shift type and @b field_shift() access function -
    ///         for cc_x509::asn1::der::field::RawBitStringMembers::Shift member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for cc_x509::asn1::der::field::RawBitStringMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        tag,
        length,
        shift,
        value
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::asn1::der::field::RawBitStringCommon::name();
    }

    /// @brief Updated read functionality
    template <typename TIter>
    comms::ErrorStatus read(TIter& iter, std::size_t len)
    {
        auto es = Base::read(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        auto& bytesList = field_value().value();
        auto shift = field_shift().getValue();
        if ((shift == 0U) || (bytesList.empty())) {
            return es;
        }

        if (7U < shift) {
            return comms::ErrorStatus::InvalidMsgData;
        }

        auto mask = static_cast<std::uint8_t>((1U << shift) - 1U);
        std::uint8_t nextOr = 0U;
        for (auto& byte : bytesList) {
            auto updatedByte = static_cast<std::uint8_t>((byte >> shift) | nextOr);
            nextOr = static_cast<decltype(nextOr)>((byte & mask) << shift);
            byte = updatedByte;
        }

        return es;
    }

    /// @brief Updated write functionality
    /// @details Performs shift of written bits of the "value" field based on the value in the "shift" field.
    template <typename TIter>
    comms::ErrorStatus write(TIter& iter, std::size_t len) const
    {
        auto shift = field_shift().getValue();
        if ((shift == 0U) || (field_value().value().empty())) {
            return Base::write(iter, len);
        }

        auto es = Base::template writeUntil<FieldIdx_value>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        auto remLen = len - Base::template lengthUntil<FieldIdx_value>();
        if (remLen < field_value().length()) {
            return comms::ErrorStatus::BufferOverflow;
        }

        auto writeByte = 
            [&iter](std::uint8_t byte)
            {
                *iter = byte;
                ++iter;
            };

        auto& valueBytes = field_value().value();
        if (valueBytes.size() == 1U) {
            auto byte = static_cast<std::uint8_t>(valueBytes.back() << shift);
            writeByte(byte);
            return comms::ErrorStatus::Success;
        }

        for (auto idx = 0U; idx < (field_value().value().size() - 1U); ++idx) {
            std::uint8_t firstByte = valueBytes[idx];
            std::uint8_t nextByte = valueBytes[idx + 1];

            auto byte = static_cast<std::uint8_t>((firstByte << shift) | (nextByte >> (8U - shift)));
            writeByte(byte);
        }

        auto lastByte = static_cast<std::uint8_t>(valueBytes.back() << shift);
        writeByte(lastByte);
        return comms::ErrorStatus::Success;    
    }

    /// @brief Updated refresh functionality
    /// @details Reduces value in "shift" field based on number of available most significant 0 bits.
    bool refresh()
    {
        bool updated = Base::refresh();
        auto shift = field_shift().getValue();
        if (shift == 0U) {
            return updated;
        }

        if (field_value().value().empty()) {
            field_shift().setValue(0U);
            return true;
        }

        static const decltype(shift) MaxShift = 7U;

        shift = std::min(shift, MaxShift);

        auto val = field_value().value()[0];
        if (val == 0U) {
            field_shift().setValue(0U);
            return true;
        }

        decltype(shift) count = 0U;
        while (count < MaxShift) {
            if ((val & 0x80U) != 0U) {
                break;
            }

            val = static_cast<decltype(val)>(val << 1U);
            ++count;
        }

        shift = std::min(shift, count);
        if (shift == field_shift().getValue()) {
            return updated;
        }

        field_shift().setValue(shift);
        return true;
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
