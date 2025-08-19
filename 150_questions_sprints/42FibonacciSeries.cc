/*
Generating a Fibonacci Sequence Using Recursion
Difficulty: Medium
Topics: Recursion, Sequences
Description: Write a recursive program to generate the Fibonacci sequence up to a given number.
Example:
Input: number = 5
Output: 0, 1, 1, 2, 3
Explanation: The Fibonacci sequence up to 5 is generated.
*/
#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int any;
    cout<<"Enter a number to check it's fibonacci series : ";
    cin>>any;

   for(int i=0; i<any; i++){
    cout<<fibonacci(i);
   }
   return 0;


    
}