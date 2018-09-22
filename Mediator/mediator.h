#pragma once

class Colleague;

class Mediator {
public:
  virtual ~Mediator() = default;

  virtual void modifiedColleague(Colleague *c) = 0;
};
