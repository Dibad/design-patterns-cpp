#pragma once

#include "creator.h"
#include "productA.h"

class ConcreteCreatorA : public Creator {
public:
  virtual ~ConcreteCreatorA() = default;

  ProductA *factoryMethod() const final { return new ProductA; }
};
