#pragma once

#include <memory>

class State;
class Context {
public:
  explicit Context(State *state = nullptr);

  void request();

private:
  friend class State;
  void changeState(State *state);

private:
  std::unique_ptr<State> state_;
};
