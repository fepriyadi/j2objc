//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/Stubbing.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingStubbing")
#ifdef RESTRICT_OrgMockitoStubbingStubbing
#define INCLUDE_ALL_OrgMockitoStubbingStubbing 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingStubbing 1
#endif
#undef RESTRICT_OrgMockitoStubbingStubbing

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoStubbingStubbing_) && (INCLUDE_ALL_OrgMockitoStubbingStubbing || defined(INCLUDE_OrgMockitoStubbingStubbing))
#define OrgMockitoStubbingStubbing_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

@class OrgMockitoQualityStrictness;
@protocol OrgMockitoInvocationInvocation;

/*!
 @brief Stubbing declared on the mock object.
 See detailed description including sample code and use cases see javadoc for <code>MockingDetails.getStubbings()</code>.
  <p>
  Since 2.10.0 this interface extends <code>Answer</code>.
  Extending Answer is backwards compatible because Stubbing interface is not extensible (see <code>NotExtensible</code>).
  Extending Answer was needed to improve Mockito domain model and simplify the code.
 @since 2.2.3
 */
@protocol OrgMockitoStubbingStubbing < OrgMockitoStubbingAnswer, JavaObject >

/*!
 @brief Returns the method invocation that is stubbed.
 E.g. in the example stubbing <code>when(mock.foo()).thenReturn(true)</code>
  the invocation is <code>mock.foo()</code>.
  <p>
  The invocation instance is mutable.
  It is not recommended to modify the state of invocation because it will influence mock behavior. 
 <p>
  To understand how this method is useful, see the description at <code>MockingDetails.getStubbings()</code>.
 @since 2.2.3
 */
- (id<OrgMockitoInvocationInvocation>)getInvocation;

/*!
 @brief Informs if the stubbing was used
 <p>
  What does it mean 'used stubbing'?
 Stubbing like <code>when(mock.foo()).thenReturn(true)</code> is considered used
  when the method <code>mock.foo()</code> is actually invoked during the execution of code under test. 
 <p>
  This method is used internally by Mockito to report and detect unused stubbings.
  Unused stubbings are dead code and should be deleted to increase clarity of tests (see <code>org.mockito.quality.MockitoHint</code>.
  <p>
  To understand how this method is useful, see the description at <code>MockingDetails.getStubbings()</code>.
 @since 2.2.3
 */
- (jboolean)wasUsed;

/*!
 @brief Informs about the <code>Strictness</code> level of this stubbing.
 For more information about setting strictness for stubbings see <code>Mockito.lenient()</code>.
 @since 2.20.0
 */
- (OrgMockitoQualityStrictness *)getStrictness;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingStubbing)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingStubbing)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingStubbing")
