#pragma once

#include <iostream>

#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB {
public:
  virtual ~ProductB1() = default;

  void information() const override final {
    std::cout << "I'm product B1!" << std::endl;
  };
};
