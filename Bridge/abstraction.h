#pragma once

#include "implementor.h"

class Abstraction {
public:
  explicit Abstraction(Implementor *imp) : imp_(imp) {}
  virtual ~Abstraction() { delete imp_; }

  void operation() const { imp_->operationImp(); }

  void changeImplementor(Implementor *imp) {
    if (!imp_)
      delete imp_;
    imp_ = imp;
  }

private:
  Implementor *imp_;
};
