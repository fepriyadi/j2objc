//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/VoidAnswer3.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingVoidAnswer3")
#ifdef RESTRICT_OrgMockitoStubbingVoidAnswer3
#define INCLUDE_ALL_OrgMockitoStubbingVoidAnswer3 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingVoidAnswer3 1
#endif
#undef RESTRICT_OrgMockitoStubbingVoidAnswer3

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoStubbingVoidAnswer3_) && (INCLUDE_ALL_OrgMockitoStubbingVoidAnswer3 || defined(INCLUDE_OrgMockitoStubbingVoidAnswer3))
#define OrgMockitoStubbingVoidAnswer3_

/*!
 @brief Generic interface to be used for configuring mock's answer for a three argument invocation that returns nothing.
 Answer specifies an action that is executed when you interact with the mock. 
 <p>
  Example of stubbing a mock with this custom answer: 
 <pre class="code"><code class="java">
  import static org.mockito.AdditionalAnswers.answerVoid;
  doAnswer(answerVoid(
      new VoidAnswer3&lt;String, Integer, String&gt;() {
          public void answer(String msg, Integer count, String another) throws Exception {
              throw new Exception(String.format(msg, another, count));
          }
  })).when(mock).someMethod(anyString(), anyInt(), anyString());
  //Following will raise an exception with the message "ka-boom 3"
  mock.someMethod("%s-boom %d", 3, "ka"); 
 </code>
@endcode
 - seealso: Answer
 */
@protocol OrgMockitoStubbingVoidAnswer3 < JavaObject >

/*!
 @param argument0 the first argument.
 @param argument1 the second argument.
 @param argument2 the third argument.
 @throw Throwablethe throwable to be thrown
 */
- (void)answerWithId:(id)argument0
              withId:(id)argument1
              withId:(id)argument2;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingVoidAnswer3)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingVoidAnswer3)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingVoidAnswer3")
