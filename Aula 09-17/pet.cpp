#include "pet.hpp"
#include <iostream>

namespace lab3{
void pet::speak() const{
    std::cout << "Hi! I'm " << name_ << std::endl;
}
}