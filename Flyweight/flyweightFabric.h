#pragma once

#include <algorithm>
#include <iostream>
#include <map>

#include "concreteFlyweight.h"
#include "unsharedConcreteFlyweight.h"

class FlyweightFabric {
public:
  virtual ~FlyweightFabric() {
    std::for_each(
        flyweights_.begin(), flyweights_.end(),
        [](std::pair<std::string, Flyweight *> p) { delete p.second; });
    flyweights_.clear();
  }

  Flyweight *getFlyweight(const std::string &key) {
    if (flyweights_[key]) {
      std::cout << "Found Flyweight with key " << key << std::endl;
      return flyweights_[key];
    } else {
      std::cout << "Creating Flyweight with key " << key << std::endl;
      return flyweights_[key] = new ConcreteFlyweight(key);
    }
  }

  UnsharedConcreteFlyweight *getUnsharedFlyweight(const std::string &key) {
    return new UnsharedConcreteFlyweight(key);
  }

private:
  std::map<std::string, Flyweight *> flyweights_;
};
