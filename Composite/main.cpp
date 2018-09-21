#include <iostream>

#include "composite.h"
#include "leaf.h"

int main() {
  Composite c1;
  c1.add(new Leaf("A"));
  c1.add(new Leaf("B"));
  c1.add(new Composite);
  c1.getChild(2)->add(new Leaf("2->A"));
  c1.getChild(2)->add(new Leaf("2->B"));

  c1.operation();

  return 0;
}
