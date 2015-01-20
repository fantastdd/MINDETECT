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
#include "../gqr/tests/TupleTest.h"

static TupleTest suite_TupleTest;

static CxxTest::List Tests_TupleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TupleTest( "../gqr/tests/TupleTest.h", 10, "TupleTest", suite_TupleTest, Tests_TupleTest );

static class TestDescription_TupleTest_testEquals : public CxxTest::RealTestDescription {
public:
 TestDescription_TupleTest_testEquals() : CxxTest::RealTestDescription( Tests_TupleTest, suiteDescription_TupleTest, 20, "testEquals" ) {}
 void runTest() { suite_TupleTest.testEquals(); }
} testDescription_TupleTest_testEquals;

static class TestDescription_TupleTest_testHash : public CxxTest::RealTestDescription {
public:
 TestDescription_TupleTest_testHash() : CxxTest::RealTestDescription( Tests_TupleTest, suiteDescription_TupleTest, 26, "testHash" ) {}
 void runTest() { suite_TupleTest.testHash(); }
} testDescription_TupleTest_testHash;

#include <cxxtest/Root.cpp>
