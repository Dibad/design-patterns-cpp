#pragma once

#include <iostream>

#include "implementor.h"

class ConcreteImplementorA : public Implementor {
public:
  virtual ~ConcreteImplementorA() = default;

  void operationImp() const final {
    std::cout << "Concrete operation A!" << std::endl;
  }
};
