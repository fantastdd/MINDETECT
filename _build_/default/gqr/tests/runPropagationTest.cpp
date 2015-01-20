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
#include "../gqr/tests/PropagationTest.h"

static ReasoningTest suite_ReasoningTest;

static CxxTest::List Tests_ReasoningTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ReasoningTest( "../gqr/tests/PropagationTest.h", 45, "ReasoningTest", suite_ReasoningTest, Tests_ReasoningTest );

static class TestDescription_ReasoningTest_testAllenInitialConsistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testAllenInitialConsistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 76, "testAllenInitialConsistent" ) {}
 void runTest() { suite_ReasoningTest.testAllenInitialConsistent(); }
} testDescription_ReasoningTest_testAllenInitialConsistent;

static class TestDescription_ReasoningTest_testAllenInconsistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testAllenInconsistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 90, "testAllenInconsistent" ) {}
 void runTest() { suite_ReasoningTest.testAllenInconsistent(); }
} testDescription_ReasoningTest_testAllenInconsistent;

static class TestDescription_ReasoningTest_testAllenConsistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testAllenConsistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 118, "testAllenConsistent" ) {}
 void runTest() { suite_ReasoningTest.testAllenConsistent(); }
} testDescription_ReasoningTest_testAllenConsistent;

#include <cxxtest/Root.cpp>
