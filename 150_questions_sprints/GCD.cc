/*
Finding the Greatest Common Divisor (GCD)
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find the GCD of two numbers.
Example:
Input: a = 48, b = 18
Output: 6
Explanation: The GCD of 48 and 18 is 6.
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
int main(){
    int a,b;
    
    
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;

}