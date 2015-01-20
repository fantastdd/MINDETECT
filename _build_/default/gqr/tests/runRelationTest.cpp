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
#include "../gqr/tests/RelationTest.h"

static RelationTest suite_RelationTest;

static CxxTest::List Tests_RelationTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RelationTest( "../gqr/tests/RelationTest.h", 9, "RelationTest", suite_RelationTest, Tests_RelationTest );

static class TestDescription_RelationTest_testZeroInit : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationTest_testZeroInit() : CxxTest::RealTestDescription( Tests_RelationTest, suiteDescription_RelationTest, 21, "testZeroInit" ) {}
 void runTest() { suite_RelationTest.testZeroInit(); }
} testDescription_RelationTest_testZeroInit;

static class TestDescription_RelationTest_testEqualityInequality : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationTest_testEqualityInequality() : CxxTest::RealTestDescription( Tests_RelationTest, suiteDescription_RelationTest, 35, "testEqualityInequality" ) {}
 void runTest() { suite_RelationTest.testEqualityInequality(); }
} testDescription_RelationTest_testEqualityInequality;

static class TestDescription_RelationTest_testNone : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationTest_testNone() : CxxTest::RealTestDescription( Tests_RelationTest, suiteDescription_RelationTest, 65, "testNone" ) {}
 void runTest() { suite_RelationTest.testNone(); }
} testDescription_RelationTest_testNone;

static class TestDescription_RelationTest_testArrayAndSetOperators : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationTest_testArrayAndSetOperators() : CxxTest::RealTestDescription( Tests_RelationTest, suiteDescription_RelationTest, 70, "testArrayAndSetOperators" ) {}
 void runTest() { suite_RelationTest.testArrayAndSetOperators(); }
} testDescription_RelationTest_testArrayAndSetOperators;

static class TestDescription_RelationTest_testCardinality : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationTest_testCardinality() : CxxTest::RealTestDescription( Tests_RelationTest, suiteDescription_RelationTest, 106, "testCardinality" ) {}
 void runTest() { suite_RelationTest.testCardinality(); }
} testDescription_RelationTest_testCardinality;

static class TestDescription_RelationTest_testOrOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationTest_testOrOperator() : CxxTest::RealTestDescription( Tests_RelationTest, suiteDescription_RelationTest, 129, "testOrOperator" ) {}
 void runTest() { suite_RelationTest.testOrOperator(); }
} testDescription_RelationTest_testOrOperator;

static class TestDescription_RelationTest_testAndOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationTest_testAndOperator() : CxxTest::RealTestDescription( Tests_RelationTest, suiteDescription_RelationTest, 153, "testAndOperator" ) {}
 void runTest() { suite_RelationTest.testAndOperator(); }
} testDescription_RelationTest_testAndOperator;

static class TestDescription_RelationTest_testSubset : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationTest_testSubset() : CxxTest::RealTestDescription( Tests_RelationTest, suiteDescription_RelationTest, 177, "testSubset" ) {}
 void runTest() { suite_RelationTest.testSubset(); }
} testDescription_RelationTest_testSubset;

#include <cxxtest/Root.cpp>
