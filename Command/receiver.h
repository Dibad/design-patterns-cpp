#pragma once

class Receiver {
public:
  explicit Receiver(int state = 0) : state_(state) {}

  int getState() const { return state_; }
  void setState(int state) { state_ = state; }

private:
  int state_;
};
