#pragma once

#include "component.h"

class Decorator : public Component {
public:
  explicit Decorator(Component *c) : component_(c) {}

  virtual void operation() const { component_->operation(); }

private:
  Component *component_;
};
