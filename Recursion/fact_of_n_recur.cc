// Write a program to print factorial of n using recursion
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    cout<<"Enter factorial number :";
    cin>>n;
    cout<<fact(n);
}