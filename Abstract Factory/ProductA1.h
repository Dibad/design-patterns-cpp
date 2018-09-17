#ifndef PRODUCTA1_H
#define PRODUCTA1_H

#include <iostream>

#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA {
public:
  virtual ~ProductA1() = default;

  void information() const override final {
    std::cout << "I'm product A1!" << std::endl;
  };
};

#endif // PRODUCTA1_H
