#include <iostream>
using namespace std;
int main()
{
    int a,  counter {0};
    cout << "Enter an Integer" << endl;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            counter++;
        }
    }

    if (counter == 1)
    {
        std::cout << a << " is neither prime nor composite number" << std::endl;
    }
    else if (counter > 2)
    {
        std::cout << a << " is a composite number" << std::endl;
    }

    else
    {
        std::cout << a << " is a prime number" << std::endl;
    }
}