// Generated by commsdsl2comms v6.3.3

/// @file
/// @brief Contains definition of <b>"ObjectIdentifierVal"</b> field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/field/ObjectIdentifierValCommon.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_x509
{

namespace asn1
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref ObjectIdentifierVal field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct ObjectIdentifierValMembers
{
    /// @brief Definition of <b>"Element"</b> field.
    class Element : public
        comms::field::IntValue<
            cc_x509::field::FieldBase<>,
            std::uint64_t,
            comms::option::def::VarLength<1U, 8U>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint64_t,
                comms::option::def::VarLength<1U, 8U>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_x509::asn1::field::ObjectIdentifierValMembersCommon::ElementCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::asn1::field::ObjectIdentifierValMembersCommon::ElementCommon::name();
        }
    };
};

/// @brief Definition of <b>"ObjectIdentifierVal"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class ObjectIdentifierVal : public
    comms::field::ArrayList<
        cc_x509::field::FieldBase<>,
        typename ObjectIdentifierValMembers<TOpt>::Element,
        TExtraOpts...,
        typename TOpt::cc_x509::asn1::field::ObjectIdentifierVal,
        comms::option::def::HasCustomRead,
        comms::option::def::HasCustomWrite
    >
{
    using Base =
        comms::field::ArrayList<
            cc_x509::field::FieldBase<>,
            typename ObjectIdentifierValMembers<TOpt>::Element,
            TExtraOpts...,
            typename TOpt::cc_x509::asn1::field::ObjectIdentifierVal,
            comms::option::def::HasCustomRead,
            comms::option::def::HasCustomWrite
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::asn1::field::ObjectIdentifierValCommon::name();
    }

    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus read(TIter& iter, std::size_t len)
    {
        using ListElemType = typename Base::ElementType;
        ListElemType first;

        auto begIter = iter;
        auto remLen = len;

        auto updateRemLen = 
            [&remLen, len, begIter, &iter]()
            {
                remLen = len - static_cast<std::size_t>(std::distance(begIter, iter));
            };

        auto es = first.read(iter, remLen);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        updateRemLen();
        ListElemType second;

        do {
            if (first.getValue() < 40U) {
                second.setValue(first.getValue());
                first.setValue(0U);
                break;
            }

            if (first.getValue() < 80) {
                second.setValue(first.getValue() - 40U);
                first.setValue(1U);
                break;
            }

            second.setValue(first.getValue() - 80U);
            first.setValue(2U);
        } while (false);

        auto& valuesList = Base::value();
        valuesList.clear();
        valuesList.push_back(first);
        valuesList.push_back(second);

        while (0U < remLen) {
            ListElemType nextElem;
            es = nextElem.read(iter, remLen);
            if (es != comms::ErrorStatus::Success) {
                return es;
            }

            valuesList.push_back(nextElem);
            updateRemLen();
        }

        return es;
    }

    /// @brief Custom write functionality
    template <typename TIter>
    comms::ErrorStatus write(TIter& iter, std::size_t len) const
    {
        if (!valid()) {
            return comms::ErrorStatus::InvalidMsgData;
        }

        auto& valuesList = Base::value();
        COMMS_ASSERT(2U <= valuesList.size());

        auto firstVal = valuesList[0].getValue();
        auto secondVal = valuesList[1].getValue();

        using ListElemType = typename Base::ElementType;
        ListElemType combined;
        combined.setValue((firstVal * 40U) + secondVal);
        auto es = combined.write(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        len -= combined.length();
        for (auto idx = 2U; idx < valuesList.size(); ++idx) {
            auto& elem = valuesList[idx];
            es = elem.write(iter, len);
            if (es != comms::ErrorStatus::Success) {
                return es;
            }

            len -= elem.length();
        }

        return comms::ErrorStatus::Success;
    }

    /// @brief Custom length calculation
    std::size_t length() const
    {
        auto& valuesList = Base::value();
        if (valuesList.size() < 2U) {
            return 0U;
        }

        auto firstVal = valuesList[0].getValue();
        auto secondVal = valuesList[1].getValue();

        using ListElemType = typename Base::ElementType;
        ListElemType combined;
        combined.setValue((firstVal * 40) + secondVal);

        std::size_t result = combined.length();
        for (auto idx = 2U; idx < valuesList.size(); ++idx) {
            auto& elem = valuesList[idx];
            result += elem.length();
        }

        return result;
    }

    /// @brief Contents validity check
    bool valid() const
    {
        auto& valuesList = Base::value();
        if (valuesList.size() < 2U) {
            return false;
        }

        auto firstVal = valuesList[0].getValue();
        if (2U < firstVal) {
            return false;
        }

        if (firstVal < 2U) {
            auto secondVal = valuesList[1].getValue();
            return (secondVal < 40U);
        }

        return true;
    }
};

} // namespace field

} // namespace asn1

} // namespace cc_x509
