#include <iostream>
using namespace std;

int fact(int n)
{
    int ans{1};
    for (size_t i{1}; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int comb(int a, int b)
{
    int ans{0};
    ans = (fact(a) / ((fact(b) * fact(a - b))));
    return ans;
}

int main()
{
    int n;
    cout << "Enter an input: ";
    cin >> n;
    cout << endl;

    for (int i{0}; i < n; i++)
    {
        for (int k{n}; k >= (i); k--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << comb(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}