#include <iostream>
using namespace std;

template <typename T>
class X {
    public:
    struct Y{
        T obj;
    };
};

int main() {
   X<int> obj2;
    return 0;
}