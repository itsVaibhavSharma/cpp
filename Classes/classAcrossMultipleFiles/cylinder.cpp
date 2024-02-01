#include "cylinder.h"

Cylinder::Cylinder(double rad, double hgt)
    {
        radius = rad;
        height = hgt;
    }

double Cylinder::volume()
    {
        return PI * radius * radius * height;
    }