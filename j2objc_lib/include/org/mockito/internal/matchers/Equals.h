//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Equals.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersEquals")
#ifdef RESTRICT_OrgMockitoInternalMatchersEquals
#define INCLUDE_ALL_OrgMockitoInternalMatchersEquals 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersEquals 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersEquals

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersEquals_) && (INCLUDE_ALL_OrgMockitoInternalMatchersEquals || defined(INCLUDE_OrgMockitoInternalMatchersEquals))
#define OrgMockitoInternalMatchersEquals_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_OrgMockitoInternalMatchersContainsExtraTypeInfo 1
#define INCLUDE_OrgMockitoInternalMatchersContainsExtraTypeInfo 1
#include "org/mockito/internal/matchers/ContainsExtraTypeInfo.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface OrgMockitoInternalMatchersEquals : NSObject < OrgMockitoArgumentMatcher, OrgMockitoInternalMatchersContainsExtraTypeInfo, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)wanted;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)matchesWithId:(id)actual;

- (NSString *)description;

- (NSString *)toStringWithType;

- (jboolean)typeMatchesWithId:(id)target;

#pragma mark Protected

- (id)getWanted;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersEquals)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersEquals_initWithId_(OrgMockitoInternalMatchersEquals *self, id wanted);

FOUNDATION_EXPORT OrgMockitoInternalMatchersEquals *new_OrgMockitoInternalMatchersEquals_initWithId_(id wanted) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersEquals *create_OrgMockitoInternalMatchersEquals_initWithId_(id wanted);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersEquals)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersEquals")
