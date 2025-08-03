/*Generating Multiplication Tables
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to generate multiplication tables for a given number.
Example:
Input: number = 4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the table number you want to print : ";
    cin>>n;

    for(int i=0; i<=10 ; i++){
        cout<<n<<" X "<<i <<" = "<<n * i <<endl;
    }
    return 0;
}