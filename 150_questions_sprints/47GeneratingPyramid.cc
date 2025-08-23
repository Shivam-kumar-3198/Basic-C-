/*
Generating a Number Pyramid
Difficulty: Medium
Topics: Patterns, Basic Programming
Description: Write a program to generate a pyramid of numbers (e.g., 1, 12, 123, etc.).
Example:
Input: rows = 4
Output:
1  
12  
123  
1234  
*/
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter rows : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<= i; j++){
              cout<<j;
        }
        cout<<endl;
    }
    return 0;
}