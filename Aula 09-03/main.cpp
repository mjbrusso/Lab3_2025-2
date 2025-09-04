#include <iostream>
#include "point2D.hpp"

int main() {
  point2D pa;
  std::cout << pa << std::endl;
  pa.x(10);
  pa.y(2);
  std::cout << pa << std::endl;

  point2D pb(55, 200);
  std::cout << pb << std::endl;
  
  std::cout << "Distância: " << pa.distance_to(pb) << std::endl;
  if(pa==pb) std::cout << "Iguais\n";    
  if(pa!=pb) std::cout << "Diferentes\n";  
}
