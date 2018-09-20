#pragma once

#include "adaptee.h"
#include "target.h"

class classAdapter : public Target, private Adaptee {
public:
  virtual ~classAdapter() = default;

  virtual void request() const final { Adaptee::specificRequest(); }
};
