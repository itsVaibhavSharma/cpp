#include <iostream>


int numberofdiv(int a){
    int temp = a;
    int count = 1;
    while((temp) != 0 ) {
        count++;
        temp= (temp/2);


    }
return count;
}

int main() {
    double a {-1};
    
    std::cout << "Please Enter a positive decimal number (base 10)!" << std::endl;
    std::cin >> a;
    
    
    int ain = (int)a;
    double decpart = a - (double)ain;

    int arr1[40] {};
    int div = numberofdiv(ain);

    
    for(int i{div-1}, temp = (ain); i >= 0; i--){
        
        arr1[i] = (temp % 2);
        temp = (temp/2);
        
    }
    std::cout << a << " in binary = ";
    for(int j {1}; j<div; j++){
        std::cout << arr1[j];
        
    }
    std::cout << ".";
   
   double k = decpart;
   while(-0.05 > k || k > 0.05) {
    int temp {0};
    k= (k*2);
    temp = (int)k;
    k = k - (double)temp;
    std::cout << temp;
    

   }

   for(double k = decpart; -0.05 > k || k > 0.05; k )





    
    return 0;
}