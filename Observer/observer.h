#pragma once

class Subject;

class Observer {
public:
  virtual ~Observer() = default;
  virtual void update(Subject *s) = 0;

protected:
  Observer() = default;
};
