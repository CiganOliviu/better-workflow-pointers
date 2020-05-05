#include "betterWorkflowDef.hpp"

template <class Type> Type * PointerWorkFlow::addressValue (Type valueToAssign) {

  Type * Pointer = NULL;

  Pointer = &valueToAssign;

  return Pointer;
}

template <class Type> bool PointerWorkFlow::isNullPointer (Type PointerArgument) {

  if (!PointerArgument)
    return true;

  return false;
}

template <class Type> Type * PointerWorkFlow::dynamicMemoryAllocation (int size) {

  Type * Pointer = (Type *) malloc(size);

  return Pointer;
}

template <class Type> Type * PointerWorkFlow::dynamicMemoryReallocation (Type *PointerArgument, int size) {

  Type * Pointer = (Type *) realloc(PointerArgument, size);

  return Pointer;
}
