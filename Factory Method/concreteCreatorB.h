#pragma once

#include "creator.h"
#include "productB.h"

class ConcreteCreatorB : public Creator {
public:
  virtual ~ConcreteCreatorB() = default;

  ProductB *factoryMethod() const final { return new ProductB; }
};
