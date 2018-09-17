#include "concreteCreatorA.h"
#include "concreteCreatorB.h"

#include <memory>

void productInfo(const Creator *c) {
  std::unique_ptr<Product> p(c->factoryMethod());
  p->information();
}

int main() {

  // Product A
  std::unique_ptr<Creator> creator(new ConcreteCreatorA);
  productInfo(creator.get());

  // Product B
  creator.reset(new ConcreteCreatorB);
  productInfo(creator.get());

  return 0;
}
