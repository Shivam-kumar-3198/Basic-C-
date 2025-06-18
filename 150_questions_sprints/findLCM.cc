/*
Finding the Least Common Multiple (LCM)
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find the LCM of two numbers.
Example:
Input: a = 12, b = 15
Output: 60
Explanation: The LCM of 12 and 15 is 60.
*/

#include<iostream>
using namespace std;

int gcd(int a, int b){
    
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
   int a,b;
   cin>>a>>b;
   cout << "LCM: " << lcm(a, b) << endl;
}