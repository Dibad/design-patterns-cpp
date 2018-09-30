#pragma once

#include "AbstractFactory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
  virtual ~ConcreteFactory1() = default;

  ProductA1 *CreateProductA() const override { return new ProductA1; }
  ProductB1 *CreateProductB() const override { return new ProductB1; }
};
