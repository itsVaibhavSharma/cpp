#include <iostream>
using namespace std;

const double PI = 3.1415;

class Cylinder {

public:     
	double radius = 1.0;
	double height = 1.0;
	
public: //no need for this public because the above will work the same but it is important for making it private or protected.
	double volume() {
		return PI*radius*radius*height; 
	}

};


int main() {
 Cylinder cylinder1;
 cout << cylinder1.volume() << endl; // default values 

 Cylinder cylinder2;
 cylinder2.radius = 3.0;
 cylinder2.height = 2;
 cout << cylinder2.volume() << endl;

 return 0;

}