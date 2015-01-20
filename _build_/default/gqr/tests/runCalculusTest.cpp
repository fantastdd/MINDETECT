/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "../gqr/tests/CalculusTest.h"

static CalculusTest suite_CalculusTest;

static CxxTest::List Tests_CalculusTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CalculusTest( "../gqr/tests/CalculusTest.h", 15, "CalculusTest", suite_CalculusTest, Tests_CalculusTest );

static class TestDescription_CalculusTest_testConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testConstructor() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 53, "testConstructor" ) {}
 void runTest() { suite_CalculusTest.testConstructor(); }
} testDescription_CalculusTest_testConstructor;

static class TestDescription_CalculusTest_testGetNumberOfBaseRelations : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testGetNumberOfBaseRelations() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 74, "testGetNumberOfBaseRelations" ) {}
 void runTest() { suite_CalculusTest.testGetNumberOfBaseRelations(); }
} testDescription_CalculusTest_testGetNumberOfBaseRelations;

static class TestDescription_CalculusTest_testIdentityCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testIdentityCondition() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 80, "testIdentityCondition" ) {}
 void runTest() { suite_CalculusTest.testIdentityCondition(); }
} testDescription_CalculusTest_testIdentityCondition;

static class TestDescription_CalculusTest_testAllCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testAllCondition() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 87, "testAllCondition" ) {}
 void runTest() { suite_CalculusTest.testAllCondition(); }
} testDescription_CalculusTest_testAllCondition;

static class TestDescription_CalculusTest_testGetConverse : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testGetConverse() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 93, "testGetConverse" ) {}
 void runTest() { suite_CalculusTest.testGetConverse(); }
} testDescription_CalculusTest_testGetConverse;

static class TestDescription_CalculusTest_testGetComposition : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testGetComposition() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 109, "testGetComposition" ) {}
 void runTest() { suite_CalculusTest.testGetComposition(); }
} testDescription_CalculusTest_testGetComposition;

static class TestDescription_CalculusTest_testEncodeRelation : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testEncodeRelation() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 121, "testEncodeRelation" ) {}
 void runTest() { suite_CalculusTest.testEncodeRelation(); }
} testDescription_CalculusTest_testEncodeRelation;

static class TestDescription_CalculusTest_testGetCompositionEquality : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testGetCompositionEquality() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 148, "testGetCompositionEquality" ) {}
 void runTest() { suite_CalculusTest.testGetCompositionEquality(); }
} testDescription_CalculusTest_testGetCompositionEquality;

static class TestDescription_CalculusTest_testRelationToStringEmptyRelation : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testRelationToStringEmptyRelation() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 168, "testRelationToStringEmptyRelation" ) {}
 void runTest() { suite_CalculusTest.testRelationToStringEmptyRelation(); }
} testDescription_CalculusTest_testRelationToStringEmptyRelation;

static class TestDescription_CalculusTest_testRelationToStringUniversalRelation : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testRelationToStringUniversalRelation() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 175, "testRelationToStringUniversalRelation" ) {}
 void runTest() { suite_CalculusTest.testRelationToStringUniversalRelation(); }
} testDescription_CalculusTest_testRelationToStringUniversalRelation;

static class TestDescription_CalculusTest_testRelationToStringBaseRelations : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testRelationToStringBaseRelations() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 186, "testRelationToStringBaseRelations" ) {}
 void runTest() { suite_CalculusTest.testRelationToStringBaseRelations(); }
} testDescription_CalculusTest_testRelationToStringBaseRelations;

static class TestDescription_CalculusTest_testGetWeight : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusTest_testGetWeight() : CxxTest::RealTestDescription( Tests_CalculusTest, suiteDescription_CalculusTest, 196, "testGetWeight" ) {}
 void runTest() { suite_CalculusTest.testGetWeight(); }
} testDescription_CalculusTest_testGetWeight;

#include <cxxtest/Root.cpp>
