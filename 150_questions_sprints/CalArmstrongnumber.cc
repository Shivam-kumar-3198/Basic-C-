/*
Calculating Armstrong Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to check if a number is an Armstrong number.
Example:
Input: number = 153
Output: Armstrong Number
Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int num_digits = 0;
    int temp = n;

    // Step 1: Count the number of digits
    while (temp != 0) {
        num_digits++;
        temp /= 10;
    }

    // Step 2: Calculate the Armstrong sum
    int sum = 0;
    temp = n;  // Reset temp to original n

    while (temp != 0) {
        int digit = temp % 10;
        sum += round(pow(digit, num_digits));  // round handles floating point errors
        temp /= 10;
    }

    // Step 3: Compare sum with original number
    if (sum == original) {
        cout << original << " is an Armstrong Number" << endl;
    } else {
        cout << original << " is NOT an Armstrong Number" << endl;
    }

    return 0;
}

