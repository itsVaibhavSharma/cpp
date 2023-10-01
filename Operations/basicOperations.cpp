#include <iostream>


int main(){
   
   //Addition
   int number1{2};
   int number2{7};

 
   int result = number1 + number2;
   std::cout << "addition result : " << result << std::endl;

    //Subtraction
    result = number2 - number1 ;
   std::cout << "subtraction result : " << result << std::endl;

   result = number1 - number2;
   std::cout << "subtraction result : " << result << std::endl;

   //Multiplication
   result = number1 * number2;
   std::cout << "multiplication result : " << result << std::endl;


   //Division
   
   auto div = (double) number2 / number1;
   std::cout << "division result : " << div << std::endl;


   //Modulus
   result = number2 % number1; // 7 % 2
   std::cout << "remainder result : " << result << std::endl; // 1

   result = 31 % 10;
   std::cout << "remainder result : " << result << std::endl; // 1
    return 0;
}