#pragma once

#include "mediator.h"

class Colleague {
public:
  explicit Colleague(Mediator &mediator) : mediator_(mediator) {}
  virtual ~Colleague() = default;

  virtual void modified() { mediator_.modifiedColleague(this); }

private:
  Mediator &mediator_;
};
