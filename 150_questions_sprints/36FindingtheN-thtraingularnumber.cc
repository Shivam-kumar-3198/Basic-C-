/*
Finding the N-th Triangular Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to find the N-th triangular number.
Example:
Input: N = 4
Output: 10
Explanation: The 4th triangular number is 10 (sum of the first 4 natural numbers).
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check it's triangular sum : ";
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n; i++){
        sum += i;
    }

    cout<<sum;
}