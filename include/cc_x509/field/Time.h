// Generated by commsdsl2comms v7.0.0

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
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_x509::asn1::der::field::UtcTime<
                TOpt,
                comms::option::def::HasName
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
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_x509::asn1::der::field::GeneralizedTime<
                TOpt,
                comms::option::def::HasName
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
        comms::option::def::HasName,
        comms::option::def::HasCustomRead,
        comms::option::def::HasCustomWrite,
        comms::option::def::HasCustomRefresh,
        comms::option::def::VariantHasCustomResetOnDestruct,
        comms::option::def::HasVersionDependentMembers<false>
    >
{
    using Base =
        comms::field::Variant<
            cc_x509::field::FieldBase<>,
            typename TimeMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::HasCustomRead,
            comms::option::def::HasCustomWrite,
            comms::option::def::HasCustomRefresh,
            comms::option::def::VariantHasCustomResetOnDestruct,
            comms::option::def::HasVersionDependentMembers<false>
        >;
public:
    /// @brief Default constructor.
    Time() = default;

    /// @brief Destructor
    ~Time()
    {
        reset();
    }

    /// @brief Single member name info entry
    using MemberNameInfo = cc_x509::field::TimeCommon::MemberNameInfo;

    /// @brief Type returned from @ref memberNamesMap() member function.
    /// @see @ref cc_x509::field::TimeCommon::MemberNamesMapInfo.
    using MemberNamesMapInfo = cc_x509::field::TimeCommon::MemberNamesMapInfo;

    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_VARIANT_MEMBERS_NAMES macro
    ///     related to @b comms::field::Variant class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_utcTime index, @b Field_utcTime type,
    ///         @b initField_utcTime(), @b deinitField_utcTime() and @b accessField_utcTime() access functions -
    ///         for cc_x509::field::TimeMembers::UtcTime member field.
    ///     @li @b FieldIdx_generalTime index, @b Field_generalTime type,
    ///         @b initField_generalTime(), @b deinitField_generalTime() and @b accessField_generalTime() access functions -
    ///         for cc_x509::field::TimeMembers::GeneralTime member field.
    COMMS_VARIANT_MEMBERS_NAMES(
        utcTime,
        generalTime
    );

    /// @brief Copy constructor.
    Time(const Time& other) :
        Base()
    {
        *this = other;
    }

    /// @brief Move constructor.
    Time(Time&& other) : 
        Base()
    {
        *this = std::move(other);
    }

    /// @brief Copy assignment operator.
    Time& operator=(const Time& other)
    {
        if (this == &other) {
            return *this;
        }

        reset();

        if (!other.currentFieldValid()) {
            return *this;
        }

        switch (other.currentField()) {
            case FieldIdx_utcTime: initField_utcTime() = other.accessField_utcTime(); return *this;
            case FieldIdx_generalTime: initField_generalTime() = other.accessField_generalTime(); return *this;
            default: break;
        }

        COMMS_ASSERT(false); // Should not be reached
        return *this;
    }

    /// @brief Move assignement operator.
    Time& operator=(Time&& other)
    {    if (this == &other) {
            return *this;
        }

        reset();

        if (!other.currentFieldValid()) {
            return *this;
        }

        switch (other.currentField()) {
            case FieldIdx_utcTime: initField_utcTime() = std::move(other.accessField_utcTime()); return *this;
            case FieldIdx_generalTime: initField_generalTime() = std::move(other.accessField_generalTime()); return *this;
            default: break;
        }

        COMMS_ASSERT(false); // Should not be reached
        return *this;
    }

    /// @brief Equality comparison operator.
    bool operator==(const Time& other) const
    {
        if (this == &other) {
            return true;
        }

        if (Base::currentFieldValid() != other.currentFieldValid()) {
            return false;
        }

        if (!Base::currentFieldValid()) {

            return true;
        }

        if (Base::currentField() != other.currentField()) {
            return false;
        }

        switch(Base::currentField()) {
            case FieldIdx_utcTime: return accessField_utcTime() == other.accessField_utcTime();
            case FieldIdx_generalTime: return accessField_generalTime() == other.accessField_generalTime();
            default: break;
        }

        COMMS_ASSERT(false); // Should not be reached
        return false;
    }

    /// @brief Inequality comparison operator.
    bool operator!=(const Time& other) const
    {
        return !(*this == other);
    }

    /// @brief Order comparison operator.
    bool operator<(const Time& other) const
    {
        if (!Base::currentFieldValid()) {
            return (!other.currentFieldValid());
        }

        if (!other.currentFieldValid()) {
            return false;
        }

        if (Base::currentField() < other.currentField()) {
            return true;
        }

        if (Base::currentField() != other.currentField()) {
            return false;
        }

        if (this == &other) {
            return false;
        }
        switch(Base::currentField()) {
            case FieldIdx_utcTime: return accessField_utcTime() < other.accessField_utcTime();
            case FieldIdx_generalTime: return accessField_generalTime() < other.accessField_generalTime();
            default: break;
        }

        COMMS_ASSERT(false); // Should not be reached
        return false;
    }

    /// @brief Optimized currentFieldExec functionality.
    /// @details Replaces the currentFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currentFieldExec(TFunc&& func) 
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

    /// @brief The same as currentFieldExec() 
    /// @details Generated for backward comatibility, can be removed in the future.
    template <typename TFunc>
    void currFieldExec(TFunc&& func) 
    {
        currentFieldExec(std::forward<TFunc>(func));
    }

    /// @brief Optimized currentFieldExec functionality (const variant).
    /// @details Replaces the currentFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currentFieldExec(TFunc&& func) const
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

    /// @brief The same as currentFieldExec()  (const variant)
    /// @details Generated for backward comatibility, can be removed in the future.
    template <typename TFunc>
    void currFieldExec(TFunc&& func) const
    {
        currentFieldExec(std::forward<TFunc>(func));
    }

    /// @brief Optimized runtime selection field functionality.
    /// @details Replaces the selectField() member function defined
    ///    by @b comms::field::Variant.
    void selectField(std::size_t idx)
    {
        if (Base::currentField() == idx) {
            return;
        }

        reset();
        switch (idx) {
            case FieldIdx_utcTime: initField_utcTime(); return;
            case FieldIdx_generalTime: initField_generalTime(); return;
            default: break;
        }
        COMMS_ASSERT(false); // Should not be reached
    }

    /// @brief Optimized reset functionality.
    /// @details Replaces the reset() member function defined
    ///    by @b comms::field::Variant.
    void reset()
    {
        if (!Base::currentFieldValid()) {
            return;
        }

        switch (Base::currentField()) {
            case FieldIdx_utcTime: deinitField_utcTime(); return;
            case FieldIdx_generalTime: deinitField_generalTime(); return;
            default: break;
        }
        COMMS_ASSERT(false); // Should not be reached
    }

    /// @brief Optimized check ability to write.
    /// @details Replaces the canWrite() member function defined
    ///    by @b comms::field::Variant.
    bool canWrite() const
    {
        if (!Base::currentFieldValid()) {
            return true;
        }

        switch (Base::currentField()) {
            case FieldIdx_utcTime: return accessField_utcTime().canWrite();
            case FieldIdx_generalTime: return accessField_generalTime().canWrite();
            default: break;
        }
        COMMS_ASSERT(false); // Should not be reached
        return false;
    }

    /// @brief Retrieve name of the member
    /// @see @ref cc_x509::field::TimeCommon::memberName().
    static const char* memberName(std::size_t idx)
    {
        return cc_x509::field::TimeCommon::memberName(idx);
    }

    /// @brief Retrieve name of the member
    /// @see @ref cc_x509::field::TimeCommon::memberName().
    static const char* memberName(FieldIdx idx)
    {
        return memberName(static_cast<std::size_t>(idx));
    }

    /// @brief Retrieve map of members names
    /// @see @ref cc_x509::field::TimeCommon::memberNamesMap().
    static MemberNamesMapInfo memberNamesMap()
    {
        return cc_x509::field::TimeCommon::memberNamesMap();
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
        reset();
        using CommonKeyField=
            comms::field::IntValue<
                cc_x509::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::FixedValue
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

    /// @brief Generated write functionality.
    template <typename TIter>
    comms::ErrorStatus write(TIter& iter, std::size_t len) const
    {
        switch (Base::currentField()) {
            case FieldIdx_utcTime: return accessField_utcTime().write(iter, len);
            case FieldIdx_generalTime: return accessField_generalTime().write(iter, len);
            default: break;
        }

        return comms::ErrorStatus::Success;
    }

    /// @brief Generated refresh functionality.
    bool refresh()
    {
        switch (Base::currentField()) {
            case FieldIdx_utcTime: return accessField_utcTime().refresh();
            case FieldIdx_generalTime: return accessField_generalTime().refresh();
            default: break;
        }

        return false;
    }

    /// @brief Generated length functionality.
    std::size_t length() const
    {
        switch (Base::currentField()) {
            case FieldIdx_utcTime: return accessField_utcTime().length();
            case FieldIdx_generalTime: return accessField_generalTime().length();
            default: break;
        }

        return 0U;
    }

    /// @brief Generated validity check functionality.
    bool valid() const
    {
        switch (Base::currentField()) {
            case FieldIdx_utcTime: return accessField_utcTime().valid();
            case FieldIdx_generalTime: return accessField_generalTime().valid();
            default: break;
        }

        return false;
    }

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
