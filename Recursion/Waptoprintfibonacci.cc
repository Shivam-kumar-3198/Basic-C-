// Write a program to print fibonacci series
#include<iostream>
using namespace std;
int fibo(int n ){
       if ( n==1 || n==2) return 1;
       return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fibo(n);
}