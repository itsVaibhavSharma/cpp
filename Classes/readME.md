# CLASS

**Class:** It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.
- A Class is a user-defined data type that has data members and member functions.
- Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behavior of the objects in a Class.

Syntax:
```cpp
class nameofClass {
//Member variables or Data members
public: //Access Specifier    //these members can be accessible from outside the class 
//Members of a class are private by default and cannot be used outside the class not even in main function.
	datatype variable = value;
	...
	
	//function or method
public:
	//member function
	returntype funcName() {
		return anyvalue;
	}

};
```

Example
Calculate volume of Cylinder:
```cpp
class Cylinder {

public:     
	double radius = 1.0;
	double height = 1.0;
	
public:
	double volume() {
		return PI*radius*radius*height; 
	}

};
```

## Using Class Instances (Objects)
We can make multiple objects of the defined datatype and use it like any other variable.

Object: When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

**Accessing data members and member functions**: The data members and member functions of the class can be accessed using the dot(‘.’) operator with the object. For example, if the name of the object is _obj_ and you want to access the member function with the name _printName()_ then you will have to write _obj.printName()_.

```cpp
int main() {
 Cylinder cylinder1; //object
 cout << cylinder1.volume() << endl; // default values 

 Cylinder cylinder2; //object
 cylinder2.radius = 3.0; //runtime information
 cylinder2.height = 2;
 cout << cylinder2.volume() << endl;

 return 0;

}
```

Some General Mistakes
```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder { 

   //no public mentioned implies it is a private member of the class
    double radius = 1.0;
    double height = 1.0;

    double volume() {
        return PI*radius*radius*height;
    }
};

  
  

int main() {

 Cylinder cylinder1;
 cout << cylinder1.volume() << endl; //error because volume is not accessible from main as it is a private member.

 return 0;
}
```

```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder { 

   //no public mentioned implies it is a private member of the class
private:
    double radius = 1.0;
    double height = 1.0;
public:
    double volume() {
        return PI*radius*radius*height;
    }
};

  
  

int main() {

 Cylinder cylinder1;
 cout << cylinder1.volume() << endl; 

 Cylinder cylinder2;
 cylinder2.radius = 3.0; //error
 cylinder2.height = 2; //error
 cout << cylinder2.volume() << endl;
 return 0;
}
```

Some Important Points:
1. Class member variables can either be raw stack variables or pointers.
2. Members can't be references.
3. Classes have functions/methods that let them do things.
4. Class methods access to the member variables, regardless of whether they are public or private.
5. Private member of Classes (variables and functions) aren't accessible from the outside of the class definition.

## **Member Functions in Classes**

**There are 2 ways to define a member function:**

- Inside class definition
- Outside class definition

To define a member function outside the class definition we have to use the **scope resolution:: operator** along with the class name and function name.

e.g. for outside class definition
```cpp
returnType Class::functionName()
{

	return ...
}
//this way a member function of a class can be defined outside the class in the same file or different.
```

# CLASS CONSTRUCTOR
A special kind of method that is called when an instance of a class is created
- no return type
- same name as the class
- can have parameter. can also have an empty parameter list.
- usually used to initialize member variables of a class.

```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder { 

   
public:
//constructor (default) 
	Cylinder(){
	    radius = 2.0;
	    height = 2.0;
	}
	Cylinder(double rad, double hgt){
	     radius = rad;
	     height = hgt;
	}
    double volume() {
        return PI*radius*radius*height;
    }
     private: //member variables must be initialized
        double radius = 1.0;
        double height = 1.0;
};

  
  

int main() {

 Cylinder cylinder1; //constructor is called here.
 cout << cylinder1.volume() << endl;  //25.132

 Cylinder cylinder2(10,3); 
 cout << cylinder2.volume() << endl; //942.45
 return 0;
}
```

## DEFAULTED CONSTRUCTOR
```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder { 

   
public:
// NO Empty constructor (default) 
	
	Cylinder(double rad, double hgt){
	     radius = rad;
	     height = hgt;
	}
    double volume() {
        return PI*radius*radius*height;
    }
     private: //member variables must be initialized
        double radius = 1.0;
        double height = 1.0;
};

  
  

int main() {

 Cylinder cylinder1; //ERROR (NO DEFAULT CONSTRUCTOR)
 
 return 0;
}
```

```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder { 

   
public:
// EMPTY constructor (default) 
	Cylinder() {
	}
	//or
	Cylinder() = default;
	
	Cylinder(double rad, double hgt){
	     radius = rad;
	     height = hgt;
	}
    double volume() {
        return PI*radius*radius*height;
    }
     private: //member variables must be initialized
        double radius = 1.0;
        double height = 1.0;
};

  
  

int main() {

 Cylinder cylinder1; //works fine
 
 return 0;
}
```

## GETTER AND SETTER
Methods to read or modify member variables of a class
```cpp
private:
	double radius;
	double height;
// the above are private, still the getter and setter works from main (but the getter and setter must be public)

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
```

```cpp
	 Cylinder cylinder1;
     cout << cylinder1.get_radius() << endl; //1
     cout << cylinder1.get_height() << endl;  //1
     cout << cylinder1.volume() << endl; //3.1415

     Cylinder cylinder2;
     cylinder2.set_height(2);
     cylinder2.set_radius(4);

     cout << cylinder2.volume() << endl; //100.528
```

## CLASS ACROSS MULTIPLE FILE

File 1: constants.h
	Value of PI

File 2: cylinder.h
	Cylinder (class) (preview)

File 3: cylinder.cpp
	Cylinder class

File 4: main.cpp
	# include "constants"
	# include "cylinder"

FILE 1: constants.h 
```cpp
#ifndef CONSTANTS_H
#define CONSTANTS_H

const double PI = 3.1415;

#endif
```
FILE 2: cylinder.h
```cpp
#ifndef CYLINDER_H
#define CYLINDER_H
#include "constants.h" //for PI
class Cylinder
{
public:
    // empty constructor (default)
    Cylinder() = default;
    Cylinder(double rad, double hgt);
    double volume(); //function prototype of the function declared in cylinder.cpp
    
    // Getter
    double get_radius()
    {
        return radius;
    }
    double get_height()
    {
        return height;
    }

     // Setter
    void set_radius(double rad)
    {
        radius = rad;
    }

    void set_height(double hgt)
    {
        height = hgt;
    }
private:
    double radius = 1.0;
    double height = 1.0;
};
#endif
```

FILE 3: cylinder.cpp
```cpp
#include "cylinder.h"
//here the first cyinder (Cylinder::) indicates the class in cylinder.h (called the scope resolution operator) aand the second is the function/method name
Cylinder::Cylinder(double rad, double hgt)
    {
        radius = rad;
        height = hgt;
    }

  double Cylinder::volume() //the return type is declared before the Classname and method name
    {
        return PI * radius * radius * height;
    }
```

FILE 4: main.cpp
```cpp
#include <iostream>
#include "cylinder.cpp"
using namespace std;
int main() {
    Cylinder cylinder(10,3);
    cout << cylinder.volume(); //942.45
    return 0;
}
```

INCLUDE GUARDS
To make sure the content is not included more than once
```cpp
#ifndef FILENAME_EXT
#define FILENAME_EXT

..
content
..

#endif
```

# MANAGING CLASS OBJECTS THROUGH POINTERS

Managing a stack object using pointers.
- Just make a pointer object.
```cpp
Cylinder cylinder1(10,4);
cout << cylinder1.volume() << endl;

//making a pointer of stack object
Cylinder *p_cylinder1 = &cylinder1;

cout << (*p_cylinder1).volume() << endl; //dereference or value at the address of.. operator
//or
cout << p_cylinder1 -> volume() << endl; //member access  operator
```

Creating a cylinder heap object through new operator (imp)

```cpp
Cylinder *p_cylinder2 = new Cylinder(10,3); //heap

cout << p_cylinder2 -> volume() << endl;
cout << p_cylinder2 -> get_radius() << endl;

delete p_cylinder2; //releasing memory after use
```

# DESTRUCTORS
Special methods that are called when an object dies. They are needed when the object needs to release some dynamic memory, or for some other kind of clean up.
The destructors are called when:
- an object is passed by value to a function.
- a local object is returned from a function.
- a local stack object goes out of scope (dies)
- a heap object is released with delete.

Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

- A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
- Destructor has the same name as their class name preceded by a tilde (~) symbol.
- It is not possible to define more than one destructor. 
- The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded.
- Destructor neither requires any argument nor returns any value.
- It is automatically called when an object goes out of scope. 
- Destructor release memory space occupied by the objects created by the constructor.
- In destructor, objects are destroyed in the reverse of an object creation.

The thing is to be noted here if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the destructor should use delete to free the memory.

Syntax:
```cpp
~ class-name() {
    // some instructions
}
```
or 
```cpp
//prototype declaration inside the class
~class-name();
```

```cpp
//destructor definition outside class
 class-name::~class-name() {
    // some instructions
}
```

example:

```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{
public:
    // empty constructor (default)
    Cylinder() = default;
    Cylinder(double rad, double hgt, int cno);
    ~Cylinder();
    double volume()
    {
       return PI * radius * radius * height;
    }
    // Getter
    double get_radius()
    {
        return radius;
    }
    double get_height()
    {
        return height;
    }
    int get_cyno()
    {
        return *cyno;
    }
    // Setter
    void set_radius(double rad)
    {
        radius = rad;
     }
    void set_height(double hgt)
    {
        height = hgt;
    }
    void set_cyno(double cno)
    {
        *cyno = cno;
    }
private:
    double radius = 1.0;
    double height = 1.0;
    int *cyno = nullptr; // cylinder no.
};
Cylinder::Cylinder(double rad, double hgt, int cno)
{
    radius = rad;
    height = hgt;
    cyno = new int;
    *cyno = cno;
}
Cylinder::~Cylinder()
{
    delete cyno;
    cout << "Destructor is called for cyno.";
}
  
int main()
{
    Cylinder cylinder1(10, 4, 2);
    cout << cylinder1.volume() << endl;
    return 0;
}
```

```output
1256.6
Destructor is called for cyno.
```
The destructor will be called always, when (after) the constructor is called.
If we create a heap object using memory allocation, it does not call the destructor. We need to explicitly call the `delete` operator to call the destructor.

## CONSTRUCTOR AND DESTRUCTOR CALL ORDER

```cpp
Cylinder cylinder1(10,3,1);
Cylinder cylinder2(12,4,2);
Cylinder cylinder3(90,2,3);
```

```
Constructor for cylinder1 is called
Constructor for cylinder2 is called
Constructor for cylinder3 is called

Destructor for cylinder3 is called
Destructor for cylinder2 is called
Destructor for cylinder1 is called
```

# The THIS POINTER
Each class member function contains a hidden pointer called this. That pointer contains the address of the current object, for which the method is being executed. This also applies to constructors and destructors.
`this` is contains the address of current object. can be used as : 
`cout << this;` or `cout << this -> memVariable`;

## Chained calls using pointers
```cpp

    // Setter
    Cylinder* set_radius(double rad)
    {
        this -> radius = rad;
        return this; //used for chained call
     }
    Cylinder* set_height(double hgt)
    {
        this -> height = hgt;
        return this;
    }
    Cylinder* set_cyno(double cno)
    {
	    if(this -> cyno) {
		    *(this -> cyno) = cno;
		return this;
		}
    }
```

```cpp
Cylinder* p_cylinder = new Cylinder(10,3,2);

cout << p_cylinder->get_radius() << endl << p_cylinder->get_height() << endl << p_cylinder->get_cyno() << endl;
//update the values using pointer
p_cylinder -> set_radius(12) -> set_height(4) -> set_cyno(3);

cout << p_cylinder->get_radius() << endl << p_cylinder->get_height() << endl << p_cylinder->get_cyno() << endl;

delete p_cylinder;
```

## Chained calls using references
```cpp

    // Setter
    Cylinder& set_radius(double rad)
    {
        this -> radius = rad;
        return *this; //used for chained call
     }
    Cylinder& set_height(double hgt)
    {
        this -> height = hgt;
        return *this;
    }
    Cylinder& set_cyno(double cno)
    {
	    if(this -> cyno) {
		    *(this -> cyno) = cno;
		return *this;
		}
    }
```

```cpp
Cylinder* p_cylinder = new Cylinder(10,3,2);

cout << p_cylinder->get_radius() << endl << p_cylinder->get_height() << endl << p_cylinder->get_cyno() << endl;

//update the values using pointer
p_cylinder -> set_radius(12).set_height(4).set_cyno(3);

cout << p_cylinder->get_radius() << endl << p_cylinder->get_height() << endl << p_cylinder->get_cyno() << endl;

delete p_cylinder;
```

# STRUCT
The major difference between struct and class is that the members are going to be private by default in a class and public in struct.
- We can make a functions inside a struct too.
```cpp
//Members private by default
class Cylinder{
	float radius;
};

//Members public by default
struct Cylinder{
	float radius;
};
```
### Override Defaults
The default scope of the members of a class and struct can be override by using public/private keywords.
```cpp
//Members private by default
class Cylinder{
public:
	float radius;
};

//Members public by default
struct Cylinder{
public:
	float radius;
private:
	float height;
};
```
Common use for struct
When we have to setup a class that has only public member variables.
```cpp
struct Point{
	double x;
	double y;
};
```

```cpp
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
```

```output
Doggy
Kitty
Hello world
```
## SIZE OF CLASS OBJECTS
Size of a class object or a struct object is the sum of the size of member variables (not the member function/method).
The size of a pointer is counted as 8 bytes as it stores the address .the size of variable of which the address is stored is not counted. (Obvious).


```cpp
#include <iostream>
using namespace std;
class Dog {
    public:
    string name;
    private:
    int a;
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
  
    cout << sizeof(dog1) << endl;
    cout << sizeof(cat1) << endl;
    return 0;

}
```

```output
40
32
```
