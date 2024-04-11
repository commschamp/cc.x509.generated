// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains definition of <b>"Length"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/LengthCommon.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
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
///     @ref Length field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct LengthMembers
{
    /// @brief Scope for all the member fields of
    ///     @ref Short field.
    struct ShortMembers
    {
        /// @brief Definition of <b>"LenValue"</b> field.
        class LenValue : public
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<7U>
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_x509::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::FixedBitLength<7U>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Single special value name info entry.
            using SpecialNameInfo = cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::LenValueCommon::SpecialNameInfo;

            /// @brief Type returned from @ref specialNamesMap() member function.
            /// @details The @b first value of the pair is pointer to the map array,
            ///     The @b second value of the pair is the size of the array.
            using SpecialNamesMapInfo = cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::LenValueCommon::SpecialNamesMapInfo;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::LenValueCommon::hasSpecials();
            }

            /// @brief Special value <b>"MaxValue"</b>.
            /// @see @ref cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::LenValueCommon::valueMaxValue().
            static constexpr ValueType valueMaxValue()
            {
                return cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::LenValueCommon::valueMaxValue();
            }

            /// @brief Check the value is equal to special @ref valueMaxValue().
            bool isMaxValue() const
            {
                return Base::getValue() == valueMaxValue();
            }

            /// @brief Assign special value @ref valueMaxValue() to the field.
            void setMaxValue()
            {
                Base::setValue(valueMaxValue());
            }

            /// @brief Retrieve map of special value names
            static SpecialNamesMapInfo specialNamesMap()
            {
                return cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::LenValueCommon::specialNamesMap();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::LenValueCommon::name();
            }
        };

        /// @brief Definition of <b>"Flag"</b> field.
        class Flag : public
            comms::field::BitmaskValue<
                cc_x509::field::FieldBase<>,
                comms::option::def::FixedBitLength<1U>
            >
        {
            using Base =
                comms::field::BitmaskValue<
                    cc_x509::field::FieldBase<>,
                    comms::option::def::FixedBitLength<1U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_longForm, @b getBitValue_longForm() and @b setBitValue_longForm().
            COMMS_BITMASK_BITS_SEQ(
                longForm
            );

            /// @brief Retrieve name of the bit.
            /// @see @ref cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::FlagCommon::bitName().
            static const char* bitName(BitIdx idx)
            {
                return
                    cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::FlagCommon::bitName(
                        static_cast<std::size_t>(idx));
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::asn1::der::field::LengthMembersCommon::ShortMembersCommon::FlagCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               LenValue,
               Flag
            >;
    };

    /// @brief Definition of <b>"Short"</b> field.
    class Short : public
        comms::field::Bitfield<
            cc_x509::field::FieldBase<>,
            typename ShortMembers::All,
            comms::option::def::HasVersionDependentMembers<false>
        >
    {
        using Base =
            comms::field::Bitfield<
                cc_x509::field::FieldBase<>,
                typename ShortMembers::All,
                comms::option::def::HasVersionDependentMembers<false>
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_lenValue index, @b Field_lenValue type and @b field_lenValue() access function -
        ///         for cc_x509::asn1::der::field::LengthMembers::ShortMembers::LenValue member field.
        ///     @li @b FieldIdx_flag index, @b Field_flag type and @b field_flag() access function -
        ///         for cc_x509::asn1::der::field::LengthMembers::ShortMembers::Flag member field.
        COMMS_FIELD_MEMBERS_NAMES(
            lenValue,
            flag
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::LengthMembersCommon::ShortCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref Long field.
    struct LongMembers
    {
        /// @brief Definition of <b>"LenValue"</b> field.
        class LenValue : public
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint64_t,
                comms::option::def::AvailableLengthLimit
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_x509::field::FieldBase<>,
                    std::uint64_t,
                    comms::option::def::AvailableLengthLimit
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_x509::asn1::der::field::LengthMembersCommon::LongMembersCommon::LenValueCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::asn1::der::field::LengthMembersCommon::LongMembersCommon::LenValueCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"Long"</b> field.
    class Long : public
        comms::field::Optional<
            typename LongMembers::LenValue,
            comms::option::def::MissingByDefault
        >
    {
        using Base =
            comms::field::Optional<
                typename LongMembers::LenValue,
                comms::option::def::MissingByDefault
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::LengthMembersCommon::LongCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Short,
           Long
        >;
};

/// @brief Definition of <b>"Length"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class Length : public
    comms::field::Bundle<
        cc_x509::field::FieldBase<>,
        typename LengthMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasCustomRead,
        comms::option::def::HasCustomRefresh,
        comms::option::def::HasVersionDependentMembers<false>
    >
{
    using Base =
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename LengthMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasCustomRead,
            comms::option::def::HasCustomRefresh,
            comms::option::def::HasVersionDependentMembers<false>
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_short index, @b Field_short type and @b field_short() access function -
    ///         for cc_x509::asn1::der::field::LengthMembers::Short member field.
    ///     @li @b FieldIdx_long index, @b Field_long type and @b field_long() access function -
    ///         for cc_x509::asn1::der::field::LengthMembers::Long member field.
    COMMS_FIELD_MEMBERS_NAMES(
        short,
        long
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::asn1::der::field::LengthCommon::name();
    }

    /// @brief Retrieving length value
    std::size_t getValue() const
    {
        if (field_short().field_flag().getBitValue_longForm()) {
            return static_cast<std::size_t>(field_long().field().value());
        }

        return static_cast<std::size_t>(field_short().field_lenValue().value());
    }

    /// @brief Setting length value
    void setValue(std::size_t val)
    {
        if (val <= Field_short::Field_lenValue::valueMaxValue()) {
            field_short().field_lenValue().setValue(val);
            field_short().field_flag().setBitValue_longForm(false);
            field_long().setMissing();
            return;
        }

        field_long().setExists();
        field_long().field().setValue(val);
        field_short().field_flag().setBitValue_longForm(true);
        field_short().field_lenValue().setValue(field_long().length());
    }

    /// @brief Get maximal possible length value
    static constexpr std::size_t maxValue() 
    {
        return std::numeric_limits<std::size_t>::max();
    }

    /// @brief Generated read functionality.
    template <typename TIter>
    comms::ErrorStatus readOrig(TIter& iter, std::size_t len)
    {
        auto es = comms::ErrorStatus::Success;
        do {
            es = Base::template readUntilAndUpdateLen<FieldIdx_long>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_long();

            es = Base::template readFrom<FieldIdx_long>(iter, len);
        } while(false);
        return es;
    }

    /// @brief Updated read functionality
    template <typename TIter>
    comms::ErrorStatus read(TIter& iter, std::size_t len)
    {
        auto es = Base::template readUntilAndUpdateLen<FieldIdx_long>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        readPrepare_long();

        auto remLen = len;
        if (field_long().doesExist()) {
            remLen = static_cast<std::size_t>(field_short().field_lenValue().value());
        }

        if (len < remLen) {
            return comms::ErrorStatus::NotEnoughData;
        }

        es = Base::template readFrom<FieldIdx_long>(iter, remLen);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        if (!valid()) {
            return comms::ErrorStatus::InvalidMsgData;
        }

        return comms::ErrorStatus::Success;
    }

    /// @brief Generated refresh functionality.
    bool refreshOrig()
    {
        bool updated = Base::refresh();
        updated = refresh_long() || updated;
        return updated;
    }

    /// @brief Updated refresh functionality
    bool refresh()
    {
        bool updated = refreshOrig();
        if (!field_long().doesExist()) {
            return updated;
        }

        auto longLen = field_long().length();
        if (field_short().field_lenValue().value() == longLen) {
            return updated;
        }

        field_short().field_lenValue().setValue(longLen);
        return true;
    }

    /// @brief Field validity check
    bool valid() const
    {
        if (!Base::valid()) {
            return false;
        }

        if (field_long().isMissing()) {
            return true;
        }

        return 
            (field_short().field_lenValue().value() > 0U) &&
            (field_short().field_lenValue().value() == field_long().field().length());
    }

private:
    void readPrepare_long()
    {
        refresh_long();
    }

    bool refresh_long()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_short().field_flag().getBitValue_longForm()) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (field_long().getMode() == mode) {
            return false;
        }

        field_long().setMode(mode);
        return true;
    }
};

/// @brief Order comparison of the @ref Length field
/// @details The short form must come before the long form in the sorting order.
template <typename TOpt, typename... TExtraOpts>
bool operator<(const Length<TOpt, TExtraOpts...>& first, const Length<TOpt, TExtraOpts...>& second)
{
    if (first.field_short().field_flag() == second.field_short().field_flag()) {
        return comms::field::toFieldBase(first) < comms::field::toFieldBase(second);
    }

    return (!first.field_short().field_flag().getBitValue_longForm());
}

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
