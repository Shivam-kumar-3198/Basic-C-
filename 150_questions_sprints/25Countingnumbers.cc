/*
Finding the Number of Digits in a Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to count the number of digits in a given number.
Example:
Input: number = 12345
Output: 5
Explanation: The number 12345 has 5 digits.
*/
#include<iostream>
using namespace std;
int main() {
    int number;
    int count = 0;

    cout << "Enter a number: ";
    cin >> number;

    // If the number is 0, it has 1 digit
    if (number == 0) {
        count = 1;
    } else {
        // Keep dividing by 10 until the number becomes 0
        while (number != 0) {
            number = number / 10;
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}