#pragma once

#include <iostream>

#include "handler.h"

class ConcreteHandler2 : public Handler {
public:
  virtual ~ConcreteHandler2() = default;

  virtual void handleRequest(int error) const override {
    if (error == 2) {
      std::cout << "Error handled by Handler2" << std::endl;
    } else {
      if (parent_) {
        std::cout << "Handler2 unable to resolve error. Passing error to next "
                     "handler..."
                  << std::endl;
        parent_->handleRequest(error);
      } else {
        std::cerr << "Handler 2 unable to resolve error. End of chain"
                  << std::endl;
      }
    }
  }
};
