//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/misusing/RedundantListenerException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingRedundantListenerException")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingRedundantListenerException
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingRedundantListenerException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingRedundantListenerException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingRedundantListenerException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoExceptionsMisusingRedundantListenerException_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingRedundantListenerException || defined(INCLUDE_OrgMockitoExceptionsMisusingRedundantListenerException))
#define OrgMockitoExceptionsMisusingRedundantListenerException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

/*!
 @brief Reported when instance of <code>org.mockito.listeners.MockitoListener</code>
  is being added to Mockito (see <code>org.mockito.MockitoFramework</code>)
  and there is already a listener with this implementation type registered.
 Note that it is ok to add multiple <strong>different</strong> implementations of the same listener interface type. 
 <p>
  Indicates a user error - previous listener was not removed
  according to the API specification - see <code>org.mockito.MockitoFramework.addListener(MockitoListener)</code>.
 @since 2.5.2
 */
@interface OrgMockitoExceptionsMisusingRedundantListenerException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingRedundantListenerException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingRedundantListenerException_initWithNSString_(OrgMockitoExceptionsMisusingRedundantListenerException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingRedundantListenerException *new_OrgMockitoExceptionsMisusingRedundantListenerException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingRedundantListenerException *create_OrgMockitoExceptionsMisusingRedundantListenerException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingRedundantListenerException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingRedundantListenerException")
