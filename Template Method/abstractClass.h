#pragma once

#include <iostream>

class Abstractclass {
public:
  virtual ~Abstractclass() = default;

  void templateMethod() {
    primitiveOperation1();
    primitiveOperation2();
  }

protected:
  virtual void primitiveOperation1() = 0; // Must be defined
  virtual void primitiveOperation2() {    // Could be replaced or extended
    std::cout << "Default Operation 2" << std::endl;
  }
};
