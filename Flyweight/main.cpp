#include <iostream>
#include <memory>

#include "flyweightFabric.h"

int main() {
  FlyweightFabric fabric;
  fabric.getFlyweight("A")->operation(1);
  fabric.getFlyweight("A")->operation(2);
  fabric.getFlyweight("B")->operation(3);

  auto unsharedf = fabric.getUnsharedFlyweight("A");
  unsharedf->operation(1);

  delete unsharedf;

  return 0;
}
