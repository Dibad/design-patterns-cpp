#pragma once

#include "subject.h"

class ConcreteSubject : public Subject {
public:
  explicit ConcreteSubject(int state) : subject_state_(state) {}
  virtual ~ConcreteSubject() = default;

  virtual int getState() const override { return subject_state_; }
  virtual void setState(int state) override { subject_state_ = state; }

private:
  int subject_state_;
};
