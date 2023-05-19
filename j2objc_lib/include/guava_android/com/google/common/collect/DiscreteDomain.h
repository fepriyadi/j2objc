//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/DiscreteDomain.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain")
#ifdef RESTRICT_ComGoogleCommonCollectDiscreteDomain
#define INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain 1
#endif
#undef RESTRICT_ComGoogleCommonCollectDiscreteDomain

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectDiscreteDomain_) && (INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain || defined(INCLUDE_ComGoogleCommonCollectDiscreteDomain))
#define ComGoogleCommonCollectDiscreteDomain_

@protocol JavaLangComparable;

/*!
 @brief A descriptor for a <i>discrete</i> <code>Comparable</code> domain such as all <code>Integer</code>
  instances.A discrete domain is one that supports the three basic operations: <code>next</code>,
  <code>previous</code> and <code>distance</code>, according to their specifications.
 The methods <code>minValue</code>
  and <code>maxValue</code> should also be overridden for bounded types. 
 <p>A discrete domain always represents the <i>entire</i> set of values of its type; it cannot
  represent partial domains such as "prime integers" or "strings of length 5." 
 <p>See the Guava User Guide section on <a href="https://github.com/google/guava/wiki/RangesExplained#discrete-domains">
  <code>DiscreteDomain</code>
 </a>.
 @author Kevin Bourrillion
 @since 10.0
 */
@interface ComGoogleCommonCollectDiscreteDomain : NSObject {
 @public
  jboolean supportsFastOffset_;
}

#pragma mark Public

/*!
 @brief Returns the discrete domain for values of type <code>BigInteger</code>.
 @since 15.0
 */
+ (ComGoogleCommonCollectDiscreteDomain *)bigIntegers;

/*!
 @brief Returns a signed value indicating how many nested invocations of <code>next</code> (if positive) or 
 <code>previous</code> (if negative) are needed to reach <code>end</code> starting from <code>start</code>.
 For example, if <code>end = next(next(next(start)))</code>, then <code>distance(start, end) == 3</code>
  and <code>distance(end, start) == -3</code>. As well, <code>distance(a, a)</code> is always zero. 
 <p>Note that this function is necessarily well-defined for any discrete type.
 @return the distance as described above, or <code>Long.MIN_VALUE</code> or <code>Long.MAX_VALUE</code> if
      the distance is too small or too large, respectively.
 */
- (jlong)distanceWithJavaLangComparable:(id<JavaLangComparable> __nonnull)start
                 withJavaLangComparable:(id<JavaLangComparable> __nonnull)end;

/*!
 @brief Returns the discrete domain for values of type <code>Integer</code>.
 @since 14.0 (since 10.0 as <code>DiscreteDomains.integers()</code>)
 */
+ (ComGoogleCommonCollectDiscreteDomain *)integers;

/*!
 @brief Returns the discrete domain for values of type <code>Long</code>.
 @since 14.0 (since 10.0 as <code>DiscreteDomains.longs()</code>)
 */
+ (ComGoogleCommonCollectDiscreteDomain *)longs;

/*!
 @brief Returns the maximum value of type <code>C</code>, if it has one.The maximum value is the unique
  value for which <code>Comparable.compareTo(Object)</code> never returns a negative value for any
  input of type <code>C</code>.
 <p>The default implementation throws <code>NoSuchElementException</code>.
 @return the maximum value of type <code>C</code>; never null
 @throw NoSuchElementExceptionif the type has no (practical) maximum value; for example,
      <code>java.math.BigInteger</code>
 */
- (id<JavaLangComparable>)maxValue;

/*!
 @brief Returns the minimum value of type <code>C</code>, if it has one.The minimum value is the unique
  value for which <code>Comparable.compareTo(Object)</code> never returns a positive value for any
  input of type <code>C</code>.
 <p>The default implementation throws <code>NoSuchElementException</code>.
 @return the minimum value of type <code>C</code>; never null
 @throw NoSuchElementExceptionif the type has no (practical) minimum value; for example,
      <code>java.math.BigInteger</code>
 */
- (id<JavaLangComparable>)minValue;

/*!
 @brief Returns the unique least value of type <code>C</code> that is greater than <code>value</code>, or <code>null</code>
  if none exists.Inverse operation to <code>previous</code>.
 @param value any value of type <code>C</code>
 @return the least value greater than <code>value</code>, or <code>null</code> if <code>value</code> is <code>maxValue()</code>
 */
- (id<JavaLangComparable>)nextWithJavaLangComparable:(id<JavaLangComparable> __nonnull)value;

/*!
 @brief Returns the unique greatest value of type <code>C</code> that is less than <code>value</code>, or <code>null</code>
  if none exists.Inverse operation to <code>next</code>.
 @param value any value of type <code>C</code>
 @return the greatest value less than <code>value</code>, or <code>null</code> if <code>value</code> is <code>minValue()</code>
 */
- (id<JavaLangComparable>)previousWithJavaLangComparable:(id<JavaLangComparable> __nonnull)value;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

#pragma mark Package-Private

/*!
 @brief Returns, conceptually, "origin + distance", or equivalently, the result of calling <code>next</code>
  on <code>origin</code> <code>distance</code> times.
 */
- (id<JavaLangComparable>)offsetWithJavaLangComparable:(id<JavaLangComparable> __nonnull)origin
                                              withLong:(jlong)distance;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDiscreteDomain)

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_integers(void);

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_longs(void);

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_bigIntegers(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectDiscreteDomain_init(ComGoogleCommonCollectDiscreteDomain *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDiscreteDomain)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectDiscreteDomain")