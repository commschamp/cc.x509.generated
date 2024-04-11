// Generated by commsdsl2comms v6.3.2

/// @file
/// @brief Contains definition of <b>"SubjectPublicKeyInfo"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/Length.h"
#include "cc_x509/asn1/der/field/RawBitString.h"
#include "cc_x509/field/AlgorithmIdentifier.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/field/SubjectPublicKeyInfoCommon.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref SubjectPublicKeyInfo field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct SubjectPublicKeyInfoMembers
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
            return cc_x509::field::SubjectPublicKeyInfoMembersCommon::TagCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::SubjectPublicKeyInfoMembersCommon::TagCommon::name();
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
        /// @brief Definition of <b>"algorithm"</b> field.
        class Algorithm : public
            cc_x509::field::AlgorithmIdentifier<
                TOpt
            >
        {
            using Base =
                cc_x509::field::AlgorithmIdentifier<
                    TOpt
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::field::SubjectPublicKeyInfoMembersCommon::ValueMembersCommon::AlgorithmCommon::name();
            }
        };

        /// @brief Definition of <b>"subjectPublicKey"</b> field.
        class SubjectPublicKey : public
            cc_x509::asn1::der::field::RawBitString<
                TOpt
            >
        {
            using Base =
                cc_x509::asn1::der::field::RawBitString<
                    TOpt
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::field::SubjectPublicKeyInfoMembersCommon::ValueMembersCommon::SubjectPublicKeyCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Algorithm,
               SubjectPublicKey
            >;
    };

    /// @brief Definition of <b>"Value"</b> field.
    class Value : public
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename ValueMembers::All,
            comms::option::def::HasVersionDependentMembers<false>
        >
    {
        using Base =
            comms::field::Bundle<
                cc_x509::field::FieldBase<>,
                typename ValueMembers::All,
                comms::option::def::HasVersionDependentMembers<false>
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bundle class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_algorithm index, @b Field_algorithm type and @b field_algorithm() access function -
        ///         for cc_x509::field::SubjectPublicKeyInfoMembers::ValueMembers::Algorithm member field.
        ///     @li @b FieldIdx_subjectPublicKey index, @b Field_subjectPublicKey type and @b field_subjectPublicKey() access function -
        ///         for cc_x509::field::SubjectPublicKeyInfoMembers::ValueMembers::SubjectPublicKey member field.
        COMMS_FIELD_MEMBERS_NAMES(
            algorithm,
            subjectPublicKey
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::SubjectPublicKeyInfoMembersCommon::ValueCommon::name();
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

/// @brief Definition of <b>"SubjectPublicKeyInfo"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class SubjectPublicKeyInfo : public
    comms::field::Bundle<
        cc_x509::field::FieldBase<>,
        typename SubjectPublicKeyInfoMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::RemLengthMemberField<1U>,
        comms::option::def::HasVersionDependentMembers<false>
    >
{
    using Base =
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename SubjectPublicKeyInfoMembers<TOpt>::All,
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
    ///         for cc_x509::field::SubjectPublicKeyInfoMembers::Tag member field.
    ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
    ///         for cc_x509::field::SubjectPublicKeyInfoMembers::Length member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for cc_x509::field::SubjectPublicKeyInfoMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        tag,
        length,
        value
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::field::SubjectPublicKeyInfoCommon::name();
    }
};

} // namespace field

} // namespace cc_x509
