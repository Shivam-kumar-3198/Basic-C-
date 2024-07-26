// Write a program to print the products of a given digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your Number :";
    cin>>n;
    
    int count = 1;
    while(n!=0){
       int digit = n%10;
       count *= digit;
       n=n/10;
    }
    cout<<count;
}