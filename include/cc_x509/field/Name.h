// Generated by commsdsl2comms v6.0.0

/// @file
/// @brief Contains definition of <b>"Name"</b> field.

#pragma once

#include <tuple>
#include "cc_x509/field/FieldBase.h"
#include "cc_x509/field/NameCommon.h"
#include "cc_x509/field/RDNSequence.h"
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
///     @ref Name field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_x509::options::DefaultOptions>
struct NameMembers
{
    /// @brief Definition of <b>"rdnSequence"</b> field.
    class RdnSequence : public
        cc_x509::field::RDNSequence<
            TOpt
        >
    {
        using Base =
            cc_x509::field::RDNSequence<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_x509::field::NameMembersCommon::RdnSequenceCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           RdnSequence
        >;
};

/// @brief Definition of <b>"Name"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_x509::options::DefaultOptions, typename... TExtraOpts>
class Name : public
    comms::field::Variant<
        cc_x509::field::FieldBase<>,
        typename NameMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasCustomWrite,
        comms::option::def::HasCustomRefresh
    >
{
    using Base =
        comms::field::Variant<
            cc_x509::field::FieldBase<>,
            typename NameMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasCustomWrite,
            comms::option::def::HasCustomRefresh
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_VARIANT_MEMBERS_NAMES macro
    ///     related to @b comms::field::Variant class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_rdnSequence index, @b Field_rdnSequence type,
    ///         @b initField_rdnSequence() and @b accessField_rdnSequence() access functions -
    ///         for cc_x509::field::NameMembers::RdnSequence member field.
    COMMS_VARIANT_MEMBERS_NAMES(
        rdnSequence
    );

    /// @brief Optimized currFieldExec functionality.
    /// @details Replaces the currFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currFieldExec(TFunc&& func) 
    {
        switch (Base::currentField()) {
        case FieldIdx_rdnSequence:
            memFieldDispatch<FieldIdx_rdnSequence>(accessField_rdnSequence(), std::forward<TFunc>(func));
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
        case FieldIdx_rdnSequence:
            memFieldDispatch<FieldIdx_rdnSequence>(accessField_rdnSequence(), std::forward<TFunc>(func));
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
        return cc_x509::field::NameCommon::name();
    }

    /// @brief Generated write functionality.
    template <typename TIter>
    comms::ErrorStatus write(TIter& iter, std::size_t len) const
    {
        switch (Base::currentField()) {
        case FieldIdx_rdnSequence: return accessField_rdnSequence().write(iter, len);
        default: break;
        }

        return comms::ErrorStatus::Success;
    }

    /// @brief Generated refresh functionality.
    bool refresh()
    {
        switch (Base::currentField()) {
        case FieldIdx_rdnSequence: return accessField_rdnSequence().refresh();
        default: break;
        }

        return false;
    }

    /// @brief Generated length functionality.
    std::size_t length() const
    {
        switch (Base::currentField()) {
        case FieldIdx_rdnSequence: return accessField_rdnSequence().length();
        default: break;
        }

        return 0U;
    }

    /// @brief Generated validity check functionality.
    bool valid() const
    {
        switch (Base::currentField()) {
        case FieldIdx_rdnSequence: return accessField_rdnSequence().valid();
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
