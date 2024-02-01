#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{

public:
    // empty constructor (default)
    Cylinder() = default;
    Cylinder(double rad, double hgt, int cno);
    ~Cylinder();

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
    int get_cyno()
    {
        return *cyno;
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
    void set_cyno(double cno)
    {
        *cyno = cno;
    }

private:
    double radius = 1.0;
    double height = 1.0;
    int *cyno = nullptr; // cylinder no.
};

Cylinder::Cylinder(double rad, double hgt, int cno)
{
    radius = rad;
    height = hgt;
    cyno = new int;
    *cyno = cno;
}

Cylinder::~Cylinder()
{
    delete cyno;
    cout << "Destructor is called for cyno.";
}

int main()
{

    Cylinder cylinder1(10, 4, 2);
    cout << cylinder1.volume() << endl;

    return 0;
}