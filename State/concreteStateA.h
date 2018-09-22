#pragma once

#include "state.h"

class Context;
class ConcreteStateA : public State {
public:
  virtual ~ConcreteStateA() = default;

  virtual void handle(Context &context) override;
};
