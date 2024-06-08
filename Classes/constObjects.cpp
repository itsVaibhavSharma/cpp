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

    const Cylinder cylinder1(10, 5);

    //  cylinder1.set_radius(5); // setting won't work (obv.)

    //  cout << cylinder1.get_height(); // compiler error (won't work either)

    //  Cylinder *p_cylinder = &cylinder1; //error: invalid conversion from const Cylinder* to Cylinder*

    //  Cylinder &cylinder_r = cylinder1; // error: invalid conversion from const Cylinder& to Cylinder&

    const Cylinder *p_cylinder = &cylinder1; // works

    // p_cylinder -> set_radius(5); //error (Expected)
    // p_cylinder -> get_radius(); //error (Not expected)

    const Cylinder &cylinder_r = cylinder1; // works

    // cylinder_r.set_radius(5); //error (Expected)
    // cylinder_r.get_radius(); //error (Not expected)

    return 0;
}