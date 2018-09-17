#pragma once

#include <iostream>

#include "product.h"

class ProductA : public Product {
public:
  virtual ~ProductA() = default;

  void information() const final { std::cout << "I'm Product A!" << std::endl; }
};
