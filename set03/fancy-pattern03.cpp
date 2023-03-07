#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < row + 1; col++) {
            if (col == 0) cout << "*"; 
            else cout << col;  
        }

        for (int col = 0; col < row; col++) {
            if (col == row - 1) cout << "*"; 
            else cout << row - col - 1;   
        }

        cout << endl; 
    }

    for (int row = 0; row < (n - 1); row++) {
        for (int col = 0; col < n - row; col++) {
            if (col == 0) cout << "*"; 
        }
    }

    return 0; 
}