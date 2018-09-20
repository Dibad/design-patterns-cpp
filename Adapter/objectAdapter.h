#pragma once

#include "adaptee.h"
#include "target.h"

class objectAdapter : public Target {
public:
  virtual ~objectAdapter() = default;

  virtual void request() const final { adaptee_.specificRequest(); }

private:
  Adaptee adaptee_;
};
