#pragma once

#include "element.h"
#include "visitor.h"

class ConcreteElementB : public Element {
public:
  void accept(Visitor *visitor) override { visitor->visitElementB(this); }
};
