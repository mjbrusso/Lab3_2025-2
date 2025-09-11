#pragma once
#include "point2D.hpp"

class point3D : public point2D {
protected:
    int z_;

public:
    point3D(int px, int py, int pz): point2D(px, py), z_{pz} { }
    point3D(): point3D(0, 0, 0) {}

    int z() const{
        return z_;
    }

    void z(int pz){
        z_ = pz;
    }

    double distance_to(const point3D &other) const;
};

std::ostream& operator<<(std::ostream& lhs, const point3D& rhs);

// TODO: Sobrecarregar os operadores== e != (DRY!)
