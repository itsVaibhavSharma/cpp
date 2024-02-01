#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{

    double radius = 1.0;
    double height = 1.0;

    double volume()
    {
        return PI * radius * radius * height;
    }
};

int main()
{
    Cylinder cylinder1;
    cout << cylinder1.volume() << endl; // error because volume is not accessible from main as it is a private member.

   
    return 0;
}