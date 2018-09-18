#pragma once

template <class T> class Singleton {
public:
  Singleton(const Singleton &) = delete;
  void operator=(const Singleton &) = delete;

  static T &instance() {
    static T instance_;
    return instance_;
  }

protected:
  Singleton() = default;
  virtual ~Singleton() = default;
};
