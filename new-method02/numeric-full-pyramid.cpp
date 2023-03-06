#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int k = n; 
    for (int row = 0; row < n; row++) {
        int num = row + 1; 
        for (int col = 0; col < k; col++) {
            if (col < n - row - 1) cout << " "; 
            else if (col < n) cout << num++; 
            else if (col == n) {
                num -= 2; 
                cout << num--; 
            } else cout << num--;  
        }
        cout << endl; 
        k++; 
    }

    return 0; 
}