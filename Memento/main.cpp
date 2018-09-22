#include <iostream>

#include "caretaker.h"
#include "memento.h"
#include "originator.h"

int main() {
  Originator orig(2, 3.0);
  Command doublestate1(orig);
  Command doublestate2(orig);

  doublestate1.execute();
  orig.printState();

  Command::undo();
  orig.printState();

  doublestate2.execute();
  doublestate2.execute();
  orig.printState();

  Command::undo();
  Command::undo();
  Command::undo();
  Command::undo();
  orig.printState();

  return 0;
}
