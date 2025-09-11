#include <iostream>
#include "point2D.hpp"
#include "point3D.hpp"

int main() {
  point3D p1(10, 55, 23), p2(10, 5, 23);

  std::cout << "Distância de " 
            << p1 
            << " para "
            << p2
            << " = "
            << p1.distance_to(p2)
            << " os pontos são "
            << (p1==p2 ? "iguais" : "diferentes")
            << std::endl;
}
