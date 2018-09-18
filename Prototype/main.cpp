#include <iostream>
#include <memory>

#include "concretePrototype1.h"
#include "concretePrototype2.h"

int main() {

  std::unique_ptr<Prototype> pa(new ConcretePrototype1);
  std::cout << pa->information() << std::endl;

  // Cloning pa into pb
  std::unique_ptr<Prototype> pb(pa->clone());
  std::cout << pb->information() << std::endl;

  return 0;
}
