
/*
Printing Prime Numbers Less Than a Given Number
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to print all prime numbers less than a given number.
Example:
Input: number = 20
Output: 2, 3, 5, 7, 11, 13, 17, 19
Explanation: The prime numbers less than 20 are 2, 3, 5, 7, 11, 13, 17, and 19.
*/

#include <iostream>
using namespace std;
//here is the last work
int main() {
    int range;
    cout << "Enter the range up to which you want prime numbers: ";
    cin >> range;

    for (int i = 2; i <= range; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) { 
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " is a Prime number" << endl;
        }
    }

    return 0;
}
