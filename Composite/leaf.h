#pragma once

#include "component.h"

#include <iostream>
#include <string>

class Leaf : public Component {
public:
  explicit Leaf(const std::string &str) : str_(str) {}
  virtual ~Leaf() = default;

  virtual void operation() const final {
    std::cout << "Leaf " << str_ << " operation" << std::endl;
  }

private:
  std::string str_;
};
