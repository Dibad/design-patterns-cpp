#include <iostream>

#include "concreteStateA.h"
#include "concreteStateB.h"
#include "context.h"

void ConcreteStateA::handle(Context &context) {
  std::cout << "State A changing to State B..." << std::endl;
  State::changeState(context, new ConcreteStateB);
}
