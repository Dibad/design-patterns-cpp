#pragma once

class Component {
public:
  virtual ~Component() = default;

  virtual void operation() const = 0;

  virtual void add(Component *) {}
  virtual void remove(Component *) {}

  virtual Component *getChild(int i) const { return nullptr; }
};
