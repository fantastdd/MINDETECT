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
#include "../gqr/tests/CombinedCalculusReaderTest.h"

static CombinedCalculusReaderTest suite_CombinedCalculusReaderTest;

static CxxTest::List Tests_CombinedCalculusReaderTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CombinedCalculusReaderTest( "../gqr/tests/CombinedCalculusReaderTest.h", 15, "CombinedCalculusReaderTest", suite_CombinedCalculusReaderTest, Tests_CombinedCalculusReaderTest );

static class TestDescription_CombinedCalculusReaderTest_test3DPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_CombinedCalculusReaderTest_test3DPoint() : CxxTest::RealTestDescription( Tests_CombinedCalculusReaderTest, suiteDescription_CombinedCalculusReaderTest, 22, "test3DPoint" ) {}
 void runTest() { suite_CombinedCalculusReaderTest.test3DPoint(); }
} testDescription_CombinedCalculusReaderTest_test3DPoint;

static class TestDescription_CombinedCalculusReaderTest_testRCC8Point : public CxxTest::RealTestDescription {
public:
 TestDescription_CombinedCalculusReaderTest_testRCC8Point() : CxxTest::RealTestDescription( Tests_CombinedCalculusReaderTest, suiteDescription_CombinedCalculusReaderTest, 39, "testRCC8Point" ) {}
 void runTest() { suite_CombinedCalculusReaderTest.testRCC8Point(); }
} testDescription_CombinedCalculusReaderTest_testRCC8Point;

static class TestDescription_CombinedCalculusReaderTest_testRectangleAlgebra : public CxxTest::RealTestDescription {
public:
 TestDescription_CombinedCalculusReaderTest_testRectangleAlgebra() : CxxTest::RealTestDescription( Tests_CombinedCalculusReaderTest, suiteDescription_CombinedCalculusReaderTest, 56, "testRectangleAlgebra" ) {}
 void runTest() { suite_CombinedCalculusReaderTest.testRectangleAlgebra(); }
} testDescription_CombinedCalculusReaderTest_testRectangleAlgebra;

#include <cxxtest/Root.cpp>
