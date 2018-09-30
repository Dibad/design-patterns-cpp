#pragma once

#include <iostream>

#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB {
public:
  virtual ~ProductB2() = default;

  void information() const override {
    std::cout << "I'm product B2!" << std::endl;
  };
};
