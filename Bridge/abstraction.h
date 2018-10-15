#pragma once

#include <memory>

#include "implementor.h"

class Abstraction {
public:
  explicit Abstraction(std::unique_ptr<Implementor> imp)
    : imp_(std::move(imp)) {}

  virtual ~Abstraction() = default;

  void operation() const { imp_->operationImp(); }

  void changeImplementor(std::unique_ptr<Implementor> imp) {
    imp_ = std::move(imp);
  }

private:
  std::unique_ptr<Implementor> imp_;
};
