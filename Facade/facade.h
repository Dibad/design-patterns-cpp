#pragma once

#include "componentA.h"
#include "componentB.h"
#include "componentC.h"

class Facade {
public:
  void operationAB() const {
    cA_.operation();
    cB_.operation();
  }

  void operationBC() const {
    cB_.operation();
    cC_.operation();
  }

  void operationABC() const {
    cA_.operation();
    cB_.operation();
    cC_.operation();
  }

private:
  ComponentA cA_;
  ComponentB cB_;
  ComponentC cC_;
};
