#include "concreteStrategyA.h"
#include "concreteStrategyB.h"
#include "concreteStrategyC.h"
#include "context.h"

int main() {
  ConcreteStrategyA sA;
  ConcreteStrategyB sB;
  ConcreteStrategyC sC;

  Context context(&sA);
  context.contextInterface();
  context.changeStrategy(&sB);
  context.contextInterface();
  context.changeStrategy(&sC);
  context.contextInterface();

  return 0;
}
