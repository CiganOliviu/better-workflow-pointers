#include "testingWorkFlowDef.hpp"

template <class Type> bool assertions::assertData (Type toTest, Type expected) {

  if (toTest == expected) return true;

  return false;
}

void assertions::logEvaluation (char * testName, bool evaluation) {

    if (evaluation)
      std::cout << "Test " << testName << " passed" << "\n";

    else
      std::cout << "Test " << testName << " failed" << "\n";
}

void betterPointersWorkFlowTests::testIsNullPointer () {

  PointerObject<int> ptr;
  PointerWorkFlow ptrWorkflow;

  bool evaluationValue = ptrWorkflow.isNullPointer (ptr.Pointer);

  bool result = assert.assertData (evaluationValue, true);

  assert.logEvaluation((char*)"test is null pointer", result);
}

void betterPointersWorkFlowTests::testDynamicMemoryAllocation () {

  PointerObject<int> ptr;
  PointerWorkFlow ptrWorkflow;

  ptr.Pointer = ptrWorkflow.dynamicMemoryAllocation<int> (100);

  bool evaluationValue = ptrWorkflow.isNullPointer (ptr.Pointer);

  bool result = assert.assertData (evaluationValue, false);

  assert.logEvaluation((char*)"test dynamic memory allocation", result);
}

int main(int argc, char const *argv[]) {

  betterPointersWorkFlowTests betterPointersTests;

  betterPointersTests.testIsNullPointer ();
  betterPointersTests.testDynamicMemoryAllocation ();

  return 0;
}
