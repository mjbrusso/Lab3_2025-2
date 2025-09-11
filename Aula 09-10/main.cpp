#include <iostream>
#include "point2D.hpp"
#include "point3D.hpp"

int main() {
  point3D p1(10, 5, 28), p2(15, 18, 23);

  std::cout << "Distância de " 
            << p1 
            << " para "
            << p2
            << " = "
            << p1.distance_to(p2)
            << std::endl;
}
