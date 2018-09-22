#include <iostream>

#include "concreteCommand.h"
#include "receiver.h"

int main() {
  Receiver receiver(10);
  std::cout << "Receiver state: " << receiver.getState() << std::endl;

  ConcreteCommand changeState(receiver);
  changeState.execute();

  std::cout << "\nReceiver state: " << receiver.getState() << std::endl;

  changeState.undo();
  std::cout << "\nReceiver state: " << receiver.getState() << std::endl;

  return 0;
}
