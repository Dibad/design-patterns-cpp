#pragma once

#include <iostream>

#include "concreteColleague1.h"
#include "concreteColleague2.h"
#include "mediator.h"

class ConcreteMediator : public Mediator {
public:
  explicit ConcreteMediator()
      : c1_(new ConcreteColleague1(*this)), c2_(new ConcreteColleague2(*this)) {
  }

  virtual ~ConcreteMediator() {
    delete c1_;
    delete c2_;
  }

  virtual void modifiedColleague(Colleague *c) override {
    if (c == c1_) {
      c2_->printString(c1_->getState());
    } else {
      std::cerr << "This colleague doesn't request anything" << std::endl;
    }
  }

  void flipState() const { c1_->flipState(); }

private:
  ConcreteColleague1 *c1_;
  ConcreteColleague2 *c2_;
};
