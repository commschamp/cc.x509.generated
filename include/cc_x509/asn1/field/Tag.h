// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains definition of <b>"Tag"</b> field.

#pragma once

#include "cc_x509/asn1/field/TagCommon.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_x509
{

namespace asn1
{

namespace field
{

/// @brief Definition of <b>"Tag"</b> field.
/// @see @ref cc_x509::asn1::field::TagCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class Tag : public
    comms::field::EnumValue<
        cc_x509::field::FieldBase<>,
        cc_x509::asn1::field::TagCommon::ValueType,
        TExtraOpts...
    >
{
    using Base =
        comms::field::EnumValue<
            cc_x509::field::FieldBase<>,
            cc_x509::asn1::field::TagCommon::ValueType,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_x509::asn1::field::TagCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_x509::asn1::field::TagCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_x509::asn1::field::TagCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_x509::asn1::field::TagCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_x509::asn1::field::TagCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_x509::asn1::field::TagCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_x509::asn1::field::TagCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_x509::asn1::field::TagCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_x509::asn1::field::TagCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::asn1::field::TagCommon::name();
    }

    /// @brief Generated validity check functionality.
    bool valid() const
    {
        if (!Base::valid()) {
            return false;
        }

        static const ValueType Values[] = {
            ValueType::Boolean,
            ValueType::Integer,
            ValueType::BitString,
            ValueType::OctetString,
            ValueType::Null,
            ValueType::ObjectIdentifier,
            ValueType::Utf8String,
            ValueType::PrintableString,
            ValueType::Ia5String,
            ValueType::UtcTime,
            ValueType::GeneralizedTime,
            ValueType::Sequence,
            ValueType::Set,
            ValueType::App0,
            ValueType::App1,
            ValueType::App2,
            ValueType::App3,
            ValueType::App4,
            ValueType::App5,
            ValueType::App6,
            ValueType::App7,
            ValueType::App8,
            ValueType::App9,
            ValueType::App10,
            ValueType::App11,
            ValueType::App12,
            ValueType::App13,
            ValueType::App14,
            ValueType::App15,
            ValueType::Context0,
            ValueType::Context1,
            ValueType::Context2,
            ValueType::Context3,
            ValueType::Context4,
            ValueType::Context5,
            ValueType::Context6,
            ValueType::Context7,
            ValueType::Context8,
            ValueType::Context9,
            ValueType::Context10,
            ValueType::Context11,
            ValueType::Context12,
            ValueType::Context13,
            ValueType::Context14,
            ValueType::Context15,
            ValueType::ExplicitContext0,
            ValueType::ExplicitContext1,
            ValueType::ExplicitContext2,
            ValueType::ExplicitContext3,
            ValueType::ExplicitContext4,
            ValueType::ExplicitContext5,
            ValueType::ExplicitContext6,
            ValueType::ExplicitContext7,
            ValueType::ExplicitContext8,
            ValueType::ExplicitContext9,
            ValueType::ExplicitContext10,
            ValueType::ExplicitContext11,
            ValueType::ExplicitContext12,
            ValueType::ExplicitContext13,
            ValueType::ExplicitContext14,
            ValueType::ExplicitContext15
        };

        auto iter =
            std::lower_bound(std::begin(Values), std::end(Values), Base::getValue());

        if ((iter == std::end(Values)) || (*iter != Base::getValue())) {
            return false;
        }

        return true;
    }
};

} // namespace field

} // namespace asn1

} // namespace cc_x509
