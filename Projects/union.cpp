#include <iostream>
using namespace std;
int main(){
    union book
    {
        int marks;
        char ch;
        

    }z;

    z.marks = 20;
    cin >> z.ch;
    

    cout << z.ch << endl; //correct value
    cout << z.marks << endl; //garbage
    cout << sizeof(z) << endl; // 4 bcz size of int > size of char

    return 0;
}