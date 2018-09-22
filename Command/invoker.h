#include "command.h"

class Invoker {
public:
  explicit Invoker(Command *command = nullptr) : command_(command) {}

  void setCommand(Command *command) { command_ = command; }

  void doInvocation() const {
    if (command_)
      command_->execute();
  }
  void undoInvocation() const {
    if (command_)
      command_->undo();
  }

private:
  Command *command_;
};
