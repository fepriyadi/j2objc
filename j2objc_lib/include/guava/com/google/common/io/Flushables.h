//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/io/Flushables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoFlushables")
#ifdef RESTRICT_ComGoogleCommonIoFlushables
#define INCLUDE_ALL_ComGoogleCommonIoFlushables 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoFlushables 1
#endif
#undef RESTRICT_ComGoogleCommonIoFlushables

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoFlushables_) && (INCLUDE_ALL_ComGoogleCommonIoFlushables || defined(INCLUDE_ComGoogleCommonIoFlushables))
#define ComGoogleCommonIoFlushables_

@protocol JavaIoFlushable;

/*!
 @brief Utility methods for working with <code>Flushable</code> objects.
 @author Michael Lancaster
 @since 1.0
 */
@interface ComGoogleCommonIoFlushables : NSObject

#pragma mark Public

/*!
 @brief Flush a <code>Flushable</code>, with control over whether an <code>IOException</code> may be thrown.
 <p>If <code>swallowIOException</code> is true, then we don't rethrow <code>IOException</code>, but merely
  log it.
 @param flushable the <code>Flushable</code>  object to be flushed.
 @param swallowIOException if true, don't propagate IO exceptions thrown by the <code>flush</code>      method
 @throw IOExceptionif <code>swallowIOException</code> is false and <code>Flushable.flush</code> throws
      an <code>IOException</code>.
 - seealso: Closeables#close
 */
+ (void)flushWithJavaIoFlushable:(id<JavaIoFlushable> __nonnull)flushable
                     withBoolean:(jboolean)swallowIOException;

/*!
 @brief Equivalent to calling <code>flush(flushable, true)</code>, but with no <code>IOException</code> in the
  signature.
 @param flushable the <code>Flushable</code>  object to be flushed.
 */
+ (void)flushQuietlyWithJavaIoFlushable:(id<JavaIoFlushable> __nonnull)flushable;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoFlushables)

FOUNDATION_EXPORT void ComGoogleCommonIoFlushables_flushWithJavaIoFlushable_withBoolean_(id<JavaIoFlushable> flushable, jboolean swallowIOException);

FOUNDATION_EXPORT void ComGoogleCommonIoFlushables_flushQuietlyWithJavaIoFlushable_(id<JavaIoFlushable> flushable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFlushables)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoFlushables")
