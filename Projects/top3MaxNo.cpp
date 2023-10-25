#include <iostream>

using namespace std;

int main() {
    int const n = 10;
    int a[n] = {};
    int max1 {-2020}, max2 {-2020}, max3 {-2020}; // let -2020 can never any input

    cout << "Enter " << n << " inputs:" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //code for comparing
    max1 = a[0];
    
    
    for(size_t i =1; i < n; i++)
    {
        if((a[i] > max1))
        {
            max3 = max2;
            max2 = max1;
            max1 = a[i];
            
            
        } else if((a[i] < max1 )&&(a[i] > max2))
        {
            max3 = max2;
            max2 = a[i];
            
        } else if((a[i] < max2 )&&(a[i] > max3))
        {
            max3 = a[i];
        }
    }
    cout << "Maximum: " << max1 << endl << "2nd Maximum: " << max2 << endl << "3rd Maximum: " << max3 << endl;


    return 0;
}