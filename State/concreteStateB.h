#pragma once

#include "state.h"

class Context;
class ConcreteStateB : public State {
public:
  virtual ~ConcreteStateB() = default;

  virtual void handle(Context &context) override;
};
