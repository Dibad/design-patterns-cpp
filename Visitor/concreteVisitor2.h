#pragma once

#include <iostream>

#include "visitor.h"

#include "concreteElementA.h"
#include "concreteElementB.h"

class ConcreteVisitor2 : public Visitor {
public:
  virtual ~ConcreteVisitor2() = default;

  virtual void visitElementA(ConcreteElementA *element) override {
    std::cout << "Visitor 2: Element A" << std::endl;
  }
  virtual void visitElementB(ConcreteElementB *element) override {
    std::cout << "Visitor 2: Element B" << std::endl;
  }
};
