#pragma once

#include <iostream>
#include <string>

namespace lab3 {
class pet {
protected:
  std::string name_;

public:
  // constructor
  pet(const std::string &name) : name_{name} {
  }

  // Accessors
  void set_name(const std::string &name) { name_ = name; }
  std::string name() const { return name_; }

  void speak() const;
};
} // namespace lab3
