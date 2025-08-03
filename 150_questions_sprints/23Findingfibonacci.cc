/*
Finding the Fibonacci Number at a Specific Position
Difficulty: Easy
Topics: Basic Programming, Sequences
Description: Write a program to find the Fibonacci number at a specific position.
Example:
Input: position = 5
Output: 5
Explanation: The Fibonacci number at position 5 is 5 (sequence: 0, 1, 1, 2, 3, 5).
*/
#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    int a = 0;

    int b = 1;

    int c;

    if(n==0){
        cout<<a<<endl;
        return 0;
    }
    cout<<0<<endl;

    for (int i = 2; i <= n; i++)
    {

        c = a + b;
        a = b;
        b = c;

        cout << b<<endl;
    }
    // cout << b<<endl;
}