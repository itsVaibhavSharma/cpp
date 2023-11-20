// write a program to check whether the given input is nmber, capital letter, small letter or special symbol

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter input: ";
    cin >> ch;

    if ((ch >= 48) && (ch <= 57))
    {
        cout << "Number";
    }
    else if ((ch >= 65) && (ch <= 90))
    {
        cout << "Capital Letter";
    }
    else if ((ch >= 97) && (ch <= 122))
    {
        cout << "Small Letter";
    }
    else
    {
        cout << "Special Character";
    }

    return 0;
}