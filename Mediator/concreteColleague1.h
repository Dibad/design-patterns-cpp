#pragma once

#include "colleague.h"

class ConcreteColleague1 : public Colleague {
public:
  explicit ConcreteColleague1(Mediator &mediator)
      : Colleague(mediator), state_(false) {}
  virtual ~ConcreteColleague1() = default;

  bool getState() const { return state_; }

  void flipState() {
    state_ = !state_;
    Colleague::modified();
  }

private:
  bool state_;
};
