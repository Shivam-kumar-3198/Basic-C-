/*
Generating a Square Matrix of a Given Size
Difficulty: Medium
Topics: Arrays, Matrix Operations
Description: Write a program to generate a square matrix of a given size and fill it with sequential numbers.
Example:
Input: size = 3
Output:
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number to print the matrix : ";
cin>>n;

for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<i;
    }
}
return 0;
}