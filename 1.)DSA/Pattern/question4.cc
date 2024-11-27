#include <iostream>
using namespace std;

int main() {
    int n; // Declare the variable `n`
    cout << "Enter the size of the pattern: ";
    cin >> n; // Input the size of the pattern

    int num = 1; // Initialize the number to print
    for (int i = 0; i < n; i++) { // Outer loop for rows
        for (int j = 0; j < n; j++) { // Inner loop for columns
            cout << num << " "; // Print the number with a space
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
