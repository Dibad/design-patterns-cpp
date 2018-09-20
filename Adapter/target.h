#pragma once

class Target {
public:
  virtual ~Target() = default;

  virtual void request() const = 0;
};
