#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{

public:
    // constructor (default)
    Cylinder()
    {
        radius = 2.0;
        height = 2.0;
    }
    Cylinder(double rad, double hgt)
    {
        radius = rad;
        height = hgt;
    }
    double volume()
    {
        return PI * radius * radius * height;
    }

    private:
        double radius = 1.0;
        double height = 1.0;
};

int main()
{

     Cylinder cylinder1;
     cout << cylinder1.volume() << endl;

     Cylinder cylinder2(10,3);
     cout << cylinder2.volume() << endl;
     return 0;
}