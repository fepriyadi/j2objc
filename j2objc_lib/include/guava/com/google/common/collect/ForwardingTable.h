//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/ForwardingTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingTable")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingTable
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingTable_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingTable || defined(INCLUDE_ComGoogleCommonCollectForwardingTable))
#define ComGoogleCommonCollectForwardingTable_

#define RESTRICT_ComGoogleCommonCollectForwardingObject 1
#define INCLUDE_ComGoogleCommonCollectForwardingObject 1
#include "com/google/common/collect/ForwardingObject.h"

#define RESTRICT_ComGoogleCommonCollectTable 1
#define INCLUDE_ComGoogleCommonCollectTable 1
#include "com/google/common/collect/Table.h"

@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A table which forwards all its method calls to another table.Subclasses should override one or
  more methods to modify the behavior of the backing map as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 @author Gregory Kick
 @since 7.0
 */
@interface ComGoogleCommonCollectForwardingTable : ComGoogleCommonCollectForwardingObject < ComGoogleCommonCollectTable >

#pragma mark Public

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id __nonnull)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id __nonnull)rowKey
                    withId:(id __nonnull)columnKey;

- (jboolean)containsColumnWithId:(id __nonnull)columnKey;

- (jboolean)containsRowWithId:(id __nonnull)rowKey;

- (jboolean)containsValueWithId:(id __nonnull)value;

- (jboolean)isEqual:(id __nonnull)obj;

- (id)getWithId:(id __nonnull)rowKey
         withId:(id __nonnull)columnKey;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id)putWithId:(id __nonnull)rowKey
         withId:(id __nonnull)columnKey
         withId:(id __nonnull)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

- (id)removeWithId:(id __nonnull)rowKey
            withId:(id __nonnull)columnKey;

- (id<JavaUtilMap>)rowWithId:(id __nonnull)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<ComGoogleCommonCollectTable>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingTable_init(ComGoogleCommonCollectForwardingTable *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingTable")