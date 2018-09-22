#include <iostream>

#include "concreteCommand.h"
#include "invoker.h"
#include "receiver.h"

int main() {
  Receiver receiver(10);
  Command *changeStateCommand = new ConcreteCommand(receiver);
  Invoker invoker(changeStateCommand);

  std::cout << "Receiver state: " << receiver.getState() << std::endl;

  invoker.doInvocation();
  std::cout << "\nReceiver state: " << receiver.getState() << std::endl;

  invoker.undoInvocation();
  std::cout << "\nReceiver state: " << receiver.getState() << std::endl;

  return 0;
}
