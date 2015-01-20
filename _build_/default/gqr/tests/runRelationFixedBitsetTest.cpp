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
#include "../gqr/tests/RelationFixedBitsetTest.h"

static RelationFixedBitsetTest suite_RelationFixedBitsetTest;

static CxxTest::List Tests_RelationFixedBitsetTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RelationFixedBitsetTest( "../gqr/tests/RelationFixedBitsetTest.h", 415, "RelationFixedBitsetTest", suite_RelationFixedBitsetTest, Tests_RelationFixedBitsetTest );

static class TestDescription_RelationFixedBitsetTest_testAll : public CxxTest::RealTestDescription {
public:
 TestDescription_RelationFixedBitsetTest_testAll() : CxxTest::RealTestDescription( Tests_RelationFixedBitsetTest, suiteDescription_RelationFixedBitsetTest, 441, "testAll" ) {}
 void runTest() { suite_RelationFixedBitsetTest.testAll(); }
} testDescription_RelationFixedBitsetTest_testAll;

#include <cxxtest/Root.cpp>
