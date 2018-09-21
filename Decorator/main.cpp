#include "concreteComponent.h"
#include "concreteDecoratorA.h"
#include "concreteDecoratorB.h"

int main() {
  Component *c = new ConcreteComponent;
  Decorator *dA = new ConcreteDecoratorA(c);
  Decorator *dB = new ConcreteDecoratorB(dA);
  dB->operation();

  delete c;
  delete dA;
  delete dB;

  return 0;
}
