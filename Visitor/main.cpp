#include <vector>

#include "concreteElementA.h"
#include "concreteElementB.h"
#include "concreteVisitor1.h"
#include "concreteVisitor2.h"

int main() {
  ConcreteVisitor1 v1;
  ConcreteVisitor2 v2;

  ConcreteElementA eA;
  ConcreteElementB eB;

  std::vector<Element *> vec;
  vec.push_back(&eA);
  vec.push_back(&eB);
  vec.push_back(&eA);
  vec.push_back(&eB);

  for (const auto &e : vec) {
    e->accept(&v1);
  }

  for (const auto &e : vec) {
    e->accept(&v2);
  }

  return 0;
}
