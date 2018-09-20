#pragma once

class Implementor {
public:
  virtual ~Implementor() = default;

  virtual void operationImp() const = 0;
};
