//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/base/CommonPattern.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseCommonPattern")
#ifdef RESTRICT_ComGoogleCommonBaseCommonPattern
#define INCLUDE_ALL_ComGoogleCommonBaseCommonPattern 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseCommonPattern 1
#endif
#undef RESTRICT_ComGoogleCommonBaseCommonPattern

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseCommonPattern_) && (INCLUDE_ALL_ComGoogleCommonBaseCommonPattern || defined(INCLUDE_ComGoogleCommonBaseCommonPattern))
#define ComGoogleCommonBaseCommonPattern_

@class ComGoogleCommonBaseCommonMatcher;
@protocol JavaLangCharSequence;

/*!
 @brief The subset of the <code>java.util.regex.Pattern</code> API which is used by this package, and also
  shared with the <code>re2j</code> library.For internal use only.
 Please refer to the <code>Pattern</code>
  javadoc for details.
 */
@interface ComGoogleCommonBaseCommonPattern : NSObject

#pragma mark Public

+ (ComGoogleCommonBaseCommonPattern *)compileWithNSString:(NSString * __nonnull)pattern;

- (jint)flags;

+ (jboolean)isPcreLike;

- (ComGoogleCommonBaseCommonMatcher *)matcherWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)t;

- (NSString *)pattern;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseCommonPattern)

FOUNDATION_EXPORT void ComGoogleCommonBaseCommonPattern_initPackagePrivate(ComGoogleCommonBaseCommonPattern *self);

FOUNDATION_EXPORT ComGoogleCommonBaseCommonPattern *ComGoogleCommonBaseCommonPattern_compileWithNSString_(NSString *pattern);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseCommonPattern_isPcreLike(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCommonPattern)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseCommonPattern")