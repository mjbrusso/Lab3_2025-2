#include "point3D.hpp"
#include <cmath>

double point3D::distance_to(const point3D &other) const{
    auto dx = x_ - other.x_;
    auto dy = y_ - other.y_;
    auto dz = z_ - other.z_;
    return std::sqrt(dx*dx + dy*dy + dz*dz);
}

std::ostream &operator<<(std::ostream &lhs, const point3D &rhs) {
  return lhs << "(" 
             << rhs.x() 
             << ", " 
             << rhs.y() 
             << ", " 
             << rhs.z() 
             << ")";
}

bool operator==(const point3D& lhs, const point3D& rhs)
{
     return point2D(lhs)==point2D(rhs) && lhs.z()==rhs.z();
}

bool operator!=(const point3D& lhs, const point3D& rhs)
{
    return !(lhs==rhs);
}