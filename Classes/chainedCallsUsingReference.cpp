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
    Cylinder &set_radius(double rad)
    {
        this->radius = rad;
        return *this; // used for chained call
    }
    Cylinder &set_height(double hgt)
    {
        this->height = hgt;
        return *this;
    }
    Cylinder &set_cyno(double cno)
    {
        if (this->cyno)
        {
            *(this->cyno) = cno;
        }
        return *this;
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

    Cylinder *p_cylinder = new Cylinder(10, 3, 2);
    // update the values using pointer

    cout << p_cylinder->get_radius() << endl
         << p_cylinder->get_height() << endl
         << p_cylinder->get_cyno() << endl;
    p_cylinder->set_radius(12).set_height(4).set_cyno(3);
    cout << p_cylinder->get_radius() << endl
         << p_cylinder->get_height() << endl
         << p_cylinder->get_cyno() << endl;

    delete p_cylinder;

    return 0;
}