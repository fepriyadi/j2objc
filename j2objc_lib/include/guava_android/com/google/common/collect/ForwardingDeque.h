//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/ForwardingDeque.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingDeque
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingDeque

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingDeque_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque || defined(INCLUDE_ComGoogleCommonCollectForwardingDeque))
#define ComGoogleCommonCollectForwardingDeque_

#define RESTRICT_ComGoogleCommonCollectForwardingQueue 1
#define INCLUDE_ComGoogleCommonCollectForwardingQueue 1
#include "com/google/common/collect/ForwardingQueue.h"

#define RESTRICT_JavaUtilDeque 1
#define INCLUDE_JavaUtilDeque 1
#include "java/util/Deque.h"

@protocol JavaUtilIterator;

/*!
 @brief A deque which forwards all its method calls to another deque.Subclasses should override one or
  more methods to modify the behavior of the backing deque as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p><b>Warning:</b> The methods of <code>ForwardingDeque</code> forward <b>indiscriminately</b> to the
  methods of the delegate. For example, overriding <code>add</code> alone <b>will not</b> change the
  behavior of <code>offer</code> which can lead to unexpected behavior. In this case, you should
  override <code>offer</code> as well. 
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingDeque</code>.
 @author Kurt Alfred Kluever
 @since 12.0
 */
@interface ComGoogleCommonCollectForwardingDeque : ComGoogleCommonCollectForwardingQueue < JavaUtilDeque >

#pragma mark Public

- (void)addFirstWithId:(id __nonnull)e;

- (void)addLastWithId:(id __nonnull)e;

- (id<JavaUtilIterator>)descendingIterator;

- (id)getFirst;

- (id)getLast;

- (jboolean)offerFirstWithId:(id __nonnull)e;

- (jboolean)offerLastWithId:(id __nonnull)e;

- (id)peekFirst;

- (id)peekLast;

- (id)pollFirst;

- (id)pollLast;

- (id)pop;

- (void)pushWithId:(id __nonnull)e;

- (id)removeFirst;

- (jboolean)removeFirstOccurrenceWithId:(id __nonnull)o;

- (id)removeLast;

- (jboolean)removeLastOccurrenceWithId:(id __nonnull)o;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilDeque>)delegate;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingDeque)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingDeque_init(ComGoogleCommonCollectForwardingDeque *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingDeque)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque")
