/*
Generating the Fibonacci Series
Difficulty: Easy
Topics: Basic Programming, Sequences
Description: Write a program to generate the Fibonacci series up to a given number.
Example:
Input: limit = 10
Output: [0, 1, 1, 2, 3, 5, 8]
Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8].
*/
//  #include<iostream>
//  using namespace std;

//  int main(){
//     int n;
//     cout<<"Enter a number n to print fibonacci sreies : "<<endl;
//     cin>>n;

//     int a=0, b=1;

//     for(int i=0;i<n;i++){
//         cout<<a<<" ";
//         int next = a+b;
//         a=b;
//         b=next;
//     }
//     return 0;
//  }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the term you want to print number of times the fiboonaci series : "<<endl;
    cin>>n;

    int a=0, b=1;

    for(int i=0; i<=n; i++){
        cout<<a << " ";  
        int next = a+b;
        a=b;
        b=next;
    }
    return 0;
}