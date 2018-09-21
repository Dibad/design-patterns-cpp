#pragma once

#include "component.h"

#include <algorithm>
#include <vector>

class Composite : public Component {
public:
  virtual ~Composite() {
    std::for_each(leafs_.begin(), leafs_.end(), [](Component *c) { delete c; });
    leafs_.clear();
  }

  virtual void operation() const override {
    for (const auto &c : leafs_)
      c->operation();
  }

  virtual void add(Component *const c) override { leafs_.push_back(c); }

  virtual void remove(Component *const c) override {
    leafs_.erase(std::find(leafs_.cbegin(), leafs_.cend(), c));
  }

  virtual Composite *getChild(int i) const override {
    return dynamic_cast<Composite *>(leafs_.at(i));
  }

private:
  std::vector<Component *> leafs_;
};
