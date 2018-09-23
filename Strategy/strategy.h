#pragma once

class Strategy {
public:
  virtual ~Strategy() = default;

  virtual void algorithmInterface() = 0;
};
