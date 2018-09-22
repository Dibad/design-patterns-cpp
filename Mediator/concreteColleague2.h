#pragma once

#include <iostream>

#include "colleague.h"

class ConcreteColleague2 : public Colleague {
public:
  explicit ConcreteColleague2(Mediator &mediator) : Colleague(mediator) {}
  virtual ~ConcreteColleague2() = default;

  void printString(bool state) const {
    std::cout << std::boolalpha << "State is " << state << std::noboolalpha
              << std::endl;
  }
};
