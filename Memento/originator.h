#pragma once

#include <iostream>

#include "memento.h"

class Originator {
public:
  explicit Originator(int state1, int state2)
      : state1_(state1), state2_(state2) {}

  Memento createMemento() const { return Memento(state1_, state2_); }
  void setMemento(const Memento &m) {
    state1_ = m.getState1();
    state2_ = m.getState2();
  }

  void doubleState() {
    state1_ *= 2;
    state2_ *= 2;
  }

  void printState() const {
    std::cout << state1_ << " " << state2_ << std::endl;
  }

private:
  int state1_;
  double state2_;
};
