#pragma once

class AbstractProductA {
public:
  virtual ~AbstractProductA() = default;

  virtual void information() const = 0;
};
