// Generated by commsdsl2comms v6.1.0

/// @file
/// @brief Contains definition of <b>"GeneralizedTime"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/GeneralizedTimeCommon.h"
#include "cc_x509/asn1/der/field/Length.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/String.h"
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
///     @ref GeneralizedTime field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct GeneralizedTimeMembers
{
    /// @brief Definition of <b>"Tag"</b> field.
    class Tag : public
        comms::field::IntValue<
            cc_x509::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<24>,
            comms::option::def::ValidNumValue<24>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::DefaultNumValue<24>,
                comms::option::def::ValidNumValue<24>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_x509::asn1::der::field::GeneralizedTimeMembersCommon::TagCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::GeneralizedTimeMembersCommon::TagCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(24);
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
        comms::field::String<
            cc_x509::field::FieldBase<>,
            typename TOpt::cc_x509::asn1::der::field::GeneralizedTimeMembers::Value
        >
    {
        using Base =
            comms::field::String<
                cc_x509::field::FieldBase<>,
                typename TOpt::cc_x509::asn1::der::field::GeneralizedTimeMembers::Value
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::der::field::GeneralizedTimeMembersCommon::ValueCommon::name();
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

/// @brief Definition of <b>"GeneralizedTime"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class GeneralizedTime : public
    comms::field::Bundle<
        cc_x509::field::FieldBase<>,
        typename GeneralizedTimeMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::RemLengthMemberField<1U>,
        comms::option::def::HasVersionDependentMembers<false>
    >
{
    using Base =
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename GeneralizedTimeMembers<TOpt>::All,
            TExtraOpts...,
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
    ///         for cc_x509::asn1::der::field::GeneralizedTimeMembers::Tag member field.
    ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
    ///         for cc_x509::asn1::der::field::GeneralizedTimeMembers::Length member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for cc_x509::asn1::der::field::GeneralizedTimeMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        tag,
        length,
        value
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::asn1::der::field::GeneralizedTimeCommon::name();
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
