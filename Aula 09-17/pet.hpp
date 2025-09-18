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
    std::cout << name_ << " was born!\n";
  }

  // destrutor
  virtual ~pet(){
    std::cout << name_ << " died! :-( \n";
  }

  // Accessors
  void name(const std::string &name) { name_ = name; }
  std::string name() const { return name_; }

  virtual void speak() const = 0; // virtual pura
};
} // namespace lab3
