#pragma once

#include <string>

#include "prototype.h"

class ConcretePrototype1 : public Prototype {
public:
  virtual ~ConcretePrototype1() = default;

  std::string information() const final { return "I'm prototype 1"; }

  ConcretePrototype1 *clone() const final {
    return new ConcretePrototype1(*this);
  }
};
