/*
Calculating the Sum of a Series (1 + 1/2 + 1/3 + ... + 1/n)
Difficulty: Medium
Topics: Mathematical Computations
Description: Write a program to calculate the sum of the series 1 + 1/2 + 1/3 + ... + 1/n up to the nth term.
Example:
Input: n = 4
Output: 2.083333
Explanation: Sum of the series is 1 + 1/2 + 1/3 + 1/4 ≈ 2.083333.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    double sum = 0.0;

    for(int i=1; i<=n; i++){
        sum += 1.0/i;
    }

    cout<<"Sum of the series = " <<fixed <<sum<<endl;

    return 0;
}