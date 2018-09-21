#pragma once

#include <iostream>
#include <string>

#include "flyweight.h"

class ConcreteFlyweight : public Flyweight {
public:
  explicit ConcreteFlyweight(const std::string &intrinsic_state)
      : instrinsic_state_(intrinsic_state) {}

  virtual ~ConcreteFlyweight() = default;

  virtual void operation(int extrinsic_state) final {
    std::cout << "Concrete Flyweight with intrinsic state " << instrinsic_state_
              << " and extrinsic_state " << extrinsic_state << std::endl;
  }

private:
  std::string instrinsic_state_;
};
