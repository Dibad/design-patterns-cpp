#pragma once

#include <iostream>

#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA {
public:
  virtual ~ProductA2() = default;

  void information() const override final {
    std::cout << "I'm product A2!" << std::endl;
  };
};
