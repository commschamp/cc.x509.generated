// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"Boolean"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/BooleanCommon.h"
#include "cc_x509/asn1/der/field/Length.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/options/DefaultOptions.h"
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
///     @ref Boolean field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct BooleanMembers
{
    /// @brief Definition of <b>"Tag"</b> field.
    class Tag : public
        comms::field::IntValue<
            cc_x509::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::DefaultNumValue<1>,
                comms::option::def::ValidNumValue<1>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_x509::asn1::der::field::BooleanMembersCommon::TagCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::BooleanMembersCommon::TagCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(1);
            return true;
        }
    };

    /// @brief Definition of <b>"Length"</b> field.
    using Length =
        cc_x509::asn1::der::field::Length<
            TOpt
        >;

    /// @brief Definition of <b>"Value"</b> field.
    class Value : public
        comms::field::IntValue<
            cc_x509::field::FieldBase<>,
            std::uint8_t
        >
    {
        using Base =
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single special value name info entry.
        using SpecialNameInfo = cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::SpecialNameInfo;

        /// @brief Type returned from @ref specialNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using SpecialNamesMapInfo = cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::SpecialNamesMapInfo;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::hasSpecials();
        }

        /// @brief Special value <b>"False"</b>.
        /// @see @ref cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::valueFalse().
        static constexpr ValueType valueFalse()
        {
            return cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::valueFalse();
        }

        /// @brief Check the value is equal to special @ref valueFalse().
        bool isFalse() const
        {
            return Base::getValue() == valueFalse();
        }

        /// @brief Assign special value @ref valueFalse() to the field.
        void setFalse()
        {
            Base::setValue(valueFalse());
        }

        /// @brief Special value <b>"True"</b>.
        /// @see @ref cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::valueTrue().
        static constexpr ValueType valueTrue()
        {
            return cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::valueTrue();
        }

        /// @brief Check the value is equal to special @ref valueTrue().
        bool isTrue() const
        {
            return Base::getValue() == valueTrue();
        }

        /// @brief Assign special value @ref valueTrue() to the field.
        void setTrue()
        {
            Base::setValue(valueTrue());
        }

        /// @brief Retrieve map of special value names
        static SpecialNamesMapInfo specialNamesMap()
        {
            return cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::specialNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::BooleanMembersCommon::ValueCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Tag,
           Length,
           Value
        >;
};

/// @brief Definition of <b>"Boolean"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class Boolean : public
    comms::field::Bundle<
        cc_x509::field::FieldBase<>,
        typename BooleanMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::RemLengthMemberField<1U>
    >
{
    using Base =
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename BooleanMembers<TOpt>::All,
            TExtraOpts...,
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
    ///         for cc_x509::asn1::der::field::BooleanMembers::Tag member field.
    ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
    ///         for cc_x509::asn1::der::field::BooleanMembers::Length member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for cc_x509::asn1::der::field::BooleanMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        tag,
        length,
        value
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::asn1::der::field::BooleanCommon::name();
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
