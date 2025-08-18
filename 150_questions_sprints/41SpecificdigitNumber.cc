/*
Finding the Count of Specific Digits in a Number
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to count the occurrences of a specific digit in a number.
Example:
Input: number = 122333, digit = 3
Output: 3
Explanation: The digit 3 occurs 3 times in the number 122333.
*/
#include<iostream>
using namespace std;




int main(){
    int n,digit,count=0;
    cout<<"Enter a number to check it's repetitive one : ";
    cin>>n;

    cout<<"Enter the digit to Count : ";
    cin>>digit;

    int temp=n;
    while(temp>0){
        int last = temp%10;
        if(last == digit){
            count++;
        }
        temp = temp/10;
    }
    
    cout<<"The digit "<<digit<<" Occurs "<<count<< " times in "<<n<< ". "<<endl;
     // 5365 /10 = 536
     // 536 / 10 = 53
     // 53  / 10 = 5
     // 5   / 10 = 0
}