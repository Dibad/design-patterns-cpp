#pragma once

#include <string>

#include "abstractExpression.h"
#include "context.h"

class TerminalExpression : public AbstractExpression {
public:
  explicit TerminalExpression(const std::string &str) : str_(str) {}
  virtual ~TerminalExpression() = default;

  virtual bool interpret(const Context &context) const override {
    return context.get(str_);
  }

private:
  std::string str_;
};
