#include <iostream>

#ifndef LOG
#define LOG(data) std::cout << data << std::endl;
#endif

template <class Type> class PointerObject {

public:

  Type * Pointer;

  PointerObject () {

    this->Pointer = NULL;
  }

  void getPointerAddr () {

    LOG(this->Pointer);
  }

  void getPointerValue () {

    LOG(*this->Pointer);
  }

  virtual ~PointerObject () {

    delete(this->Pointer);
  }
};

class PointerWorkFlow {
private:

public:
  PointerWorkFlow () {};

  template <class Type> Type * addressValue (Type valueToAssign);
  template <class Type> bool isNullPointer (Type PointerArgument);
  template <class Type> Type * dynamicMemoryAllocation (int size);
  template <class Type> Type * dynamicMemoryReallocation (Type *PointerArgument, int size);

  virtual ~PointerWorkFlow () {};
};

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
