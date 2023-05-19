//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/graph/AbstractDirectedNetworkConnections.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections")
#ifdef RESTRICT_ComGoogleCommonGraphAbstractDirectedNetworkConnections
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections 1
#endif
#undef RESTRICT_ComGoogleCommonGraphAbstractDirectedNetworkConnections

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphAbstractDirectedNetworkConnections_) && (INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections || defined(INCLUDE_ComGoogleCommonGraphAbstractDirectedNetworkConnections))
#define ComGoogleCommonGraphAbstractDirectedNetworkConnections_

#define RESTRICT_ComGoogleCommonGraphNetworkConnections 1
#define INCLUDE_ComGoogleCommonGraphNetworkConnections 1
#include "com/google/common/graph/NetworkConnections.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A base implementation of <code>NetworkConnections</code> for directed networks.
 @author James Sexton
 */
@interface ComGoogleCommonGraphAbstractDirectedNetworkConnections : NSObject < ComGoogleCommonGraphNetworkConnections > {
 @public
  /*!
   @brief Keys are edges incoming to the origin node, values are the source node.
   */
  id<JavaUtilMap> inEdgeMap_;
  /*!
   @brief Keys are edges outgoing from the origin node, values are the target node.
   */
  id<JavaUtilMap> outEdgeMap_;
}

#pragma mark Public

- (void)addInEdgeWithId:(id __nonnull)edge
                 withId:(id __nonnull)node
            withBoolean:(jboolean)isSelfLoop;

- (void)addOutEdgeWithId:(id __nonnull)edge
                  withId:(id __nonnull)node;

- (id)adjacentNodeWithId:(id __nonnull)edge;

- (id<JavaUtilSet>)adjacentNodes;

- (id<JavaUtilSet>)incidentEdges;

- (id<JavaUtilSet>)inEdges;

- (id<JavaUtilSet>)outEdges;

- (id)removeInEdgeWithId:(id __nonnull)edge
             withBoolean:(jboolean)isSelfLoop;

- (id)removeOutEdgeWithId:(id __nonnull)edge;

#pragma mark Protected

- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)inEdgeMap
                                            withJavaUtilMap:(id<JavaUtilMap> __nonnull)outEdgeMap
                                                    withInt:(jint)selfLoopCount;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphAbstractDirectedNetworkConnections)

J2OBJC_FIELD_SETTER(ComGoogleCommonGraphAbstractDirectedNetworkConnections, inEdgeMap_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonGraphAbstractDirectedNetworkConnections, outEdgeMap_, id<JavaUtilMap>)

FOUNDATION_EXPORT void ComGoogleCommonGraphAbstractDirectedNetworkConnections_initPackagePrivateWithJavaUtilMap_withJavaUtilMap_withInt_(ComGoogleCommonGraphAbstractDirectedNetworkConnections *self, id<JavaUtilMap> inEdgeMap, id<JavaUtilMap> outEdgeMap, jint selfLoopCount);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphAbstractDirectedNetworkConnections)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractDirectedNetworkConnections")
