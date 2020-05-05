#include "../betterWorkflow.hpp"

class assertions {
public:
  assertions () {}

  template <class Type> bool assertData (Type toTest, Type expected);
  void logEvaluation (char * testName, bool evaluation);

  virtual ~assertions () {}
};

class betterPointersWorkFlowTests {
private:
  assertions assert;

public:
  betterPointersWorkFlowTests () {}

  void testIsNullPointer ();
  void testDynamicMemoryAllocation ();

  virtual ~betterPointersWorkFlowTests () {}
};
