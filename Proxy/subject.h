#pragma once

class Subject {
public:
  virtual ~Subject() = default;

  virtual void operation() const = 0;
};
