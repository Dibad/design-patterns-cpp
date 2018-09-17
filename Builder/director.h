#pragma once

#include <iostream>

#include "builder.h"

class Product;

class Director {
public:
  Director() : builder_(nullptr) {}
  ~Director() { delete builder_; }

  void setBuilder(Builder *b) {
    delete builder_;
    builder_ = b;
  }

  void construct() {
    std::cout << "Building part 1..." << std::endl;
    builder_->buildPart1();
    std::cout << "Building part 2..." << std::endl;
    builder_->buildPart2();
  }

  Product getResult() const { return builder_->getResult(); }

private:
  Builder *builder_;
};
