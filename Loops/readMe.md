# Loop

- Repeatedly performing any task 
- like printing "I love C++" for 10 times
```cpp
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
std::cout << "I love C++" << std::endl;
```

## For Loop

```cpp
for(intitializing variable; condition; action on variable) {
action to be performed till the condition is satisfied.
}
```
- Pillars of any loop
	- Iterator
	- Starting Point
	- Test (controls when the loop stops)
	- Increment/Decrement
	- Loop body
- Printing "I love C++" 10 times using for Loop
```cpp
for(unsigned int i{}; i < 10; ++i) {
std::cout << "I love C++" <<std::endl;
}
```

- `size_t` : Not a type, just a type alias for some unsigned int representation
```cpp
for(size_t i{}; i < 10; ++i) {
std::cout << "I love C++" <<std::endl;
}
```
- scope of the variable `i` is only inside the curly braces `{}` used in the for loop and are not accessible outside.
- ###### Iterator can live outside the loop scope like:
```cpp
size_t i{} 
for(j; j < 10; ++j) {
std::cout << "Using the j variable outside for scope" << j << std::endl;
}
std::cout << "Loop Done, the value of j is: " << j <<std::endl;
```
- we can even leave out the initialization part completely empty like this:
```cpp
size_t i{} 
for(  ; j < 10; ++j) {
std::cout << "Using the j variable outside for scope" << j << std::endl;
}
std::cout << "Loop Done, the value of j is: " << j <<std::endl;
```
- Hard coded values are bad, instead declare value in a different variable.
```cpp
const size_t COUNT {10};
for(size_t j{}; j < COUNT ; ++j){
std::cout << "The value of j is: " << j << std::endl;
}
```

# While Loop
- While the condition is satisfied, perform the action.
```cpp
	while(condition) {
	perform action
	}
```

```cpp
const size_t COUNT {10};
size_t i {0};
while(i < COUNT) {
std::cout << "I love C++" << std::endl;
++i;
}
std::cout << "Loop Done" << std::endl;
```
- here we have to put the increment part by ourself in the loop.
# Do While Loop
- The action is first performed (even if the condition is not satisfied) and then the condition is tested, if the condition satisfies then the action will be performed again and so on.
```cpp
do {
perform action
} while (condition);
```

```cpp
const size_t COUNT {10};
size_t i {11}; //initialization
do {
std::cout << "[" <<i << "] : I love C++" << std::endl;
++i; //increment
} while(i < COUNT);  //condition to be tested
```
the output will still print `[11] : I love C++` for 1 time.
# Ranged for Loop
```cpp
for (rangeDeclaration : rangeExpression) {
    // code
}
```
- Here, the ranged `for` loop iterates the array num from beginning to end. The `int` variable `var` stores the value of the array element in each iteration.
```cpp
//initialize an int array
int num[3] {1, 2, 3};

//use of ranged for loop
for (int var : num) {
//code
}
```


(https://cdn.programiz.com/sites/tutorial2program/files/cpp-ranged-for-loop.png)

