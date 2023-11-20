#include <iostream>
#include <cmath>
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

int main() {
    int n, reverse {0};
    
    cout << "Enter a number to reverse. : ";
    cin >> n;
    int digit = digits(n);

    int temparr[10];
    int temp = n;
    for (int i = digit-1; i >= 0; i--)
    {

        temparr[i] = temp % 10;
        temp /= 10;
    }
    
    for(int i = digit-1; i>=0; i--){
        reverse = reverse + temparr[i]*pow(10,(i));
    
    }

    cout << "The reversed no. is : " << reverse;

    return 0;
}