/*
Checking for Armstrong Numbers in a Range
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find all Armstrong numbers within a given range.
Example:
Input: range = [1, 500]
Output: [1, 153, 370, 371, 407]
Explanation: Armstrong numbers between 1 and 500 are 1, 153, 370, 371, and 407.  */
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    for (int num = 100; num <= 999; num++) {
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}
