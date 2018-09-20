#pragma once

#include <iostream>

class Adaptee {
public:
  virtual ~Adaptee() = default;

  void specificRequest() {
    std::cout << "Doing specific request..." << std::endl;
  }
};
