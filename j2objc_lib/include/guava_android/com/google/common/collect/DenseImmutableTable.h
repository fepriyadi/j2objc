//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/DenseImmutableTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectDenseImmutableTable")
#ifdef RESTRICT_ComGoogleCommonCollectDenseImmutableTable
#define INCLUDE_ALL_ComGoogleCommonCollectDenseImmutableTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectDenseImmutableTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectDenseImmutableTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectDenseImmutableTable_) && (INCLUDE_ALL_ComGoogleCommonCollectDenseImmutableTable || defined(INCLUDE_ComGoogleCommonCollectDenseImmutableTable))
#define ComGoogleCommonCollectDenseImmutableTable_

#define RESTRICT_ComGoogleCommonCollectRegularImmutableTable 1
#define INCLUDE_ComGoogleCommonCollectRegularImmutableTable 1
#include "com/google/common/collect/RegularImmutableTable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableTable_SerializedForm;
@protocol ComGoogleCommonCollectTable_Cell;

/*!
 @brief A <code>RegularImmutableTable</code> optimized for dense data.
 */
@interface ComGoogleCommonCollectDenseImmutableTable : ComGoogleCommonCollectRegularImmutableTable

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (id)getWithId:(id __nullable)rowKey
         withId:(id __nullable)columnKey;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (jint)size;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList * __nonnull)cellList
                                             withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet * __nonnull)rowSpace
                                             withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet * __nonnull)columnSpace;

- (ComGoogleCommonCollectImmutableTable_SerializedForm *)createSerializedForm;

- (id<ComGoogleCommonCollectTable_Cell>)getCellWithInt:(jint)index;

- (id)getValueWithInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDenseImmutableTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectDenseImmutableTable_initPackagePrivateWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectDenseImmutableTable *self, ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

FOUNDATION_EXPORT ComGoogleCommonCollectDenseImmutableTable *new_ComGoogleCommonCollectDenseImmutableTable_initPackagePrivateWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectDenseImmutableTable *create_ComGoogleCommonCollectDenseImmutableTable_initPackagePrivateWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSet_withComGoogleCommonCollectImmutableSet_(ComGoogleCommonCollectImmutableList *cellList, ComGoogleCommonCollectImmutableSet *rowSpace, ComGoogleCommonCollectImmutableSet *columnSpace);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDenseImmutableTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectDenseImmutableTable")
