#pragma once

#include <iostream>

#include "decorator.h"

class ConcreteDecoratorA : public Decorator {
public:
  explicit ConcreteDecoratorA(Component *c) : Decorator(c) {}

  virtual void operation() const override {
    std::cout << "Decorator A operation" << std::endl;
    Decorator::operation();
  }
};
