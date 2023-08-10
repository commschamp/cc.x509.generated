// Generated by commsdsl2comms v6.2.1

/// @file
/// @brief Contains definition of <b>"Version"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/Length.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/field/VersionCommon.h"
#include "cc_x509/field/VersionVal.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref Version field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct VersionMembers
{
    /// @brief Scope for all the member fields of
    ///     @ref ActVersion field.
    struct ActVersionMembers
    {
        /// @brief Definition of <b>"Tag"</b> field.
        class Tag : public
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::DefaultNumValue<160>,
                comms::option::def::ValidNumValue<160>,
                comms::option::def::HasCustomRefresh
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_x509::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::FailOnInvalid<>,
                    comms::option::def::DefaultNumValue<160>,
                    comms::option::def::ValidNumValue<160>,
                    comms::option::def::HasCustomRefresh
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_x509::field::VersionMembersCommon::ActVersionMembersCommon::TagCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::field::VersionMembersCommon::ActVersionMembersCommon::TagCommon::name();
            }

            /// @brief Generated refresh functionality.
            bool refresh()
            {
                bool updated = Base::refresh();
                if (Base::valid()) {
                    return updated;
                };
                Base::setValue(160);
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
            /// @brief Definition of <b>"Tag"</b> field.
            class Tag : public
                comms::field::IntValue<
                    cc_x509::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::FailOnInvalid<>,
                    comms::option::def::DefaultNumValue<2>,
                    comms::option::def::ValidNumValue<2>,
                    comms::option::def::HasCustomRefresh
                >
            {
                using Base =
                    comms::field::IntValue<
                        cc_x509::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FailOnInvalid<>,
                        comms::option::def::DefaultNumValue<2>,
                        comms::option::def::ValidNumValue<2>,
                        comms::option::def::HasCustomRefresh
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return cc_x509::field::VersionMembersCommon::ActVersionMembersCommon::ValueMembersCommon::TagCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_x509::field::VersionMembersCommon::ActVersionMembersCommon::ValueMembersCommon::TagCommon::name();
                }

                /// @brief Generated refresh functionality.
                bool refresh()
                {
                    bool updated = Base::refresh();
                    if (Base::valid()) {
                        return updated;
                    };
                    Base::setValue(2);
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
                cc_x509::field::VersionVal<
                    TOpt
                >
            {
                using Base =
                    cc_x509::field::VersionVal<
                        TOpt
                    >;
            public:
                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_x509::field::VersionMembersCommon::ActVersionMembersCommon::ValueMembersCommon::ValueCommon::name();
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

        /// @brief Definition of <b>"Value"</b> field.
        class Value : public
            comms::field::Bundle<
                cc_x509::field::FieldBase<>,
                typename ValueMembers::All,
                comms::option::def::RemLengthMemberField<1U>,
                comms::option::def::HasVersionDependentMembers<false>
            >
        {
            using Base =
                comms::field::Bundle<
                    cc_x509::field::FieldBase<>,
                    typename ValueMembers::All,
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
            ///         for cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Tag member field.
            ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
            ///         for cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Length member field.
            ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
            ///         for cc_x509::field::VersionMembers::ActVersionMembers::ValueMembers::Value member field.
            COMMS_FIELD_MEMBERS_NAMES(
                tag,
                length,
                value
            );

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::field::VersionMembersCommon::ActVersionMembersCommon::ValueCommon::name();
            }

            /// @brief Field validity check
            bool valid() const
            {
                if (!Base::valid()) {
                    return false;
                }

                return field_length().getValue() <= sizeof(typename Field_value::ValueType);
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

    /// @brief Definition of <b>"ActVersion"</b> field.
    class ActVersion : public
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename ActVersionMembers::All,
            comms::option::def::RemLengthMemberField<1U>,
            comms::option::def::HasVersionDependentMembers<false>
        >
    {
        using Base =
            comms::field::Bundle<
                cc_x509::field::FieldBase<>,
                typename ActVersionMembers::All,
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
        ///         for cc_x509::field::VersionMembers::ActVersionMembers::Tag member field.
        ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
        ///         for cc_x509::field::VersionMembers::ActVersionMembers::Length member field.
        ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
        ///         for cc_x509::field::VersionMembers::ActVersionMembers::Value member field.
        COMMS_FIELD_MEMBERS_NAMES(
            tag,
            length,
            value
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::VersionMembersCommon::ActVersionCommon::name();
        }
    };
};

/// @brief Definition of <b>"Version"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class Version : public
    comms::field::Optional<
        typename VersionMembers<TOpt>::ActVersion,
        TExtraOpts...,
        comms::option::def::MissingOnReadFail,
        comms::option::def::MissingOnInvalid
    >
{
    using Base =
        comms::field::Optional<
            typename VersionMembers<TOpt>::ActVersion,
            TExtraOpts...,
            comms::option::def::MissingOnReadFail,
            comms::option::def::MissingOnInvalid
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::field::VersionCommon::name();
    }
};

} // namespace field

} // namespace cc_x509
