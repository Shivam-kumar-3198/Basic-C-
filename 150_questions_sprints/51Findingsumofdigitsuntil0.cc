/*
Finding the Sum of Digits of a Number Until Zero
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to repeatedly sum the digits of a number until the result is zero.
Example:
Input: number = 123
Output: 6
Explanation: Sum of digits is 1 + 2 + 3 = 6; sum of digits of 6 is 6 (which is a single digit).
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
     
    while(number >= 10){
        int sum = 0;

        while(number>0){
            sum+= number %10;
            number /= 10;
        }
        number = sum;
    }

    cout<<"Result : "<<number<<endl;
    return 0;
}