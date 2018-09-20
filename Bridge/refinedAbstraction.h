#pragma once

#include "abstraction.h"

class Implementor;

class RefinedAbstraction : public Abstraction {
public:
  explicit RefinedAbstraction(Implementor *imp) : Abstraction(imp) {}
  virtual ~RefinedAbstraction() = default;

  void refinedOperation() const { Abstraction::operation(); }
};
