#include <iostream>
using namespace std;
class Dog
{
public:
    string name;

private:
    int a;
};
struct Cat
{
    string name;
    void helo()
    {
        cout << "Hello world";
    }
};

void printSt(Cat &cat)
{
    cout << cat.name << endl;
}
void printCl(Dog &dog)
{
    cout << dog.name << endl;
}

int main()
{
    Dog dog1;
    Cat cat1;

    cout << sizeof(dog1) << endl;

    cout << sizeof(cat1) << endl;

    return 0;
}
