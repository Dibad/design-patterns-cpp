#pragma once

#include "strategy.h"

class Context {
public:
  explicit Context(Strategy *strategy) : strategy_(strategy) {}
  virtual ~Context() = default;

  void changeStrategy(Strategy *strategy) { strategy_ = strategy; }
  void contextInterface() { strategy_->algorithmInterface(); }

private:
  Strategy *strategy_;
};
