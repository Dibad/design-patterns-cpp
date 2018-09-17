#pragma once

#include <iostream>

#include "product.h"

class ProductB : public Product {
public:
  virtual ~ProductB() = default;

  void information() const final { std::cout << "I'm Product B!" << std::endl; }
};
