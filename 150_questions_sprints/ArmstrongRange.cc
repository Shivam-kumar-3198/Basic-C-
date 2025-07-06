/*
Checking for Armstrong Numbers in a Range
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find all Armstrong numbers within a given range.
Example:
Input: range = [1, 500]
Output: [1, 153, 370, 371, 407]
Explanation: Armstrong numbers between 1 and 500 are 1, 153, 370, 371, and 407.
*/
#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    
    // Count digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to the power of number of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int lower, upper;
    
    cout << "Enter lower bound of the range: ";
    cin >> lower;
    cout << "Enter upper bound of the range: ";
    cin >> upper;

    cout << "Armstrong numbers between " << lower << " and " << upper << " are:\n";
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
// ✅ What’s an Armstrong number?
// A number is an Armstrong number if the sum of its digits each raised to the power of the number of digits equals the number itself.