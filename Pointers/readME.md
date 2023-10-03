# Pointers
All the variables have some kind of address in memory which can be stored in some other variables called pointers.
## Declaring Pointers
```cpp
int * p_num {}; //Can only store an address of a variable of type int

double * p_fr_num {}; //can only store a variable of type double.

//explicitely initialize to null pointer
int * p_num1 {nullptr};
int * p_fr_num1 {nullptr};  // entering nullptr defines that the pointer doesnt point to anything.

```
- all pointers have the **same size** `sizeof(int*)` or `sizeof(p_num)`
#### Position of * doesn't matter
```cpp
int*  p_num2 {nullptr};
int * p_num3 {nullptr};
int  *p_num4 {nullptr}; //int  *p_num4 is easier to understand if you have multiple variables declared on the same line.

int *p_num5 {}, other_int_var{};
int* p_num6 {}, other_int_var6{}; //confusing and not recommended.
int *p_num5 {};
other_int_var{}; //no room for confusion. better
```
## Assigning Data to Pointer Variables

```cpp
int var {43};
int *p_var {&var}; //(&) the address of operator i.e. int variable 
std::cout << "address: " << p_var << std::endl;

//change the address stored in a pointer any time.
int var1 {65};
p_var = &var1; //assign a diff. address to the pointer
std::cout << "address: " << p_var << std::endl;
```
- Pointers only store the type for which it is declared
```cpp
int *p_int1 {nullptr};
double double_var {33};

p_int1 = &double_var; //compile error
```

### Dereferencing a pointer 
 - Reading the value of the variable whose address is stored in the pointer.
 - Syntax used is `*pointer_name` 

```cpp
int* p_int2 {nullptr};
int int_data {56};
p_int2 = &int_data;
std::cout << "value : " << *p_int2 << std::endl; //Dereferencing a pointer
```
    Output: `value : 56`
## Declaring pointers to char
- Can use normal pointer to char like we've been doing for double, int, etc.
```cpp
char *p_char {nullptr};
char char_var {'A'};

p_char = &char_var;
```
#### Initialize with string literal
- You can initialize pointer to char with string literal : C-String
```cpp
char *p_message {"Hello World!"};

std::cout << "The message is : " << p_message << std::endl;
std::cout << "The value stored at p_message is : " << *p_message << std::endl; //prints complete Hello World!
```
the `Hello World!` is going to convert into an array and the pointer will provide the first element of the array.
- some compiler refuse to compile it.
- we should not directly modify the `Hello World!` array instead make it an array and then change i.e. can modify the pure array initialized with string literal.
```cpp
char message[] {"Hello World!"};
message[0] = 'T';
std::cout << "message : " << message << std::endl;
```
