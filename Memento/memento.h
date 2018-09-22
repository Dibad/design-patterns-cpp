#pragma once

class Memento {
public:
  virtual ~Memento() = default;

private:
  friend class Originator;
  explicit Memento(int state1, int state2) : state1_(state1), state2_(state2) {}

  void setState1(int state1) { state1_ = state1; }
  void setState2(int state2) { state2_ = state2; }
  int getState1() const { return state1_; }
  int getState2() const { return state2_; }

private:
  int state1_;
  int state2_;
};
