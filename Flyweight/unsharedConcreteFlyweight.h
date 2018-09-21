#pragma once

#include <iostream>
#include <string>

class UnsharedConcreteFlyweight : public Flyweight {
public:
  explicit UnsharedConcreteFlyweight(const std::string &intrinsic_state)
      : instrinsic_state_(intrinsic_state) {}

  virtual ~UnsharedConcreteFlyweight() = default;

  virtual void operation(int extrinsic_state) final {
    std::cout << "Unshared Concrete Flyweight with intrinsic state "
              << instrinsic_state_ << " and extrinsic_state " << extrinsic_state
              << std::endl;
  }

private:
  std::string instrinsic_state_;
};
