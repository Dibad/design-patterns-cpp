#include <iostream>

#include "concreteAggregate.h"
#include "concreteIterator.h"

int main() {
  ConcreteAggregate<int> aggregate(10);

  for (ConcreteIterator<int> iter(aggregate); !iter.isDone(); iter.next()) {
    iter.currentItem() = 10;
    std::cout << iter.currentItem() << std::endl;
  }

  return 0;
}
