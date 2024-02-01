#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{

public:
    // empty constructor (default)
    Cylinder() = default;

    Cylinder(double rad, double hgt)
    {
        radius = rad;
        height = hgt;
    }
    double volume()
    {
        return PI * radius * radius * height;
    }
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

int main()
{

    Cylinder cylinder1(10, 4);
    cout << cylinder1.volume() << endl;

    // making a pointer of stack object
    Cylinder *p_cylinder1 = &cylinder1;

    cout << (*p_cylinder1).volume() << endl; // dereference or value at the address of.. operator
    // or
    cout << p_cylinder1->volume() << endl; // member access  operator

    Cylinder *p_cylinder2 = new Cylinder(10, 3); // heap

    cout << p_cylinder2->volume() << endl;
    cout << p_cylinder2->get_radius() << endl;

    delete p_cylinder2; // releasing memory after use

    return 0;
}