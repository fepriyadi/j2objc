//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/misusing/MissingMethodInvocationException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingMissingMethodInvocationException")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingMissingMethodInvocationException
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingMissingMethodInvocationException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingMissingMethodInvocationException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingMissingMethodInvocationException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoExceptionsMisusingMissingMethodInvocationException_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingMissingMethodInvocationException || defined(INCLUDE_OrgMockitoExceptionsMisusingMissingMethodInvocationException))
#define OrgMockitoExceptionsMisusingMissingMethodInvocationException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

@interface OrgMockitoExceptionsMisusingMissingMethodInvocationException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingMissingMethodInvocationException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingMissingMethodInvocationException_initWithNSString_(OrgMockitoExceptionsMisusingMissingMethodInvocationException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingMissingMethodInvocationException *new_OrgMockitoExceptionsMisusingMissingMethodInvocationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingMissingMethodInvocationException *create_OrgMockitoExceptionsMisusingMissingMethodInvocationException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingMissingMethodInvocationException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingMissingMethodInvocationException")