// Shape Area Calculation:
// Define a Shape class with subclasses for Circle, Square, and Triangle.
// Implement methods to calculate the area of each shape.
// Utilize inheritance and polymorphism for area calculation.

#include <iostream>
using namespace std;

class Shape
{
public:
    double area;

    virtual void areaCalc() = 0;

    virtual void display()
    {
        cout << "Area = " << area << endl;
    }
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    void areaCalc() override
    {
        area = 3.14 * radius * radius;
    }
    void display()
    {
        cout << "Area of circle = " << area << endl;
    }
};

class Square : public Shape
{
    double side;

public:
    Square(double s) : side(s) {}
    void areaCalc() override
    {
        area = side * side;
    }

    void display()
    {
        cout << "Area of square = " << area << endl;
    }
};

class Triangle : public Shape
{
    double height, base;

public:
    Triangle(double h, double b) : height(h), base(b) {}
    void areaCalc() override
    {
        area = 0.5 * base * height;
    }

    void display()
    {
        cout << "Area of Triangle = " << area << endl;
    }
};

int main()
{
    Circle c(5);
    Square s(23);
    Triangle t(23, 6);

    Shape *shapes[3] = {&c, &s, &t}; // run time function overriding

    for (auto sp : shapes)
    {
        sp->areaCalc();
        sp->display();
    }

    return 0;
}