#pragma once

#include <iostream>

#include "realSubject.h"
#include "subject.h"

class Proxy : public Subject {
public:
  explicit Proxy() : real_subject_(nullptr) {}
  virtual ~Proxy() { delete real_subject_; }

  virtual void operation() const override { loadSubject()->operation(); }

private:
  mutable RealSubject *real_subject_;

  RealSubject *loadSubject() const {
    if (!real_subject_) {
      std::cout << "Creating Real Subject..." << std::endl;
      real_subject_ = new RealSubject;
    }
    return real_subject_;
  }
};
