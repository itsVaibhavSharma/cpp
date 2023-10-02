# Arrays
Grouping int (or other) together and giving them a single name and manipulating them using that name.

## Declaring and using Array

`type array_name[n];` this is how you declare an array `array_name` of data type `type` and `n` no. of elements. 
- *imp: the no. of elements starts from 0 to n-1*
- Arrays stores values/elements of same types.

```cpp
//declaring an array
int scores[10]; //an array storing 10 integers

//reading values
std::cout << std::endl;
std::cout << "scores[0] : " << scores[0] << std::endl;
std::cout << "scores[1] : " << scores[1] << std::endl;
//...
std::cout << "scores[9] : " << scores[9] << std::endl;

```
### Array bounds
- Reading past bounds of your array : not a good practice
- It's going to read out something you didn't put there.
	```cpp
	std::cout << "scores[10] : " << scores[10] << std::endl;
```
### Looping through an Array
```cpp
for(size_t i {0}; i < 10; ++i) {
std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
}
```
### Writing data into an Array
```cpp
int scores[10];

scores[0] = 20;
scores[1] = 21;
scores[2] = 22;
// writing out of bounds data is bad
scores[22] = 300;
```
### Writing data with a Loop
```cpp
int scores[10];

for (size_t i{}; i < 10; ++i) {
scores[i] = i*3;

}
```
### Initialize the array at declaration
```cpp
double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
```
### Array Declaration: Omit size
- array will automatically get the size of the array
```cpp
int class_sizes[] {10,12,15,11,18,17}
```
### Constant Arrays
- constant arrays cannot be modified.
```cpp
const int multipliers[] {22,3,15};
multipliers[1] = 20; //cannot change elements of a const array:Error
```
### Operations on data stored in arrays
```cpp
int sum{};
for(int element : scores){
sum +=elements;
}
std::cout << "Score sum : " << sum << std::endl;
```
## Size of an Array
- std::size() 
```cpp
std::cout << "scores[] size : " << std::size(scores) << std::endl;
```
the code behind it:
```cpp
std::cout << "size of complete array: " << sizeof(scores) << std::endl;
std::cout << "size of single element of the array: " << sizeof(scores[0]) << std::endl;
std::cout << "no. of items in the array: " << (sizeof(scores)/sizeof(scores[0])) << std::endl;
```
Printing out array items
```cpp
size_t count {sizeof(scores)/sizeof(scores[0])};

for (size_t i(0); i < count < ++i) {
std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
}
```
## Array of Characters

```cpp
//declare Array
char message[5] {'H', 'e', 'l', 'l', 'o'};
//print out the array through looping
std::cout << "message : ";
for(auto c : message) {
std::cout << c;
}
std::cout << std::endl;
std::cout << "Modify array data : " << std::endl;

message[1] = 'a';
//Print out the array
std::cout << "message : ";
for(auto c : message){
std::cout << c;
}
```
- Direct printing out an array (char)

```cpp
char message[5] {'H', 'e', 'l', 'l', 'o'}; //no null character
std::cout << "message : " << message << std::endl;
```
Output: `Hello~~`
- the above is not a good practice because it will print some garbage along with the main array. (`~` is just shown to represent garbage character.)
#### Null Termination
```cpp
char message[] {'H', 'e', 'l', 'l', 'o', '\0'}; //proper null termination i.e. does not define the size of the array
std::cout << "message : " << message << std::endl;
std::cout << "size: " << sizeof(message) << std::endl; //6

```
- the `\0`is the null terminator which tells the terminal that the array is ended
- the above is a good practice.
```cpp
char message[] {'H', 'e', 'l', 'l', 'o'}; //no null character here too i.e. not good practice
std::cout << "message : " << message << std::endl;
```
Output: `HelloHello` but size is 5 only


```cpp
char message[6] {'H', 'e', 'l', 'l', 'o'}; //null character will be added automatically i.e. good practice
std::cout << "message : " << message << std::endl;

```
### Literal C-String
```cpp
char message [] {"Hello"}; //an implicit '\0' character is appended to the end of the string, making it a c-string
std::cout << "message: " << message << std::endl;
std::cout << "size: "<< sizeof(message) << std::endl; //6

// can even have spaces between characters
char message[] {"Hello World!"};
std::cout << "message: " << message << std::endl;
std::cout << "size: "<< sizeof(message) << std::endl; //13
```
- Array of char are special but not int
	```cpp
	//cant directly print arrays other than that of chars
	int numbers[] {1,2,3,4,5,6,7,8,9,0};
	std::cout << "numbers: " << numbers << std::endl;
```
- some hex code but not the numbers
## Bounds of an Array
- Read beyond bounds : Will read garbage or crash your program
```cpp
	int numbers[] {1,2,3,4,5,6,7,8,9,0};
	std::cout << "numbers[12] : " << numbers[12] << std::endl;
	numbers[129] = 1000;
	std::cout << "numbers[129] : " << numbers[129] << std::endl;

```

- Write beyond bounds. The compiler allows it. But you don't own the memory at index 12, so other programs may modify it and your program may read bogus data at a later time. Or you can even corrupt data used by other parts of your program.