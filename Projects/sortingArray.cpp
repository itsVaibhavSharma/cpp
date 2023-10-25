#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];

    cout << "Enter " << n << " inputs:" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // code for comparing

    for (size_t j = 0; j < (n); j++)
    {
        for (size_t i = (j + 1); i < n; i++)
        {
            if ((a[j] > a[i]))
            {

                a[j] = a[i] + a[j];
                a[i] = a[j] - a[i];
                a[j] = a[j] - a[i];
            }
        }
    }

    cout << "Sorted array: {";
    for (size_t i = 0; i < (n - 1); i++)
    {
        cout << a[i] << ",";
    }
    cout << a[n - 1] << "}" << endl;

    return 0;
}