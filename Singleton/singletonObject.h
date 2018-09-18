#pragma once

#include <string>

#include "singleton.h"

class SingletonObject : public Singleton<SingletonObject> {
public:
  std::string getStr() const { return str_; }
  void setStr(const std::string &str) { str_ = str; }

private:
  std::string str_;
};
