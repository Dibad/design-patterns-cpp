#pragma once

class Flyweight {
public:
  virtual ~Flyweight() = default;

  virtual void operation(int extrinsic_state) = 0;
};
