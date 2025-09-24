#include "point2D.hpp"
#include <cmath>
#include <stdexcept>

const point2D point2D::origin(0, 0);

point2D point2D::mid_point(const point2D &p1, const point2D &p2) {
  auto p3 = p1 + p2;
  p3.x_ /= 2;
  p3.y_ /= 2;
  return p3;
}

double point2D::distance_to(const point2D &other) const {
  auto dx = x_ - other.x_;
  auto dy = y_ - other.y_;
  return std::sqrt(dx * dx + dy * dy);
}

bool operator==(const point2D &lhs, const point2D &rhs) {
  return lhs.x() == rhs.x() && lhs.y() == rhs.y();
}

bool operator!=(const point2D &lhs, const point2D &rhs) {
  return !(rhs == lhs);
}

std::ostream &operator<<(std::ostream &lhs, const point2D &rhs) {
  return lhs << "(" << rhs.x() << ", " << rhs.y() << ")";
}

point2D operator+(const point2D &lhs, const point2D &rhs) {
  return point2D(lhs.x() + rhs.x(), lhs.y() + rhs.y());
}

point2D operator*(const point2D &lhs, int scale) {
  return point2D(lhs.x() * scale, lhs.y() * scale);
}

point2D operator/(const point2D& lhs, int scale){
   if(scale==0) throw std::invalid_argument("Divide by zero");
   return point2D(lhs.x() / scale, lhs.y() / scale);   
}
