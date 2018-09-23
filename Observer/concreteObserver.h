#include "observer.h"
#include "subject.h"

class ConcreteObserver : public Observer {
public:
  explicit ConcreteObserver(int state) : observer_state_(state) {}
  virtual ~ConcreteObserver() = default;

  virtual void update(Subject *subject) override {
    observer_state_ = subject->getState();
  }

  int getState() const { return observer_state_; }
  void setState(int state) { observer_state_ = state; }

private:
  int observer_state_;
};
