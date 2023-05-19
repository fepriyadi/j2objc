//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/text/Annotation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextAnnotation")
#ifdef RESTRICT_JavaTextAnnotation
#define INCLUDE_ALL_JavaTextAnnotation 0
#else
#define INCLUDE_ALL_JavaTextAnnotation 1
#endif
#undef RESTRICT_JavaTextAnnotation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextAnnotation_) && (INCLUDE_ALL_JavaTextAnnotation || defined(INCLUDE_JavaTextAnnotation))
#define JavaTextAnnotation_

/*!
 @brief An Annotation object is used as a wrapper for a text attribute value if
  the attribute has annotation characteristics.These characteristics are: 
 <ul>
  <li>The text range that the attribute is applied to is critical to the
  semantics of the range.
 That means, the attribute cannot be applied to subranges
  of the text range that it applies to, and, if two adjacent text ranges have
  the same value for this attribute, the attribute still cannot be applied to
  the combined range as a whole with this value. 
 <li>The attribute or its value usually do no longer apply if the underlying text is
  changed. 
 </ul>
  An example is grammatical information attached to a sentence:
  For the previous sentence, you can say that "an example"
  is the subject, but you cannot say the same about "an", "example", or "exam".
  When the text is changed, the grammatical information typically becomes invalid.
  Another example is Japanese reading information (yomi). 
 <p>
  Wrapping the attribute value into an Annotation object guarantees that
  adjacent text runs don't get merged even if the attribute values are equal,
  and indicates to text containers that the attribute should be discarded if
  the underlying text is modified.
 - seealso: AttributedCharacterIterator
 @since 1.2
 */
@interface JavaTextAnnotation : NSObject

#pragma mark Public

/*!
 @brief Constructs an annotation record with the given value, which
  may be null.
 @param value the value of the attribute
 */
- (instancetype __nonnull)initWithId:(id)value;

/*!
 @brief Returns the value of the attribute, which may be null.
 @return the value of the attribute
 */
- (id)getValue;

/*!
 @brief Returns the String representation of this Annotation.
 @return the <code>String</code> representation of this <code>Annotation</code>
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextAnnotation)

FOUNDATION_EXPORT void JavaTextAnnotation_initWithId_(JavaTextAnnotation *self, id value);

FOUNDATION_EXPORT JavaTextAnnotation *new_JavaTextAnnotation_initWithId_(id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAnnotation *create_JavaTextAnnotation_initWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextAnnotation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextAnnotation")