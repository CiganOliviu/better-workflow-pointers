#include "betterWorkflow.hpp"

int main(int argc, char const *argv[]) {

  PointerObject<int> ptr1;
  PointerWorkFlow ptrWorkflow;

  ptr1.Pointer = ptrWorkflow.dynamicMemoryAllocation<int> (100);

  if (ptrWorkflow.isNullPointer(ptr1.Pointer)) {
    LOG("Allocation failed");
  }
  else {
    ptr1.getPointerAddr();
    ptr1.getPointerValue();
  }

  return 0;
}
