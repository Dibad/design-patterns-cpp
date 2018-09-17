#pragma once

#include <string>

class Product {
public:
  void make1(const std::string &part1) { part1_ = part1; }
  void make2(const std::string &part2) { part2_ = part2; }

  std::string completeString() { return part1_ + " " + part2_; }

private:
  std::string part1_;
  std::string part2_;
};
