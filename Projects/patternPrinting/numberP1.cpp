#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter no of lines: ";
    cin >> n;
    int j = 1;
    for(int i = 1;  i <= n; i++){
        for(int k = 1; k <= i; j++,k++){
            cout << j <<" ";
        }
        cout << endl;
    }

    return 0;
}