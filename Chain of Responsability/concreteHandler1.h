#pragma once

#include <iostream>

#include "handler.h"

class ConcreteHandler1 : public Handler {
public:
  virtual ~ConcreteHandler1() = default;

  virtual void handleRequest(int error) const override {
    if (error == 1) {
      std::cout << "Error handled by Handler1" << std::endl;
    } else {
      if (parent_) {
        std::cout
            << "Handler1 unable to resolve error. Passing to next handler..."
            << std::endl;
        parent_->handleRequest(error);
      } else {
        std::cerr << "Handler2 unable to resolve error. End of chain"
                  << std::endl;
      }
    }
  }
};
