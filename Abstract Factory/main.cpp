#include <memory>

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

void products(const std::unique_ptr<AbstractFactory>& af) {
  std::unique_ptr<AbstractProductA> pa(af->CreateProductA());
  std::unique_ptr<AbstractProductB> pb(af->CreateProductB());

  pa->information();
  pb->information();
}

int main() {

  std::cout << "Instantiation of a type 1 factory" << std::endl;
  std::unique_ptr<AbstractFactory> af(new ConcreteFactory1);
  products(af);

  std::cout << "Instantiation of a type 2 factory" << std::endl;
  af.reset(new ConcreteFactory2);
  products(af);

  return 0;
}
