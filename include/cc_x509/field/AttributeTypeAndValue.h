// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"AttributeTypeAndValue"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/Length.h"
#include "cc_x509/asn1/der/field/ObjectIdentifier.h"
#include "cc_x509/field/AttributeTypeAndValueCommon.h"
#include "cc_x509/field/FieldBase.h"
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
///     @ref AttributeTypeAndValue field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct AttributeTypeAndValueMembers
{
    /// @brief Definition of <b>"Tag"</b> field.
    class Tag : public
        comms::field::IntValue<
            cc_x509::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<48>,
            comms::option::def::ValidNumValue<48>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::DefaultNumValue<48>,
                comms::option::def::ValidNumValue<48>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_x509::field::AttributeTypeAndValueMembersCommon::TagCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::AttributeTypeAndValueMembersCommon::TagCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(48);
            return true;
        }
    };

    /// @brief Definition of <b>"Length"</b> field.
    using Length =
        cc_x509::asn1::der::field::Length<
            TOpt
        >;

    /// @brief Scope for all the member fields of
    ///     @ref Value field.
    struct ValueMembers
    {
        /// @brief Definition of <b>"type"</b> field.
        class Type : public
            cc_x509::asn1::der::field::ObjectIdentifier<
                TOpt
            >
        {
            using Base =
                cc_x509::asn1::der::field::ObjectIdentifier<
                    TOpt
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::field::AttributeTypeAndValueMembersCommon::ValueMembersCommon::TypeCommon::name();
            }
        };

        /// @brief Definition of <b>"value"</b> field.
        /// @details
        ///     Parse the raw data of the parameters independently based on
        ///     the value of the type
        class Value : public
            comms::field::ArrayList<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                typename TOpt::cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Value
            >
        {
            using Base =
                comms::field::ArrayList<
                    cc_x509::field::FieldBase<>,
                    std::uint8_t,
                    typename TOpt::cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Value
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::field::AttributeTypeAndValueMembersCommon::ValueMembersCommon::ValueCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Type,
               Value
            >;
    };

    /// @brief Definition of <b>"Value"</b> field.
    class Value : public
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename ValueMembers::All
        >
    {
        using Base =
            comms::field::Bundle<
                cc_x509::field::FieldBase<>,
                typename ValueMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_type index, @b Field_type type and @b field_type() access function -
        ///         for cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Type member field.
        ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
        ///         for cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Value member field.
        COMMS_FIELD_MEMBERS_NAMES(
            type,
            value
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::AttributeTypeAndValueMembersCommon::ValueCommon::name();
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

/// @brief Definition of <b>"AttributeTypeAndValue"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class AttributeTypeAndValue : public
    comms::field::Bundle<
        cc_x509::field::FieldBase<>,
        typename AttributeTypeAndValueMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::RemLengthMemberField<1U>
    >
{
    using Base =
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename AttributeTypeAndValueMembers<TOpt>::All,
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
    ///         for cc_x509::field::AttributeTypeAndValueMembers::Tag member field.
    ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
    ///         for cc_x509::field::AttributeTypeAndValueMembers::Length member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for cc_x509::field::AttributeTypeAndValueMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        tag,
        length,
        value
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::field::AttributeTypeAndValueCommon::name();
    }
};

} // namespace field

} // namespace cc_x509
