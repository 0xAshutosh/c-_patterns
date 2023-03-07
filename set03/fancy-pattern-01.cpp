#include <iostream>
using namespace std; 

int main() {
    int n; 
    cin >> n; 

    int temp; 
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row + 1; col++) {
            temp = (n - 1) + row; 
            cout << temp; 
        }
        cout << endl; 
    }
    temp--; 
    for (int row = 0; row < n - 1; row++) {
        for (int col = 0; col < n - row - 1; col++) cout << temp; 
        temp--; 
        cout << endl; 
    }

    return 0; 
}