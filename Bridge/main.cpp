#include "refinedAbstraction.h"
#include "concreteImplementorA.h"
#include "concreteImplementorB.h"

int main() {
  RefinedAbstraction a(new ConcreteImplementorA);
  a.refinedOperation();

  a.changeImplementor(new ConcreteImplementorB);
  a.refinedOperation();

  return 0;
}
