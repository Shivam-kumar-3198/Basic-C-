/*
Checking for Perfect Squares
Difficulty: Easy
Topics: Mathematical Computations
Description: Write a program to determine if a number is a perfect square.
Example:
Input: number = 16
Output: True
Explanation: 16 is a perfect square (4^2 = 16).
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check it is perfect square or not : ";
    cin>>n;

    bool isPerfectSquare = false;

    for(int i=1; i*i <= n; i++){
        if(i*i == n){
            isPerfectSquare = true;
            break;
        }
    }

    if(isPerfectSquare){
        cout<<"It is a perfect square";
    }
    else{
        cout<<"It is not a perfect square";
    }
}