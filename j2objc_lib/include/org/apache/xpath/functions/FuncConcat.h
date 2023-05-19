//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncConcat.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncConcat")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncConcat
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncConcat 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncConcat 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncConcat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncConcat_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncConcat || defined(INCLUDE_OrgApacheXpathFunctionsFuncConcat))
#define OrgApacheXpathFunctionsFuncConcat_

#define RESTRICT_OrgApacheXpathFunctionsFunctionMultiArgs 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionMultiArgs 1
#include "org/apache/xpath/functions/FunctionMultiArgs.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Concat() function.
 */
@interface OrgApacheXpathFunctionsFuncConcat : OrgApacheXpathFunctionsFunctionMultiArgs
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Check that the number of arguments passed to this function is correct.
 @param argNum The number of arguments that is being passed to the function.
 @throw WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 @brief Execute the function.The function must return
  a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
  message for this function object.
 @throw WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncConcat)

inline jlong OrgApacheXpathFunctionsFuncConcat_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncConcat_serialVersionUID 1737228885202314413LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncConcat, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncConcat_init(OrgApacheXpathFunctionsFuncConcat *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncConcat *new_OrgApacheXpathFunctionsFuncConcat_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncConcat *create_OrgApacheXpathFunctionsFuncConcat_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncConcat)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncConcat")
