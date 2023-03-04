#include <iostream>
using namespace std; 

int main() {
    int n;
    cin >> n; 

    for (int row = 0; row < n; row++) {
        int k = 0, l = 2 * row;  
        for (int col = 0; col < 2 * n - 2; col++) {
            if (col < n - row  - 1) cout << " "; 
            else if (k < 2 * row + 1) {
                if (k < row + 1) cout << row + col + 1; 
                else cout << l--;  
            } else cout << " "; 
        }
        cout << endl; 
    }

    return 0; 
}