#ifndef CONCRETEFACTORY1_H
#define CONCRETEFACTORY1_H

#include "AbstractFactory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
  virtual ~ConcreteFactory1() = default;

  ProductA1 *CreateProductA() const override final { return new ProductA1; }
  ProductB1 *CreateProductB() const override final { return new ProductB1; }
};
#endif // CONCRETEFACTORY1_H
