#include <iostream>

#include "concreteStateA.h"
#include "concreteStateB.h"
#include "context.h"

void ConcreteStateB::handle(Context &context) {
  std::cout << "State B changing to State A..." << std::endl;
  State::changeState(context, new ConcreteStateA);
}
