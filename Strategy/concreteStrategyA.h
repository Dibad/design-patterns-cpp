#pragma once

#include <iostream>

#include "strategy.h"

class ConcreteStrategyA : public Strategy {
public:
  virtual ~ConcreteStrategyA() = default;

  virtual void algorithmInterface() override {
    std::cout << "Concrete Strategy A!" << std::endl;
  }
};
