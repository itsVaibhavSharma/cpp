// Copy Constructor Implementation:
// Implement a class representing a complex number with real and imaginary parts.
// Define a copy constructor to create a deep copy of the complex number object.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int complex; // a+ib
public:
    Complex() = default;
    Complex(int r, int c) : real(r), complex(c) {}

    Complex(Complex &obj)
    {
        real = obj.real;
        complex = obj.complex;
    }

    Complex operator+(Complex &obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.complex = complex + obj.complex;
        return temp;
    }

    void display(){
        cout << real << " + i" << complex << endl;
     }
};

int main()
{
    Complex z1(3, 5);
    z1.display();
    Complex z2(z1);
    z2.display();

    Complex z3 = z1+z2;
    z3.display();

    

    return 0;
}