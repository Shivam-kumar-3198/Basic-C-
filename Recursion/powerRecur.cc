#include <iostream>
#include <cmath> // Use <cmath> for C++ programs

using namespace std;

// Function to calculate factorial
int fact(int n) {
    if (n == 0 || n == 1) 
        return 1;
    return n * fact(n - 1);
}

int main() {
    int choice;
    cout << "Choose an operation:\n";
    cout << "1. Calculate Power\n";
    cout << "2. Calculate Factorial\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int base, power;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter power: ";
        cin >> power;
        cout << "Result: " << pow(base, power) << endl;
    } else if (choice == 2) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << "Factorial: " << fact(num) << endl;
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
