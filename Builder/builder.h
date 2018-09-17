#pragma once

#include "product.h"

class Builder {
public:
  virtual ~Builder() = default;

  virtual void buildPart1() = 0;
  virtual void buildPart2() = 0;

  Product getResult() const { return product_; }

protected:
  Product product_;
};
