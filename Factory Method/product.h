#pragma once

class Product {
public:
  virtual ~Product() = default;

  virtual void information() const = 0;
};
