//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/temporal/ValueRange.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeTemporalValueRange")
#ifdef RESTRICT_JavaTimeTemporalValueRange
#define INCLUDE_ALL_JavaTimeTemporalValueRange 0
#else
#define INCLUDE_ALL_JavaTimeTemporalValueRange 1
#endif
#undef RESTRICT_JavaTimeTemporalValueRange

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeTemporalValueRange_) && (INCLUDE_ALL_JavaTimeTemporalValueRange || defined(INCLUDE_JavaTimeTemporalValueRange))
#define JavaTimeTemporalValueRange_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaTimeTemporalTemporalField;

/*!
 @brief The range of valid values for a date-time field.
 <p>
  All <code>TemporalField</code> instances have a valid range of values.
  For example, the ISO day-of-month runs from 1 to somewhere between 28 and 31.
  This class captures that valid range. 
 <p>
  It is important to be aware of the limitations of this class.
  Only the minimum and maximum values are provided.
  It is possible for there to be invalid values within the outer range.
  For example, a weird field may have valid values of 1, 2, 4, 6, 7, thus
  have a range of '1 - 7', despite that fact that values 3 and 5 are invalid. 
 <p>
  Instances of this class are not tied to a specific field.
 @since 1.8
 */
@interface JavaTimeTemporalValueRange : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Checks that the specified value is valid and fits in an <code>int</code>.
 <p>
  This validates that the value is within the valid range of values and that
  all valid values are within the bounds of an <code>int</code>.
  The field is only used to improve the error message.
 @param value the value to check
 @param field the field being checked, may be null
 @return the value that was passed in
 - seealso: #isValidIntValue(long)
 */
- (jint)checkValidIntValueWithLong:(jlong)value
 withJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Checks that the specified value is valid.
 <p>
  This validates that the value is within the valid range of values.
  The field is only used to improve the error message.
 @param value the value to check
 @param field the field being checked, may be null
 @return the value that was passed in
 - seealso: #isValidValue(long)
 */
- (jlong)checkValidValueWithLong:(jlong)value
withJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Checks if this range is equal to another range.
 <p>
  The comparison is based on the four values, minimum, largest minimum,
  smallest maximum and maximum.
  Only objects of type <code>ValueRange</code> are compared, other types return false.
 @param obj the object to check, null returns false
 @return true if this is equal to the other range
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Gets the largest possible minimum value that the field can take.
 <p>
  For example, the ISO day-of-month always starts at 1.
  The largest minimum is therefore 1.
 @return the largest possible minimum value for this field
 */
- (jlong)getLargestMinimum;

/*!
 @brief Gets the maximum value that the field can take.
 <p>
  For example, the ISO day-of-month runs to between 28 and 31 days.
  The maximum is therefore 31.
 @return the maximum value for this field
 */
- (jlong)getMaximum;

/*!
 @brief Gets the minimum value that the field can take.
 <p>
  For example, the ISO day-of-month always starts at 1.
  The minimum is therefore 1.
 @return the minimum value for this field
 */
- (jlong)getMinimum;

/*!
 @brief Gets the smallest possible maximum value that the field can take.
 <p>
  For example, the ISO day-of-month runs to between 28 and 31 days.
  The smallest maximum is therefore 28.
 @return the smallest possible maximum value for this field
 */
- (jlong)getSmallestMaximum;

/*!
 @brief A hash code for this range.
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Is the value range fixed and fully known.
 <p>
  For example, the ISO day-of-month runs from 1 to between 28 and 31.
  Since there is uncertainty about the maximum value, the range is not fixed.
  However, for the month of January, the range is always 1 to 31, thus it is fixed.
 @return true if the set of values is fixed
 */
- (jboolean)isFixed;

/*!
 @brief Checks if all values in the range fit in an <code>int</code>.
 <p>
  This checks that all valid values are within the bounds of an <code>int</code>.
  <p>
  For example, the ISO month-of-year has values from 1 to 12, which fits in an <code>int</code>.
  By comparison, ISO nano-of-day runs from 1 to 86,400,000,000,000 which does not fit in an <code>int</code>.
  <p>
  This implementation uses <code>getMinimum()</code> and <code>getMaximum()</code>.
 @return true if a valid value always fits in an <code>int</code>
 */
- (jboolean)isIntValue;

/*!
 @brief Checks if the value is within the valid range and that all values
  in the range fit in an <code>int</code>.
 <p>
  This method combines <code>isIntValue()</code> and <code>isValidValue(long)</code>.
 @param value the value to check
 @return true if the value is valid and fits in an <code>int</code>
 */
- (jboolean)isValidIntValueWithLong:(jlong)value;

/*!
 @brief Checks if the value is within the valid range.
 <p>
  This checks that the value is within the stored range of values.
 @param value the value to check
 @return true if the value is valid
 */
- (jboolean)isValidValueWithLong:(jlong)value;

/*!
 @brief Obtains a fixed value range.
 <p>
  This factory obtains a range where the minimum and maximum values are fixed.
  For example, the ISO month-of-year always runs from 1 to 12.
 @param min the minimum value
 @param max the maximum value
 @return the ValueRange for min, max, not null
 @throw IllegalArgumentExceptionif the minimum is greater than the maximum
 */
+ (JavaTimeTemporalValueRange *)ofWithLong:(jlong)min
                                  withLong:(jlong)max;

/*!
 @brief Obtains a variable value range.
 <p>
  This factory obtains a range where the minimum value is fixed and the maximum value may vary.
  For example, the ISO day-of-month always starts at 1, but ends between 28 and 31.
 @param min the minimum value
 @param maxSmallest the smallest maximum value
 @param maxLargest the largest maximum value
 @return the ValueRange for min, smallest max, largest max, not null
 @throw IllegalArgumentExceptionif
      the minimum is greater than the smallest maximum,
   or the smallest maximum is greater than the largest maximum
 */
+ (JavaTimeTemporalValueRange *)ofWithLong:(jlong)min
                                  withLong:(jlong)maxSmallest
                                  withLong:(jlong)maxLargest;

/*!
 @brief Obtains a fully variable value range.
 <p>
  This factory obtains a range where both the minimum and maximum value may vary.
 @param minSmallest the smallest minimum value
 @param minLargest the largest minimum value
 @param maxSmallest the smallest maximum value
 @param maxLargest the largest maximum value
 @return the ValueRange for smallest min, largest min, smallest max, largest max, not null
 @throw IllegalArgumentExceptionif
      the smallest minimum is greater than the smallest maximum,
   or the smallest maximum is greater than the largest maximum
   or the largest minimum is greater than the largest maximum
 */
+ (JavaTimeTemporalValueRange *)ofWithLong:(jlong)minSmallest
                                  withLong:(jlong)minLargest
                                  withLong:(jlong)maxSmallest
                                  withLong:(jlong)maxLargest;

/*!
 @brief Outputs this range as a <code>String</code>.
 <p>
  The format will be '{min}/{largestMin} - {smallestMax}/{max}',
  where the largestMin or smallestMax sections may be omitted, together
  with associated slash, if they are the same as the min or max.
 @return a string representation of this range, not null
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeTemporalValueRange)

FOUNDATION_EXPORT JavaTimeTemporalValueRange *JavaTimeTemporalValueRange_ofWithLong_withLong_(jlong min, jlong max);

FOUNDATION_EXPORT JavaTimeTemporalValueRange *JavaTimeTemporalValueRange_ofWithLong_withLong_withLong_(jlong min, jlong maxSmallest, jlong maxLargest);

FOUNDATION_EXPORT JavaTimeTemporalValueRange *JavaTimeTemporalValueRange_ofWithLong_withLong_withLong_withLong_(jlong minSmallest, jlong minLargest, jlong maxSmallest, jlong maxLargest);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeTemporalValueRange)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeTemporalValueRange")
