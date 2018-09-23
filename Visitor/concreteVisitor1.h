#pragma once

#include <iostream>

#include "visitor.h"

#include "concreteElementA.h"
#include "concreteElementB.h"

class ConcreteVisitor1 : public Visitor {
public:
  virtual ~ConcreteVisitor1() = default;

  virtual void visitElementA(ConcreteElementA *element) override {
    std::cout << "Visitor 1: Element A" << std::endl;
  }
  virtual void visitElementB(ConcreteElementB *element) override {
    std::cout << "Visitor 1: Element B" << std::endl;
  }
};
