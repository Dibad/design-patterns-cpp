#pragma once

#include <stdexcept>

#include "concreteAggregate.h"
#include "iterator.h"

template <class Element> class ConcreteIterator : public Iterator<Element> {
public:
  explicit ConcreteIterator(ConcreteAggregate<Element> &aggregate)
      : aggregate_(aggregate), i_(0) {}

  virtual ~ConcreteIterator() = default;

  virtual void first() override { i_ = 0; }
  virtual void next() override { ++i_; }
  virtual bool isDone() const override { return i_ >= aggregate_.size(); }
  virtual Element &currentItem() const override {
    if (isDone())
      throw std::out_of_range("Can't access this element!");
    return aggregate_[i_];
  }

private:
  ConcreteAggregate<Element> &aggregate_;
  unsigned i_;
};
