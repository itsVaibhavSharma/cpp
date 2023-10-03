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
    
    while(a < 0) {
    std::cout << "Please Enter a positive decimal number (base 10)!" << std::endl;
    std::cin >> a;
    }
    
    int ain = (int)a;
    double decpart = (double)a - (double)ain;

    int arr1[40] {};
    int div = numberofdiv(ain);

    
    for(int i{div-1}, temp = (ain); i >= 0; i--){
        
        arr1[i] = (temp % 2);
        temp = (temp/2);
        
    }
    std::cout << a << " in binary = ";
    for(int j {0}; j < div; j++){
        std::cout << arr1[j];
        
    }
    std::cout << ".";
   
   double k = decpart;
   
    if(-0.005 < decpart && decpart < 0.005) {
    std::cout << "00";
   } else{
   while(-0.005 > k || k > 0.005) {
    int temp {0};
    k= (k*2);
    temp = (int)k;
    k = k - (double)temp;
    std::cout << temp;
     }
   }


    
    return 0;
}