#include <iostream>
#include "point2D.hpp"
#include "point3D.hpp"

int main() {
  point2D p1(10, 10), p2(20, 40);

  // p2 = point2D::origin;
  std::cout << "Distância de " 
            << p1 
            << " para "
            << p2
            << " = "
            << p1.distance_to(p2)
            << "\nOs pontos são "
            << (p1==p2 ? "iguais" : "diferentes")
            << "\nPonto central: " << point2D::mid_point(p1, p2)
            << "\n" << p2 / 2
            << std::endl;
}
