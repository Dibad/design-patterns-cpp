#pragma once

class Product;

class Creator {
public:
  virtual ~Creator() = default;

  virtual Product *factoryMethod() const = 0;
};
