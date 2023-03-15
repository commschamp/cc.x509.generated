// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains definition of <b>"AlgorithmIdentifier"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_x509/asn1/der/field/Length.h"
#include "cc_x509/asn1/der/field/ObjectIdentifier.h"
#include "cc_x509/field/AlgorithmIdentifierCommon.h"
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
///     @ref AlgorithmIdentifier field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct AlgorithmIdentifierMembers
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
            return cc_x509::field::AlgorithmIdentifierMembersCommon::TagCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::AlgorithmIdentifierMembersCommon::TagCommon::name();
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
                return cc_x509::field::AlgorithmIdentifierMembersCommon::ValueMembersCommon::AlgorithmCommon::name();
            }
        };

        /// @brief Definition of <b>"parameters"</b> field.
        /// @details
        ///     Parse the raw data of the parameters independently based on
        ///     the value of the algorithm
        class Parameters : public
            comms::field::ArrayList<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                typename TOpt::cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Parameters
            >
        {
            using Base =
                comms::field::ArrayList<
                    cc_x509::field::FieldBase<>,
                    std::uint8_t,
                    typename TOpt::cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Parameters
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_x509::field::AlgorithmIdentifierMembersCommon::ValueMembersCommon::ParametersCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Algorithm,
               Parameters
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
        ///     @li @b FieldIdx_algorithm index, @b Field_algorithm type and @b field_algorithm() access function -
        ///         for cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Algorithm member field.
        ///     @li @b FieldIdx_parameters index, @b Field_parameters type and @b field_parameters() access function -
        ///         for cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Parameters member field.
        COMMS_FIELD_MEMBERS_NAMES(
            algorithm,
            parameters
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::AlgorithmIdentifierMembersCommon::ValueCommon::name();
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

/// @brief Definition of <b>"AlgorithmIdentifier"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class AlgorithmIdentifier : public
    comms::field::Bundle<
        cc_x509::field::FieldBase<>,
        typename AlgorithmIdentifierMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::RemLengthMemberField<1U>
    >
{
    using Base =
        comms::field::Bundle<
            cc_x509::field::FieldBase<>,
            typename AlgorithmIdentifierMembers<TOpt>::All,
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
    ///         for cc_x509::field::AlgorithmIdentifierMembers::Tag member field.
    ///     @li @b FieldIdx_length index, @b Field_length type and @b field_length() access function -
    ///         for cc_x509::field::AlgorithmIdentifierMembers::Length member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for cc_x509::field::AlgorithmIdentifierMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        tag,
        length,
        value
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::field::AlgorithmIdentifierCommon::name();
    }
};

} // namespace field

} // namespace cc_x509
