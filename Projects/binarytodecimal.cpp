#include <iostream>
#include <cmath>

int numberofdig(int a)
{
    int temp = a;
    int count = 1;
    while ((temp) != 0)
    {
        count++;
        temp = (temp / 10);
    }

    return count;
}

// int decidig(double n){
//     double temp = n;
//     int count =0;
//     while(temp%10.0 != 0.0){
//         count++;
//         temp =temp*10;
//     }
//     return count;
// }

int main()
{
    double a{-1};

    while (a < 0)
    {
        std::cout << "Please Enter a positive binary number (base 2)!" << std::endl;
        std::cin >> a;
    }

    int ain = (int)a;
    double decpart = (double)a - (double)ain;
    int totaldig = numberofdig(a);
    int intdigit = numberofdig(ain);

    int temp = ain;
    double sum = 0;

// Change the loop condition to exclude the extra increment
for (int i{0}; i < intdigit; i++)
{
    sum = sum + (temp % 10) * (pow(2, i));
    temp = (temp / 10);
}

    // for (int i{0}; i <= intdigit; i++)
    // {

    //     sum = sum + (temp % 10) * (pow(2, i));
    //     temp = (temp / 10);
    // }

    // std::cout << decidig(decpart);

    int temp2 = (int)(decpart * 1000000000.0);
    for (int i{9}; i > 0; i--)
    {
        sum = sum + (double)(temp2 % (10) * (pow(2, -i)));
        temp2 = (temp2 / 10);
    }

    std::cout << sum;

    return 0;
}