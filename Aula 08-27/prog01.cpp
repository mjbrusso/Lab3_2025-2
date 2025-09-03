#include <iostream>
#include <cmath>

using namespace std;

class point2D {
private:
  int x_;
  int y_;

public:
// Construtores
  point2D(int px, int py) : x_{px}, y_{py} {}

  point2D() : point2D(0, 0) { 
  }

  int x() const { // getter
    return x_;
  }

  void x(int px) { // setter
    x_ = px;
  }

  int y() const { return y_; }

  void y(int py) { y_ = py; }

  // Retorna a distância cartesiana entre os pontos
  double distance_to(const point2D &other) const{
    auto dx = x_ - other.x_;
    auto dy = y_ - other.y_;
    return std::sqrt(dx*dx + dy*dy);
  }
};



int main() {
  point2D pa;
  cout << pa.x() << ":" << pa.y() << endl;
  pa.x(10);
  pa.y(2);
  cout << pa.x() << ":" << pa.y() << endl;

  point2D pb(55, 200);
  cout << pb.x() << ":" << pb.y() << endl;

  cout << "Distância: " << pa.distance_to(pb) << endl;
}
