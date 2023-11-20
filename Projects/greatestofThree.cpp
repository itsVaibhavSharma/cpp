//Ternary or conditional Operator
#include <iostream>
using namespace std;
int main(){
int a, b, c, max;
cout << "Enter First no.: ";
cin >> a;
cout << "Enter Second no.: ";
cin >> b;
cout << "Enter Third no.: ";
cin >> c;

max = (a>b)?((a>c)?a:c):((b>c)?b:c);

cout << "The greatest of the three numbers is : " << max << endl;

}