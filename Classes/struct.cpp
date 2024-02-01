#include <iostream>
using namespace std;

class Dog {
    public:
    string name;
};

struct Cat{
    string name;

    void helo() {
        cout << "Hello world";
    }
};

void printSt(Cat &cat){
    cout << cat.name << endl;
}
void printCl(Dog &dog){
    cout << dog.name << endl;
}

int main() {
    Dog dog1;
    Cat cat1;

    dog1.name = "Doggy";
    cat1.name = "Kitty";

    printCl(dog1);
    printSt(cat1);
    cat1.helo();

    cout << sizeof(dog1) << endl << sizeof(cat1) <<endl;

    return 0;
}