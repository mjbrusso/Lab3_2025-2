#include "pet.hpp"
#include <iostream>

void pet::speak() const
{
    std::cout << "Hi! I'm " << name_ << std::endl;
}
