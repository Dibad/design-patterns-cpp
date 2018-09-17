#include "director.h"

#include "concreteBuilderA.h"
#include "concreteBuilderB.h"

int main() {
  Director d;

  std::cout << "-> Builder A" << std::endl;
  d.setBuilder(new ConcreteBuilderA);
  d.construct();
  Product p1 = d.getResult();
  std::cout << "Product string: " << p1.completeString() << std::endl;

  std::cout << "-> Builder B" << std::endl;
  d.setBuilder(new ConcreteBuilderB);
  d.construct();
  Product p2 = d.getResult();
  std::cout << "Product string: " << p2.completeString() << std::endl;

  return 0;
}
