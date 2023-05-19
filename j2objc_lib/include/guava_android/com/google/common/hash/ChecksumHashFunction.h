//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/hash/ChecksumHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashChecksumHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashChecksumHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashChecksumHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashChecksumHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashChecksumHashFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashChecksumHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashChecksumHashFunction || defined(INCLUDE_ComGoogleCommonHashChecksumHashFunction))
#define ComGoogleCommonHashChecksumHashFunction_

#define RESTRICT_ComGoogleCommonHashAbstractHashFunction 1
#define INCLUDE_ComGoogleCommonHashAbstractHashFunction 1
#include "com/google/common/hash/AbstractHashFunction.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonHashHasher;
@protocol ComGoogleCommonHashImmutableSupplier;

/*!
 @brief <code>HashFunction</code> adapter for <code>Checksum</code> instances.
 @author Colin Decker
 */
@interface ComGoogleCommonHashChecksumHashFunction : ComGoogleCommonHashAbstractHashFunction < JavaIoSerializable >

#pragma mark Public

- (jint)bits;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonHashImmutableSupplier:(id<ComGoogleCommonHashImmutableSupplier> __nonnull)checksumSupplier
                                                                             withInt:(jint)bits
                                                                        withNSString:(NSString * __nonnull)toString;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashChecksumHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashChecksumHashFunction_initPackagePrivateWithComGoogleCommonHashImmutableSupplier_withInt_withNSString_(ComGoogleCommonHashChecksumHashFunction *self, id<ComGoogleCommonHashImmutableSupplier> checksumSupplier, jint bits, NSString *toString);

FOUNDATION_EXPORT ComGoogleCommonHashChecksumHashFunction *new_ComGoogleCommonHashChecksumHashFunction_initPackagePrivateWithComGoogleCommonHashImmutableSupplier_withInt_withNSString_(id<ComGoogleCommonHashImmutableSupplier> checksumSupplier, jint bits, NSString *toString) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashChecksumHashFunction *create_ComGoogleCommonHashChecksumHashFunction_initPackagePrivateWithComGoogleCommonHashImmutableSupplier_withInt_withNSString_(id<ComGoogleCommonHashImmutableSupplier> checksumSupplier, jint bits, NSString *toString);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashChecksumHashFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashChecksumHashFunction")