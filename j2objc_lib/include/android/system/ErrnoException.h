//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/android/system/ErrnoException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidSystemErrnoException")
#ifdef RESTRICT_AndroidSystemErrnoException
#define INCLUDE_ALL_AndroidSystemErrnoException 0
#else
#define INCLUDE_ALL_AndroidSystemErrnoException 1
#endif
#undef RESTRICT_AndroidSystemErrnoException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidSystemErrnoException_) && (INCLUDE_ALL_AndroidSystemErrnoException || defined(INCLUDE_AndroidSystemErrnoException))
#define AndroidSystemErrnoException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaIoIOException;
@class JavaLangThrowable;
@class JavaNetSocketException;

/*!
 @brief A checked exception thrown when <code>Os</code> methods fail.This exception contains the native
  errno value, for comparison against the constants in <code>OsConstants</code>, should sophisticated
  callers need to adjust their behavior based on the exact failure.
 */
@interface AndroidSystemErrnoException : JavaLangException {
 @public
  /*!
   @brief The errno value, for comparison with the <code>E</code> constants in <code>OsConstants</code>.
   */
  jint errno__;
}

#pragma mark Public

/*!
 @brief Constructs an instance with the given function name and errno value.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)functionName
                                   withInt:(jint)errno_;

/*!
 @brief Constructs an instance with the given function name, errno value, and cause.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)functionName
                                   withInt:(jint)errno_
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Converts the stashed function name and errno value to a human-readable string.
 We do this here rather than in the constructor so that callers only pay for
  this if they need it.
 */
- (NSString *)getMessage;

/*!
 */
- (JavaIoIOException *)rethrowAsIOException;

/*!
 */
- (JavaNetSocketException *)rethrowAsSocketException;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidSystemErrnoException)

FOUNDATION_EXPORT void AndroidSystemErrnoException_initWithNSString_withInt_(AndroidSystemErrnoException *self, NSString *functionName, jint errno_);

FOUNDATION_EXPORT AndroidSystemErrnoException *new_AndroidSystemErrnoException_initWithNSString_withInt_(NSString *functionName, jint errno_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidSystemErrnoException *create_AndroidSystemErrnoException_initWithNSString_withInt_(NSString *functionName, jint errno_);

FOUNDATION_EXPORT void AndroidSystemErrnoException_initWithNSString_withInt_withJavaLangThrowable_(AndroidSystemErrnoException *self, NSString *functionName, jint errno_, JavaLangThrowable *cause);

FOUNDATION_EXPORT AndroidSystemErrnoException *new_AndroidSystemErrnoException_initWithNSString_withInt_withJavaLangThrowable_(NSString *functionName, jint errno_, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidSystemErrnoException *create_AndroidSystemErrnoException_initWithNSString_withInt_withJavaLangThrowable_(NSString *functionName, jint errno_, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(AndroidSystemErrnoException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidSystemErrnoException")
