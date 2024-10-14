// Write a program to print the transpose of the matrix entered by the user
#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    // Ask the user for the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    
    // Declare a 2D array (matrix)
    int matrix[n][m];
    
    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    // Print the transpose of the matrix
    cout << "Transpose of the matrix is:" << endl;
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
