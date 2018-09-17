#pragma once

#include "builder.h"

class ConcreteBuilderA : public Builder {
public:
  virtual ~ConcreteBuilderA() = default;

  void buildPart1() final { product_.make1("A1"); }
  void buildPart2() final { product_.make2("A2"); }
};
