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
#include "../gqr/tests/CalculusReaderTest.h"

static CalculusReaderTest suite_CalculusReaderTest;

static CxxTest::List Tests_CalculusReaderTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CalculusReaderTest( "../gqr/tests/CalculusReaderTest.h", 15, "CalculusReaderTest", suite_CalculusReaderTest, Tests_CalculusReaderTest );

static class TestDescription_CalculusReaderTest_testReadCalculus : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusReaderTest_testReadCalculus() : CxxTest::RealTestDescription( Tests_CalculusReaderTest, suiteDescription_CalculusReaderTest, 48, "testReadCalculus" ) {}
 void runTest() { suite_CalculusReaderTest.testReadCalculus(); }
} testDescription_CalculusReaderTest_testReadCalculus;

static class TestDescription_CalculusReaderTest_testRCC5 : public CxxTest::RealTestDescription {
public:
 TestDescription_CalculusReaderTest_testRCC5() : CxxTest::RealTestDescription( Tests_CalculusReaderTest, suiteDescription_CalculusReaderTest, 74, "testRCC5" ) {}
 void runTest() { suite_CalculusReaderTest.testRCC5(); }
} testDescription_CalculusReaderTest_testRCC5;

#include <cxxtest/Root.cpp>
