#include "concreteHandler1.h"
#include "concreteHandler2.h"

#include <iostream>

int main() {

  Handler *c1 = new ConcreteHandler1;
  Handler *c2 = new ConcreteHandler2;
  c1->setHandler(c2);

  std::cout << "-- Error 1 --" << std::endl;
  c1->handleRequest(1);

  std::cout << "\n-- Error 2 --" << std::endl;
  c1->handleRequest(2);

  std::cout << "\n-- Error 3 --" << std::endl;
  c1->handleRequest(3);

  return 0;
}
