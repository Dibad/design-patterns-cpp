#include <iostream>

#include "concreteStateA.h"
#include "context.h"

int main() {
  Context context(new ConcreteStateA);
  context.request();
  context.request();
  context.request();
  context.request();
  context.request();

  return 0;
}
