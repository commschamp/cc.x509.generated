// Generated by commsdsl2comms v5.2.0

/// @file
/// @brief Contains definition of <b>"BooleanDefaultFalse"</b> field.

#pragma once

#include "cc_x509/asn1/der/field/Boolean.h"
#include "cc_x509/asn1/der/field/BooleanDefaultFalseCommon.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/options/DefaultOptions.h"
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
///     @ref BooleanDefaultFalse field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct BooleanDefaultFalseMembers
{
    /// @brief Definition of <b>"Boolean"</b> field.
    using Boolean =
        cc_x509::asn1::der::field::Boolean<
            TOpt
        >;
};

/// @brief Definition of <b>"BooleanDefaultFalse"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class BooleanDefaultFalse : public
    comms::field::Optional<
        typename BooleanDefaultFalseMembers<TOpt>::Boolean,
        TExtraOpts...,
        comms::option::def::MissingOnReadFail,
        comms::option::def::MissingOnInvalid,
        comms::option::def::FieldType<BooleanDefaultFalse<TOpt, TExtraOpts...>>
    >
{
    using Base =
        comms::field::Optional<
            typename BooleanDefaultFalseMembers<TOpt>::Boolean,
            TExtraOpts...,
            comms::option::def::MissingOnReadFail,
            comms::option::def::MissingOnInvalid,
            comms::option::def::FieldType<BooleanDefaultFalse<TOpt, TExtraOpts...>>
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::asn1::der::field::BooleanDefaultFalseCommon::name();
    }

    /// @brief Custom validity check
    bool valid() const
    {
        if (!Base::valid()) {
            return false;
        }

        if (Base::isMissing()) {
            return true;
        }

        return !Base::field().field_value().isFalse();
    }
};

} // namespace field

} // namespace der

} // namespace asn1

} // namespace cc_x509
