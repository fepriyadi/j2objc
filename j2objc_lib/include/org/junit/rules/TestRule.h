//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/TestRule.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesTestRule")
#ifdef RESTRICT_OrgJunitRulesTestRule
#define INCLUDE_ALL_OrgJunitRulesTestRule 0
#else
#define INCLUDE_ALL_OrgJunitRulesTestRule 1
#endif
#undef RESTRICT_OrgJunitRulesTestRule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRulesTestRule_) && (INCLUDE_ALL_OrgJunitRulesTestRule || defined(INCLUDE_OrgJunitRulesTestRule))
#define OrgJunitRulesTestRule_

@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;

/*!
 @brief A TestRule is an alteration in how a test method, or set of test methods,
  is run and reported.A <code>TestRule</code> may add additional checks that cause
  a test that would otherwise fail to pass, or it may perform necessary setup or
  cleanup for tests, or it may observe test execution to report it elsewhere.
 <code>TestRule</code>s can do everything that could be done previously with
  methods annotated with <code>org.junit.Before</code>,
  <code>org.junit.After</code>, <code>org.junit.BeforeClass</code>, or 
 <code>org.junit.AfterClass</code>, but they are more powerful, and more easily
  shared
  between projects and classes.
  The default JUnit test runners for suites and
  individual test cases recognize <code>TestRule</code>s introduced in two different
  ways.  <code>org.junit.Rule</code> annotates method-level 
 <code>TestRule</code>s, and <code>org.junit.ClassRule</code>
  annotates class-level <code>TestRule</code>s.  See Javadoc for those annotations
  for more information.
  Multiple <code>TestRule</code>s can be applied to a test or suite execution. The 
 <code>Statement</code> that executes the method or suite is passed to each annotated 
 <code>org.junit.Rule</code> in turn, and each may return a substitute or modified 
 <code>Statement</code>, which is passed to the next <code>org.junit.Rule</code>, if any. For
  examples of how this can be useful, see these provided TestRules,
  or write your own: 
 <ul>
    <li><code>ErrorCollector</code>: collect multiple errors in one test method</li>
    <li><code>ExpectedException</code>: make flexible assertions about thrown exceptions</li>
    <li><code>ExternalResource</code>: start and stop a server, for example</li>
    <li><code>TemporaryFolder</code>: create fresh files, and delete after test</li>
    <li><code>TestName</code>: remember the test name for use during the method</li>
    <li><code>TestWatcher</code>: add logic at events during method execution</li>
    <li><code>Timeout</code>: cause test to fail after a set time</li>
    <li><code>Verifier</code>: fail test if object state ends up incorrect</li>
  </ul>
 @since 4.9
 */
@protocol OrgJunitRulesTestRule < JavaObject >

/*!
 @brief Modifies the method-running <code>Statement</code> to implement this
  test-running rule.
 @param base The <code>Statement</code>  to be modified
 @param description_ A <code>Description</code>  of the test implemented in <code>base</code>
 @return a new statement, which may be the same as <code>base</code>,
          a wrapper around <code>base</code>, or a completely new Statement.
 */
- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesTestRule)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesTestRule)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesTestRule")
