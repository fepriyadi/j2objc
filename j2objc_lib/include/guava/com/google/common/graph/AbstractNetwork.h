//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/graph/AbstractNetwork.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork")
#ifdef RESTRICT_ComGoogleCommonGraphAbstractNetwork
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork 1
#endif
#undef RESTRICT_ComGoogleCommonGraphAbstractNetwork

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphAbstractNetwork_) && (INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork || defined(INCLUDE_ComGoogleCommonGraphAbstractNetwork))
#define ComGoogleCommonGraphAbstractNetwork_

#define RESTRICT_ComGoogleCommonGraphNetwork 1
#define INCLUDE_ComGoogleCommonGraphNetwork 1
#include "com/google/common/graph/Network.h"

@class ComGoogleCommonGraphEndpointPair;
@class JavaUtilOptional;
@protocol ComGoogleCommonGraphGraph;
@protocol JavaUtilSet;

/*!
 @brief This class provides a skeletal implementation of <code>Network</code>.It is recommended to extend
  this class rather than implement <code>Network</code> directly.
 <p>The methods implemented in this class should not be overridden unless the subclass admits a
  more efficient implementation.
 @author James Sexton
 @since 20.0
 */
@interface ComGoogleCommonGraphAbstractNetwork : NSObject < ComGoogleCommonGraphNetwork >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<JavaUtilSet>)adjacentEdgesWithId:(id __nonnull)edge;

- (id<ComGoogleCommonGraphGraph>)asGraph;

- (jint)degreeWithId:(id __nonnull)node;

- (JavaUtilOptional *)edgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (JavaUtilOptional *)edgeConnectingWithId:(id __nonnull)nodeU
                                    withId:(id __nonnull)nodeV;

- (id)edgeConnectingOrNullWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (id)edgeConnectingOrNullWithId:(id __nonnull)nodeU
                          withId:(id __nonnull)nodeV;

- (id<JavaUtilSet>)edgesConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (id<JavaUtilSet>)edgesConnectingWithId:(id __nonnull)nodeU
                                  withId:(id __nonnull)nodeV;

- (jboolean)isEqual:(id __nullable)obj;

- (jboolean)hasEdgeConnectingWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

- (jboolean)hasEdgeConnectingWithId:(id __nonnull)nodeU
                             withId:(id __nonnull)nodeV;

- (NSUInteger)hash;

- (jint)inDegreeWithId:(id __nonnull)node;

- (jint)outDegreeWithId:(id __nonnull)node;

/*!
 @brief Returns a string representation of this network.
 */
- (NSString *)description;

#pragma mark Protected

- (jboolean)isOrderingCompatibleWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

/*!
 @brief Throws an IllegalArgumentException if the ordering of <code>endpoints</code> is not compatible with
  the directionality of this graph.
 */
- (void)validateEndpointsWithComGoogleCommonGraphEndpointPair:(ComGoogleCommonGraphEndpointPair * __nonnull)endpoints;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphAbstractNetwork)

FOUNDATION_EXPORT void ComGoogleCommonGraphAbstractNetwork_init(ComGoogleCommonGraphAbstractNetwork *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphAbstractNetwork)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphAbstractNetwork")
