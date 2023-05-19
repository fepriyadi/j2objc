//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/matchers/ThrowableCauseMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher")
#ifdef RESTRICT_OrgJunitInternalMatchersThrowableCauseMatcher
#define INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher 0
#else
#define INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher 1
#endif
#undef RESTRICT_OrgJunitInternalMatchersThrowableCauseMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalMatchersThrowableCauseMatcher_) && (INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher || defined(INCLUDE_OrgJunitInternalMatchersThrowableCauseMatcher))
#define OrgJunitInternalMatchersThrowableCauseMatcher_

#define RESTRICT_OrgHamcrestTypeSafeMatcher 1
#define INCLUDE_OrgHamcrestTypeSafeMatcher 1
#include "org/hamcrest/TypeSafeMatcher.h"

@class IOSClass;
@class JavaLangThrowable;
@class OrgHamcrestInternalReflectiveTypeFinder;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief A matcher that applies a delegate matcher to the cause of the current Throwable, returning the result of that
  match.
 */
@interface OrgJunitInternalMatchersThrowableCauseMatcher : OrgHamcrestTypeSafeMatcher

#pragma mark Public

- (instancetype __nonnull)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)causeMatcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

/*!
 @brief Returns a matcher that verifies that the outer exception has a cause for which the supplied matcher
  evaluates to true.
 @param matcher to apply to the cause of the outer exception
 */
+ (id<OrgHamcrestMatcher>)hasCauseWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

#pragma mark Protected

- (void)describeMismatchSafelyWithId:(JavaLangThrowable *)item
          withOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesSafelyWithId:(JavaLangThrowable *)item;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithOrgHamcrestInternalReflectiveTypeFinder:(OrgHamcrestInternalReflectiveTypeFinder *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalMatchersThrowableCauseMatcher)

FOUNDATION_EXPORT void OrgJunitInternalMatchersThrowableCauseMatcher_initWithOrgHamcrestMatcher_(OrgJunitInternalMatchersThrowableCauseMatcher *self, id<OrgHamcrestMatcher> causeMatcher);

FOUNDATION_EXPORT OrgJunitInternalMatchersThrowableCauseMatcher *new_OrgJunitInternalMatchersThrowableCauseMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> causeMatcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalMatchersThrowableCauseMatcher *create_OrgJunitInternalMatchersThrowableCauseMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> causeMatcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitInternalMatchersThrowableCauseMatcher_hasCauseWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalMatchersThrowableCauseMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalMatchersThrowableCauseMatcher")
