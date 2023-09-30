#include <iostream>
#include <string>

int main() {
    std::string full_name;
    int age;
   
   // to declare integer variable: int age {2}; can also be used
    std::cout << "Enter your complete name!" << std::endl;
    std::getline(std::cin,full_name);  // to take input with spaces
    std::cout << "You are " << full_name << "." << std::endl;
    
    std::cout << "Enter your age!" << std::endl;
    std::cin >> age;

    std::cout << "You are " << full_name << ", and you are " << age << " years old." << std::endl;

    // printing error
    std::cerr << "Error message";
    //printing log message
    std::clog << "Sample log message";
    return 0;
}