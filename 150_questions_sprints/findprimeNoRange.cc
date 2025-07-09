/*Finding Prime Numbers in a Range
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find all prime numbers within a given range.
Example:
Input: range = [10, 30]
Output: [11, 13, 17, 19, 23, 29]
Explanation: Prime numbers between 10 and 30 are 11, 13, 17, 19, 23, and 29.
*/
#include<iostream>
using namespace std;
int main(){
    int i,j;
    cout<<"Enter the starting range of number to show thier prime numbers : ";
    cin>>i<<endl;
    cout<<"Enter the ending range of number : ";
    cin>>j;

    for(int a=0; a>=i && a<=j; a++){
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
}