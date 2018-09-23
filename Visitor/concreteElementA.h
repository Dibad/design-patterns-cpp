#pragma once

#include "element.h"
#include "visitor.h"

class ConcreteElementA : public Element {
public:
  void accept(Visitor *visitor) override { visitor->visitElementA(this); }
};
