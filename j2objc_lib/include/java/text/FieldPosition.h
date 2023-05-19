//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/text/FieldPosition.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextFieldPosition")
#ifdef RESTRICT_JavaTextFieldPosition
#define INCLUDE_ALL_JavaTextFieldPosition 0
#else
#define INCLUDE_ALL_JavaTextFieldPosition 1
#endif
#undef RESTRICT_JavaTextFieldPosition

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextFieldPosition_) && (INCLUDE_ALL_JavaTextFieldPosition || defined(INCLUDE_JavaTextFieldPosition))
#define JavaTextFieldPosition_

@class JavaTextFormat_Field;
@protocol JavaTextFormat_FieldDelegate;

/*!
 @brief <code>FieldPosition</code> is a simple class used by <code>Format</code>
  and its subclasses to identify fields in formatted output.Fields can
  be identified in two ways: 
 <ul>
   <li>By an integer constant, whose names typically end with
       <code>_FIELD</code>.
 The constants are defined in the various
       subclasses of <code>Format</code>.
   <li>By a <code>Format.Field</code> constant, see <code>ERA_FIELD</code>
       and its friends in <code>DateFormat</code> for an example. 
 </ul>
  <p>
  <code>FieldPosition</code> keeps track of the position of the
  field within the formatted output with two indices: the index
  of the first character of the field and the index of the last
  character of the field. 
 <p>
  One version of the <code>format</code> method in the various 
 <code>Format</code> classes requires a <code>FieldPosition</code>
  object as an argument. You use this <code>format</code> method
  to perform partial formatting or to get information about the
  formatted output (such as the position of a field). 
 <p>
  If you are interested in the positions of all attributes in the
  formatted string use the <code>Format</code> method 
 <code>formatToCharacterIterator</code>.
 @author Mark Davis
 - seealso: java.text.Format
 */
@interface JavaTextFieldPosition : NSObject {
 @public
  /*!
   @brief Input: Desired field to determine start and end offsets for.
   The meaning depends on the subclass of Format.
   */
  jint field_;
  /*!
   @brief Output: End offset of field in text.
   If the field does not occur in the text, 0 is returned.
   */
  jint endIndex_;
  /*!
   @brief Output: Start offset of field in text.
   If the field does not occur in the text, 0 is returned.
   */
  jint beginIndex_;
}

#pragma mark Public

/*!
 @brief Creates a FieldPosition object for the given field constant.Fields are
  identified by constants defined in the various <code>Format</code>
  subclasses.
 This is equivalent to calling 
 <code>new FieldPosition(attribute, -1)</code>.
 @param attribute Format.Field constant identifying a field
 @since 1.4
 */
- (instancetype __nonnull)initWithJavaTextFormat_Field:(JavaTextFormat_Field *)attribute;

/*!
 @brief Creates a <code>FieldPosition</code> object for the given field.
 The field is identified by an attribute constant from one of the 
 <code>Field</code> subclasses as well as an integer field ID
  defined by the <code>Format</code> subclasses. <code>Format</code>
  subclasses that are aware of <code>Field</code> should give precedence
  to <code>attribute</code> and ignore <code>fieldID</code> if 
 <code>attribute</code> is not null. However, older <code>Format</code>
  subclasses may not be aware of <code>Field</code> and rely on 
 <code>fieldID</code>. If the field has no corresponding integer
  constant, <code>fieldID</code> should be -1.
 @param attribute Format.Field constant identifying a field
 @param fieldID integer constant identifying a field
 @since 1.4
 */
- (instancetype __nonnull)initWithJavaTextFormat_Field:(JavaTextFormat_Field *)attribute
                                               withInt:(jint)fieldID;

/*!
 @brief Creates a FieldPosition object for the given field.Fields are
  identified by constants, whose names typically end with _FIELD,
  in the various subclasses of Format.
 @param field the field identifier
 - seealso: java.text.NumberFormat#INTEGER_FIELD
 - seealso: java.text.NumberFormat#FRACTION_FIELD
 - seealso: java.text.DateFormat#YEAR_FIELD
 - seealso: java.text.DateFormat#MONTH_FIELD
 */
- (instancetype __nonnull)initWithInt:(jint)field;

/*!
 @brief Overrides equals
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Retrieves the index of the first character in the requested field.
 @return the begin index
 */
- (jint)getBeginIndex;

/*!
 @brief Retrieves the index of the character following the last character in the
  requested field.
 @return the end index
 */
- (jint)getEndIndex;

/*!
 @brief Retrieves the field identifier.
 @return the field identifier
 */
- (jint)getField;

/*!
 @brief Returns the field identifier as an attribute constant
  from one of the <code>Field</code> subclasses.May return null if
  the field is specified only by an integer field ID.
 @return Identifier for the field
 @since 1.4
 */
- (JavaTextFormat_Field *)getFieldAttribute;

/*!
 @brief Returns a hash code for this FieldPosition.
 @return a hash code value for this object
 */
- (NSUInteger)hash;

/*!
 @brief Sets the begin index.For use by subclasses of Format.
 @param bi the begin index
 @since 1.2
 */
- (void)setBeginIndexWithInt:(jint)bi;

/*!
 @brief Sets the end index.For use by subclasses of Format.
 @param ei the end index
 @since 1.2
 */
- (void)setEndIndexWithInt:(jint)ei;

/*!
 @brief Return a string representation of this FieldPosition.
 @return a string representation of this object
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Returns a <code>Format.FieldDelegate</code> instance that is associated
  with the FieldPosition.When the delegate is notified of the same
  field the FieldPosition is associated with, the begin/end will be
  adjusted.
 */
- (id<JavaTextFormat_FieldDelegate>)getFieldDelegate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextFieldPosition)

FOUNDATION_EXPORT void JavaTextFieldPosition_initWithInt_(JavaTextFieldPosition *self, jint field);

FOUNDATION_EXPORT JavaTextFieldPosition *new_JavaTextFieldPosition_initWithInt_(jint field) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextFieldPosition *create_JavaTextFieldPosition_initWithInt_(jint field);

FOUNDATION_EXPORT void JavaTextFieldPosition_initWithJavaTextFormat_Field_(JavaTextFieldPosition *self, JavaTextFormat_Field *attribute);

FOUNDATION_EXPORT JavaTextFieldPosition *new_JavaTextFieldPosition_initWithJavaTextFormat_Field_(JavaTextFormat_Field *attribute) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextFieldPosition *create_JavaTextFieldPosition_initWithJavaTextFormat_Field_(JavaTextFormat_Field *attribute);

FOUNDATION_EXPORT void JavaTextFieldPosition_initWithJavaTextFormat_Field_withInt_(JavaTextFieldPosition *self, JavaTextFormat_Field *attribute, jint fieldID);

FOUNDATION_EXPORT JavaTextFieldPosition *new_JavaTextFieldPosition_initWithJavaTextFormat_Field_withInt_(JavaTextFormat_Field *attribute, jint fieldID) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextFieldPosition *create_JavaTextFieldPosition_initWithJavaTextFormat_Field_withInt_(JavaTextFormat_Field *attribute, jint fieldID);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextFieldPosition)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextFieldPosition")
