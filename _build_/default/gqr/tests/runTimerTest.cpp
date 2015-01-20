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
#include "../gqr/tests/TimerTest.h"

static TimerTest suite_TimerTest;

static CxxTest::List Tests_TimerTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimerTest( "../gqr/tests/TimerTest.h", 53, "TimerTest", suite_TimerTest, Tests_TimerTest );

static class TestDescription_TimerTest_testPassed : public CxxTest::RealTestDescription {
public:
 TestDescription_TimerTest_testPassed() : CxxTest::RealTestDescription( Tests_TimerTest, suiteDescription_TimerTest, 60, "testPassed" ) {}
 void runTest() { suite_TimerTest.testPassed(); }
} testDescription_TimerTest_testPassed;

#include <cxxtest/Root.cpp>
