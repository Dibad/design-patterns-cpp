#include "refinedAbstraction.h"
#include "concreteImplementorA.h"
#include "concreteImplementorB.h"

int main() {
  RefinedAbstraction a(std::make_unique<ConcreteImplementorA>());
  a.refinedOperation();

  a.changeImplementor(std::make_unique<ConcreteImplementorB>());
  a.refinedOperation();

  return 0;
}
