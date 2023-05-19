//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/ProviderNotFoundException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileProviderNotFoundException")
#ifdef RESTRICT_JavaNioFileProviderNotFoundException
#define INCLUDE_ALL_JavaNioFileProviderNotFoundException 0
#else
#define INCLUDE_ALL_JavaNioFileProviderNotFoundException 1
#endif
#undef RESTRICT_JavaNioFileProviderNotFoundException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileProviderNotFoundException_) && (INCLUDE_ALL_JavaNioFileProviderNotFoundException || defined(INCLUDE_JavaNioFileProviderNotFoundException))
#define JavaNioFileProviderNotFoundException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Runtime exception thrown when a provider of the required type cannot be found.
 */
@interface JavaNioFileProviderNotFoundException : JavaLangRuntimeException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an instance of this class.
 @param msg the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileProviderNotFoundException)

inline jlong JavaNioFileProviderNotFoundException_get_serialVersionUID(void);
#define JavaNioFileProviderNotFoundException_serialVersionUID -1880012509822920354LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioFileProviderNotFoundException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNioFileProviderNotFoundException_init(JavaNioFileProviderNotFoundException *self);

FOUNDATION_EXPORT JavaNioFileProviderNotFoundException *new_JavaNioFileProviderNotFoundException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileProviderNotFoundException *create_JavaNioFileProviderNotFoundException_init(void);

FOUNDATION_EXPORT void JavaNioFileProviderNotFoundException_initWithNSString_(JavaNioFileProviderNotFoundException *self, NSString *msg);

FOUNDATION_EXPORT JavaNioFileProviderNotFoundException *new_JavaNioFileProviderNotFoundException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileProviderNotFoundException *create_JavaNioFileProviderNotFoundException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileProviderNotFoundException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileProviderNotFoundException")