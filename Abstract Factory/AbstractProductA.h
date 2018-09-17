#ifndef ABSTRACTPRODUCTA_H
#define ABSTRACTPRODUCTA_H

class AbstractProductA {
public:
  virtual ~AbstractProductA() = default;

  virtual void information() const = 0;
};

#endif // ABSTRACTPRODUCTA_H
