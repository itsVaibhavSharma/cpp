# STRUCTURED PROGRAMMING
- Structured Programming is a type of programming that generally converts large or complex programs into more manageable and small pieces of code.
- These small pieces of codes are usually known as functions or modules or sub-programs of large complex programs.
- It is known as modular programming and minimizes the chances of function affecting another.
EXAMPLE:
```cpp
#include <iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int main(){
	int m = 5, n = 2;
	int sum, diff;
	sum = add(m,n);
	diff = sub(m,n);
	
	cout << "Addition: " << sum << endl;
	cout << "Subtraction: " << diff << endl;
	


	return 0;
}
```

```output
Addition: 7
Subtraction: 3
```

# UNSTRUCTURED PROGRAMMING
- Unstructured Programming is a type of programming that generally executes in sequential order i.e., these programs just not jumped from any line of code and each line gets executed sequentially.
- It is also known as non-structured programming that is capable of creating turning-complete algorithms.
EXAMPLE:
```CPP
#include <iostream>
using namespace std;

int main(){
	int m = 5, n = 2;
	int sum, diff;
	sum = m + n;
	diff = m - n;
	
	cout << "Addition: " << sum << endl;
	cout << "Subtraction: " << diff << endl;
	


	return 0;
}

```

```output
Addition: 7
Subtraction: 3
```

## DIFFERENCE BETWEEN STRUCTURED AND UNSTRUCTURED PROGRAMMING
|**Structured Programming**|**Unstructured Programming**|
|---|---|
|It is basically a subset of procedural programs.|It is basically a procedural program.|
|In this, programmers are allowed to code a program simply by dividing the program into modules or smaller units.|In this, programmers are not allowed code divide programs into small units. Instead, the program should be written as a single continuous block without any breakage.|
|It is more user-friendly and easy to understand as compared to unstructured programming.|It is less user-friendly and little hard to understand as compared to structured programming.|
|It is easier to learn and follow.|It is difficult to learn and follow|
|Its advantages include reduce complexity, facilitate debugging, increase programmer productivity programs, etc.|Its advantages include its speed.|
|Such programs can be used for small and medium-scale projects and also for complex projects.|Such programs cannot be used for medium and complex projects. Instead, they can be used for small and easier projects.|
|These programs do not allow code duplication.|These programs allow code duplication.|
|Structured programs use a greater number of data types as compared to unstructured programs.|Unstructured programs use a limited number of data types as compared to structured programs.|
|It does not use GOTO to control the flow of execution. Instead, it uses loops. |It uses GOTO to control the flow of execution.|
|It produces readable code.|It hardly produces readable code.|
|It does not provide full freedom to programmers to program as they want.|It provides full freedom to programmers to program as they want.|

# PROGRAMMING PARADIGMS
***Paradigm** can also be termed as method to solve some problem or do some task. Programming paradigm is an approach to solve problem using some programming language or also we can say it is a method to solve a problem using tools and techniques that are available to us following some approach. There are lots for programming language that are known but all of them need to follow some strategy when they are implemented and this methodology/strategy is paradigms. Apart from varieties of programming language there are lots of paradigms to fulfill each and every demand. 
![[Pasted image 20240315110432.png]]
Imperative programming paradigm:** It is one of the oldest programming paradigm. It features close relation to machine architecture. It is based on Von Neumann architecture. It works by changing the program state through assignment statements. It performs step by step task by changing state. The main focus is on how to achieve the goal. The paradigm consist of several statements and after execution of all the result is stored.


**Advantages:*** 
1. Very simple to implement
2. It contains loops, variables etc.

**Disadvantage:**  
1. Complex problem cannot be solved
2. Less efficient and less productive
3. Parallel programming is not possible

***2. Declarative programming paradigm:**   
It is divided as Logic, Functional, Database. In computer science the __declarative programming__ is a style of building programs that expresses logic of computation without talking about its control flow. It often considers programs as theories of some logic.It may simplify writing parallel programs. The focus is on what needs to be done rather how it should be done basically emphasize on what code is actually doing. It just declares the result we want rather how it has be produced. This is the only difference between imperative (how to do) and declarative (what to do) programming paradigms. Getting into deeper we would see logic, functional and database.

SUBTYPES OF IMPERATIVE PARADIGM:

-***Procedural programming paradigm –**   
    This paradigm emphasizes on procedure in terms of under lying machine model. There is no difference in between procedural and imperative approach. It has the ability to reuse the code and it was boon at that time when it was in use because of its reusability.

-***Object oriented programming –**   
    The program is written as a collection of classes and object which are meant for communication. The smallest and basic entity is object and all kind of computation is performed on the objects only. More emphasis is on data rather procedure. It can handle almost all kind of real life problems which are today in scenario.

***Advantages:** 
- Data security
- Inheritance
- Code reusability
- Flexible and abstraction is also present

|Procedural Oriented Programming|Object-Oriented Programming|
|---|---|
|In procedural programming, the program is divided into small parts called _**functions**_.|In object-oriented programming, the program is divided into small parts called _**objects**_.|
|Procedural programming follows a _**top-down approach**_.|Object-oriented programming follows a _**bottom-up approach**_.|
|There is no access specifier in procedural programming.|Object-oriented programming has access specifiers like private, public, protected, etc.|
|Adding new data and functions is not easy.|Adding new data and function is easy.|
|Procedural programming does not have any proper way of hiding data so it is _**less secure**_.|Object-oriented programming provides data hiding so it is _**more secure**_.|
|In procedural programming, overloading is not possible.|Overloading is possible in object-oriented programming.|
|In procedural programming, there is no concept of data hiding and inheritance.|In object-oriented programming, the concept of data hiding and inheritance is used.|
|In procedural programming, the function is more important than the data.|In object-oriented programming, data is more important than function.|
|Procedural programming is based on the _**unreal world**_.|Object-oriented programming is based on the _**real world**_.|
|Procedural programming is used for designing medium-sized programs.|Object-oriented programming is used for designing large and complex programs.|
|Procedural programming uses the concept of procedure abstraction.|Object-oriented programming uses the concept of data abstraction.|
|Code reusability absent in procedural programming,|Code reusability present in object-oriented programming.|
|**Examples:** C, FORTRAN, Pascal, Basic, etc.|**Examples:** C++, Java, Python, C#, etc.|
# ABSTRACT DATA TYPE (ADT)
Abstract Data type (ADT) is a type (or class) for objects whose behavior is defined by a set of values and a set of operations. The definition of ADT only mentions what operations are to be performed but not how these operations will be implemented. It does not specify how data will be organized in memory and what algorithms will be used for implementing the operations. It is called “abstract” because it gives an implementation-independent view. The user of data type does not need to know how that data type is implemented, for example, we have been using Primitive values like int, float, char data types only with the knowledge that these data type can operate and be performed on without any idea of how they are implemented. 
So a user only needs to know what a data type can do, but not how it will be implemented. Think of ADT as a black box which hides the inner structure and design of the data type.

### ****Features of ADT:****

****Abstract data types (ADTs) are a way of encapsulating data and operations on that data into a single unit. Some of the key features of ADTs include:****

- ****Abstraction:**** The user does not need to know the implementation of the data structure only essentials are provided.
- ****Better Conceptualization:**** ADT gives us a better conceptualization of the real world.
- ****Robust:**** The program is robust and has the ability to catch errors.
- ****Encapsulation****: ADTs hide the internal details of the data and provide a public interface for users to interact with the data. This allows for easier maintenance and modification of the data structure.
- ****Data Abstraction****: ADTs provide a level of abstraction from the implementation details of the data. Users only need to know the operations that can be performed on the data, not how those operations are implemented.
- ****Data Structure Independence****: ADTs can be implemented using different data structures, such as arrays or linked lists, without affecting the functionality of the ADT.
- ****Information Hiding:**** ADTs can protect the integrity of the data by allowing access only to authorized users and operations. This helps prevent errors and misuse of the data.
- ****Modularity****: ADTs can be combined with other ADTs to form larger, more complex data structures. This allows for greater flexibility and modularity in programming.

Overall, ADTs provide a powerful tool for organizing and manipulating data in a structured and efficient manner.

Abstract data types (ADTs) have several advantages and disadvantages that should be considered when deciding to use them in software development. Here are some of the main advantages and disadvantages of using ADTs:

### Advantages:

- ****Encapsulation****: ADTs provide a way to encapsulate data and operations into a single unit, making it easier to manage and modify the data structure.
- ****Abstraction****: ADTs allow users to work with data structures without having to know the implementation details, which can simplify programming and reduce errors.
- ****Data Structure Independence****: ADTs can be implemented using different data structures, which can make it easier to adapt to changing needs and requirements.
- ****Information Hiding****: ADTs can protect the integrity of data by controlling access and preventing unauthorized modifications.
- ****Modularity****: ADTs can be combined with other ADTs to form more complex data structures, which can increase flexibility and modularity in programming.

### Disadvantages:

- ****Overhead****: Implementing ADTs can add overhead in terms of memory and processing, which can affect performance.
- ****Complexity****: ADTs can be complex to implement, especially for large and complex data structures.
- ****Learning**** Curve: Using ADTs requires knowledge of their implementation and usage, which can take time and effort to learn.
- ****Limited Flexibility:**** Some ADTs may be limited in their functionality or may not be suitable for all types of data structures.
- ****Cost****: Implementing ADTs may require additional resources and investment, which can increase the cost of development.

Overall, the advantages of ADTs often outweigh the disadvantages, and they are widely used in software development to manage and manipulate data in a structured and efficient way. However, it is important to consider the specific needs and requirements of a project when deciding whether to use ADTs.

## DEFINITION OF SOME SPECIFIC FEATURES OF OOPS
Encapsulation, abstraction, inheritance, and polymorphism are four key concepts in object-oriented programming (OOP). These principles help in organizing and structuring code in a way that promotes modularity, flexibility, and maintainability.

1. **Encapsulation**: Encapsulation is the bundling of data (attributes) and methods (functions) that operate on the data into a single unit, often referred to as a class. The data is typically hidden from outside access, and only specific methods, known as accessors and mutators (or getters and setters), are provided to manipulate the data. This helps in achieving data hiding, which prevents direct access to the data and ensures that the internal state of an object remains consistent.
    
2. **Abstraction**: Abstraction involves hiding the complex implementation details of a system and exposing only the necessary functionalities or behaviors to the outside world. It allows developers to focus on what an object does rather than how it does it. Abstraction is often achieved through interfaces, abstract classes, and inheritance hierarchies, which provide a blueprint for creating objects with specific properties and behaviors.
    
3. **Inheritance**: Inheritance is a mechanism in which a new class (derived or child class) is created by inheriting properties and behaviors from an existing class (base or parent class). The child class can then extend or override the functionalities of the parent class, thus promoting code reusability and allowing for hierarchical organization of classes. Inheritance facilitates the creation of specialized classes that inherit common attributes and methods from a more generalized class.
    
4. **Polymorphism**: Polymorphism allows objects of different classes to be treated as objects of a common superclass. It enables a single interface to be used for entities of different types, thus providing flexibility and extensibility in the design of software systems. Polymorphism can be achieved through method overriding (runtime polymorphism) or method overloading (compile-time polymorphism). Method overriding allows a subclass to provide a specific implementation of a method defined in its superclass, while method overloading involves defining multiple methods with the same name but different parameter lists.
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

There are three access modifiers: 
**– Public:** members are accessible from outside the class. 
**– Private:** members cannot be accessed (or viewed) from outside the class 
**– Protected:** members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
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

**Constructor** is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. It constructs the values i.e. provides data for the object which is why it is known as a constructor.

- Constructor is a member function of a class, whose name is the same as the class name.
- Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically when an object of the same class is created.
- Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as a constructor.
- Constructors do not return value, hence they do not have a return type.
- A constructor gets called automatically when we create the object of the class.
- Constructors can be overloaded.
- A constructor can not be declared virtual.

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

### CONSTRUCTOR MEMBER INTIALIZING LIST
A constructor can initialize data members of the class in a different approach like this:

```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder { 
public: //member variables must be initialized
	double radius;
	double height;
   


	Cylinder() : radius(1), height(1) {
	//any constructor code
	}
	
    double volume() {
        return PI*radius*radius*height;
    }

};

  
  

int main() {

 Cylinder cylinder1; //works fine
 
 return 0;
}
```
## TYPES OF CONSTRUCTOR
### 1. DEFAULT CONSTRUCTOR
An empty constructor is also called as default constructor. It will be called even if no constructor is provided in the class. (it is provided by the compiler)
It can be implemented by two ways:
```cpp
Classname() 
{
}
```
or
```cpp
Classname() = default;
```

```cpp
Classname obj; //calls default constructor
```

When your class has multiple constructors and it is needed to call the empty or default constructor empty parenthesis is used while creating the object.
```cpp
int main() {
	Cylinder obj(); //when there are multiple default constructors are provided, it calls the empty constructor.
	return 0;
}
```

### 2. USER-DEFINED DEFAULT CONSTRUCTOR
A non- empty default constructor is known as User-defined default constructor.
```cpp
Classname(){
	//anycode
	cout << "User-defined default constructor is called.";
	
}
```

```cpp
int main() {
	Classname obj; //userdefined default constructor will be called

	return 0;
}

```

### 3. USER-DEFINED PARAMETERIZED CONSTRUCTOR
```cpp
class Classname{
int data;
public:
//what parameter is asked doesnt matter
Classname(int a){
	//anycode
	data = a;	
}

};

```

```cpp
int main(){
	Classname obj(2); //arguments must be passed -> parameterized constructor is called

	return 0;
}
```

### 4. USER-DEFINED PARAMETERIZED CONSTRUCTOR / CONSTRUCTOR WITH DEFAULT ARGUMENTS
```cpp
class Classname{
int data;
public:
//what parameter is asked doesnt matter
Classname(int a = 69){
	//anycode
	data = a;	
}

};

```

```cpp
int main(){
	Classname obj(2); //arguments must be passed -> USER-DEFINED PARAMETERIZED CONSTRUCTOR IS CALLED
	Classname obj2; //still USER-DEFINED PARAMETERIZED CONSTRUCTOR IS CALLED because it has default arguments
	Classname obj3(); //empty or default constructor is called.

	return 0;
}
```

NOTE:
1. NO TWO *DEFAULT* CONSTRUCTORS CAN BE PROVIDED IN THE SAME CLASS. (When object is created with `Classname obj;` ). When `Classname obj();` is used default/empty constructor is called.
2. NO TWO PARAMETRIZED CONSTRUCTORS CAN BE PROVIDED IN THE SAME CLASS (When object is created with `Classname obj(PARAM);` ). When `Classname obj;` is used user-defined parameterized default constructor is called.
3. `Classname obj;` always calls the default constructor (of whichever type present).

## GETTER AND SETTER
Methods to read or modify member variables of a class. The private members of a class cannot be accessed outside the class without any public member functions. Hence, some member functions are made to ensure the getting and setting of values in member variables called Getter and Setter.

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
cout << p_cylinder1 -> volume() << endl; //member access operator
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
class Cylinder
{
int data;
public:
Cylinder(int d){
	data = d;
	cout << "Constructor is called for object with data: " << data << endl;
}

~Cylinder(){
	cout << "Destructor is called for object with data: " << data << endl;
}

};

  
int main()
{
    Cylinder obj1(1);
    Cylinder *obj2 = new Cylinder(2); //parameters are passed like this
    delete obj2;
	
{
// new scope
	Cylinder obj2(3);
}

    return 0;
}
```

```output
Constructor is called for object with data: 1
Constructor is called for object with data: 2
Destructor is called for object with data: 2
Constructor is called for object with data: 3
Destructor is called for object with data: 3
Destructor is called for object with data: 1
```
The destructor will be called always, when (after) the constructor is called.
If we create a heap object using memory allocation, it does not call the destructor. We need to explicitly call the `delete` operator to call the destructor.

# STATIC MEMBERS

**Static Data Member:**
- Static data members are shared among all instances of a class. They belong to the class rather than any specific instance.
- They are declared with the keyword `static`.
- They are accessed using the class name rather than through instances of the class.
- Always initialized to 0 by default rather than garbage value.

```CPP
#include <iostream>
using namespace std;

class MyClass {
public:
    static int count; // Declaration of static data member
    int id;

    MyClass() {
        count++; // Increment count on each object creation
        id = count;
    }
};

int MyClass::count; // Definition of static data member (compulsory) Initializes to 0

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    cout << "Total objects created: " << MyClass::count << endl;

    return 0;
}
```

```output
Total objects created: 3
```

**Static Member Function:**
- Static member functions are not associated with any specific instance of the class.
- They can access only static data members and other static member functions.
- They are declared using the keyword `static`.
- They are accessed using the class name rather than through instances of the class.

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    static void printMessage() {
        cout << "This is a static member function." << endl;
    }
};

int main() {
    MyClass::printMessage(); // Accessing static member function without creating an object
    return 0;
}
```

```output
This is a static member function.
```

# CONSTANT MEMBERS

**Constant Data Member:**
- Constant data members are those whose values cannot be changed once initialized.
- They are declared using the `const` keyword.
- They must be initialized either in the constructor's member initializer list or inline in the class definition.

INLINE INITIALIZATION:
```cpp
#include <iostream>
using namespace std;

class Circle {
public:
    const float PI = 3.14; // Constant data member
    float radius;

    Circle(float r) : radius(r) {}

    float calculateArea() const {
        return PI * radius * radius;
    }
};

int main() {
    Circle c(5);
    cout << "Area of the circle: " << c.calculateArea() << endl;
    // c.PI = 3.14159; // This would result in a compilation error
    return 0;
}

```

CONSTRUCTOR MEMBER INITIALIZING LIST
```CPP
#include <iostream>
using namespace std;

class Circle {
public:
    const float PI; // Constant data member
    float radius;

    Circle(float r) : radius(r), PI(3.14) {}

    float calculateArea() const {
        return PI * radius * radius;
    }
};

int main() {
    Circle c(5);
    cout << "Area of the circle: " << c.calculateArea() << endl;
    // c.PI = 3.14159; // This would result in a compilation error as it is const.
    return 0;
}
```

```output
Area of the circle: 78.5
```

**Constant Member Function:**
- Constant member functions are those that do not modify the state of the object.
- They are declared using the `const` keyword after the function declaration.
- They can only call other constant member functions and cannot modify non-constant data members.
```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    int data;

    MyClass(int d) : data(d) {}

    void display() const {
        // data = 10; // Error: Cannot modify data member in a const member function
        cout << "Data: " << data << endl;
    }
};

int main() {
    const MyClass obj(5);
    obj.display();
    return 0;
}
```

```output 
Data: 5
```

# COPY CONSTRUCTOR
### SHALLOW COPY
In shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. If some variables are dynamically allocated memory from heap section, then the copied object variable will also reference the same memory location.  
This will create ambiguity and run-time errors, dangling pointer. Since both objects will reference to the same memory location, then change made by one will reflect those change in another object as well. Since we wanted to create a replica of the object, this purpose will not be filled by Shallow copy.   
**Note:** C++ compiler implicitly creates a copy constructor and overloads assignment operator in order to perform shallow copy at compile time.

Shallow copy of Stack Object
![[Pasted image 20240315190635.png]]

```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{
public: // member variables must be initialized
    double radius;
    double height;
    // Cylinder() = default;
  
    double volume()
    {
        return PI * radius * radius * height;
    }
};
  
int main()
{
  
    Cylinder c1;
    c1.height = 2;
    c1.radius = 5;
    Cylinder c2 = c1;
  
    cout << c1.height << " " << c1.radius << endl;
    cout << c2.height << " " << c2.radius << endl;
    c2.height = 8;
    c1.radius = 3;
    cout << c1.height << " " << c1.radius << endl;
    cout << c2.height << " " << c2.radius << endl;
  
    cout << "Address of obj1: " << &c1 << " " << "Address of obj2: " << &c2 << endl;
  
    return 0;
}
```

```output
2 5
2 5
2 3
8 5
Address of obj1: 0x5e5c9ffcd0 Address of obj2: 0x5e5c9ffcc0
```

THE PROBLEM ARRISES WHEN WE USE DYNAMIC MEMORY ALLOCATION TO CREATE AN OBJECT (HEAP OBJECT)

Shallow copy of Heap Object
![[Pasted image 20240315190659.png]]
```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{
public:
    double radius;
    double height;
  
    double volume()
    {
        return PI * radius * radius * height;
    }
};
  
int main()
{
  
    Cylinder *c1 = new Cylinder;
    (*c1).height = 2;
    (*c1).radius = 5;
    Cylinder *c2 = c1;
  
    cout << (*c1).height << " " << (*c1).radius << endl;
    cout << (*c2).height << " " << (*c2).radius << endl;
    (*c2).height = 8;
    (*c1).radius = 3;
    cout << (*c1).height << " " << (*c1).radius << endl;
    cout << (*c2).height << " " << (*c2).radius << endl;
  
    cout << "Address of obj1: " << &(*c1) << " "
         << "Address of obj2: " << &(*c2) << endl;
  
    return 0;
}
 ```

```output
2 5
2 5
8 3
8 3
Address of obj1: 0x22f52dbf610 Address of obj2: 0x22f52dbf610
```

### DEEP COPY (COPY CONSTRUCTOR IS USED)
In Deep copy, an object is created by copying data of all variables, and it also allocates similar memory resources with the same value to the object. In order to perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well, if required. Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.
![[Pasted image 20240315190842.png]]

FOR STACK OBJECT
```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{
public:
    double radius;
    double height;
  
    Cylinder() = default; //must to provide any default constructor
    // copy constructor (just a parameterized constructor)
    Cylinder(Cylinder &obj)
    {
        radius = obj.radius;
        height = obj.height;
    }
  
    double volume()
    {
        return PI * radius * radius * height;
    }
};
  
int main()
{
  
    Cylinder c1;
    c1.height = 2;
    c1.radius = 5;
    Cylinder c2(c1); //deep copy
  
    cout << c1.height << " " << c1.radius << endl;
    cout << c2.height << " " << c2.radius << endl;
    c2.height = 8;
    c1.radius = 3;
    cout << c1.height << " " << c1.radius << endl;
    cout << c2.height << " " << c2.radius << endl;
     cout << "Address of obj1: " << &c1 << " "
         << "Address of obj2: " << &c2 << endl;
  
    return 0;
}
```

```output
2 5
2 5
2 3
8 5
Address of obj1: 0x7e807ffb30 Address of obj2: 0x7e807ffb20
```

For Heap Object
```cpp
#include <iostream>
using namespace std;
const double PI = 3.1415;
class Cylinder
{
public:
    double radius;
    double height;
  
  Cylinder() = default; //must to provide any default constructor
  // copy constructor (just a parameterized constructor)
  Cylinder(Cylinder &obj)
  {
    radius = obj.radius;
    height = obj.height;
  }
  
    double volume()
    {
        return PI * radius * radius * height;
    }
};
  
int main()
{
  
    Cylinder *c1 = new Cylinder;
    (*c1).height = 2;
    (*c1).radius = 5;
    Cylinder *c2 = new Cylinder(*c1); //deep copy
  
    cout << (*c1).height << " " << (*c1).radius << endl;
    cout << (*c2).height << " " << (*c2).radius << endl;
    (*c2).height = 8;
    (*c1).radius = 3;
    cout << (*c1).height << " " << (*c1).radius << endl;
    cout << (*c2).height << " " << (*c2).radius << endl;
  
    cout << "Address of obj1: " << c1 << " "
         << "Address of obj2: " << c2 << endl;
  
    return 0;
}
```

```output
2 5
2 5
2 3
8 5
Address of obj1: 0x2f4a911f680 Address of obj2: 0x2f4a911f7e0
```

### DIFFERENCE BETWEEN SHALLOW COPY AND DEEP COPY
|  | **Shallow Copy** | **Deep copy** |
| ---- | ---- | ---- |
| **1.** | When we create a copy of object by copying data of all member variables as it is, then it is called shallow copy | When we create an object by copying data of another object along with the values of memory resources that reside outside the object, then it is called a deep copy |
| **2.** | A shallow copy of an object copies all of the member field values. | Deep copy is performed by implementing our own copy constructor. |
| **3.** | In shallow copy, the two objects are not independent | It copies all fields, and makes copies of dynamically allocated memory pointed to by the fields |
| **4.** | It also creates a copy of the dynamically allocated objects | If we do not create the deep copy in a rightful way then the copy will point to the original, with disastrous consequences. |
# ARRAY OF OBJECTS
- In C++, you can create arrays of objects just like arrays of fundamental data types.
- Each element of the array is an instance of the class.
- You can initialize array elements using either default constructor or parameterized constructor.

USING DEFAULT CONSTRUCTOR
```cpp
#include <iostream>
using namespace std;
  
class MyClass {
public:
    int data;
  
    // Default constructor
    MyClass() {
        cout << "Default constructor is called." << endl;
        data = 0;
    }
  
    // Parameterized constructor
    MyClass(int value) {
        cout << "Parameterized constructor is called." << endl;
        data = value;
    }
};
  
int main() {
    const int SIZE = 3;
    MyClass obj[SIZE]; // Array of objects using default constructor
  
    // Accessing array elements
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << i << ": " << obj[i].data << endl;
    }
  
    return 0;
}
```

```output
Default constructor is called.
Default constructor is called.
Default constructor is called.
Element 0: 0
Element 1: 0
Element 2: 0
```


USING PARAMETRIZED CONSTRUCTOR 

BELOW MIGHT NOT WORK FOR SOME COMPILER
```cpp
#include <iostream>
using namespace std;
  
class MyClass
{
public:
    int data;
  
    // Default constructor
    MyClass()
    {
        cout << "Default constructor is called." << endl;
        data = 0;
    }
  
    // Parameterized constructor
    MyClass(int value)
    {
        cout << "Parameterized constructor is called." << endl;
        data = value;
    }
};
  
int main()
{
    const int SIZE = 3;
    MyClass obj[3](8); // Array of objects using parametrized constructor
  
    // Accessing array elements
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Element " << i << ": " << obj[i].data << endl;
    }
  
    return 0;
}
```

```output
Parameterized constructor is called.
Parameterized constructor is called.
Parameterized constructor is called.
Element 0: 8
Element 1: 8
Element 2: 8
```

THE BELOW METHOD CAN BE USED TO INTIALIZED DIFFERENCE OBJECT OF ARRAY WITH DIFFERENT CONSTRUCTOR
```CPP
#include <iostream>
using namespace std;
  
class MyClass
{
public:
    int data;
  
    // Default constructor
    MyClass()
    {
        cout << "Default constructor is called." << endl;
        data = 0;
    }
  
    // Parameterized constructor
    MyClass(int value)
    {
        cout << "Parameterized constructor is called." << endl;
        data = value;
    }
};
  
int main()
{
    const int SIZE = 3;
    MyClass obj[3] = {MyClass(2),MyClass(), MyClass(6)}; // Array of objects using parametrized constructor
  
    // Accessing array elements
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Element " << i << ": " << obj[i].data << endl;
    }
  
    return 0;
}
```

```output
Parameterized constructor is called.
Default constructor is called.
Parameterized constructor is called.
Element 0: 2
Element 1: 0
Element 2: 6
```

# OBJECT AS ARGUMENTS

```cpp
#include <iostream>
using namespace std;
  
class MyClass
{
public:
    int data;
  
    MyClass(int value) : data(value) {}
};
  
void display(MyClass &obj)
{
    cout << obj.data << endl;
}
int main()
{
    MyClass o1(2);
    MyClass o2(4);
  
    display(o1);
    display(o2);
  
    return 0;
}
```

```output
2
4
```

# INLINE FUNCTION
An inline function in C++ is a function that is expanded in place at the point of its invocation, rather than being called through the usual function call mechanism. The `inline` keyword is used to declare an inline function.

The main purpose of inline functions is to improve performance by avoiding the overhead of function call and return, especially for small and frequently called functions. However, it's important to note that the decision to inline a function is ultimately made by the compiler, and it may choose not to inline a function even if declared as `inline`.

Inline functions are actual functions, which are copied everywhere during compilation, like pre-processor macro, so the overhead of function calling is reduced. Inlining is only a request to the compiler, not a command. Compiler may not perform inlining in such circumstances like:– If a function contains a loop. (for, while, do-while)– If a function contains static variables.– If a function is recursive.– If a function return type is other than void, and the return statement doesn’t exist in function body.– If a function contains switch or goto statement

Advantages of using Inline Function:
– Function call overhead doesn’t occur.
– Saves the overhead of push/pop variables on the stack when function is called.
– Saves overhead of a return call
– Helps compiler to perform context specific optimization
– Useful if the code is small

Disadvantages of Inline Functions:
– The added variables from the inlined function consumes additional registers.
– If you use too many inline functions then the size of the binary executable file will be large.
– Too much inlining can also reduce your instruction cache hit rate.

# FRIEND FUNCTION
- A friend function is a function that is not a member of a class but has access to its private and protected members.
- It can be declared inside or outside the class, but it must be declared within the class to grant access to its private and protected members.
- Friend functions are useful when you need to allow external functions access to the private or protected members of a class.
```cpp
#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass() : data(2) {}

    // Declaration of friend function
    friend void displayData(MyClass&);
};

// Definition of friend function
void displayData(MyClass& obj) {
    cout << "Data accessed by friend function: " << obj.data << endl;
}

int main() {
    MyClass obj;
    displayData(obj); // Friend function called to access private member
    return 0;
}

```

```output
Data accessed by friend function: 2
```


# FRIEND CLASS
- A friend class is a class that is granted access to the private and protected members of another class.
- It is declared using the `friend` keyword within the class whose members it needs to access.
- Friend classes are useful when you need to grant access to the private or protected members of a class to another entire class.
```cpp
#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass() : data(1) {}

    // Declaration of friend class
    friend class FriendClass;
};

// Friend class that can access private members of MyClass
class FriendClass {
public:
    void displayData(MyClass& obj) {
        cout << "Data accessed by friend class: " << obj.data << endl;
    }
};

int main() {
    MyClass obj;
    FriendClass fc;
    fc.displayData(obj); // Friend class method called to access private member
    return 0;
}

```

```output
Data accessed by friend class: 1
```

## MEMBER FUNCTION OF ANOTHER CLASS AS FRIEND

```cpp
#include <iostream>
using namespace std;

class A; //forward declaration
class B
{
public:
    void mem(A &obj);
};

class A
{
    int data = 2;

public:
    friend void B::mem(A &obj);
};

void B::mem(A &obj)
{
    cout << obj.data << endl;
}

int main()
{
    B b1;
    A a1;

    b1.mem(a1);

    return 0;
}
```

```output
2
```

- Here, the member function `mem` of class `B` is made friend of another class `A` .
- The class whose member function is to be made friend must be defined first.
- The class which will make it a friend should be forward declared.
- The member function itself should be defined outside the class.

# POLYMORPHISM

The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism is a person who at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism. Polymorphism is considered one of the important features of Object-Oriented Programming.

Polymorphism is a core concept in object-oriented programming (OOP) that allows objects to be treated as instances of their parent class. It enables flexibility and extensibility in code design by providing a common interface for different types of objects.

Polymorphism allows objects of different types to be treated uniformly through a common interface. It enables code to be written in a way that is generic and flexible, allowing it to work with a variety of different types.

TYPES OF POLYMORPHISM:
1. Compile-Time Polymorphism
	 a. Function Overloading
	 b. Operator Overloading
2. Run-Time Polymorphism
	a. Virtual Function
	b. Function Overriding

## 1. COMPILE-TIME POLYMORPHISM
- Compile-time polymorphism is resolved at compile time.
- It involves techniques like function overloading and operator overloading.
- The decision of which function or operator to call is made by the compiler based on the number and types of arguments passed to the function or operator.

### a. FUNCTION OVERLOADING
Function overloading is a form of compile-time polymorphism where multiple functions can have the same name but differ in the number or types of their parameters. This allows you to use the same function name for different operations, making the code more readable and intuitive.

```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // Calling the first overloaded function
    cout << "Sum of 5 and 3: " << calc.add(5, 3) << endl;

    // Calling the second overloaded function
    cout << "Sum of 5, 3, and 2: " << calc.add(5, 3, 2) << endl;

    // Calling the third overloaded function
    cout << "Sum of 5.5 and 3.5: " << calc.add(5.5, 3.5) << endl;

    return 0;
}

```

```output
Sum of 5 and 3: 8
Sum of 5, 3, and 2: 10
Sum of 5.5 and 3.5: 9
```
In this example, the `Calculator` class has three overloaded `add()` functions:

1. `add(int a, int b)` adds two integers.
2. `add(int a, int b, int c)` adds three integers.
3. `add(double a, double b)` adds two doubles.

At compile time, the compiler determines which version of the function to call based on the arguments passed to it. This allows you to use the same function name (`add` in this case) for different operations, making the code more intuitive and easier to understand.

Function overloading is especially useful when you want to perform similar operations on different types of data or when you want to provide multiple ways to use a function.

### b. OPERATOR OVERLOADING
Operator overloading is a form of compile-time polymorphism in C++. It allows you to define how operators should behave when used with user-defined types. This means you can redefine the behavior of operators such as `+`, `-`, `*`, `/`, etc., for objects of your own class.

```cpp
#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor
    Counter(int count = 0) : count(count) {}

    // Overloading the + operator to subtract two Counter objects
    Counter operator+(const Counter& c) {
        Counter result;
        result.count = this->count - c.count;
        return result;
    }

    // Getter method
    int getCount() const {
        return count;
    }
};

int main() {
    Counter c1(5);
    Counter c2(10);

    // Adding two Counter objects (but should subtract)
    Counter sum = c1 + c2;

    cout << "Count of c1: " << c1.getCount() << endl;
    cout << "Count of c2: " << c2.getCount() << endl;
    cout << "Sum of c1 and c2: " << sum.getCount() << endl;

    return 0;
}
```

```output
Count of c1: 5
Count of c2: 10
Sum of c1 and c2: -5
```

- We define the class `Counter` with a member variable `count`.
- We overload the `+` operator to perform subtraction of two `Counter` objects. Inside the overloaded operator function, we perform the subtraction of the `count` member variables of the two objects and return a new `Counter` object with the result.
- In the `main()` function, we create two `Counter` objects `c1` and `c2`, and then use the `+` operator to subtract them together, storing the result in `sum`.
- We then print out the counts of `c1`, `c2`, and the sum.

## RUN-TIME POLYMORPHISM
Run-time polymorphism, also known as dynamic polymorphism, allows you to achieve polymorphic behavior where the specific implementation of a function is determined at run time rather than at compile time. This is typically achieved through inheritance and virtual functions in C++.

### OVERRIDING A VIRTUAL FUNCTION
VIRTUAL FUNCTION: In C++, a virtual function is a member function of a class that is declared using the `virtual` keyword. When a virtual function is declared in a base class and then redefined (or overridden) in a derived class, the derived class's version of the function is called instead of the base class's version when an object of the derived class is being referred to through a pointer or reference to the base class.

SYNTAX:
```cpp
class Base {
public:
    virtual void functionName() {
        // Function definition
    }
};
```

FUNCTION OVERRIDING: Function overriding is the process of providing a new definition for an inherited member function in a derived class. It allows a derived class to provide a specific implementation of a virtual function that is appropriate for that class, thereby customizing the behavior of the function.

When a function in a derived class has the same name, parameter list, and return type as a virtual function in its base class, it is said to override that function. The base class's version of the function is then said to be overridden by the derived class's version.

```cpp
class Derived : public Base {
public:
    void functionName() override {
        // New implementation of the virtual function
    }
};
```


Without declaring a function as `virtual` , it cannot be overridden. 

```cpp
#include <iostream>
using namespace std;
  
// Base class
class Animal {
public:
    // NON- Virtual function
    void  sound() {
        cout << "Animal makes a sound" << endl;
    }
};
  
// Derived class 1
class Dog : public Animal {
public:
    // NOT Overridden virtual function
    void sound() {
        cout << "Dog barks" << endl;
    }
};
  
// Derived class 2
class Cat : public Animal {
public:
    // NOT Overridden virtual function
    void sound() {
        cout << "Cat meows" << endl;
    }
};
  
int main() {
    // Pointers to base class
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();
  
    // Call the virtual function
    animal1->sound(); // Output: Dog barks
    animal2->sound(); // Output: Cat meows
  
    delete animal1;
    delete animal2;
  
    return 0;
}
```

```output
Animal makes a sound
Animal makes a sound
```

AFTER MAKING THE FUNCTION `VIRTUAL`, IT CAN BE OVERRIDDEN.
```cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Overridden virtual function
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Overridden virtual function
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Pointers to base class
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    // Call the virtual function
    animal1->sound(); // Output: Dog barks
    animal2->sound(); // Output: Cat meows

    delete animal1;
    delete animal2;

    return 0;
}

```

```output
Dog barks
Cat meows
```

- We have a base class `Animal` with a virtual function `sound()`.
- We have two derived classes `Dog` and `Cat` that inherit from the `Animal` class and override the `sound()` function with their own implementations.
- In the `main()` function, we create pointers of type `Animal*` pointing to objects of type `Dog` and `Cat`.
- When we call the `sound()` function using these pointers, the appropriate version of the `sound()` function (either `Dog::sound()` or `Cat::sound()`) is invoked based on the actual type of the object being pointed to.
- This demonstrates run-time polymorphism, where the decision of which function to call is made dynamically at runtime, based on the actual type of the object.