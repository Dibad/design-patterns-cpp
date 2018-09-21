#pragma once

#include <iostream>

#include "decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
  explicit ConcreteDecoratorB(Component *c) : Decorator(c) {}

  virtual void operation() const override {
    std::cout << "Decorator B operation" << std::endl;
    Decorator::operation();
  }
};
