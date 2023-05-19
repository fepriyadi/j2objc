//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/base/CommonMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseCommonMatcher")
#ifdef RESTRICT_ComGoogleCommonBaseCommonMatcher
#define INCLUDE_ALL_ComGoogleCommonBaseCommonMatcher 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseCommonMatcher 1
#endif
#undef RESTRICT_ComGoogleCommonBaseCommonMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseCommonMatcher_) && (INCLUDE_ALL_ComGoogleCommonBaseCommonMatcher || defined(INCLUDE_ComGoogleCommonBaseCommonMatcher))
#define ComGoogleCommonBaseCommonMatcher_

/*!
 @brief The subset of the <code>java.util.regex.Matcher</code> API which is used by this package, and also
  shared with the <code>re2j</code> library.For internal use only.
 Please refer to the <code>Matcher</code>
  javadoc for details.
 */
@interface ComGoogleCommonBaseCommonMatcher : NSObject

#pragma mark Public

- (jint)end;

- (jboolean)find;

- (jboolean)findWithInt:(jint)index;

- (jboolean)matches;

- (NSString *)replaceAllWithNSString:(NSString * __nonnull)replacement;

- (jint)start;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCommonMatcher)

FOUNDATION_EXPORT void ComGoogleCommonBaseCommonMatcher_initPackagePrivate(ComGoogleCommonBaseCommonMatcher *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCommonMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseCommonMatcher")