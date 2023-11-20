#include <iostream>
using namespace std;
int main()
{
    // method 1 : using another variable
    cout << "Method 1" << endl;
    int a, b;
    cout << "Enter first no.: ";
    cin >> a;
    cout << "Enter second no. :";
    cin >> b;

    int x = a;
    a = b;
    b = x;
    cout << "First no. is : " << a << " and second no. is : " << b << endl;

    // method two : without another variable
    cout << "Method 2" << endl;
    int c, d;
    cout << "Enter first no.: ";
    cin >> c;
    cout << "Enter second no. :";
    cin >> d;

    c = c + d;
    d = c - d;
    c = c - d;

    cout << "First no. is : " << c << " and second no. is : " << d;

    return 0;
}