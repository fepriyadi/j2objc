//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/util/concurrent/AtomicLongMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAtomicLongMap
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAtomicLongMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAtomicLongMap_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap || defined(INCLUDE_ComGoogleCommonUtilConcurrentAtomicLongMap))
#define ComGoogleCommonUtilConcurrentAtomicLongMap_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaUtilFunctionLongBinaryOperator;
@protocol JavaUtilFunctionLongUnaryOperator;
@protocol JavaUtilMap;

/*!
 @brief A map containing <code>long</code> values that can be atomically updated.While writes to a
  traditional <code>Map</code> rely on <code>put(K, V)</code>, the typical mechanism for writing to this map
  is <code>addAndGet(K, long)</code>, which adds a <code>long</code> to the value currently associated with 
 <code>K</code>.
 If a key has not yet been associated with a value, its implicit value is zero. 
 <p>Most methods in this class treat absent values and zero values identically, as individually
  documented. Exceptions to this are <code>containsKey</code>, <code>size</code>, <code>isEmpty</code>, <code>asMap</code>
 , and <code>toString</code>.
  
 <p>Instances of this class may be used by multiple threads concurrently. All operations are
  atomic unless otherwise noted. 
 <p><b>Note:</b> If your values are always positive and less than 2^31, you may wish to use a 
 <code>com.google.common.collect.Multiset</code> such as <code>com.google.common.collect.ConcurrentHashMultiset</code>
  instead. 
 <p><b>Warning:</b> Unlike <code>Multiset</code>, entries whose values are zero are not automatically
  removed from the map. Instead they must be removed manually with <code>removeAllZeros</code>.
 @author Charles Fry
 @since 11.0
 */
@interface ComGoogleCommonUtilConcurrentAtomicLongMap : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Updates the value currently associated with <code>key</code> by combining it with <code>x</code> via the
  specified accumulator function, returning the new value.The previous value associated with 
 <code>key</code> (or zero, if there is none) is passed as the first argument to <code>accumulatorFunction</code>
 , and <code>x</code> is passed as the second argument.
 @since 21.0
 */
- (jlong)accumulateAndGetWithId:(id __nonnull)key
                       withLong:(jlong)x
withJavaUtilFunctionLongBinaryOperator:(id<JavaUtilFunctionLongBinaryOperator> __nonnull)accumulatorFunction;

/*!
 @brief Adds <code>delta</code> to the value currently associated with <code>key</code>, and returns the new
  value.
 */
- (jlong)addAndGetWithId:(id __nonnull)key
                withLong:(jlong)delta;

/*!
 @brief Returns a live, read-only view of the map backing this <code>AtomicLongMap</code>.
 */
- (id<JavaUtilMap>)asMap;

/*!
 @brief Removes all of the mappings from this map.The map will be empty after this call returns.
 <p>This method is not atomic: the map may not be empty after returning if there were concurrent
  writes.
 */
- (void)clear;

/*!
 @brief Returns true if this map contains a mapping for the specified key.
 */
- (jboolean)containsKeyWithId:(id __nonnull)key;

/*!
 @brief Creates an <code>AtomicLongMap</code>.
 */
+ (ComGoogleCommonUtilConcurrentAtomicLongMap *)create;

/*!
 @brief Creates an <code>AtomicLongMap</code> with the same mappings as the specified <code>Map</code>.
 */
+ (ComGoogleCommonUtilConcurrentAtomicLongMap *)createWithJavaUtilMap:(id<JavaUtilMap> __nonnull)m;

/*!
 @brief Decrements by one the value currently associated with <code>key</code>, and returns the new value.
 */
- (jlong)decrementAndGetWithId:(id __nonnull)key;

/*!
 @brief Returns the value associated with <code>key</code>, or zero if there is no value associated with 
 <code>key</code>.
 */
- (jlong)getWithId:(id __nonnull)key;

/*!
 @brief Updates the value currently associated with <code>key</code> by combining it with <code>x</code> via the
  specified accumulator function, returning the old value.The previous value associated with 
 <code>key</code> (or zero, if there is none) is passed as the first argument to <code>accumulatorFunction</code>
 , and <code>x</code> is passed as the second argument.
 @since 21.0
 */
- (jlong)getAndAccumulateWithId:(id __nonnull)key
                       withLong:(jlong)x
withJavaUtilFunctionLongBinaryOperator:(id<JavaUtilFunctionLongBinaryOperator> __nonnull)accumulatorFunction;

/*!
 @brief Adds <code>delta</code> to the value currently associated with <code>key</code>, and returns the old
  value.
 */
- (jlong)getAndAddWithId:(id __nonnull)key
                withLong:(jlong)delta;

/*!
 @brief Decrements by one the value currently associated with <code>key</code>, and returns the old value.
 */
- (jlong)getAndDecrementWithId:(id __nonnull)key;

/*!
 @brief Increments by one the value currently associated with <code>key</code>, and returns the old value.
 */
- (jlong)getAndIncrementWithId:(id __nonnull)key;

/*!
 @brief Updates the value currently associated with <code>key</code> with the specified function, and
  returns the old value.If there is not currently a value associated with <code>key</code>, the
  function is applied to <code>0L</code>.
 @since 21.0
 */
- (jlong)getAndUpdateWithId:(id __nonnull)key
withJavaUtilFunctionLongUnaryOperator:(id<JavaUtilFunctionLongUnaryOperator> __nonnull)updaterFunction;

/*!
 @brief Increments by one the value currently associated with <code>key</code>, and returns the new value.
 */
- (jlong)incrementAndGetWithId:(id __nonnull)key;

/*!
 @brief Returns <code>true</code> if this map contains no key-value mappings.
 */
- (jboolean)isEmpty;

/*!
 @brief Associates <code>newValue</code> with <code>key</code> in this map, and returns the value previously
  associated with <code>key</code>, or zero if there was no such value.
 */
- (jlong)putWithId:(id __nonnull)key
          withLong:(jlong)newValue;

/*!
 @brief Copies all of the mappings from the specified map to this map.The effect of this call is
  equivalent to that of calling <code>put(k, v)</code> on this map once for each mapping from key 
 <code>k</code> to value <code>v</code> in the specified map.
 The behavior of this operation is undefined
  if the specified map is modified while the operation is in progress.
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap> __nonnull)m;

/*!
 @brief Removes and returns the value associated with <code>key</code>.If <code>key</code> is not in the map,
  this method has no effect and returns zero.
 */
- (jlong)removeWithId:(id __nonnull)key;

/*!
 @brief Removes all mappings from this map whose values are zero.
 <p>This method is not atomic: the map may be visible in intermediate states, where some of the
  zero values have been removed and others have not.
 */
- (void)removeAllZeros;

/*!
 @brief Atomically remove <code>key</code> from the map iff its associated value is 0.
 @since 20.0
 */
- (jboolean)removeIfZeroWithId:(id __nonnull)key;

/*!
 @brief Returns the number of key-value mappings in this map.If the map contains more than <code>Integer.MAX_VALUE</code>
  elements, returns <code>Integer.MAX_VALUE</code>.
 */
- (jint)size;

/*!
 @brief Returns the sum of all values in this map.
 <p>This method is not atomic: the sum may or may not include other concurrent operations.
 */
- (jlong)sum;

- (NSString *)description;

/*!
 @brief Updates the value currently associated with <code>key</code> with the specified function, and
  returns the new value.If there is not currently a value associated with <code>key</code>, the
  function is applied to <code>0L</code>.
 @since 21.0
 */
- (jlong)updateAndGetWithId:(id __nonnull)key
withJavaUtilFunctionLongUnaryOperator:(id<JavaUtilFunctionLongUnaryOperator> __nonnull)updaterFunction;

#pragma mark Package-Private

/*!
 @brief If <code>key</code> is not already associated with a value or if <code>key</code> is associated with
  zero, associate it with <code>newValue</code>.Returns the previous value associated with <code>key</code>
 , or zero if there was no mapping for <code>key</code>.
 */
- (jlong)putIfAbsentWithId:(id __nonnull)key
                  withLong:(jlong)newValue;

/*!
 @brief If <code>(key, value)</code> is currently in the map, this method removes it and returns true;
  otherwise, this method returns false.
 */
- (jboolean)removeWithId:(id __nonnull)key
                withLong:(jlong)value;

/*!
 @brief If <code>(key, expectedOldValue)</code> is currently in the map, this method replaces <code>expectedOldValue</code>
  with <code>newValue</code> and returns true; otherwise, this method returns false.
 <p>If <code>expectedOldValue</code> is zero, this method will succeed if <code>(key, zero)</code> is
  currently in the map, or if <code>key</code> is not in the map at all.
 */
- (jboolean)replaceWithId:(id __nonnull)key
                 withLong:(jlong)expectedOldValue
                 withLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAtomicLongMap)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicLongMap *ComGoogleCommonUtilConcurrentAtomicLongMap_create(void);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAtomicLongMap *ComGoogleCommonUtilConcurrentAtomicLongMap_createWithJavaUtilMap_(id<JavaUtilMap> m);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAtomicLongMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomicLongMap")
