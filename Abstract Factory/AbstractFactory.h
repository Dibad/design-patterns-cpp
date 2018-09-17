#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

class AbstractProductA;
class AbstractProductB;

class AbstractFactory {
public:
  virtual ~AbstractFactory() = default;

  virtual AbstractProductA *CreateProductA() const = 0;
  virtual AbstractProductB *CreateProductB() const = 0;
};

#endif // ABSTRACTFACTORY_H
