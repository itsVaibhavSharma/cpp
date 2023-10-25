#include <iostream>
using namespace std;
int main()
{
    int k, counter2{0};
    cout << "Enter an Integer: ";
    cin >> k;

    for(int a = 2; a <= k; a++)
    {
        int counter {0};
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            counter++;
        }
    }

    if (counter == 2)
    {
        
        counter2++;
    }

    }
    cout << "There are "<< counter2 << " prime numbers between 2 to " << k << endl;
}