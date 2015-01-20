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
#include "../gqr/tests/PriorityQueueTest.h"

static PriorityQueueTest suite_PriorityQueueTest;

static CxxTest::List Tests_PriorityQueueTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PriorityQueueTest( "../gqr/tests/PriorityQueueTest.h", 10, "PriorityQueueTest", suite_PriorityQueueTest, Tests_PriorityQueueTest );

static class TestDescription_PriorityQueueTest_testInsertKeyAuto : public CxxTest::RealTestDescription {
public:
 TestDescription_PriorityQueueTest_testInsertKeyAuto() : CxxTest::RealTestDescription( Tests_PriorityQueueTest, suiteDescription_PriorityQueueTest, 18, "testInsertKeyAuto" ) {}
 void runTest() { suite_PriorityQueueTest.testInsertKeyAuto(); }
} testDescription_PriorityQueueTest_testInsertKeyAuto;

static class TestDescription_PriorityQueueTest_testDecreaseKeyAuto : public CxxTest::RealTestDescription {
public:
 TestDescription_PriorityQueueTest_testDecreaseKeyAuto() : CxxTest::RealTestDescription( Tests_PriorityQueueTest, suiteDescription_PriorityQueueTest, 25, "testDecreaseKeyAuto" ) {}
 void runTest() { suite_PriorityQueueTest.testDecreaseKeyAuto(); }
} testDescription_PriorityQueueTest_testDecreaseKeyAuto;

static class TestDescription_PriorityQueueTest_testPopPeekAuto : public CxxTest::RealTestDescription {
public:
 TestDescription_PriorityQueueTest_testPopPeekAuto() : CxxTest::RealTestDescription( Tests_PriorityQueueTest, suiteDescription_PriorityQueueTest, 35, "testPopPeekAuto" ) {}
 void runTest() { suite_PriorityQueueTest.testPopPeekAuto(); }
} testDescription_PriorityQueueTest_testPopPeekAuto;

static class TestDescription_PriorityQueueTest_testInsertManual : public CxxTest::RealTestDescription {
public:
 TestDescription_PriorityQueueTest_testInsertManual() : CxxTest::RealTestDescription( Tests_PriorityQueueTest, suiteDescription_PriorityQueueTest, 48, "testInsertManual" ) {}
 void runTest() { suite_PriorityQueueTest.testInsertManual(); }
} testDescription_PriorityQueueTest_testInsertManual;

static class TestDescription_PriorityQueueTest_testDecreaseManual : public CxxTest::RealTestDescription {
public:
 TestDescription_PriorityQueueTest_testDecreaseManual() : CxxTest::RealTestDescription( Tests_PriorityQueueTest, suiteDescription_PriorityQueueTest, 64, "testDecreaseManual" ) {}
 void runTest() { suite_PriorityQueueTest.testDecreaseManual(); }
} testDescription_PriorityQueueTest_testDecreaseManual;

static class TestDescription_PriorityQueueTest_testPopPeekManual : public CxxTest::RealTestDescription {
public:
 TestDescription_PriorityQueueTest_testPopPeekManual() : CxxTest::RealTestDescription( Tests_PriorityQueueTest, suiteDescription_PriorityQueueTest, 83, "testPopPeekManual" ) {}
 void runTest() { suite_PriorityQueueTest.testPopPeekManual(); }
} testDescription_PriorityQueueTest_testPopPeekManual;

#include <cxxtest/Root.cpp>
