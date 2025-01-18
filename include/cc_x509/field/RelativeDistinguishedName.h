// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"RelativeDistinguishedName"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/Length.h"
#include "cc_x509/field/AttributeTypeAndValue.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/field/RelativeDistinguishedNameCommon.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref RelativeDistinguishedName field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct RelativeDistinguishedNameMembers
{
    /// @brief Definition of <b>"Tag"</b> field.
    class Tag : public
        comms::field::IntValue<
            cc_x509::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::FixedValue,
            comms::option::def::DefaultNumValue<49>,
            comms::option::def::ValidNumValue<49>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::FixedValue,
                comms::option::def::DefaultNumValue<49>,
                comms::option::def::ValidNumValue<49>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_x509::field::RelativeDistinguishedNameMembersCommon::TagCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::RelativeDistinguishedNameMembersCommon::TagCommon::name();
        }
    };

    /// @brief Definition of <b>"Length"</b> field.
    using Length =
        cc_x509::asn1::der::field::Length<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"Value"</b> field.
    class Value : public
        comms::field::ArrayList<
            cc_x509::field::FieldBase<>,
            cc_x509::field::AttributeTypeAndValue<TOpt>,
            typename TOpt::cc_x509::field::RelativeDistinguishedNameMembers::Value,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_x509::field::FieldBase<>,
                cc_x509::field::AttributeTypeAndValue<TOpt>,
                typename TOpt::cc_x509::field::RelativeDistinguishedNameMembers::Value,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::RelativeDistinguishedNameMembersCommon::ValueCommon::name();
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

/// @brief Definition of <b>"RelativeDistinguishedName"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class RelativeDistinguishedName : public
    comms::field::Bundle<
        cc_x509::field::FieldBase<>,
        typename RelativeDistinguishedNameMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::RemLengthMemberField<1U>,
        comms::option::def::HasVersionDependentMembers<false>
    >
{
    using Base =
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename RelativeDistinguishedNameMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::RemLengthMemberField<1U>,
            comms::option::def::HasVersionDependentMembers<false>
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_tag index, @b Field_tag type and @b field_tag() access function -
    ///         for cc_x509::field::RelativeDistinguishedNameMembers::Tag member field.
    ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
    ///         for cc_x509::field::RelativeDistinguishedNameMembers::Length member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for cc_x509::field::RelativeDistinguishedNameMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        tag,
        length,
        value
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::field::RelativeDistinguishedNameCommon::name();
    }
};

} // namespace field

} // namespace cc_x509
