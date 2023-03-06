#include <iostream>
using namespace std; 

int main() {
    int n;
    cin >> n; 

    int k = 1; 
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < 2 * row + 1; col++) {
            if (col % 2 == 0) cout << k++; 
            else cout << "*"; 
        }
        cout << endl; 
    }
    
    for (int row = 0; row < n - 1; row++) {
        for (int col = 0; col < 2 * row + 1; col++) {
            if (col % 2 == 0) cout << k; 
            else cout << "*"; 
        }
    }

    return 0; 
}