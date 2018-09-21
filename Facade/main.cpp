/* #include "componentA.h" */
/* #include "componentB.h" */
/* #include "componentC.h" */

// Only Facade is necessary
#include "facade.h"

int main() {
  Facade facade_;
  facade_.operationAB();
  facade_.operationBC();
  facade_.operationABC();

  return 0;
}
