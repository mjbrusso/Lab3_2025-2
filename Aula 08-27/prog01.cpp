#include <iostream>

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
};

int main() {
  point2D p;
  cout << p.x() << ":" << p.y() << endl;
  p.x(10);
  p.y(2);
  cout << p.x() << ":" << p.y() << endl;

  point2D pb(55, 200);
  cout << pb.x() << ":" << pb.y() << endl;
}
