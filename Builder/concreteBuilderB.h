#pragma once

#include "builder.h"

class ConcreteBuilderB : public Builder {
public:
  virtual ~ConcreteBuilderB() = default;

  void buildPart1() final { product_.make1("B1"); }
  void buildPart2() final { product_.make2("B2"); }
};
