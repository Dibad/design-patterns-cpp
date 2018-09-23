#include <iostream>

#include "concreteObserver.h"
#include "concreteSubject.h"

int main() {
  Subject *s = new ConcreteSubject(1);

  ConcreteObserver o1(10);
  ConcreteObserver o2(12);

  std::cout << "Observer states: " << o1.getState() << ", " << o2.getState()
            << std::endl;

  std::cout << "Attaching observer1..." << std::endl;
  s->attach(&o1);

  std::cout << "Updated Subject!" << std::endl;
  s->setState(2);
  s->notify();
  std::cout << "Observer states: " << o1.getState() << ", " << o2.getState()
            << std::endl;

  std::cout << "Attaching observer2 and detaching observer1..." << std::endl;
  s->attach(&o2);
  s->detach(&o1);

  std::cout << "Updated Subject!" << std::endl;
  s->setState(3);
  s->notify();
  std::cout << "Observer states: " << o1.getState() << ", " << o2.getState()
            << std::endl;

  return 0;
}
