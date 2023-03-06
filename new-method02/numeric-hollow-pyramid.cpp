#include <iostream>
using namespace std; 

int main() {
    int n;
    cin >> n; 

    int k = n, j = 1;  
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < k; col++) { 
            if (row == n - 1 && col % 2 == 0) cout << j++; 
            else if (col < n - row - 1) cout << " "; 
            else if (col == n - row - 1) cout << 1; 
            else if (col == k - 1) cout << row + 1;  
            else cout << " ";  
        }
        cout << endl; 
        k++;
    } 

    return 0; 
}