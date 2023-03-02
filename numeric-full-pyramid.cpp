#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    for (int row = 0; row < n; row++) {
        // printing spaces; 
        for (int space = 0; space < n - row - 1; space++) cout << " "; 
        // printing numbers; 
        for (int col = 0; col < row + 1; col++) cout << row + 1 + col; 
        // printing numbers in reverse; 
        for (int col = 0; col < row; col++) cout << 2 * row - col; 

        cout << endl; 
    } 

    return 0; 
}