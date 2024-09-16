#include<iostream>
using namespace std;
int main(){
    int fact(int n)
        if(n==0 || n==1) return 1;
        return n*fact(n-1);  
}
int main(){
    int a;
    cout<<"Enter base  : ";
    cin>>a;
    int b;
    cout<<"Enter power : ";
    cin>>b;
    cout<<pow(a,b);
}
