#pragma once

#include <algorithm>
#include <list>

#include "observer.h"

class Subject {
public:
  virtual ~Subject() = default;

  virtual void attach(Observer *o) { observers_.push_back(o); }

  virtual void detach(Observer *o) {
    auto p = std::find(observers_.cbegin(), observers_.cend(), o);
    if (p != observers_.cend())
      observers_.erase(p);
  }

  virtual void notify() {
    for (auto &o : observers_) {
      o->update(this);
    }
  }

  virtual int getState() const = 0;
  virtual void setState(int state) = 0;

protected:
  Subject() = default;

private:
  std::list<Observer *> observers_;
};
