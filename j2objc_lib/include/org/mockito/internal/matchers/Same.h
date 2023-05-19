//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Same.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersSame")
#ifdef RESTRICT_OrgMockitoInternalMatchersSame
#define INCLUDE_ALL_OrgMockitoInternalMatchersSame 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersSame 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersSame

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersSame_) && (INCLUDE_ALL_OrgMockitoInternalMatchersSame || defined(INCLUDE_OrgMockitoInternalMatchersSame))
#define OrgMockitoInternalMatchersSame_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface OrgMockitoInternalMatchersSame : NSObject < OrgMockitoArgumentMatcher, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)wanted;

- (jboolean)matchesWithId:(id)actual;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersSame)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersSame_initWithId_(OrgMockitoInternalMatchersSame *self, id wanted);

FOUNDATION_EXPORT OrgMockitoInternalMatchersSame *new_OrgMockitoInternalMatchersSame_initWithId_(id wanted) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersSame *create_OrgMockitoInternalMatchersSame_initWithId_(id wanted);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersSame)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersSame")
