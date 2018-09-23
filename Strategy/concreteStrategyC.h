#pragma once

#include <iostream>

#include "strategy.h"

class ConcreteStrategyC : public Strategy {
public:
  virtual ~ConcreteStrategyC() = default;

  virtual void algorithmInterface() override {
    std::cout << "Concrete Strategy C!" << std::endl;
  }
};
