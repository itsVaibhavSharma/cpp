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

UNARY AND BINARY OPERATOR

```cpp
#include <iostream>
using namespace std;
  
class Myclass
{
    int value;
  
public:
    Myclass() = default;
    Myclass(int v) : value(v) {}
  
    // binary
    Myclass operator+(Myclass &objt)
    {
        Myclass newobj;
        newobj.value = value - objt.value;
  
        return newobj;
    }
  
    // unary
  
    Myclass operator-()
    {
        Myclass res;
        res.value = 25 - value;
        return res;
    }
  
    int display()
    {
        return value;
    }
};
  
int main()
{
    Myclass obj1(10), obj2(5);
    Myclass result = obj1 + obj2;
    cout << "Result: " << result.display() << endl;
  
    Myclass result2 = -obj1;
    cout << "Result: " << result2.display() << endl;
  
    return 0;
}
```

```output
Result: 5
Result: 15
```

