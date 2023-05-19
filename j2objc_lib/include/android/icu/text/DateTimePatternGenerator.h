//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/text/DateTimePatternGenerator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuTextDateTimePatternGenerator")
#ifdef RESTRICT_AndroidIcuTextDateTimePatternGenerator
#define INCLUDE_ALL_AndroidIcuTextDateTimePatternGenerator 0
#else
#define INCLUDE_ALL_AndroidIcuTextDateTimePatternGenerator 1
#endif
#undef RESTRICT_AndroidIcuTextDateTimePatternGenerator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuTextDateTimePatternGenerator_) && (INCLUDE_ALL_AndroidIcuTextDateTimePatternGenerator || defined(INCLUDE_AndroidIcuTextDateTimePatternGenerator))
#define AndroidIcuTextDateTimePatternGenerator_

#define RESTRICT_AndroidIcuUtilFreezable 1
#define INCLUDE_AndroidIcuUtilFreezable 1
#include "android/icu/util/Freezable.h"

@class AndroidIcuImplUResource_Key;
@class AndroidIcuTextDateTimePatternGenerator_PatternInfo;
@class AndroidIcuUtilULocale;
@class JavaUtilLocale;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief This class provides flexible generation of date format patterns, like
  "yy-MM-dd".The user can build up the generator by adding successive
  patterns.
 Once that is done, a query can be made using a "skeleton", which is
  a pattern which just includes the desired fields and lengths. The generator
  will return the "best fit" pattern corresponding to that skeleton. 
 <p>
  The main method people will use is getBestPattern(String skeleton), since
  normally this class is pre-built with data from a particular locale. However,
  generators can be built directly from other data as well.
 */
@interface AndroidIcuTextDateTimePatternGenerator : NSObject < AndroidIcuUtilFreezable, NSCopying >
@property (readonly, class, strong) id<JavaUtilMap> LOCALE_TO_ALLOWED_HOUR NS_SWIFT_NAME(LOCALE_TO_ALLOWED_HOUR);
@property (readonly, class) jint ERA NS_SWIFT_NAME(ERA);
@property (readonly, class) jint YEAR NS_SWIFT_NAME(YEAR);
@property (readonly, class) jint QUARTER NS_SWIFT_NAME(QUARTER);
@property (readonly, class) jint MONTH NS_SWIFT_NAME(MONTH);
@property (readonly, class) jint WEEK_OF_YEAR NS_SWIFT_NAME(WEEK_OF_YEAR);
@property (readonly, class) jint WEEK_OF_MONTH NS_SWIFT_NAME(WEEK_OF_MONTH);
@property (readonly, class) jint WEEKDAY NS_SWIFT_NAME(WEEKDAY);
@property (readonly, class) jint DAY NS_SWIFT_NAME(DAY);
@property (readonly, class) jint DAY_OF_YEAR NS_SWIFT_NAME(DAY_OF_YEAR);
@property (readonly, class) jint DAY_OF_WEEK_IN_MONTH NS_SWIFT_NAME(DAY_OF_WEEK_IN_MONTH);
@property (readonly, class) jint DAYPERIOD NS_SWIFT_NAME(DAYPERIOD);
@property (readonly, class) jint HOUR NS_SWIFT_NAME(HOUR);
@property (readonly, class) jint MINUTE NS_SWIFT_NAME(MINUTE);
@property (readonly, class) jint SECOND NS_SWIFT_NAME(SECOND);
@property (readonly, class) jint FRACTIONAL_SECOND NS_SWIFT_NAME(FRACTIONAL_SECOND);
@property (readonly, class) jint ZONE NS_SWIFT_NAME(ZONE);
@property (readonly, class) jint TYPE_LIMIT NS_SWIFT_NAME(TYPE_LIMIT);
@property (readonly, class) jint MATCH_NO_OPTIONS NS_SWIFT_NAME(MATCH_NO_OPTIONS);
@property (readonly, class) jint MATCH_HOUR_FIELD_LENGTH NS_SWIFT_NAME(MATCH_HOUR_FIELD_LENGTH);
@property (readonly, class) jint MATCH_MINUTE_FIELD_LENGTH NS_SWIFT_NAME(MATCH_MINUTE_FIELD_LENGTH);
@property (readonly, class) jint MATCH_SECOND_FIELD_LENGTH NS_SWIFT_NAME(MATCH_SECOND_FIELD_LENGTH);
@property (readonly, class) jint MATCH_ALL_FIELDS_LENGTH NS_SWIFT_NAME(MATCH_ALL_FIELDS_LENGTH);

#pragma mark Public

/*!
 @brief Adds a pattern to the generator.If the pattern has the same skeleton as
  an existing pattern, and the override parameter is set, then the previous
  value is overridden.
 Otherwise, the previous value is retained. In either
  case, the conflicting information is returned in PatternInfo. 
 <p>
  Note that single-field patterns (like "MMM") are automatically added, and
  don't need to be added explicitly!
  * <p>Example code:external/icu/android_icu4j/src/samples/java/android/icu/samples/text/datetimepatterngenerator/DateTimePatternGeneratorSample.java addPatternExample
 @param pattern Pattern to add.
 @param override When existing values are to be overridden use true, otherwise             use false.
 @param returnInfo Returned information.
 */
- (AndroidIcuTextDateTimePatternGenerator *)addPatternWithNSString:(NSString *)pattern
                                                       withBoolean:(jboolean)override
            withAndroidIcuTextDateTimePatternGenerator_PatternInfo:(AndroidIcuTextDateTimePatternGenerator_PatternInfo *)returnInfo;

/*!
 @brief addPatternWithSkeleton:
  If skeletonToUse is specified, then an availableFormats entry is being added.In this case:
  1.
 We pass that skeleton to DateTimeMatcher().set instead of having it derive a skeleton from the pattern.
  2. If the new entry's skeleton or basePattern does match an existing entry but that entry also had a skeleton specified
  (i.e. it was also from availableFormats), then the new entry does not override it regardless of the value of the override
  parameter. This prevents later availableFormats entries from a parent locale overriding earlier ones from the actual
  specified locale. However, availableFormats entries *should* override entries with matching skeleton whose skeleton was
  derived (i.e. entries derived from the standard date/time patters for the specified locale).
  3. When adding the pattern (skeleton2pattern.put, basePattern_pattern.put), we set a field to indicate that the added
  entry had a specified skeleton.
 */
- (AndroidIcuTextDateTimePatternGenerator *)addPatternWithSkeletonWithNSString:(NSString *)pattern
                                                                  withNSString:(NSString *)skeletonToUse
                                                                   withBoolean:(jboolean)override
                        withAndroidIcuTextDateTimePatternGenerator_PatternInfo:(AndroidIcuTextDateTimePatternGenerator_PatternInfo *)returnInfo __attribute__((deprecated));

/*!
 @brief Returns a copy of this <code>DateTimePatternGenerator</code> object.
 @return A copy of this <code>DateTimePatternGenerator</code> object.
 */
- (id)java_clone;

/*!
 */
- (AndroidIcuTextDateTimePatternGenerator *)cloneAsThawed;

/*!
 */
- (AndroidIcuTextDateTimePatternGenerator *)freeze;

/*!
 */
+ (jint)getAppendFormatNumberWithAndroidIcuImplUResource_Key:(AndroidIcuImplUResource_Key *)key __attribute__((deprecated));

/*!
 */
+ (jint)getAppendFormatNumberWithNSString:(NSString *)string __attribute__((deprecated));

/*!
 @brief Getter corresponding to setAppendItemFormats.Values below 0 or at or
  above TYPE_LIMIT are illegal arguments.
 @param field The index to retrieve the append item formats.
 @return append pattern for field
 */
- (NSString *)getAppendItemFormatWithInt:(jint)field;

/*!
 @brief Getter corresponding to setAppendItemNames.Values below 0 or at or above
  TYPE_LIMIT are illegal arguments.
 @param field The index to get the append item name.
 @return name for field
 */
- (NSString *)getAppendItemNameWithInt:(jint)field;

/*!
 @brief Utility to return a unique base skeleton from a given pattern.This is
  the same as the skeleton, except that differences in length are minimized
  so as to only preserve the difference between string and numeric form.
 So
  for example, both "MMM-dd" and "d/MMM" produce the skeleton "MMMd"
  (notice the single d).
 @param pattern Input pattern, such as "dd/MMM"
 @return skeleton, such as "MMMdd"
 */
- (NSString *)getBaseSkeletonWithNSString:(NSString *)pattern;

/*!
 @brief Return a list of all the base skeletons (in canonical form) from this class
 */
- (id<JavaUtilSet>)getBaseSkeletonsWithJavaUtilSet:(id<JavaUtilSet>)result;

/*!
 @brief Return the best pattern matching the input skeleton.It is guaranteed to
  have all of the fields in the skeleton.
 <p>Example code:external/icu/android_icu4j/src/samples/java/android/icu/samples/text/datetimepatterngenerator/DateTimePatternGeneratorSample.java getBestPatternExample
 @param skeleton The skeleton is a pattern containing only the variable fields.             For example, "MMMdd" and "mmhh" are skeletons.
 @return Best pattern matching the input skeleton.
 */
- (NSString *)getBestPatternWithNSString:(NSString *)skeleton;

/*!
 @brief Return the best pattern matching the input skeleton.It is guaranteed to
  have all of the fields in the skeleton.
 @param skeleton The skeleton is a pattern containing only the variable fields.             For example, "MMMdd" and "mmhh" are skeletons.
 @param options MATCH_xxx options for forcing the length of specified fields in             the returned pattern to match those in the skeleton (when this would
              not happen otherwise). For default behavior, use MATCH_NO_OPTIONS.
 @return Best pattern matching the input skeleton (and options).
 */
- (NSString *)getBestPatternWithNSString:(NSString *)skeleton
                                 withInt:(jint)options;

/*!
 @brief Same as getSkeleton, but allows duplicates
  and returns a string using canonical pattern chars
 @param pattern Input pattern, such as "ccc, d LLL"
 @return skeleton, such as "MMMEd"
 */
- (NSString *)getCanonicalSkeletonAllowingDuplicatesWithNSString:(NSString *)pattern __attribute__((deprecated));

/*!
 @brief Getter corresponding to setDateTimeFormat.
 @return pattern
 */
- (NSString *)getDateTimeFormat;

/*!
 @brief Getter corresponding to setDecimal.
 @return string corresponding to the decimal point
 */
- (NSString *)getDecimal;

/*!
 */
- (jchar)getDefaultHourFormatChar __attribute__((deprecated));

/*!
 @brief Create empty generator, to be constructed with addPattern(...) etc.
 */
+ (AndroidIcuTextDateTimePatternGenerator *)getEmptyInstance;

/*!
 @brief internal routine
 @param pattern The pattern that is passed.
 @return field value
 */
- (NSString *)getFieldsWithNSString:(NSString *)pattern __attribute__((deprecated));

/*!
 @brief Construct a frozen instance of DateTimePatternGenerator for a
  given locale.This method returns a cached frozen instance of
  DateTimePatternGenerator, so less expensive than the regular
  factory method.
 @param uLocale The locale to pass.
 @return A frozen DateTimePatternGenerator.
 */
+ (AndroidIcuTextDateTimePatternGenerator *)getFrozenInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)uLocale __attribute__((deprecated));

/*!
 @brief Construct a flexible generator according to data for the default <code>FORMAT</code> locale.
 - seealso: Category#FORMAT
 */
+ (AndroidIcuTextDateTimePatternGenerator *)getInstance;

/*!
 @brief Construct a flexible generator according to data for a given locale.
 @param locale The <code>java.util.Locale</code>  to pass.
 */
+ (AndroidIcuTextDateTimePatternGenerator *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Construct a flexible generator according to data for a given locale.
 @param uLocale The locale to pass.
 */
+ (AndroidIcuTextDateTimePatternGenerator *)getInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)uLocale;

/*!
 @brief Redundant patterns are those which if removed, make no difference in the
  resulting getBestPattern values.This method returns a list of them, to
  help check the consistency of the patterns used to build this generator.
 @param output stores the redundant patterns that are removed. To get these             in internal order, supply a LinkedHashSet. If null, a
              collection is allocated.
 @return the collection with added elements.
 */
- (id<JavaUtilCollection>)getRedundantsWithJavaUtilCollection:(id<JavaUtilCollection>)output __attribute__((deprecated));

/*!
 @brief Utility to return a unique skeleton from a given pattern.For example,
  both "MMM-dd" and "dd/MMM" produce the skeleton "MMMdd".
 @param pattern Input pattern, such as "dd/MMM"
 @return skeleton, such as "MMMdd"
 */
- (NSString *)getSkeletonWithNSString:(NSString *)pattern;

/*!
 @brief Same as getSkeleton, but allows duplicates
 @param pattern Input pattern, such as "dd/MMM"
 @return skeleton, such as "MMMdd"
 */
- (NSString *)getSkeletonAllowingDuplicatesWithNSString:(NSString *)pattern __attribute__((deprecated));

/*!
 @brief Return a list of all the skeletons (in canonical form) from this class,
  and the patterns that they map to.
 @param result an output Map in which to place the mapping from skeleton to             pattern. If you want to see the internal order being used,
              supply a LinkedHashMap. If the input value is null, then a
              LinkedHashMap is allocated.
               <p>             
  <i> Issue: an alternate API would be to just return a list of
              the skeletons, and then have a separate routine to get from
              skeleton to pattern. </i>
 @return the input Map containing the values.
 */
- (id<JavaUtilMap>)getSkeletonsWithJavaUtilMap:(id<JavaUtilMap>)result;

/*!
 */
- (jboolean)isFrozen;

/*!
 @brief Determines whether a skeleton contains a single field
 @param skeleton The skeleton to determine if it contains a single field.
 @return true or not
 */
+ (jboolean)isSingleFieldWithNSString:(NSString *)skeleton __attribute__((deprecated));

/*!
 @brief Adjusts the field types (width and subtype) of a pattern to match what is
  in a skeleton.That is, if you supply a pattern like "d-M H:m", and a
  skeleton of "MMMMddhhmm", then the input pattern is adjusted to be
  "dd-MMMM hh:mm".
 This is used internally to get the best match for the
  input skeleton, but can also be used externally. 
 <p>Example code:external/icu/android_icu4j/src/samples/java/android/icu/samples/text/datetimepatterngenerator/DateTimePatternGeneratorSample.java replaceFieldTypesExample
 @param pattern input pattern
 @param skeleton For the pattern to match to.
 @return pattern adjusted to match the skeleton fields widths and subtypes.
 */
- (NSString *)replaceFieldTypesWithNSString:(NSString *)pattern
                               withNSString:(NSString *)skeleton;

/*!
 @brief Adjusts the field types (width and subtype) of a pattern to match what is
  in a skeleton.That is, if you supply a pattern like "d-M H:m", and a
  skeleton of "MMMMddhhmm", then the input pattern is adjusted to be
  "dd-MMMM hh:mm".
 This is used internally to get the best match for the
  input skeleton, but can also be used externally.
 @param pattern input pattern
 @param skeleton For the pattern to match to.
 @param options MATCH_xxx options for forcing the length of specified fields in             the returned pattern to match those in the skeleton (when this would
              not happen otherwise). For default behavior, use MATCH_NO_OPTIONS.
 @return pattern adjusted to match the skeleton fields widths and subtypes.
 */
- (NSString *)replaceFieldTypesWithNSString:(NSString *)pattern
                               withNSString:(NSString *)skeleton
                                    withInt:(jint)options;

/*!
 @brief An AppendItem format is a pattern used to append a field if there is no
  good match.For example, suppose that the input skeleton is "GyyyyMMMd",
  and there is no matching pattern internally, but there is a pattern
  matching "yyyyMMMd", say "d-MM-yyyy".
 Then that pattern is used, plus the
  G. The way these two are conjoined is by using the AppendItemFormat for G
  (era). So if that value is, say "{0}, {1}" then the final resulting
  pattern is "d-MM-yyyy, G". 
 <p>
  There are actually three available variables: {0} is the pattern so far,
  {1} is the element we are adding, and {2} is the name of the element. 
 <p>
  This reflects the way that the CLDR data is organized.
 @param field such as ERA
 @param value pattern, such as "{0}, {1}"
 */
- (void)setAppendItemFormatWithInt:(jint)field
                      withNSString:(NSString *)value;

/*!
 @brief Sets the names of fields, eg "era" in English for ERA.These are only
  used if the corresponding AppendItemFormat is used, and if it contains a
  {2} variable.
 <p>
  This reflects the way that the CLDR data is organized.
 @param field Index of the append item names.
 @param value The value to set the item to.
 */
- (void)setAppendItemNameWithInt:(jint)field
                    withNSString:(NSString *)value;

/*!
 @brief The date time format is a message format pattern used to compose date and
  time patterns.The default value is "{1} {0}", where {1} will be replaced
  by the date pattern and {0} will be replaced by the time pattern.
 <p>
  This is used when the input skeleton contains both date and time fields,
  but there is not a close match among the added patterns. For example,
  suppose that this object was created by adding "dd-MMM" and "hh:mm", and
  its datetimeFormat is the default "{1} {0}". Then if the input skeleton
  is "MMMdhmm", there is not an exact match, so the input skeleton is
  broken up into two components "MMMd" and "hmm". There are close matches
  for those two skeletons, so the result is put together with this pattern,
  resulting in "d-MMM h:mm".
 @param dateTimeFormat message format pattern, where {1} will be replaced by the date             pattern and {0} will be replaced by the time pattern.
 */
- (void)setDateTimeFormatWithNSString:(NSString *)dateTimeFormat;

/*!
 @brief The decimal value is used in formatting fractions of seconds.If the
  skeleton contains fractional seconds, then this is used with the
  fractional seconds.
 For example, suppose that the input pattern is
  "hhmmssSSSS", and the best matching pattern internally is "H:mm:ss", and
  the decimal string is ",". Then the resulting pattern is modified to be
  "H:mm:ss,SSSS"
 @param decimal The decimal to set to.
 */
- (void)setDecimalWithNSString:(NSString *)decimal;

/*!
 */
- (void)setDefaultHourFormatCharWithChar:(jchar)defaultHourFormatChar __attribute__((deprecated));

/*!
 @brief Used by CLDR tooling; not in ICU4C.
 Note, this will not work correctly with normal skeletons, since fields
  that should be related in the two skeletons being compared - like EEE and
  ccc, or y and U - will not be sorted in the same relative place as each
  other when iterating over both TreeSets being compare, using TreeSet's
  "natural" code point ordering (this could be addressed by initializing
  the TreeSet with a comparator that compares fields first by their index
  from getCanonicalIndex()). However if comparing canonical skeletons from
  getCanonicalSkeletonAllowingDuplicates it will be OK regardless, since
  in these skeletons all fields are normalized to the canonical pattern
  char for those fields - M or L to M, E or c to E, y or U to y, etc. -
  so corresponding fields will sort in the same way for both TreeMaps.
 */
- (jboolean)skeletonsAreSimilarWithNSString:(NSString *)id_
                               withNSString:(NSString *)skeleton __attribute__((deprecated));

#pragma mark Protected

/*!
 @brief Only for use by subclasses
 */
- (instancetype __nonnull)init;

@end

J2OBJC_STATIC_INIT(AndroidIcuTextDateTimePatternGenerator)

inline id<JavaUtilMap> AndroidIcuTextDateTimePatternGenerator_get_LOCALE_TO_ALLOWED_HOUR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilMap> AndroidIcuTextDateTimePatternGenerator_LOCALE_TO_ALLOWED_HOUR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuTextDateTimePatternGenerator, LOCALE_TO_ALLOWED_HOUR, id<JavaUtilMap>)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_ERA(void);
#define AndroidIcuTextDateTimePatternGenerator_ERA 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, ERA, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_YEAR(void);
#define AndroidIcuTextDateTimePatternGenerator_YEAR 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, YEAR, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_QUARTER(void);
#define AndroidIcuTextDateTimePatternGenerator_QUARTER 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, QUARTER, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_MONTH(void);
#define AndroidIcuTextDateTimePatternGenerator_MONTH 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, MONTH, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_WEEK_OF_YEAR(void);
#define AndroidIcuTextDateTimePatternGenerator_WEEK_OF_YEAR 4
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, WEEK_OF_YEAR, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_WEEK_OF_MONTH(void);
#define AndroidIcuTextDateTimePatternGenerator_WEEK_OF_MONTH 5
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, WEEK_OF_MONTH, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_WEEKDAY(void);
#define AndroidIcuTextDateTimePatternGenerator_WEEKDAY 6
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, WEEKDAY, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_DAY(void);
#define AndroidIcuTextDateTimePatternGenerator_DAY 7
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, DAY, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_DAY_OF_YEAR(void);
#define AndroidIcuTextDateTimePatternGenerator_DAY_OF_YEAR 8
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, DAY_OF_YEAR, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_DAY_OF_WEEK_IN_MONTH(void);
#define AndroidIcuTextDateTimePatternGenerator_DAY_OF_WEEK_IN_MONTH 9
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, DAY_OF_WEEK_IN_MONTH, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_DAYPERIOD(void);
#define AndroidIcuTextDateTimePatternGenerator_DAYPERIOD 10
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, DAYPERIOD, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_HOUR(void);
#define AndroidIcuTextDateTimePatternGenerator_HOUR 11
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, HOUR, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_MINUTE(void);
#define AndroidIcuTextDateTimePatternGenerator_MINUTE 12
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, MINUTE, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_SECOND(void);
#define AndroidIcuTextDateTimePatternGenerator_SECOND 13
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, SECOND, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_FRACTIONAL_SECOND(void);
#define AndroidIcuTextDateTimePatternGenerator_FRACTIONAL_SECOND 14
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, FRACTIONAL_SECOND, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_ZONE(void);
#define AndroidIcuTextDateTimePatternGenerator_ZONE 15
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, ZONE, jint)

/*!
 @brief One more than the highest normal field number.
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_TYPE_LIMIT(void);
#define AndroidIcuTextDateTimePatternGenerator_TYPE_LIMIT 16
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, TYPE_LIMIT, jint)

/*!
 @brief Default option mask used for <code>getBestPattern(String, int)</code>
  and <code>replaceFieldTypes(String, String, int)</code>.
 - seealso: #getBestPattern(String, int)
 - seealso: #replaceFieldTypes(String, String, int)
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_MATCH_NO_OPTIONS(void);
#define AndroidIcuTextDateTimePatternGenerator_MATCH_NO_OPTIONS 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, MATCH_NO_OPTIONS, jint)

/*!
 @brief Option mask for forcing the width of hour field.
 - seealso: #getBestPattern(String, int)
 - seealso: #replaceFieldTypes(String, String, int)
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_MATCH_HOUR_FIELD_LENGTH(void);
#define AndroidIcuTextDateTimePatternGenerator_MATCH_HOUR_FIELD_LENGTH 2048
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, MATCH_HOUR_FIELD_LENGTH, jint)

/*!
 @brief Option mask for forcing  the width of minute field.
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_MATCH_MINUTE_FIELD_LENGTH(void);
#define AndroidIcuTextDateTimePatternGenerator_MATCH_MINUTE_FIELD_LENGTH 4096
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, MATCH_MINUTE_FIELD_LENGTH, jint)

/*!
 @brief Option mask for forcing  the width of second field.
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_MATCH_SECOND_FIELD_LENGTH(void);
#define AndroidIcuTextDateTimePatternGenerator_MATCH_SECOND_FIELD_LENGTH 8192
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, MATCH_SECOND_FIELD_LENGTH, jint)

/*!
 @brief Option mask for forcing the width of all date and time fields.
 - seealso: #getBestPattern(String, int)
 - seealso: #replaceFieldTypes(String, String, int)
 */
inline jint AndroidIcuTextDateTimePatternGenerator_get_MATCH_ALL_FIELDS_LENGTH(void);
#define AndroidIcuTextDateTimePatternGenerator_MATCH_ALL_FIELDS_LENGTH 65535
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator, MATCH_ALL_FIELDS_LENGTH, jint)

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator *AndroidIcuTextDateTimePatternGenerator_getEmptyInstance(void);

FOUNDATION_EXPORT void AndroidIcuTextDateTimePatternGenerator_init(AndroidIcuTextDateTimePatternGenerator *self);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator *new_AndroidIcuTextDateTimePatternGenerator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator *create_AndroidIcuTextDateTimePatternGenerator_init(void);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator *AndroidIcuTextDateTimePatternGenerator_getInstance(void);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator *AndroidIcuTextDateTimePatternGenerator_getInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *uLocale);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator *AndroidIcuTextDateTimePatternGenerator_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator *AndroidIcuTextDateTimePatternGenerator_getFrozenInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *uLocale);

FOUNDATION_EXPORT jint AndroidIcuTextDateTimePatternGenerator_getAppendFormatNumberWithAndroidIcuImplUResource_Key_(AndroidIcuImplUResource_Key *key);

FOUNDATION_EXPORT jint AndroidIcuTextDateTimePatternGenerator_getAppendFormatNumberWithNSString_(NSString *string);

FOUNDATION_EXPORT jboolean AndroidIcuTextDateTimePatternGenerator_isSingleFieldWithNSString_(NSString *skeleton);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextDateTimePatternGenerator)

#endif

#if !defined (AndroidIcuTextDateTimePatternGenerator_PatternInfo_) && (INCLUDE_ALL_AndroidIcuTextDateTimePatternGenerator || defined(INCLUDE_AndroidIcuTextDateTimePatternGenerator_PatternInfo))
#define AndroidIcuTextDateTimePatternGenerator_PatternInfo_

/*!
 @brief PatternInfo supplies output parameters for addPattern(...).It is used because
  Java doesn't have real output parameters.
 It is treated like a struct (eg
  Point), so all fields are public.
 */
@interface AndroidIcuTextDateTimePatternGenerator_PatternInfo : NSObject {
 @public
  /*!
   */
  jint status_;
  /*!
   */
  NSString *conflictingPattern_;
}
@property (readonly, class) jint OK NS_SWIFT_NAME(OK);
@property (readonly, class) jint BASE_CONFLICT NS_SWIFT_NAME(BASE_CONFLICT);
@property (readonly, class) jint CONFLICT NS_SWIFT_NAME(CONFLICT);

#pragma mark Public

/*!
 @brief Simple constructor, since this is treated like a struct.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuTextDateTimePatternGenerator_PatternInfo)

J2OBJC_FIELD_SETTER(AndroidIcuTextDateTimePatternGenerator_PatternInfo, conflictingPattern_, NSString *)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_PatternInfo_get_OK(void);
#define AndroidIcuTextDateTimePatternGenerator_PatternInfo_OK 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator_PatternInfo, OK, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_PatternInfo_get_BASE_CONFLICT(void);
#define AndroidIcuTextDateTimePatternGenerator_PatternInfo_BASE_CONFLICT 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator_PatternInfo, BASE_CONFLICT, jint)

/*!
 */
inline jint AndroidIcuTextDateTimePatternGenerator_PatternInfo_get_CONFLICT(void);
#define AndroidIcuTextDateTimePatternGenerator_PatternInfo_CONFLICT 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextDateTimePatternGenerator_PatternInfo, CONFLICT, jint)

FOUNDATION_EXPORT void AndroidIcuTextDateTimePatternGenerator_PatternInfo_init(AndroidIcuTextDateTimePatternGenerator_PatternInfo *self);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator_PatternInfo *new_AndroidIcuTextDateTimePatternGenerator_PatternInfo_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator_PatternInfo *create_AndroidIcuTextDateTimePatternGenerator_PatternInfo_init(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextDateTimePatternGenerator_PatternInfo)

#endif

#if !defined (AndroidIcuTextDateTimePatternGenerator_VariableField_) && (INCLUDE_ALL_AndroidIcuTextDateTimePatternGenerator || defined(INCLUDE_AndroidIcuTextDateTimePatternGenerator_VariableField))
#define AndroidIcuTextDateTimePatternGenerator_VariableField_

/*!
 @brief Utility class for FormatParser.Immutable class that is only used to mark
  the difference between a variable field and a literal string.
 Each
  variable field must consist of 1 to n variable characters, representing
  date format fields. For example, "VVVV" is valid while "V4" is not, nor
  is "44".
 */
__attribute__((deprecated))
@interface AndroidIcuTextDateTimePatternGenerator_VariableField : NSObject

#pragma mark Public

/*!
 @brief Create a variable field: equivalent to VariableField(string,false);
 @param string The string for the variable field.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)string __attribute__((deprecated));

/*!
 @brief Create a variable field
 @param string The string for the variable field
 @param strict If true, then only allows exactly those lengths specified by CLDR for variables. For example, "hh:mm aa" would throw an exception.
 @throw IllegalArgumentExceptionif the variable field is not valid.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)string
                               withBoolean:(jboolean)strict __attribute__((deprecated));

/*!
 */
+ (NSString *)getCanonicalCodeWithInt:(jint)type __attribute__((deprecated));

/*!
 @brief Get the main type of this variable.These types are ERA, QUARTER,
  MONTH, DAY, WEEK_OF_YEAR, WEEK_OF_MONTH, WEEKDAY, DAY, DAYPERIOD
  (am/pm), HOUR, MINUTE, SECOND,FRACTIONAL_SECOND, ZONE.
 @return main type.
 */
- (jint)getType __attribute__((deprecated));

/*!
 @brief Check if the type of this variable field is numeric.
 @return true if the type of this variable field is numeric.
 */
- (jboolean)isNumeric __attribute__((deprecated));

/*!
 @brief Get the string represented by this variable.
 */
- (NSString *)description __attribute__((deprecated));

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuTextDateTimePatternGenerator_VariableField)

FOUNDATION_EXPORT void AndroidIcuTextDateTimePatternGenerator_VariableField_initWithNSString_(AndroidIcuTextDateTimePatternGenerator_VariableField *self, NSString *string);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator_VariableField *new_AndroidIcuTextDateTimePatternGenerator_VariableField_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator_VariableField *create_AndroidIcuTextDateTimePatternGenerator_VariableField_initWithNSString_(NSString *string);

FOUNDATION_EXPORT void AndroidIcuTextDateTimePatternGenerator_VariableField_initWithNSString_withBoolean_(AndroidIcuTextDateTimePatternGenerator_VariableField *self, NSString *string, jboolean strict);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator_VariableField *new_AndroidIcuTextDateTimePatternGenerator_VariableField_initWithNSString_withBoolean_(NSString *string, jboolean strict) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator_VariableField *create_AndroidIcuTextDateTimePatternGenerator_VariableField_initWithNSString_withBoolean_(NSString *string, jboolean strict);

FOUNDATION_EXPORT NSString *AndroidIcuTextDateTimePatternGenerator_VariableField_getCanonicalCodeWithInt_(jint type);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextDateTimePatternGenerator_VariableField)

#endif

#if !defined (AndroidIcuTextDateTimePatternGenerator_FormatParser_) && (INCLUDE_ALL_AndroidIcuTextDateTimePatternGenerator || defined(INCLUDE_AndroidIcuTextDateTimePatternGenerator_FormatParser))
#define AndroidIcuTextDateTimePatternGenerator_FormatParser_

@protocol JavaUtilList;

/*!
 @brief This class provides mechanisms for parsing a SimpleDateFormat pattern
  or generating a new pattern, while handling the quoting.It represents
  the result of the parse as a list of items, where each item is either a
  literal string or a variable field.
 When parsing It can be used to find
  out which variable fields are in a date format, and in what order, such
  as for presentation in a UI as separate text entry fields. It can also be
  used to construct new SimpleDateFormats. 
 <p>Example:
  @code

     public boolean containsZone(String pattern) {
         for (Iterator it = formatParser.set(pattern).getItems().iterator(); it.hasNext();) {
             Object item = it.next();
             if (item instanceof VariableField) {
                 VariableField variableField = (VariableField) item;
                 if (variableField.getType() == DateTimePatternGenerator.ZONE) {
                     return true;
                 }                }                }
         return false;
     }  
  
@endcode
 */
__attribute__((deprecated))
@interface AndroidIcuTextDateTimePatternGenerator_FormatParser : NSObject

#pragma mark Public

/*!
 @brief Construct an empty date format parser, to which strings and variables can be added with set(...).
 */
- (instancetype __nonnull)init __attribute__((deprecated));

/*!
 @brief Returns modifiable list which is a mixture of Strings and VariableFields, in the order found during parsing.The strings represent literals, and have all quoting removed.
 Thus the string "dd 'de' MM" will parse into three items: 
 @code

  VariableField: dd
  String: " de "
  VariableField: MM 
  
@endcode
  The list is modifiable, so you can add any strings or variables to it, or remove any items.
 @return modifiable list of items.
 */
- (id<JavaUtilList>)getItems __attribute__((deprecated));

/*!
 @brief Returns true if it has a mixture of date and time variable fields: that is, at least one date variable and at least one time variable.
 @return true or false
 */
- (jboolean)hasDateAndTimeFields __attribute__((deprecated));

/*!
 @brief Each literal string is quoted as needed.That is, the ' quote marks will only be added if needed.
 The exact pattern of quoting is not guaranteed, thus " de la " could be quoted as " 'de la' " or as " 'de' 'la' ".
 @param string The string to check.
 @return string with quoted literals
 */
- (id)quoteLiteralWithNSString:(NSString *)string __attribute__((deprecated));

/*!
 @brief Parses the string into a list of items.
 @param string The string to parse.
 @return this, for chaining
 */
- (AndroidIcuTextDateTimePatternGenerator_FormatParser *)setWithNSString:(NSString *)string __attribute__((deprecated));

/*!
 @brief Parses the string into a list of items, taking into account all of the quoting that may be going on.
 @param string The string to parse.
 @param strict If true, then only allows exactly those lengths specified by CLDR for variables. For example, "hh:mm aa" would throw an exception.
 @return this, for chaining
 */
- (AndroidIcuTextDateTimePatternGenerator_FormatParser *)setWithNSString:(NSString *)string
                                                             withBoolean:(jboolean)strict __attribute__((deprecated));

/*!
 @brief Provide display form of formatted input.Each literal string is quoted if necessary..
 That is, if the input was "hh':'mm", the result would be "hh:mm", since the ":" doesn't need quoting. See quoteLiteral().
 @return printable output string
 */
- (NSString *)description __attribute__((deprecated));

/*!
 @brief Provide display form of a segment of the parsed input.Each literal string is minimally quoted.
 That is, if the input was "hh':'mm", the result would be "hh:mm", since the ":" doesn't need quoting. See quoteLiteral().
 @param start item to start from
 @param limit last item +1
 @return printable output string
 */
- (NSString *)toStringWithInt:(jint)start
                      withInt:(jint)limit __attribute__((deprecated));

@end

J2OBJC_STATIC_INIT(AndroidIcuTextDateTimePatternGenerator_FormatParser)

FOUNDATION_EXPORT void AndroidIcuTextDateTimePatternGenerator_FormatParser_init(AndroidIcuTextDateTimePatternGenerator_FormatParser *self);

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator_FormatParser *new_AndroidIcuTextDateTimePatternGenerator_FormatParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextDateTimePatternGenerator_FormatParser *create_AndroidIcuTextDateTimePatternGenerator_FormatParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextDateTimePatternGenerator_FormatParser)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuTextDateTimePatternGenerator")
