#include <iostream>
using namespace std;

class Myclass
{
public:
    void myFunction(int x);
    void myFunction(double x, string y);
    void myFunction(char x);
    void myFunction(float x);
    void myFunction(string x, double y);
};

void Myclass::myFunction(int x)
{
    cout << "First function" << endl;
}
void Myclass::myFunction(float x)
{
    cout << "fourth function" << endl;
}
void Myclass::myFunction(double x, string y)
{
    cout << "second function" << endl;
}
void Myclass::myFunction(string x, double y)
{
    cout << "fifth function" << endl;
}
void Myclass::myFunction(char x)
{
    cout << "third function" << endl;
}

int main()
{

    Myclass obj;
    obj.myFunction(5.1f);
    obj.myFunction('A');
    obj.myFunction(5.0, "mini");
    obj.myFunction("mini", 6.0);

    return 0;
}

