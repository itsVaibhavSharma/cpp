#include <iostream>

using namespace std;

int digits(int n)
{
    int dig{0};

    while (n != 0)
    {
        n = n / 10;
        dig++;
    }
    
    return dig;
}
int main()
{
    int n;
    
    
    cout << "Enter a number to check if it is a palindrome. : ";
    cin >> n;
    int count{0}, digit = digits(n);

    int temparr[10];
    int temp = n;
    for (int i = digit-1; i >= 0; i--)
    {

        temparr[i] = temp % 10;
        temp /= 10;
    }
    

    
    if (digit % 2 == 0)
    {
        
        for (int i = 0, j = digit-1; i < digit/2; i++, j--)
    {
        if (temparr[i] == temparr[j])
        {
            count = count + 1;
        }
    }

        if (count == digit / 2)
        {
            cout << n << " is a Palindrome.";
        }
        else
        {
            cout << n << " is not a Palindrome.";
        }
        
    }
    else
    {
        for (int i = 0, j = digit-1; i < (digit+1)/2; i++, j--)
    {
        if (temparr[i] == temparr[j])
        {
            count = count + 1;
        }
        
    }

        if (count == (digit + 1) / 2)
        {
            cout << n << " is a Palindrome.";
        }
        else
        {
            cout << n << " is not a Palindrome.";
        }
       
    }

    return 0;
}