#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
class Pair
{
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void display();
};

template <typename T1, typename T2>
void Pair<T1, T2>::display()
{
    cout << "First: " << first << ", Second: " << second << endl;
}

int main()
{
    int int1 = 10, int2 = 20;
    double double1 = 10.5, double2 = 7.8;
    string str1 = "apple", str2 = "orange";

    cout << "Max of " << int1 << " and " << int2 << " is " << getMax(int1, int2) << endl;
    cout << "Max of " << double1 << " and " << double2 << " is " << getMax(double1, double2) << endl;
    cout << "Max of " << str1 << " and " << str2 << " is " << getMax(str1, str2) << endl;

    Pair<int, double> intDoublePair(1, 2.5);
    Pair<string, int> stringIntPair("age", 30);
    Pair<string, string> stringPair("hello", "world");

    intDoublePair.display();
    stringIntPair.display();
    stringPair.display();

    return 0;
}
