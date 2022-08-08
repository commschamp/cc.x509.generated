// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of protocol bare metal default options.

#pragma once

#include "cc_x509/options/DefaultOptions.h"

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

namespace cc_x509
{

namespace options
{

/// @brief Default bare metal options of the protocol.
template <typename TBase = cc_x509::options::DefaultOptions>
struct BareMetalDefaultOptionsT : public TBase
{
    struct cc_x509
    {
        /// @brief Extra options for fields.
        struct field : public TBase::cc_x509::field
        {
            struct AlgorithmIdentifierMembers : public TBase::cc_x509::field::AlgorithmIdentifierMembers
            {
                struct ValueMembers : public TBase::cc_x509::field::AlgorithmIdentifierMembers::ValueMembers
                {
                    /// @brief Extra options for @ref
                    ///     cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Parameters
                    ///     field.
                    using Parameters =
                        std::tuple<
                            comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                            typename TBase::cc_x509::field::AlgorithmIdentifierMembers::ValueMembers::Parameters
                        >;
                }; // struct ValueMembers
            }; // struct AlgorithmIdentifierMembers

            struct AttributeTypeAndValueMembers : public TBase::cc_x509::field::AttributeTypeAndValueMembers
            {
                struct ValueMembers : public TBase::cc_x509::field::AttributeTypeAndValueMembers::ValueMembers
                {
                    /// @brief Extra options for @ref
                    ///     cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Value
                    ///     field.
                    using Value =
                        std::tuple<
                            comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                            typename TBase::cc_x509::field::AttributeTypeAndValueMembers::ValueMembers::Value
                        >;
                }; // struct ValueMembers
            }; // struct AttributeTypeAndValueMembers

            struct RDNSequenceMembers : public TBase::cc_x509::field::RDNSequenceMembers
            {
                /// @brief Extra options for @ref
                ///     cc_x509::field::RDNSequenceMembers::Value
                ///     field.
                using Value =
                    std::tuple<
                        comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                        typename TBase::cc_x509::field::RDNSequenceMembers::Value
                    >;
            }; // struct RDNSequenceMembers

            struct RelativeDistinguishedNameMembers : public TBase::cc_x509::field::RelativeDistinguishedNameMembers
            {
                /// @brief Extra options for @ref
                ///     cc_x509::field::RelativeDistinguishedNameMembers::Value
                ///     field.
                using Value =
                    std::tuple<
                        comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                        typename TBase::cc_x509::field::RelativeDistinguishedNameMembers::Value
                    >;
            }; // struct RelativeDistinguishedNameMembers

            struct TBSCertificateMembers : public TBase::cc_x509::field::TBSCertificateMembers
            {
                struct ValueMembers : public TBase::cc_x509::field::TBSCertificateMembers::ValueMembers
                {
                    struct IssuerUniqueIDMembers : public TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers
                    {
                        struct ActIssuerUniqueIDMembers : public TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers
                        {
                            /// @brief Extra options for @ref
                            ///     cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Value
                            ///     field.
                            using Value =
                                std::tuple<
                                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                    typename TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Value
                                >;
                        }; // struct ActIssuerUniqueIDMembers
                    }; // struct IssuerUniqueIDMembers

                    struct SubjectUniqueIDMembers : public TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers
                    {
                        struct ActSubjectUniqueIDMembers : public TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers
                        {
                            /// @brief Extra options for @ref
                            ///     cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Value
                            ///     field.
                            using Value =
                                std::tuple<
                                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                    typename TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Value
                                >;
                        }; // struct ActSubjectUniqueIDMembers
                    }; // struct SubjectUniqueIDMembers

                    struct ExtensionsMembers : public TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers
                    {
                        struct ActExtensionsMembers : public TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers
                        {
                            struct ValueMembers : public TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers
                            {
                                /// @brief Extra options for @ref
                                ///     cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Value
                                ///     field.
                                using Value =
                                    std::tuple<
                                        comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                        typename TBase::cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Value
                                    >;
                            }; // struct ValueMembers
                        }; // struct ActExtensionsMembers
                    }; // struct ExtensionsMembers
                }; // struct ValueMembers
            }; // struct TBSCertificateMembers
        }; // struct field

        /// @brief Extra options for frames.
        struct frame : public TBase::cc_x509::frame
        {
            /// @brief Extra options for layers of
            ///     @ref cc_x509::frame::Frame frame.
            struct FrameLayers : public TBase::cc_x509::frame::FrameLayers
            {
                /// @brief Extra options for @ref
                ///     cc_x509::frame::FrameLayers::Data layer.
                using Data =
                    std::tuple<
                        comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>,
                        typename TBase::cc_x509::frame::FrameLayers::Data
                    >;

                /// @brief Extra options for @ref
                ///     cc_x509::frame::FrameLayers::Id layer.
                using Id =
                    std::tuple<
                        comms::option::app::InPlaceAllocation,
                        typename TBase::cc_x509::frame::FrameLayers::Id
                    >;
            }; // struct FrameLayers
        }; // struct frame

        /// @brief Extra options for namespace.
        struct asn1: public TBase::cc_x509::asn1
        {
            /// @brief Extra options for namespace.
            struct der: public TBase::cc_x509::asn1::der
            {
                /// @brief Extra options for fields.
                struct field : public TBase::cc_x509::asn1::der::field
                {
                    struct GeneralizedTimeMembers : public TBase::cc_x509::asn1::der::field::GeneralizedTimeMembers
                    {
                        /// @brief Extra options for @ref
                        ///     cc_x509::asn1::der::field::GeneralizedTimeMembers::Value
                        ///     field.
                        using Value =
                            std::tuple<
                                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                typename TBase::cc_x509::asn1::der::field::GeneralizedTimeMembers::Value
                            >;
                    }; // struct GeneralizedTimeMembers

                    struct OctetStringMembers : public TBase::cc_x509::asn1::der::field::OctetStringMembers
                    {
                        /// @brief Extra options for @ref
                        ///     cc_x509::asn1::der::field::OctetStringMembers::Value
                        ///     field.
                        using Value =
                            std::tuple<
                                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                typename TBase::cc_x509::asn1::der::field::OctetStringMembers::Value
                            >;
                    }; // struct OctetStringMembers

                    struct RawBitStringMembers : public TBase::cc_x509::asn1::der::field::RawBitStringMembers
                    {
                        /// @brief Extra options for @ref
                        ///     cc_x509::asn1::der::field::RawBitStringMembers::Value
                        ///     field.
                        using Value =
                            std::tuple<
                                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                typename TBase::cc_x509::asn1::der::field::RawBitStringMembers::Value
                            >;
                    }; // struct RawBitStringMembers

                    struct RawIntegerMembers : public TBase::cc_x509::asn1::der::field::RawIntegerMembers
                    {
                        /// @brief Extra options for @ref
                        ///     cc_x509::asn1::der::field::RawIntegerMembers::Value
                        ///     field.
                        using Value =
                            std::tuple<
                                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                typename TBase::cc_x509::asn1::der::field::RawIntegerMembers::Value
                            >;
                    }; // struct RawIntegerMembers

                    struct UtcTimeMembers : public TBase::cc_x509::asn1::der::field::UtcTimeMembers
                    {
                        /// @brief Extra options for @ref
                        ///     cc_x509::asn1::der::field::UtcTimeMembers::Value
                        ///     field.
                        using Value =
                            std::tuple<
                                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                                typename TBase::cc_x509::asn1::der::field::UtcTimeMembers::Value
                            >;
                    }; // struct UtcTimeMembers
                }; // struct field
            }; // struct der

            /// @brief Extra options for fields.
            struct field : public TBase::cc_x509::asn1::field
            {
                /// @brief Extra options for @ref
                ///     cc_x509::asn1::field::ObjectIdentifierVal
                ///     field.
                using ObjectIdentifierVal =
                    std::tuple<
                        comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                        typename TBase::cc_x509::asn1::field::ObjectIdentifierVal
                    >;
            }; // struct field
        }; // struct asn1
    }; // struct cc_x509
};

/// @brief Alias to @ref BareMetalDefaultOptionsT with default template parameter.
using BareMetalDefaultOptions = BareMetalDefaultOptionsT<>;

} // namespace options

} // namespace cc_x509
