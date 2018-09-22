#pragma once

class Handler {
public:
  explicit Handler() : parent_(nullptr) {}
  virtual ~Handler() = default;

  void setHandler(Handler *parent) { parent_ = parent; }

  virtual void handleRequest(int error) const = 0;

protected:
  Handler *parent_;
};
