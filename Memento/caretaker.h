#pragma once

#include <iostream>
#include <vector>

#include "memento.h"
#include "originator.h"

// Caretaker class
class Command {
public:
  explicit Command(Originator &originator) : originator_(originator) {}

  void execute() {
    std::cout << "Execute!" << std::endl;
    mementos_.push_back(originator_.createMemento());
    commands_.push_back(this);

    originator_.doubleState();
  }

  static void undo() {
    std::cout << "Undo..." << std::endl;
    if (!mementos_.empty()) {
      commands_.back()->originator_.setMemento(mementos_.back());
      delete mementos_.back();
      mementos_.pop_back();
      commands_.pop_back();
    } else {
      std::cerr << "No more commands to undo!" << std::endl;
    }
  }

  Originator &originator_;
  static std::vector<Command *> commands_;
  static std::vector<Memento *> mementos_;
};

std::vector<Command *> Command::commands_ = std::vector<Command *>();
std::vector<Memento *> Command::mementos_ = std::vector<Memento *>();
