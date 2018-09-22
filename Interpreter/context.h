#pragma once

#include <map>
#include <string>

class Context {
public:
  void assign(const std::string &key, bool value) { context_[key] = value; }
  bool get(const std::string &key) const { return context_.at(key); }

private:
  std::map<std::string, bool> context_;
};
