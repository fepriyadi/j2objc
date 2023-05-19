//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/ObjectStreamField.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoObjectStreamField")
#ifdef RESTRICT_JavaIoObjectStreamField
#define INCLUDE_ALL_JavaIoObjectStreamField 0
#else
#define INCLUDE_ALL_JavaIoObjectStreamField 1
#endif
#undef RESTRICT_JavaIoObjectStreamField

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoObjectStreamField_) && (INCLUDE_ALL_JavaIoObjectStreamField || defined(INCLUDE_JavaIoObjectStreamField))
#define JavaIoObjectStreamField_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSClass;
@class JavaLangReflectField;

/*!
 @brief A description of a Serializable field from a Serializable class.An array
  of ObjectStreamFields is used to declare the Serializable fields of a class.
 @author Mike Warres
 @author Roger Riggs
 - seealso: ObjectStreamClass
 @since 1.2
 */
@interface JavaIoObjectStreamField : NSObject < JavaLangComparable >

#pragma mark Public

/*!
 @brief Create a Serializable field with the specified type.This field should
  be documented with a <code>serialField</code> tag.
 @param name the name of the serializable field
 @param type the  <code> Class </code>  object of the serializable field
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withIOSClass:(IOSClass *)type;

/*!
 @brief Creates an ObjectStreamField representing a serializable field with the
  given name and type.If unshared is false, values of the represented
  field are serialized and deserialized in the default manner--if the
  field is non-primitive, object values are serialized and deserialized as
  if they had been written and read by calls to writeObject and
  readObject.
 If unshared is true, values of the represented field are
  serialized and deserialized as if they had been written and read by
  calls to writeUnshared and readUnshared.
 @param name field name
 @param type field type
 @param unshared if false, write/read field values in the same manner           as writeObject/readObject; if true, write/read in the same
            manner as writeUnshared/readUnshared
 @since 1.4
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withIOSClass:(IOSClass *)type
                               withBoolean:(jboolean)unshared;

/*!
 @brief Compare this field with another <code>ObjectStreamField</code>.Return
  -1 if this is smaller, 0 if equal, 1 if greater.
 Types that are
  primitives are "smaller" than object types.  If equal, the field names
  are compared.
 */
- (jint)compareToWithId:(id)obj;

/*!
 @brief Get the name of this field.
 @return a <code>String</code> representing the name of the serializable
           field
 */
- (NSString *)getName;

/*!
 @brief Offset of field within instance data.
 @return the offset of this field
 - seealso: #setOffset
 */
- (jint)getOffset;

/*!
 @brief Get the type of the field.If the type is non-primitive and this 
 <code>ObjectStreamField</code> was obtained from a deserialized <code>ObjectStreamClass</code>
  instance, then <code>Object.class</code> is returned.
 Otherwise, the <code>Class</code> object for the type of the field is
  returned.
 @return a <code>Class</code> object representing the type of the
           serializable field
 */
- (IOSClass *)getType;

/*!
 @brief Returns character encoding of field type.The encoding is as follows: 
 <blockquote>@code

  B            byte
  C            char
  D            double
  F            float
  I            int
  J            long
  L            class or interface
  S            short
  Z            boolean
  [            array 
  
@endcode</blockquote>
 @return the typecode of the serializable field
 */
- (jchar)getTypeCode;

/*!
 @brief Return the JVM type signature.
 @return null if this field has a primitive type.
 */
- (NSString *)getTypeString;

/*!
 @brief Return true if this field has a primitive type.
 @return true if and only if this field corresponds to a primitive type
 */
- (jboolean)isPrimitive;

/*!
 @brief Returns boolean value indicating whether or not the serializable field
  represented by this ObjectStreamField instance is unshared.
 @return <code>true</code> if this field is unshared
 @since 1.4
 */
- (jboolean)isUnshared;

/*!
 @brief Return a string that describes this field.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Offset within instance data.
 @param offset the offset of the field
 - seealso: #getOffset
 */
- (void)setOffsetWithInt:(jint)offset;

#pragma mark Package-Private

/*!
 @brief Creates an ObjectStreamField representing the given field with the
  specified unshared setting.For compatibility with the behavior of
  earlier serialization implementations, a "showType" parameter is
  necessary to govern whether or not a getType() call on this
  ObjectStreamField (if non-primitive) will return Object.class (as
  opposed to a more specific reference type).
 */
- (instancetype __nonnull)initWithJavaLangReflectField:(JavaLangReflectField *)field
                                           withBoolean:(jboolean)unshared
                                           withBoolean:(jboolean)showType;

/*!
 @brief Creates an ObjectStreamField representing a field with the given name,
  signature and unshared setting.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withNSString:(NSString *)signature
                               withBoolean:(jboolean)unshared;

/*!
 @brief Returns field represented by this ObjectStreamField, or null if
  ObjectStreamField is not associated with an actual field.
 */
- (JavaLangReflectField *)getField;

/*!
 @brief Returns JVM type signature of field (similar to getTypeString, except
  that signature strings are returned for primitive fields as well).
 */
- (NSString *)getSignature;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectStreamField)

FOUNDATION_EXPORT void JavaIoObjectStreamField_initWithNSString_withIOSClass_(JavaIoObjectStreamField *self, NSString *name, IOSClass *type);

FOUNDATION_EXPORT JavaIoObjectStreamField *new_JavaIoObjectStreamField_initWithNSString_withIOSClass_(NSString *name, IOSClass *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoObjectStreamField *create_JavaIoObjectStreamField_initWithNSString_withIOSClass_(NSString *name, IOSClass *type);

FOUNDATION_EXPORT void JavaIoObjectStreamField_initWithNSString_withIOSClass_withBoolean_(JavaIoObjectStreamField *self, NSString *name, IOSClass *type, jboolean unshared);

FOUNDATION_EXPORT JavaIoObjectStreamField *new_JavaIoObjectStreamField_initWithNSString_withIOSClass_withBoolean_(NSString *name, IOSClass *type, jboolean unshared) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoObjectStreamField *create_JavaIoObjectStreamField_initWithNSString_withIOSClass_withBoolean_(NSString *name, IOSClass *type, jboolean unshared);

FOUNDATION_EXPORT void JavaIoObjectStreamField_initWithNSString_withNSString_withBoolean_(JavaIoObjectStreamField *self, NSString *name, NSString *signature, jboolean unshared);

FOUNDATION_EXPORT JavaIoObjectStreamField *new_JavaIoObjectStreamField_initWithNSString_withNSString_withBoolean_(NSString *name, NSString *signature, jboolean unshared) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoObjectStreamField *create_JavaIoObjectStreamField_initWithNSString_withNSString_withBoolean_(NSString *name, NSString *signature, jboolean unshared);

FOUNDATION_EXPORT void JavaIoObjectStreamField_initWithJavaLangReflectField_withBoolean_withBoolean_(JavaIoObjectStreamField *self, JavaLangReflectField *field, jboolean unshared, jboolean showType);

FOUNDATION_EXPORT JavaIoObjectStreamField *new_JavaIoObjectStreamField_initWithJavaLangReflectField_withBoolean_withBoolean_(JavaLangReflectField *field, jboolean unshared, jboolean showType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoObjectStreamField *create_JavaIoObjectStreamField_initWithJavaLangReflectField_withBoolean_withBoolean_(JavaLangReflectField *field, jboolean unshared, jboolean showType);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectStreamField)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoObjectStreamField")
