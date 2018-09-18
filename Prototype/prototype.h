#pragma once

#include <string>

class Prototype {
public:
  virtual ~Prototype() = default;

  virtual std::string information() const = 0;

  virtual Prototype *clone() const = 0;
};
