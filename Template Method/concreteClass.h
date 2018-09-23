#pragma once

#include "abstractClass.h"

class ConcreteClass : public Abstractclass {
public:
  virtual ~ConcreteClass() = default;

protected:
  virtual void primitiveOperation1() override {
    std::cout << "Concrete Operation 1" << std::endl;
  }
};
