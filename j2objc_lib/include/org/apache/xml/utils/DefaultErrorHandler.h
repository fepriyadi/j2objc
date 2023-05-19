//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/DefaultErrorHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsDefaultErrorHandler")
#ifdef RESTRICT_OrgApacheXmlUtilsDefaultErrorHandler
#define INCLUDE_ALL_OrgApacheXmlUtilsDefaultErrorHandler 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsDefaultErrorHandler 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsDefaultErrorHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsDefaultErrorHandler_) && (INCLUDE_ALL_OrgApacheXmlUtilsDefaultErrorHandler || defined(INCLUDE_OrgApacheXmlUtilsDefaultErrorHandler))
#define OrgApacheXmlUtilsDefaultErrorHandler_

#define RESTRICT_OrgXmlSaxErrorHandler 1
#define INCLUDE_OrgXmlSaxErrorHandler 1
#include "org/xml/sax/ErrorHandler.h"

#define RESTRICT_JavaxXmlTransformErrorListener 1
#define INCLUDE_JavaxXmlTransformErrorListener 1
#include "javax/xml/transform/ErrorListener.h"

@class JavaIoPrintStream;
@class JavaIoPrintWriter;
@class JavaLangThrowable;
@class JavaxXmlTransformTransformerException;
@class OrgXmlSaxSAXParseException;

/*!
 @brief Implement SAX error handler for default reporting.
 */
@interface OrgApacheXmlUtilsDefaultErrorHandler : NSObject < OrgXmlSaxErrorHandler, JavaxXmlTransformErrorListener > {
 @public
  JavaIoPrintWriter *m_pw_;
  /*!
   @brief if this flag is set to true, we will rethrow the exception on
  the error() and fatalError() methods.If it is false, the errors 
  are reported to System.err.
   */
  jboolean m_throwExceptionOnError_;
}

#pragma mark Public

/*!
 @brief Constructor DefaultErrorHandler
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructor DefaultErrorHandler
 */
- (instancetype __nonnull)initWithBoolean:(jboolean)throwExceptionOnError;

/*!
 @brief Constructor DefaultErrorHandler
 */
- (instancetype __nonnull)initWithJavaIoPrintStream:(JavaIoPrintStream *)pw;

/*!
 @brief Constructor DefaultErrorHandler
 */
- (instancetype __nonnull)initWithJavaIoPrintWriter:(JavaIoPrintWriter *)pw;

+ (void)ensureLocationSetWithJavaxXmlTransformTransformerException:(JavaxXmlTransformTransformerException *)exception;

/*!
 @brief Receive notification of a recoverable error.
 <p>This corresponds to the definition of "error" in section 1.2
  of the W3C XML 1.0 Recommendation.  For example, a validating
  parser would use this callback to report the violation of a
  validity constraint.  The default behaviour is to take no
  action.</p>
  
 <p>The SAX parser must continue to provide normal parsing events
  after invoking this method: it should still be possible for the
  application to process the document through to the end.  If the
  application cannot do so, then the parser should report a fatal
  error even if the XML 1.0 recommendation does not require it to
  do so.</p>
 @param exception The error information encapsulated in a                   SAX parse exception.
 @throw SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

/*!
 @brief Receive notification of a recoverable error.
 <p>This corresponds to the definition of "error" in section 1.2
  of the W3C XML 1.0 Recommendation.  For example, a validating
  parser would use this callback to report the violation of a
  validity constraint.  The default behaviour is to take no
  action.</p>
  
 <p>The SAX parser must continue to provide normal parsing events
  after invoking this method: it should still be possible for the
  application to process the document through to the end.  If the
  application cannot do so, then the parser should report a fatal
  error even if the XML 1.0 recommendation does not require it to
  do so.</p>
 @param exception The error information encapsulated in a                   SAX parse exception.
 @throw javax.xml.transform.TransformerExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: javax.xml.transform.TransformerException
 */
- (void)errorWithJavaxXmlTransformTransformerException:(JavaxXmlTransformTransformerException *)exception;

/*!
 @brief Receive notification of a non-recoverable error.
 <p>This corresponds to the definition of "fatal error" in
  section 1.2 of the W3C XML 1.0 Recommendation.  For example, a
  parser would use this callback to report the violation of a
  well-formedness constraint.</p>
  
 <p>The application must assume that the document is unusable
  after the parser has invoked this method, and should continue
  (if at all) only for the sake of collecting addition error
  messages: in fact, SAX parsers are free to stop reporting any
  other events once this method has been invoked.</p>
 @param exception The error information encapsulated in a                   SAX parse exception.
 @throw SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

/*!
 @brief Receive notification of a non-recoverable error.
 <p>This corresponds to the definition of "fatal error" in
  section 1.2 of the W3C XML 1.0 Recommendation.  For example, a
  parser would use this callback to report the violation of a
  well-formedness constraint.</p>
  
 <p>The application must assume that the document is unusable
  after the parser has invoked this method, and should continue
  (if at all) only for the sake of collecting addition error
  messages: in fact, SAX parsers are free to stop reporting any
  other events once this method has been invoked.</p>
 @param exception The error information encapsulated in a                   SAX parse exception.
 @throw javax.xml.transform.TransformerExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: javax.xml.transform.TransformerException
 */
- (void)fatalErrorWithJavaxXmlTransformTransformerException:(JavaxXmlTransformTransformerException *)exception;

/*!
 @brief Retrieve <code>java.io.PrintWriter</code> to which errors are being
  directed.
 @return The <code>PrintWriter</code> installed via the constructor
          or the default <code>PrintWriter</code>
 */
- (JavaIoPrintWriter *)getErrorWriter;

+ (void)printLocationWithJavaIoPrintStream:(JavaIoPrintStream *)pw
            withOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

+ (void)printLocationWithJavaIoPrintStream:(JavaIoPrintStream *)pw
 withJavaxXmlTransformTransformerException:(JavaxXmlTransformTransformerException *)exception;

+ (void)printLocationWithJavaIoPrintWriter:(JavaIoPrintWriter *)pw
                     withJavaLangThrowable:(JavaLangThrowable *)exception;

/*!
 @brief Receive notification of a warning.
 <p>SAX parsers will use this method to report conditions that
  are not errors or fatal errors as defined by the XML 1.0
  recommendation.  The default behaviour is to take no action.</p>
  
 <p>The SAX parser must continue to provide normal parsing events
  after invoking this method: it should still be possible for the
  application to process the document through to the end.</p>
 @param exception The warning information encapsulated in a                   SAX parse exception.
 @throw SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

/*!
 @brief Receive notification of a warning.
 <p>SAX parsers will use this method to report conditions that
  are not errors or fatal errors as defined by the XML 1.0
  recommendation.  The default behaviour is to take no action.</p>
  
 <p>The SAX parser must continue to provide normal parsing events
  after invoking this method: it should still be possible for the
  application to process the document through to the end.</p>
 @param exception The warning information encapsulated in a                   SAX parse exception.
 @throw javax.xml.transform.TransformerExceptionAny SAX exception, possibly
             wrapping another exception.
 - seealso: javax.xml.transform.TransformerException
 */
- (void)warningWithJavaxXmlTransformTransformerException:(JavaxXmlTransformTransformerException *)exception;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsDefaultErrorHandler)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsDefaultErrorHandler, m_pw_, JavaIoPrintWriter *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsDefaultErrorHandler_initWithJavaIoPrintWriter_(OrgApacheXmlUtilsDefaultErrorHandler *self, JavaIoPrintWriter *pw);

FOUNDATION_EXPORT OrgApacheXmlUtilsDefaultErrorHandler *new_OrgApacheXmlUtilsDefaultErrorHandler_initWithJavaIoPrintWriter_(JavaIoPrintWriter *pw) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsDefaultErrorHandler *create_OrgApacheXmlUtilsDefaultErrorHandler_initWithJavaIoPrintWriter_(JavaIoPrintWriter *pw);

FOUNDATION_EXPORT void OrgApacheXmlUtilsDefaultErrorHandler_initWithJavaIoPrintStream_(OrgApacheXmlUtilsDefaultErrorHandler *self, JavaIoPrintStream *pw);

FOUNDATION_EXPORT OrgApacheXmlUtilsDefaultErrorHandler *new_OrgApacheXmlUtilsDefaultErrorHandler_initWithJavaIoPrintStream_(JavaIoPrintStream *pw) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsDefaultErrorHandler *create_OrgApacheXmlUtilsDefaultErrorHandler_initWithJavaIoPrintStream_(JavaIoPrintStream *pw);

FOUNDATION_EXPORT void OrgApacheXmlUtilsDefaultErrorHandler_init(OrgApacheXmlUtilsDefaultErrorHandler *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsDefaultErrorHandler *new_OrgApacheXmlUtilsDefaultErrorHandler_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsDefaultErrorHandler *create_OrgApacheXmlUtilsDefaultErrorHandler_init(void);

FOUNDATION_EXPORT void OrgApacheXmlUtilsDefaultErrorHandler_initWithBoolean_(OrgApacheXmlUtilsDefaultErrorHandler *self, jboolean throwExceptionOnError);

FOUNDATION_EXPORT OrgApacheXmlUtilsDefaultErrorHandler *new_OrgApacheXmlUtilsDefaultErrorHandler_initWithBoolean_(jboolean throwExceptionOnError) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsDefaultErrorHandler *create_OrgApacheXmlUtilsDefaultErrorHandler_initWithBoolean_(jboolean throwExceptionOnError);

FOUNDATION_EXPORT void OrgApacheXmlUtilsDefaultErrorHandler_ensureLocationSetWithJavaxXmlTransformTransformerException_(JavaxXmlTransformTransformerException *exception);

FOUNDATION_EXPORT void OrgApacheXmlUtilsDefaultErrorHandler_printLocationWithJavaIoPrintStream_withJavaxXmlTransformTransformerException_(JavaIoPrintStream *pw, JavaxXmlTransformTransformerException *exception);

FOUNDATION_EXPORT void OrgApacheXmlUtilsDefaultErrorHandler_printLocationWithJavaIoPrintStream_withOrgXmlSaxSAXParseException_(JavaIoPrintStream *pw, OrgXmlSaxSAXParseException *exception);

FOUNDATION_EXPORT void OrgApacheXmlUtilsDefaultErrorHandler_printLocationWithJavaIoPrintWriter_withJavaLangThrowable_(JavaIoPrintWriter *pw, JavaLangThrowable *exception);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsDefaultErrorHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsDefaultErrorHandler")