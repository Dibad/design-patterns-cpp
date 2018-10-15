#pragma once

#include <iostream>

#include "implementor.h"

class ConcreteImplementorA : public Implementor {
public:
  virtual ~ConcreteImplementorA() = default;

  virtual void operationImp() const {
    std::cout << "Concrete operation A!" << std::endl;
  }
};
