#ifndef CONCRETEFACTORY2_H
#define CONCRETEFACTORY2_H

#include "AbstractFactory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
  virtual ~ConcreteFactory2() = default;

  virtual ProductA2 *CreateProductA() const override { return new ProductA2; }
  virtual ProductB2 *CreateProductB() const override { return new ProductB2; }
};
#endif // CONCRETEFACTORY2_H
