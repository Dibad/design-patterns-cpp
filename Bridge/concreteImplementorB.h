#pragma once

#include <iostream>

#include "implementor.h"

class ConcreteImplementorB : public Implementor {
public:
  virtual ~ConcreteImplementorB() = default;

  void operationImp() const final {
    std::cout << "Concrete operation B!" << std::endl;
  }
};
