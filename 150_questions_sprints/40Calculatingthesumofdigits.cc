/*
Calculating the Sum of Digits of a Number Until Single Digit
Difficulty: Medium
Topics: Mathematical Computations
Description: Write a program to keep summing the digits of a number until a single digit is obtained.
Example:
Input: number = 9875
Output: 2
Explanation: The sum of digits is 9 + 8 + 7 + 5 = 29, and then 2 + 9 = 11, and finally 1 + 1 = 2.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans;  // declare ans

    if (n == 0) {
        ans = 0;  // special case
    }
    else if (n % 9 == 0)
    {
        ans = 9;
    }
    else
    {
        ans = n % 9;
    }

    cout << "Sum of digits of number " << n << " up to single digit is " << ans;

    return 0;
}
