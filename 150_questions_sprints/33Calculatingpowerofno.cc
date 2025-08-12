/*
Calculating the Power of a Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to calculate the power of a number.
Example:
Input: base = 2, exponent = 3
Output: 8
Explanation: 2 raised to the power of 3 is 8.
*/
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the number: ";
    cin >> a;

    cout << "Enter the power of that number: ";
    cin >> b;

    long long result = 1; // To store the result

    // Multiply 'a' by itself 'b' times
    for (int i = 0; i < b; i++) {
        result *= a;
    }

    cout << a << "^" << b << " = " << result << endl;

    return 0;
}
