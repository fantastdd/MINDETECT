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
#include "../gqr/tests/CSPTest.h"

static CSPTest suite_CSPTest;

static CxxTest::List Tests_CSPTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CSPTest( "../gqr/tests/CSPTest.h", 33, "CSPTest", suite_CSPTest, Tests_CSPTest );

static class TestDescription_CSPTest_testMatrixInit : public CxxTest::RealTestDescription {
public:
 TestDescription_CSPTest_testMatrixInit() : CxxTest::RealTestDescription( Tests_CSPTest, suiteDescription_CSPTest, 39, "testMatrixInit" ) {}
 void runTest() { suite_CSPTest.testMatrixInit(); }
} testDescription_CSPTest_testMatrixInit;

static class TestDescription_CSPTest_testSize : public CxxTest::RealTestDescription {
public:
 TestDescription_CSPTest_testSize() : CxxTest::RealTestDescription( Tests_CSPTest, suiteDescription_CSPTest, 53, "testSize" ) {}
 void runTest() { suite_CSPTest.testSize(); }
} testDescription_CSPTest_testSize;

static class TestDescription_CSPTest_testName : public CxxTest::RealTestDescription {
public:
 TestDescription_CSPTest_testName() : CxxTest::RealTestDescription( Tests_CSPTest, suiteDescription_CSPTest, 61, "testName" ) {}
 void runTest() { suite_CSPTest.testName(); }
} testDescription_CSPTest_testName;

static class TestDescription_CSPTest_testGetCalculus : public CxxTest::RealTestDescription {
public:
 TestDescription_CSPTest_testGetCalculus() : CxxTest::RealTestDescription( Tests_CSPTest, suiteDescription_CSPTest, 67, "testGetCalculus" ) {}
 void runTest() { suite_CSPTest.testGetCalculus(); }
} testDescription_CSPTest_testGetCalculus;

static class TestDescription_CSPTest_testSetGetConstraint : public CxxTest::RealTestDescription {
public:
 TestDescription_CSPTest_testSetGetConstraint() : CxxTest::RealTestDescription( Tests_CSPTest, suiteDescription_CSPTest, 74, "testSetGetConstraint" ) {}
 void runTest() { suite_CSPTest.testSetGetConstraint(); }
} testDescription_CSPTest_testSetGetConstraint;

static class TestDescription_CSPTest_testCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_CSPTest_testCopyConstructor() : CxxTest::RealTestDescription( Tests_CSPTest, suiteDescription_CSPTest, 98, "testCopyConstructor" ) {}
 void runTest() { suite_CSPTest.testCopyConstructor(); }
} testDescription_CSPTest_testCopyConstructor;

#include <cxxtest/Root.cpp>
