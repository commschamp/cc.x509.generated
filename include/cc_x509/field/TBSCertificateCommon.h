// Generated by commsdsl2comms v7.1.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_x509::field::TBSCertificate field.

#pragma once

#include <cstdint>
#include "cc_x509/asn1/der/field/LengthCommon.h"
#include "cc_x509/asn1/der/field/RawIntegerCommon.h"
#include "cc_x509/field/AlgorithmIdentifierCommon.h"
#include "cc_x509/field/NameCommon.h"
#include "cc_x509/field/SubjectPublicKeyInfoCommon.h"
#include "cc_x509/field/ValidityCommon.h"
#include "cc_x509/field/VersionCommon.h"

namespace cc_x509
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref cc_x509::field::TBSCertificate field.
struct TBSCertificateMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_x509::field::TBSCertificateMembers::Tag field.
    struct TagCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_x509::field::TBSCertificateMembers::Tag field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::Tag field.
        static const char* name()
        {
            return "Tag";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common definitions of the member fields of
    ///     @ref cc_x509::field::TBSCertificateMembers::Length field.
    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::TBSCertificateMembers::Length field.
    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_x509::field::TBSCertificateMembers::Value field.
    struct ValueMembersCommon
    {
        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Version field.
        using VersionMembersCommon = cc_x509::field::VersionMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Version field.
        struct VersionCommon : public cc_x509::field::VersionCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Version field.
            static const char* name()
            {
                return "version";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SerialNumber field.
        using SerialNumberMembersCommon = cc_x509::asn1::der::field::RawIntegerMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SerialNumber field.
        struct SerialNumberCommon : public cc_x509::asn1::der::field::RawIntegerCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SerialNumber field.
            static const char* name()
            {
                return "serialNumber";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Signature field.
        using SignatureMembersCommon = cc_x509::field::AlgorithmIdentifierMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Signature field.
        struct SignatureCommon : public cc_x509::field::AlgorithmIdentifierCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Signature field.
            static const char* name()
            {
                return "signature";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Issuer field.
        using IssuerMembersCommon = cc_x509::field::NameMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Issuer field.
        struct IssuerCommon : public cc_x509::field::NameCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Issuer field.
            static const char* name()
            {
                return "issuer";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Validity field.
        using ValidityMembersCommon = cc_x509::field::ValidityMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Validity field.
        struct ValidityCommon : public cc_x509::field::ValidityCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Validity field.
            static const char* name()
            {
                return "validity";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Subject field.
        using SubjectMembersCommon = cc_x509::field::NameMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Subject field.
        struct SubjectCommon : public cc_x509::field::NameCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Subject field.
            static const char* name()
            {
                return "subject";
            }
        };

        /// @brief Common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectPublicKeyInfo field.
        using SubjectPublicKeyInfoMembersCommon = cc_x509::field::SubjectPublicKeyInfoMembersCommon;

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectPublicKeyInfo field.
        struct SubjectPublicKeyInfoCommon : public cc_x509::field::SubjectPublicKeyInfoCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectPublicKeyInfo field.
            static const char* name()
            {
                return "subjectPublicKeyInfo";
            }
        };

        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueID field.
        struct IssuerUniqueIDMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueID field.
            struct ActIssuerUniqueIDMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Tag field.
                struct TagCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Tag field.
                    using ValueType = std::uint8_t;

                    /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Tag field.
                    static const char* name()
                    {
                        return "Tag";
                    }

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                };

                /// @brief Common definitions of the member fields of
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Length field.
                using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Length field.
                using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Shift field.
                struct ShiftCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Shift field.
                    using ValueType = std::uint8_t;

                    /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Shift field.
                    static const char* name()
                    {
                        return "Shift";
                    }

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                };

                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Value field.
                struct ValueCommon
                {
                    /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueIDMembers::Value field.
                    static const char* name()
                    {
                        return "Value";
                    }
                };
            };

            /// @brief Common types and functions for
            ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueID field.
            struct ActIssuerUniqueIDCommon
            {
                /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueIDMembers::ActIssuerUniqueID field.
                static const char* name()
                {
                    return "actIssuerUniqueID";
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueID field.
        struct IssuerUniqueIDCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::IssuerUniqueID field.
            static const char* name()
            {
                return "issuerUniqueID";
            }
        };

        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueID field.
        struct SubjectUniqueIDMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueID field.
            struct ActSubjectUniqueIDMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Tag field.
                struct TagCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Tag field.
                    using ValueType = std::uint8_t;

                    /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Tag field.
                    static const char* name()
                    {
                        return "Tag";
                    }

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                };

                /// @brief Common definitions of the member fields of
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Length field.
                using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Length field.
                using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Shift field.
                struct ShiftCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Shift field.
                    using ValueType = std::uint8_t;

                    /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Shift field.
                    static const char* name()
                    {
                        return "Shift";
                    }

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                };

                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Value field.
                struct ValueCommon
                {
                    /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueIDMembers::Value field.
                    static const char* name()
                    {
                        return "Value";
                    }
                };
            };

            /// @brief Common types and functions for
            ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueID field.
            struct ActSubjectUniqueIDCommon
            {
                /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueIDMembers::ActSubjectUniqueID field.
                static const char* name()
                {
                    return "actSubjectUniqueID";
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueID field.
        struct SubjectUniqueIDCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::SubjectUniqueID field.
            static const char* name()
            {
                return "subjectUniqueID";
            }
        };

        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Extensions field.
        struct ExtensionsMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensions field.
            struct ActExtensionsMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::Tag field.
                struct TagCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::Tag field.
                    using ValueType = std::uint8_t;

                    /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::Tag field.
                    static const char* name()
                    {
                        return "Tag";
                    }

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                };

                /// @brief Common definitions of the member fields of
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::Length field.
                using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::Length field.
                using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

                /// @brief Scope for all the common definitions of the member fields of
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::Value field.
                struct ValueMembersCommon
                {
                    /// @brief Common types and functions for
                    ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Tag field.
                    struct TagCommon
                    {
                        /// @brief Re-definition of the value type used by
                        ///     cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Tag field.
                        using ValueType = std::uint8_t;

                        /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Tag field.
                        static const char* name()
                        {
                            return "Tag";
                        }

                        /// @brief Compile time detection of special values presence.
                        static constexpr bool hasSpecials()
                        {
                            return false;
                        }
                    };

                    /// @brief Common definitions of the member fields of
                    ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Length field.
                    using LengthMembersCommon = cc_x509::asn1::der::field::LengthMembersCommon;

                    /// @brief Common types and functions for
                    ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Length field.
                    using LengthCommon = cc_x509::asn1::der::field::LengthCommon;

                    /// @brief Common types and functions for
                    ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Value field.
                    struct ValueCommon
                    {
                        /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::ValueMembers::Value field.
                        static const char* name()
                        {
                            return "Value";
                        }
                    };
                };

                /// @brief Common types and functions for
                ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::Value field.
                struct ValueCommon
                {
                    /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensionsMembers::Value field.
                    static const char* name()
                    {
                        return "Value";
                    }
                };
            };

            /// @brief Common types and functions for
            ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensions field.
            struct ActExtensionsCommon
            {
                /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::ExtensionsMembers::ActExtensions field.
                static const char* name()
                {
                    return "actExtensions";
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Extensions field.
        struct ExtensionsCommon
        {
            /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::ValueMembers::Extensions field.
            static const char* name()
            {
                return "extensions";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_x509::field::TBSCertificateMembers::Value field.
    struct ValueCommon
    {
        /// @brief Name of the @ref cc_x509::field::TBSCertificateMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref cc_x509::field::TBSCertificate field.
struct TBSCertificateCommon
{
    /// @brief Name of the @ref cc_x509::field::TBSCertificate field.
    static const char* name()
    {
        return "TBSCertificate";
    }
};

} // namespace field

} // namespace cc_x509
