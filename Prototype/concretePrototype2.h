#pragma once

#include <string>

#include "prototype.h"

class ConcretePrototype2 : public Prototype {
public:
  virtual ~ConcretePrototype2() = default;

  std::string information() const final { return "I'm prototype 2"; }

  ConcretePrototype2 *clone() const final {
    return new ConcretePrototype2(*this);
  }
};
