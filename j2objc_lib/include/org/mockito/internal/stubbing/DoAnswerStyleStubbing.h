//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/DoAnswerStyleStubbing.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDoAnswerStyleStubbing")
#ifdef RESTRICT_OrgMockitoInternalStubbingDoAnswerStyleStubbing
#define INCLUDE_ALL_OrgMockitoInternalStubbingDoAnswerStyleStubbing 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDoAnswerStyleStubbing 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDoAnswerStyleStubbing

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalStubbingDoAnswerStyleStubbing_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDoAnswerStyleStubbing || defined(INCLUDE_OrgMockitoInternalStubbingDoAnswerStyleStubbing))
#define OrgMockitoInternalStubbingDoAnswerStyleStubbing_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class OrgMockitoQualityStrictness;
@protocol JavaUtilList;

/*!
 @brief Holds answers declared using 'doAnswer' stubbing style.
 */
@interface OrgMockitoInternalStubbingDoAnswerStyleStubbing : NSObject < JavaIoSerializable >

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

- (void)clear;

- (id<JavaUtilList>)getAnswers;

- (OrgMockitoQualityStrictness *)getStubbingStrictness;

- (jboolean)isSet;

- (void)setAnswersWithJavaUtilList:(id<JavaUtilList>)answers
   withOrgMockitoQualityStrictness:(OrgMockitoQualityStrictness *)stubbingStrictness;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDoAnswerStyleStubbing)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDoAnswerStyleStubbing_initPackagePrivate(OrgMockitoInternalStubbingDoAnswerStyleStubbing *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDoAnswerStyleStubbing *new_OrgMockitoInternalStubbingDoAnswerStyleStubbing_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDoAnswerStyleStubbing *create_OrgMockitoInternalStubbingDoAnswerStyleStubbing_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDoAnswerStyleStubbing)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDoAnswerStyleStubbing")
