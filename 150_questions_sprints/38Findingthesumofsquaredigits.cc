/*
Finding the Sum of Squares of Digits
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to find the sum of the squares of the digits of a number.
Example:
Input: number = 123
Output: 14
Explanation: The sum of the squares of digits is 1^2 + 2^2 + 3^2 = 14.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int sum = 0;

    while(n>0){
        int digit = n%10;
        sum += digit * digit;
        n=n/10;
    }

    cout<<"Sum of squares of digits = "<<sum;
    return 0;
}

/*
while (laddu > 0) {
    khaao laddu;
    laddu--;
}

*/