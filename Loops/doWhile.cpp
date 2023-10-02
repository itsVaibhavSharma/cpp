#include <iostream>

int main(){


    const int COUNT{10};
    size_t i{0}; // Iterator declaration
    // to understand better use 10 and 11 res.

    do{
        std::cout << i << " : I love C++" << std::endl;
        ++i; // Incrementation
    }while( i < COUNT);

    std::cout << "Loop done!" << std::endl;
    
    return 0;
}