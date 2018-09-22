#pragma once

template <class Element> class Iterator {
public:
  virtual ~Iterator() = default;

  virtual void first() = 0;
  virtual void next() = 0;
  virtual bool isDone() const = 0;
  virtual Element &currentItem() const = 0;

protected:
  explicit Iterator() = default;
};
