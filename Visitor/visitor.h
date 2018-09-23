#pragma once

class ConcreteElementA;
class ConcreteElementB;

class Visitor {
public:
  virtual ~Visitor() = default;

  virtual void visitElementA(ConcreteElementA *element) = 0;
  virtual void visitElementB(ConcreteElementB *element) = 0;
};
