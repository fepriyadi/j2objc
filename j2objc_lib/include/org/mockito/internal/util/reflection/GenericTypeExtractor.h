//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/GenericTypeExtractor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericTypeExtractor")
#ifdef RESTRICT_OrgMockitoInternalUtilReflectionGenericTypeExtractor
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericTypeExtractor 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericTypeExtractor 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilReflectionGenericTypeExtractor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalUtilReflectionGenericTypeExtractor_) && (INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericTypeExtractor || defined(INCLUDE_OrgMockitoInternalUtilReflectionGenericTypeExtractor))
#define OrgMockitoInternalUtilReflectionGenericTypeExtractor_

@class IOSClass;

/*!
 @brief Attempts to extract generic type of given target base class or target interface
 */
@interface OrgMockitoInternalUtilReflectionGenericTypeExtractor : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Extract generic type of root class either from the target base class or from target base interface.
 Examples:
   <p>
   1. Foo implements IFoo[Integer]:
       genericTypeOf(Foo.class, Object.class, IFoo.class) returns Integer  
 <p>
   2. Foo extends BaseFoo[String]:
       genericTypeOf(Foo.class, BaseFoo.class, IFoo.class) returns String  
 <p>
   3. Foo extends BaseFoo; BaseFoo implements IFoo[String]:
       genericTypeOf(Foo.class, BaseFoo.class, Object.class) returns String  
 <p>
   Does not support nested generics, only supports single type parameter.
 @param rootClass - the root class that the search begins from
 @param targetBaseClass - if one of the classes in the root class' hierarchy extends this base class                         it will be used for generic type extraction
 @param targetBaseInterface - if one of the interfaces in the root class' hierarchy implements this interface                             it will be used for generic type extraction
 @return generic interface if found, Object.class if not found.
 */
+ (IOSClass *)genericTypeOfWithIOSClass:(IOSClass *)rootClass
                           withIOSClass:(IOSClass *)targetBaseClass
                           withIOSClass:(IOSClass *)targetBaseInterface;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionGenericTypeExtractor)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionGenericTypeExtractor_init(OrgMockitoInternalUtilReflectionGenericTypeExtractor *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionGenericTypeExtractor *new_OrgMockitoInternalUtilReflectionGenericTypeExtractor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionGenericTypeExtractor *create_OrgMockitoInternalUtilReflectionGenericTypeExtractor_init(void);

FOUNDATION_EXPORT IOSClass *OrgMockitoInternalUtilReflectionGenericTypeExtractor_genericTypeOfWithIOSClass_withIOSClass_withIOSClass_(IOSClass *rootClass, IOSClass *targetBaseClass, IOSClass *targetBaseInterface);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionGenericTypeExtractor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionGenericTypeExtractor")
