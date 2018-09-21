#pragma once

#include <iostream>

#include "subject.h"

class RealSubject : public Subject {
public:
  virtual ~RealSubject() = default;

  virtual void operation() const final {
    std::cout << "Real Subject operation " << std::endl;
  }
};
