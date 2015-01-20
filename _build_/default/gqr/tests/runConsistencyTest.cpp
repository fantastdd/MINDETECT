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
#include "../gqr/tests/ConsistencyTest.h"

static ReasoningTest suite_ReasoningTest;

static CxxTest::List Tests_ReasoningTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ReasoningTest( "../gqr/tests/ConsistencyTest.h", 41, "ReasoningTest", suite_ReasoningTest, Tests_ReasoningTest );

static class TestDescription_ReasoningTest_testAllenInitialConsistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testAllenInitialConsistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 79, "testAllenInitialConsistent" ) {}
 void runTest() { suite_ReasoningTest.testAllenInitialConsistent(); }
} testDescription_ReasoningTest_testAllenInitialConsistent;

static class TestDescription_ReasoningTest_testRCC8InitialConsistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testRCC8InitialConsistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 96, "testRCC8InitialConsistent" ) {}
 void runTest() { suite_ReasoningTest.testRCC8InitialConsistent(); }
} testDescription_ReasoningTest_testRCC8InitialConsistent;

static class TestDescription_ReasoningTest_testAllenInconsistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testAllenInconsistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 114, "testAllenInconsistent" ) {}
 void runTest() { suite_ReasoningTest.testAllenInconsistent(); }
} testDescription_ReasoningTest_testAllenInconsistent;

static class TestDescription_ReasoningTest_testAllenConsistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testAllenConsistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 134, "testAllenConsistent" ) {}
 void runTest() { suite_ReasoningTest.testAllenConsistent(); }
} testDescription_ReasoningTest_testAllenConsistent;

static class TestDescription_ReasoningTest_testRCC8Consistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testRCC8Consistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 163, "testRCC8Consistent" ) {}
 void runTest() { suite_ReasoningTest.testRCC8Consistent(); }
} testDescription_ReasoningTest_testRCC8Consistent;

static class TestDescription_ReasoningTest_testRCC8NotPathConsistent : public CxxTest::RealTestDescription {
public:
 TestDescription_ReasoningTest_testRCC8NotPathConsistent() : CxxTest::RealTestDescription( Tests_ReasoningTest, suiteDescription_ReasoningTest, 200, "testRCC8NotPathConsistent" ) {}
 void runTest() { suite_ReasoningTest.testRCC8NotPathConsistent(); }
} testDescription_ReasoningTest_testRCC8NotPathConsistent;

#include <cxxtest/Root.cpp>
