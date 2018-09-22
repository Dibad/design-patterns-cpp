#pragma once

#include <vector>

#include "aggregate.h"

template <class Element> class ConcreteAggregate : public Aggregate<Element> {
public:
  explicit ConcreteAggregate(size_t size) : v_(size) {}
  virtual ~ConcreteAggregate() = default;

  size_t size() const { return v_.size(); }
  Element &operator[](size_t i) { return v_[i]; }

private:
  std::vector<Element> v_;
};
