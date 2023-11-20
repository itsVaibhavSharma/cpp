#include <iostream>
using namespace std;
int main()
{
    // 0, 1, 1, 2 ,3, 5, 8, 13

    int n;
    cout << "Enter the number of elements required: ";
    cin >> n;
    int a = 0, b = 1, c=0;
    cout << "0, 1, ";
    for (int i = 2; i <n; i++){
        
        c = a+b;
        a = b;
        b = c;
        cout << c;
        if(i < (n-1)){
            cout  << ", ";
        }
    }
    return 0;
}