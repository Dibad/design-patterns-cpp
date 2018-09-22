#pragma once

class Context;

class AbstractExpression {
public:
  virtual ~AbstractExpression() = default;

  virtual bool interpret(const Context &context) const = 0;
};
