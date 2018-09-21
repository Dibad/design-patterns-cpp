#pragma once

class Component {
public:
  virtual ~Component() = default;

  virtual void operation() const = 0;
};
