#pragma once

#include <iostream>

#include "strategy.h"

class ConcreteStrategyB : public Strategy {
public:
  virtual ~ConcreteStrategyB() = default;

  virtual void algorithmInterface() override {
    std::cout << "Concrete Strategy B!" << std::endl;
  }
};
