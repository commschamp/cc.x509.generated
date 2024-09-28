// Generated by commsdsl2comms v6.3.4

/// @file
/// @brief Contains definition of <b>"VersionVal"</b> field.

#pragma once

#include "cc_x509/field/FieldBase.h"
#include "cc_x509/field/VersionValCommon.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_x509
{

namespace field
{

/// @brief Definition of <b>"VersionVal"</b> field.
/// @see @ref cc_x509::field::VersionValCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class VersionVal : public
    comms::field::EnumValue<
        cc_x509::field::FieldBase<>,
        cc_x509::field::VersionValCommon::ValueType,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>,
        comms::option::def::AvailableLengthLimit
    >
{
    using Base =
        comms::field::EnumValue<
            cc_x509::field::FieldBase<>,
            cc_x509::field::VersionValCommon::ValueType,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 2>,
            comms::option::def::AvailableLengthLimit
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_x509::field::VersionValCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_x509::field::VersionValCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_x509::field::VersionValCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_x509::field::VersionValCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_x509::field::VersionValCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_x509::field::VersionValCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_x509::field::VersionValCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_x509::field::VersionValCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_x509::field::VersionValCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::field::VersionValCommon::name();
    }

    /// @brief Custom validity check
    /// @details Treating "v1" as invalid to skip default value serialization
    bool valid() const
    {
        return Base::valid() && (Base::value() != Base::ValueType::v1);
    }
};

} // namespace field

} // namespace cc_x509
