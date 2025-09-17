#include "dog.hpp"
#include <iostream>

namespace lab3{
void dog::speak() const {
    std::cout << "Woof! I'm " << name_ << std::endl;
}
}
