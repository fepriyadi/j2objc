//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/interfaces/DHPrivateKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoInterfacesDHPrivateKey")
#ifdef RESTRICT_JavaxCryptoInterfacesDHPrivateKey
#define INCLUDE_ALL_JavaxCryptoInterfacesDHPrivateKey 0
#else
#define INCLUDE_ALL_JavaxCryptoInterfacesDHPrivateKey 1
#endif
#undef RESTRICT_JavaxCryptoInterfacesDHPrivateKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoInterfacesDHPrivateKey_) && (INCLUDE_ALL_JavaxCryptoInterfacesDHPrivateKey || defined(INCLUDE_JavaxCryptoInterfacesDHPrivateKey))
#define JavaxCryptoInterfacesDHPrivateKey_

#define RESTRICT_JavaxCryptoInterfacesDHKey 1
#define INCLUDE_JavaxCryptoInterfacesDHKey 1
#include "javax/crypto/interfaces/DHKey.h"

#define RESTRICT_JavaSecurityPrivateKey 1
#define INCLUDE_JavaSecurityPrivateKey 1
#include "java/security/PrivateKey.h"

@class JavaMathBigInteger;

/*!
 @brief The interface to a Diffie-Hellman private key.
 @author Jan Luehe
 - seealso: DHKey
 - seealso: DHPublicKey
 @since 1.4
 */
@protocol JavaxCryptoInterfacesDHPrivateKey < JavaxCryptoInterfacesDHKey, JavaSecurityPrivateKey, JavaObject >

/*!
 @brief Returns the private value, <code>x</code>.
 @return the private value, <code>x</code>
 */
- (JavaMathBigInteger *)getX;

@end

@interface JavaxCryptoInterfacesDHPrivateKey : NSObject
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoInterfacesDHPrivateKey)

/*!
 @brief The class fingerprint that is set to indicate serialization
  compatibility since J2SE 1.4.
 */
inline jlong JavaxCryptoInterfacesDHPrivateKey_get_serialVersionUID(void);
#define JavaxCryptoInterfacesDHPrivateKey_serialVersionUID 2211791113380396553LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaxCryptoInterfacesDHPrivateKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoInterfacesDHPrivateKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoInterfacesDHPrivateKey")
