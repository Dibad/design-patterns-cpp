#include <iostream>
#include <memory>

#include "singletonObject.h"

int main() {
  auto& a = SingletonObject::instance();
  a.setStr("Hola");

  auto& b = SingletonObject::instance();
  std::cout << b.getStr() << std::endl;

  return 0;
}
