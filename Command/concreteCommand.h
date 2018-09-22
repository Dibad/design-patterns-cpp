#pragma once

#include "command.h"
#include "receiver.h"

class ConcreteCommand : public Command {
public:
  explicit ConcreteCommand(Receiver &receiver)
      : receiver_(receiver), last_state_(0) {}

  virtual ~ConcreteCommand() = default;

  virtual void execute() const override {
    std::cout << "Executing command..." << std::endl;
    last_state_ = receiver_.getState();
    receiver_.setState(1);
  }

  virtual void undo() const override {
    std::cout << "Undoing command..." << std::endl;
    receiver_.setState(last_state_);
  }

private:
  Receiver &receiver_;
  mutable int last_state_;
};
