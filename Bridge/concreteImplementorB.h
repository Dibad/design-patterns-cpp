#pragma once

#include <iostream>

#include "implementor.h"

class ConcreteImplementorB : public Implementor {
public:
  virtual ~ConcreteImplementorB() = default;

  virtual void operationImp() const {
    std::cout << "Concrete operation B!" << std::endl;
  }
};
