//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/InterruptibleTask.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentInterruptibleTask")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentInterruptibleTask
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentInterruptibleTask 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentInterruptibleTask 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentInterruptibleTask

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentInterruptibleTask_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentInterruptibleTask || defined(INCLUDE_ComGoogleCommonUtilConcurrentInterruptibleTask))
#define ComGoogleCommonUtilConcurrentInterruptibleTask_

#define RESTRICT_JavaUtilConcurrentAtomicAtomicReference 1
#define INCLUDE_JavaUtilConcurrentAtomicAtomicReference 1
#include "java/util/concurrent/atomic/AtomicReference.h"

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class JavaLangThrowable;
@protocol JavaUtilFunctionBinaryOperator;
@protocol JavaUtilFunctionUnaryOperator;

@interface ComGoogleCommonUtilConcurrentInterruptibleTask : JavaUtilConcurrentAtomicAtomicReference < JavaLangRunnable >

#pragma mark Public

- (id<JavaLangRunnable>)accumulateAndGetWithId:(id<JavaLangRunnable> __nonnull)arg0
            withJavaUtilFunctionBinaryOperator:(id<JavaUtilFunctionBinaryOperator> __nonnull)arg1;

- (id<JavaLangRunnable>)get;

- (id<JavaLangRunnable>)getAndAccumulateWithId:(id<JavaLangRunnable> __nonnull)arg0
            withJavaUtilFunctionBinaryOperator:(id<JavaUtilFunctionBinaryOperator> __nonnull)arg1;

- (id<JavaLangRunnable>)getAndSetWithId:(id<JavaLangRunnable> __nonnull)arg0;

- (id<JavaLangRunnable>)getAndUpdateWithJavaUtilFunctionUnaryOperator:(id<JavaUtilFunctionUnaryOperator> __nonnull)arg0;

- (void)run;

- (NSString *)description;

- (id<JavaLangRunnable>)updateAndGetWithJavaUtilFunctionUnaryOperator:(id<JavaUtilFunctionUnaryOperator> __nonnull)arg0;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

/*!
 @brief Any interruption that happens as a result of calling interruptTask will arrive before this
  method is called.Complete Futures here.
 */
- (void)afterRanInterruptiblyWithId:(id __nullable)result
              withJavaLangThrowable:(JavaLangThrowable * __nullable)error;

/*!
 @brief Interrupts the running task.Because this internally calls <code>Thread.interrupt()</code> which can
  in turn invoke arbitrary code it is not safe to call while holding a lock.
 */
- (void)interruptTask;

/*!
 @brief Called before runInterruptibly - if true, runInterruptibly and afterRanInterruptibly will not
  be called.
 */
- (jboolean)isDone;

/*!
 @brief Do interruptible work here - do not complete Futures here, as their listeners could be
  interrupted.
 */
- (id)runInterruptibly;

- (NSString *)toPendingString;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id __nonnull)arg0 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentInterruptibleTask)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentInterruptibleTask_initPackagePrivate(ComGoogleCommonUtilConcurrentInterruptibleTask *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentInterruptibleTask)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentInterruptibleTask")
