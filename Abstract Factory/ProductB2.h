#ifndef PRODUCTB2_H
#define PRODUCTB2_H

#include <iostream>

#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB {
public:
  virtual ~ProductB2() = default;

  void information() const override final {
    std::cout << "I'm product B2!" << std::endl;
  };
};

#endif // PRODUCTB2_H
