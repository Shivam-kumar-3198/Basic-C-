/*
Identifying Palindromes
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to check if a string or number is a palindrome.
Example:
Input: string = "radar"
Output: Palindrome
Explanation: "radar" reads the same backward as forward.
*/
#include<iostream>
using namespace std;

int main(){
    int num, reversed = 0, remainder, original;
    cout<<"Enter a number : "<<endl;
    cin>>num;

    original = num;

    while (num>0)
    {
        remainder= num%10;
        reversed = reversed *10 + remainder;
        num=num/10;
    }
    if(original==reversed){
        cout<<original<<" is the pallindrome number."<<endl;

    }
    else{
        cout<<original<<" is not a Pallindrome number." <<endl;
    }
    return 0;
}