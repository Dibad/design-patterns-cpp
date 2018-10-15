#pragma once

#include <memory>

#include "abstraction.h"

class Implementor;

class RefinedAbstraction : public Abstraction {
public:
  explicit RefinedAbstraction(std::unique_ptr<Implementor> imp)
    : Abstraction(std::move(imp)) {}
  virtual ~RefinedAbstraction() = default;

  void refinedOperation() const { Abstraction::operation(); }
};
