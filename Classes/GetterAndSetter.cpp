#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{

public:
    //empty constructor (default)
    Cylinder()= default;
   
    Cylinder(double rad, double hgt)
    {
        radius = rad;
        height = hgt;
    }
    double volume()
    {
        return PI * radius * radius * height;
    }
     //Getter
    double get_radius() {
        return radius;
    }
    double get_height() {
        return height;
    }

    //Setter
    void set_radius(double rad){
        radius = rad;
    }
    void set_height(double hgt){
        height = hgt;
    }

    private:
        double radius = 1.0;
        double height = 1.0;

   
};

int main()
{

    
     Cylinder cylinder1;

     cout << cylinder1.get_radius() << endl;
     cout << cylinder1.get_height() << endl;

     cout << cylinder1.volume() << endl;


     Cylinder cylinder2; 
     cylinder2.set_height(2);
     cylinder2.set_radius(4);
     cout << cylinder2.volume() << endl;



     return 0;
}