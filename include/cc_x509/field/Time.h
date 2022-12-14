// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"Time"</b> field.

#pragma once

#include <tuple>
#include "cc_x509/asn1/der/field/GeneralizedTime.h"
#include "cc_x509/asn1/der/field/UtcTime.h"
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/field/TimeCommon.h"
#include "cc_x509/options/DefaultOptions.h"
#include "comms/Assert.h"
#include "comms/CompileControl.h"
#include "comms/field/Variant.h"
#include "comms/options.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref Time field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct TimeMembers
{
    /// @brief Definition of <b>"utcTime"</b> field.
    class UtcTime : public
        cc_x509::asn1::der::field::UtcTime<
            TOpt
        >
    {
        using Base =
            cc_x509::asn1::der::field::UtcTime<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::TimeMembersCommon::UtcTimeCommon::name();
        }
    };

    /// @brief Definition of <b>"generalTime"</b> field.
    class GeneralTime : public
        cc_x509::asn1::der::field::GeneralizedTime<
            TOpt
        >
    {
        using Base =
            cc_x509::asn1::der::field::GeneralizedTime<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::TimeMembersCommon::GeneralTimeCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           UtcTime,
           GeneralTime
        >;
};

/// @brief Definition of <b>"Time"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class Time : public
    comms::field::Variant<
        cc_x509::field::FieldBase<>,
        typename TimeMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasCustomRead
    >
{
    using Base =
        comms::field::Variant<
            cc_x509::field::FieldBase<>,
            typename TimeMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasCustomRead
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_VARIANT_MEMBERS_NAMES macro
    ///     related to @b comms::field::Variant class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_utcTime index, @b Field_utcTime type,
    ///         @b initField_utcTime() and @b accessField_utcTime() access functions -
    ///         for cc_x509::field::TimeMembers::UtcTime member field.
    ///     @li @b FieldIdx_generalTime index, @b Field_generalTime type,
    ///         @b initField_generalTime() and @b accessField_generalTime() access functions -
    ///         for cc_x509::field::TimeMembers::GeneralTime member field.
    COMMS_VARIANT_MEMBERS_NAMES(
        utcTime,
        generalTime
    );

    /// @brief Optimized currFieldExec functionality.
    /// @details Replaces the currFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currFieldExec(TFunc&& func) 
    {
        switch (Base::currentField()) {
        case FieldIdx_utcTime:
            memFieldDispatch<FieldIdx_utcTime>(accessField_utcTime(), std::forward<TFunc>(func));
            break;
        case FieldIdx_generalTime:
            memFieldDispatch<FieldIdx_generalTime>(accessField_generalTime(), std::forward<TFunc>(func));
            break;
        default:
            static constexpr bool Invalid_field_execution = false;
            static_cast<void>(Invalid_field_execution);
            COMMS_ASSERT(Invalid_field_execution);
            break;
        }
    }

    /// @brief Optimized currFieldExec functionality (const variant).
    /// @details Replaces the currFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currFieldExec(TFunc&& func) const
    {
        switch (Base::currentField()) {
        case FieldIdx_utcTime:
            memFieldDispatch<FieldIdx_utcTime>(accessField_utcTime(), std::forward<TFunc>(func));
            break;
        case FieldIdx_generalTime:
            memFieldDispatch<FieldIdx_generalTime>(accessField_generalTime(), std::forward<TFunc>(func));
            break;
        default:
            static constexpr bool Invalid_field_execution = false;
            static_cast<void>(Invalid_field_execution);
            COMMS_ASSERT(Invalid_field_execution);
            break;
        }
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_x509::field::TimeCommon::name();
    }

    COMMS_MSVC_WARNING_PUSH
    COMMS_MSVC_WARNING_DISABLE(4702)
    /// @brief Generated read functionality.
    template <typename TIter>
    comms::ErrorStatus read(TIter& iter, std::size_t len)
    {
        using CommonKeyField=
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>
            >;
        CommonKeyField commonKeyField;

        auto origIter = iter;
        auto es = commonKeyField.read(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        auto consumedLen = static_cast<std::size_t>(std::distance(origIter, iter));
        COMMS_ASSERT(consumedLen <= len);
        len -= consumedLen;

        switch (commonKeyField.getValue()) {
        case 23U /* 0x17U */:
            {
                auto& field_utcTime = initField_utcTime();
                COMMS_ASSERT(field_utcTime.field_tag().getValue() == commonKeyField.getValue());
                return field_utcTime.template readFrom<1>(iter, len);
            }
        case 24U /* 0x18U */:
            {
                auto& field_generalTime = initField_generalTime();
                COMMS_ASSERT(field_generalTime.field_tag().getValue() == commonKeyField.getValue());
                return field_generalTime.template readFrom<1>(iter, len);
            }
        default:
            break;
        };

        return comms::ErrorStatus::InvalidMsgData;
    }
    COMMS_MSVC_WARNING_POP

private:
    template <std::size_t TIdx, typename TField, typename TFunc>
    static void memFieldDispatch(TField&& f, TFunc&& func)
    {
        #ifdef _MSC_VER
            func.operator()<TIdx>(std::forward<TField>(f)); // VS compiler
        #else // #ifdef _MSC_VER
            func.template operator()<TIdx>(std::forward<TField>(f)); // All other compilers
        #endif // #ifdef _MSC_VER
    }
};

} // namespace field

} // namespace cc_x509
