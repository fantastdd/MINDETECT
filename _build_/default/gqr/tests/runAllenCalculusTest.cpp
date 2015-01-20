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
#include "../gqr/tests/AllenCalculusTest.h"

static AllenCalculusTest suite_AllenCalculusTest;

static CxxTest::List Tests_AllenCalculusTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AllenCalculusTest( "../gqr/tests/AllenCalculusTest.h", 15, "AllenCalculusTest", suite_AllenCalculusTest, Tests_AllenCalculusTest );

static class TestDescription_AllenCalculusTest_testGetNumberOfBaseRelations : public CxxTest::RealTestDescription {
public:
 TestDescription_AllenCalculusTest_testGetNumberOfBaseRelations() : CxxTest::RealTestDescription( Tests_AllenCalculusTest, suiteDescription_AllenCalculusTest, 57, "testGetNumberOfBaseRelations" ) {}
 void runTest() { suite_AllenCalculusTest.testGetNumberOfBaseRelations(); }
} testDescription_AllenCalculusTest_testGetNumberOfBaseRelations;

static class TestDescription_AllenCalculusTest_testIdentityCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_AllenCalculusTest_testIdentityCondition() : CxxTest::RealTestDescription( Tests_AllenCalculusTest, suiteDescription_AllenCalculusTest, 62, "testIdentityCondition" ) {}
 void runTest() { suite_AllenCalculusTest.testIdentityCondition(); }
} testDescription_AllenCalculusTest_testIdentityCondition;

static class TestDescription_AllenCalculusTest_testUniversal : public CxxTest::RealTestDescription {
public:
 TestDescription_AllenCalculusTest_testUniversal() : CxxTest::RealTestDescription( Tests_AllenCalculusTest, suiteDescription_AllenCalculusTest, 68, "testUniversal" ) {}
 void runTest() { suite_AllenCalculusTest.testUniversal(); }
} testDescription_AllenCalculusTest_testUniversal;

static class TestDescription_AllenCalculusTest_testGetConverse : public CxxTest::RealTestDescription {
public:
 TestDescription_AllenCalculusTest_testGetConverse() : CxxTest::RealTestDescription( Tests_AllenCalculusTest, suiteDescription_AllenCalculusTest, 76, "testGetConverse" ) {}
 void runTest() { suite_AllenCalculusTest.testGetConverse(); }
} testDescription_AllenCalculusTest_testGetConverse;

static class TestDescription_AllenCalculusTest_testGetComposition : public CxxTest::RealTestDescription {
public:
 TestDescription_AllenCalculusTest_testGetComposition() : CxxTest::RealTestDescription( Tests_AllenCalculusTest, suiteDescription_AllenCalculusTest, 94, "testGetComposition" ) {}
 void runTest() { suite_AllenCalculusTest.testGetComposition(); }
} testDescription_AllenCalculusTest_testGetComposition;

static class TestDescription_AllenCalculusTest_testEncodeRelation : public CxxTest::RealTestDescription {
public:
 TestDescription_AllenCalculusTest_testEncodeRelation() : CxxTest::RealTestDescription( Tests_AllenCalculusTest, suiteDescription_AllenCalculusTest, 110, "testEncodeRelation" ) {}
 void runTest() { suite_AllenCalculusTest.testEncodeRelation(); }
} testDescription_AllenCalculusTest_testEncodeRelation;

static class TestDescription_AllenCalculusTest_testGetBaseRelationNames : public CxxTest::RealTestDescription {
public:
 TestDescription_AllenCalculusTest_testGetBaseRelationNames() : CxxTest::RealTestDescription( Tests_AllenCalculusTest, suiteDescription_AllenCalculusTest, 132, "testGetBaseRelationNames" ) {}
 void runTest() { suite_AllenCalculusTest.testGetBaseRelationNames(); }
} testDescription_AllenCalculusTest_testGetBaseRelationNames;

#include <cxxtest/Root.cpp>
