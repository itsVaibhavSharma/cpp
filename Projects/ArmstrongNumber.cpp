#include <iostream>
#include <cmath>
using namespace std;

int numberofdig(int a){
    int count = 0;
    while((a) != 0 ) {
        count++;
        a = (a/10);
    }
return count;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin>> n;
    int sum {}, temp1 {n}, num {numberofdig(n)};
    
    
    for(int i = 0; i < num; i++){
        
        int temp2 {};
        temp2 = pow((temp1%10),num);
        temp1 /= 10;
        sum = sum + temp2;
        
       
    }
    if(sum == n){
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}