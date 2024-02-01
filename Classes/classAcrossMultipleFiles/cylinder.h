#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder
{

public:
    // empty constructor (default)
    Cylinder() = default;
    Cylinder(double rad, double hgt);

    double volume();

    // Getter
    double get_radius()
    {
        return radius;
    }
    double get_height()
    {
        return height;
    }

    // Setter
    void set_radius(double rad)
    {
        radius = rad;
    }
    void set_height(double hgt)
    {
        height = hgt;
    }

private:
    double radius = 1.0;
    double height = 1.0;
};

#endif