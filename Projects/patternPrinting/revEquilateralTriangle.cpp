#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;


    for(int i = 1; i <= n; i++){
        for(int k = 1; k < i; k++){
            cout << " ";
        }

        for(int j = n; j >= i;  j--){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}