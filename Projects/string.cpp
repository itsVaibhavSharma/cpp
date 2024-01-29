
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[24];
    cin >> str;
    cout << str << endl;

    for(int i = 0; (str[i] != 0);i++)
    {
        cout << str[i];
    }



    return 0;
}