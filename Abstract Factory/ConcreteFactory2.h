#pragma once

#include "AbstractFactory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
  virtual ~ConcreteFactory2() = default;

  ProductA2 *CreateProductA() const override { return new ProductA2; }
  ProductB2 *CreateProductB() const override { return new ProductB2; }
};
