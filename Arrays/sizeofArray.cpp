#include <iostream>

int main(){

    int scores [] {1,2,5};

   
    int count { std::size(scores)}; // std::size( C++17)

    
    std::cout << "count : " << count << std::endl;



    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    int count1 {sizeof(scores)/sizeof(scores[0])};
    
    std::cout << "count : " << count1 << std::endl;
 

/*
    for(size_t i {0} ; i < count ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
 

   //Range based for loop
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;       
    }
    */
   
    
    return 0;
}