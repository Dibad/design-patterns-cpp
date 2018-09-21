#pragma once

#include <iostream>

#include "component.h"

class ConcreteComponent : public Component {
public:
  virtual void operation() const final {
    std::cout << "ConcreteComponent operation " << std::endl;
  }
};
