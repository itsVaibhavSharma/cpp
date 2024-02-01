#include <iostream>
#include "cylinder.cpp"

using namespace std;

int main() {
    Cylinder cylinder(10,3);
    cout << cylinder.volume();

    return 0; 
}


